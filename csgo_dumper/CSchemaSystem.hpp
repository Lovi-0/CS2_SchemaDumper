#pragma once

#ifndef S2_PAD
#define S2_PAD_INSERT(x, y) x ## y
#define S2_PAD_DEFINE(x, y) S2_PAD_INSERT(x, y)
#define S2_PAD(size) char S2_PAD_DEFINE(padding_, __LINE__)[size]
#endif

namespace SDK {

    class CSchemaFieldType{
    public:
        void* vfptr;
        char* typeName;
    }; 

    class CSchemaField{
    public:
        const char* name;
        CSchemaFieldType* instanceSchemaFieldType;
        uint32_t offset;
        uint32_t metadata_count;
        void* metadata;
    };

    class CSchemaClass {
    public:
        void* vfptr;                      // Offset: 0x0
        const char* m_szName;             // Offset: 0x8
        const char* m_szModuleName;       // Offset: 0x10
        uint32_t m_nSize;                 // Offset: 0x18
        uint16_t m_nNumFields;            // Offset: 0x1C
        S2_PAD(0x2);                      // Offset: 0x1E (Padding)
        uint16_t m_nStaticSize;           // Offset: 0x20
        uint16_t m_nMetadataSize;         // Offset: 0x22
        S2_PAD(0x4);                      // Offset: 0x24 (Padding)
        CSchemaField* m_pFields;          // Offset: 0x28
    };

    class CSchemaDeclaredClass {
    public:
        void* vfptr;                      // Offset: 0x0
        const char* m_szName;             // Offset: 0x8
        const char* m_szModuleName;       // Offset: 0x10
        uint16_t m_szUnknownStr;          // Offset: 0x18
        CSchemaClass* m_Class;            // Offset: 0x20
    };

    class CSchemaDeclaredClassEntry {
    public:
        uint64_t m_nHash[2];              // Offset: 0x0
        CSchemaDeclaredClass* m_pDeclaredClass; // Offset: 0x10
    };

    class CSchemaSystemTypeScope {
    public:
        void* vfptr;                            // Offset: 0x0
        char m_szName[256];                     // Offset: 0x8
        S2_PAD(0x338);                          // Offset: 0x108 (Padding)
        CSchemaDeclaredClassEntry* m_pDeclaredClasses; // Offset: 0x440
        S2_PAD(0xE);                            // Offset: 0x448 (Padding)
        uint16_t m_nNumDeclaredClasses;         // Offset: 0x450
    };

    class CSchemaSystem {
    public:
        S2_PAD(0x188);                          // Offset: 0x0 (Padding)
        uint64_t m_nScopeSize;                  // Offset: 0x188
        CSchemaSystemTypeScope** m_pScopeArray; // Offset: 0x190
    };
}
