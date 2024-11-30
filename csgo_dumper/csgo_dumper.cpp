#include <Windows.h>
#include <cstdio>
#include <cwchar>
#include <cstdint>
#include <iostream>
#include <Psapi.h>

#include "Memory.hpp"
#include "CSchemaSystem.hpp"
#include "ProcessMemory.hpp"

#define DUMP_FOLDER_NAME "Output"


int main() {

    HWND GameWindow = FindWindowA(nullptr, "Counter-Strike 2");
    if (!GameWindow) {
        std::cerr << "Error: Game window not found.\n";
        return 1;
    }

    DWORD ProcessID = 0;
    GetWindowThreadProcessId(GameWindow, &ProcessID);
    if (!ProcessID) {
        std::cerr << "Error: Unable to get the process ID.\n";
        return 1;
    }

    ProcessMemory mem(OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessID));

    uintptr_t SchemaModule[2] = { 0, 0 };
    if (!mem.GetModuleInfo("schemasystem.dll", &SchemaModule[0], &SchemaModule[1])) {
        std::cerr << "Error: 'schemasystem.dll' module not found.\n";
        return 1;
    }
    printf("Found 'schemasystem.dll' module. Base address: 0x%llx, Size: 0x%llx\n", SchemaModule[0], SchemaModule[1]);

    uint8_t* SchemaSystemBytes = new uint8_t[SchemaModule[1]];
    if (!mem.Read(SchemaModule[0], SchemaSystemBytes, SchemaModule[1])) {
        std::cerr << "Error: Unable to read the module bytes.\n";
        return 1;
    }

    // Locate the virtual function table (vtable) using pattern scanning
    // Xref: CSchemaSystem::`vftable'
    uintptr_t SignatureAddress = Memory::PatternScanner::FindSignature(
        reinterpret_cast<uintptr_t>(SchemaSystemBytes),
        SchemaModule[1],
        "48 89 05 ? ? ? ? 4C 8D 0D ? ? ? ? 0F B6 45 E8 4C 8D 45 E0 33 F6"
    );

    if (!SignatureAddress) {
        std::cerr << "Error: Signature not found in the module.\n";
        return 1;
    }

    // Calculate the vtable offset
    uintptr_t vftable_offset = (SignatureAddress + static_cast<uintptr_t>(*reinterpret_cast<int*>(SignatureAddress + 0x3)) + 0x7) - reinterpret_cast<uintptr_t>(SchemaSystemBytes);
    printf("Vftable offset located at: 0x%llx\n", vftable_offset);

    uintptr_t SchemaSystemInterface = SchemaModule[0] + vftable_offset;
    SDK::CSchemaSystem SchemaSystem = {};

    if (!mem.Read(SchemaSystemInterface, &SchemaSystem)) {
        std::cerr << "Error: Unable to read the CSchemaSystem structure.\n";
        return 1;
    }

    // Print the offsets of the CSchemaSystem structure members
    printf("Offsets for CSchemaSystem members:\n");
    printf("  m_nScopeSize: 0x%llx\n", offsetof(SDK::CSchemaSystem, m_nScopeSize));
    printf("  m_pScopeArray: 0x%llx\n", offsetof(SDK::CSchemaSystem, m_pScopeArray));

    // Read the pointer to the ScopeArray
    uintptr_t SchemaSystemScopeArrayPtr = 0;
    if (!mem.Read(SchemaSystemInterface + offsetof(SDK::CSchemaSystem, m_pScopeArray), &SchemaSystemScopeArrayPtr)) {
        std::cerr << "Error: Unable to read the m_pScopeArray pointer.\n";
        return 1;
    }
    printf("SchemaSystem::m_pScopeArray points to: 0x%llx\n", SchemaSystemScopeArrayPtr);

    // Read the contents of the ScopeArray
    void** ScopeArray = new void* [SchemaSystem.m_nScopeSize];
    if (!mem.Read(SchemaSystemScopeArrayPtr, ScopeArray, SchemaSystem.m_nScopeSize * sizeof(void*))) {
        std::cerr << "Error: Unable to read the contents of the ScopeArray.\n";
        return 1;
    }
    printf("Read SchemaSystem::ScopeArray. Total scopes: %llu.\n", SchemaSystem.m_nScopeSize);
    CreateDirectoryA(DUMP_FOLDER_NAME, 0);

    // Dumping Schema Classes
    for (uint64_t s = 0; s < SchemaSystem.m_nScopeSize; s++) {

        SDK::CSchemaSystemTypeScope SchemaScope = { 0 };
        if (!mem.Read(ScopeArray[s], &SchemaScope) || !SchemaScope.m_pDeclaredClasses)
            continue;
          
        char DumpFileName[MAX_PATH] = { 0 };
        printf("\nDumping Schema: %s, Declared classes: %d \n", SchemaScope.m_szName, SchemaScope.m_nNumDeclaredClasses);
        sprintf_s(DumpFileName, sizeof(DumpFileName), DUMP_FOLDER_NAME"\\%s.hpp", SchemaScope.m_szName);

        FILE* _File = NULL;
        errno_t err = fopen_s(&_File, DumpFileName, "w");

        if (err != 0 || !_File) {
            continue;
        }

        fprintf(_File, "// Schema offset: 0x%llx \n", ScopeArray[s]);
        fprintf(_File, "// Schema name: %s \n", SchemaScope.m_szName);
        fprintf(_File, "// Schema declared class: %d \n\n", SchemaScope.m_nNumDeclaredClasses);


        SDK::CSchemaDeclaredClassEntry* DeclaredClassEntries = new SDK::CSchemaDeclaredClassEntry[SchemaScope.m_nNumDeclaredClasses + 1];
        if (!mem.Read(SchemaScope.m_pDeclaredClasses, DeclaredClassEntries, (SchemaScope.m_nNumDeclaredClasses + 1) * sizeof(SDK::CSchemaDeclaredClassEntry))) {
            printf("[ ERROR ] Failed to read declared class entries.\n");
            continue;
        }

        // Iterate through all declared classes
        for (uint16_t c = 0; c < SchemaScope.m_nNumDeclaredClasses; c++) {

            SDK::CSchemaDeclaredClass DeclaredClass;
            if (!mem.Read(DeclaredClassEntries[c].m_pDeclaredClass, &DeclaredClass))
                continue;

            SDK::CSchemaClass Class = { 0 };
            if (!mem.Read(DeclaredClass.m_Class, &Class))
                continue;

            char ClassName[128] = { 0 };
            if (!mem.Read((void*)(Class.m_szName), ClassName, sizeof(ClassName)))
                continue;

            printf("\nDumping Class: %d=%s, offset = 0x%llx, Fields: %d \n", c, ClassName, reinterpret_cast<uintptr_t>(DeclaredClassEntries[c].m_pDeclaredClass), Class.m_nNumFields);
           
            uintptr_t _ClassFieldsPtr = reinterpret_cast<uintptr_t>(Class.m_pFields);
            fprintf(_File, "// Offset: 0x%llx \n", _ClassFieldsPtr);
            fprintf(_File, "// N. Class: %d \n", c);
            fprintf(_File, "// Fields: %d \n", Class.m_nNumFields);
            fprintf(_File, "namespace %s\n{\n", ClassName);

            // Loop through each field in the class
            for (uint16_t f = 0; f < Class.m_nNumFields; f++) {

                SDK::CSchemaField Field;
                if (!mem.Read(_ClassFieldsPtr + sizeof(SDK::CSchemaField) * f, &Field))
                    continue;

                char fieldName[128];
                if (!mem.ReadString(reinterpret_cast<uintptr_t>(Field.m_szName), fieldName, sizeof(fieldName)))
                    continue;

                SDK::CSchemaFieldType FieldType;
                char typeName[128];

                if (mem.Read(Field.m_pSchemaFieldType, &FieldType)) {
                    if (!mem.ReadString(reinterpret_cast<uintptr_t>(FieldType.m_szTypeName), typeName, sizeof(typeName))) {
                        continue;
                    }
                }
                
                //printf("[ + ] %s->%s: Offset = 0x%X; Type = %s; \n", ClassName, fieldName, Field.offset, typeName);
                fprintf(_File, "\tconstexpr uint32_t %s = 0x%X;  // %s \n", fieldName, Field.m_nOffset, typeName);
            }

            fprintf(_File, "}\n\n");
        }

        printf("\n");
        fclose(_File);
    }

    return 0;
}
