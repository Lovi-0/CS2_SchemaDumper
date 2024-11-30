#pragma once

#ifndef S2_PAD
#define S2_PAD_INSERT(x, y) x ## y
#define S2_PAD_DEFINE(x, y) S2_PAD_INSERT(x, y)
#define S2_PAD(size) char S2_PAD_DEFINE(padding_, __LINE__)[size]
#endif

namespace SDK {

    class CSchemaFieldType {
    public:
        void* vfptr;                                // 0x0
        char* m_szTypeName;                         // 0x8
    };

    class CSchemaField {
    public:
        const char* m_szName;                       // 0x0
        CSchemaFieldType* m_pSchemaFieldType;       // 0x8
        uint32_t m_nOffset;                         // 0x10
        uint32_t m_nMetadata_count;                 // 0x14
        void* metadata;                             // 0x18
    };

    class CSchemaClass {
    public:
        void* vfptr;                      // 0x0
        const char* m_szName;             // 0x8
        const char* m_szModuleName;       // 0x10
        uint32_t m_nSize;                 // 0x18
        uint16_t m_nNumFields;            // 0x1C
        S2_PAD(0x2);                      // 0x1E
        uint16_t m_nStaticSize;           // 0x20
        uint16_t m_nMetadataSize;         // 0x22
        S2_PAD(0x4);                      // 0x24
        CSchemaField* m_pFields;          // 0x28
    };

    class CSchemaDeclaredClass {
    public:
        void* vfptr;                      // 0x0
        const char* m_szName;             // 0x8
        const char* m_szModuleName;       // 0x10
        uint16_t m_szUnknownStr;          // 0x18
        CSchemaClass* m_Class;            // 0x20
    };

    class CSchemaDeclaredClassEntry {
    public:
        uint64_t m_nHash[2];                    // 0x0
        CSchemaDeclaredClass* m_pDeclaredClass; // 0x10
    };

    class CSchemaSystemTypeScope {
    public:
        void* vfptr;                            // 0x0
        char m_szName[256];                     // 0x8
        S2_PAD(0x338);                          // 0x108
        CSchemaDeclaredClassEntry* m_pDeclaredClasses; // 0x440
        S2_PAD(0xE);                            // 0x448
        uint16_t m_nNumDeclaredClasses;         // 0x450
    };

    class CSchemaSystem {
    public:
        S2_PAD(0x188);                          // 0x0
        uint64_t m_nScopeSize;                  // 0x188
        CSchemaSystemTypeScope** m_pScopeArray; // Offset: 0x190
    };
}
