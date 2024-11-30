// Schema offset: 0x26f7df808c0 
// Schema name: schemasystem.dll 
// Schema declared class: 6 

// Offset: 0x7ffe3af342a0 
// N. Class: 0 
// Fields: 22 
namespace CSchemaSystemInternalRegistration
{
	constexpr uint32_t m_Vector2D = 0x0;  // Vector2D 
	constexpr uint32_t m_Vector = 0x8;  // Vector 
	constexpr uint32_t m_VectorAligned = 0x20;  // VectorAligned 
	constexpr uint32_t m_Quaternion = 0x30;  // Quaternion 
	constexpr uint32_t m_QAngle = 0x40;  // QAngle 
	constexpr uint32_t m_RotationVector = 0x4C;  // RotationVector 
	constexpr uint32_t m_RadianEuler = 0x58;  // RadianEuler 
	constexpr uint32_t m_DegreeEuler = 0x64;  // DegreeEuler 
	constexpr uint32_t m_QuaternionStorage = 0x70;  // QuaternionStorage 
	constexpr uint32_t m_matrix3x4_t = 0x80;  // matrix3x4_t 
	constexpr uint32_t m_matrix3x4a_t = 0xB0;  // matrix3x4a_t 
	constexpr uint32_t m_Color = 0xE0;  // Color 
	constexpr uint32_t m_Vector4D = 0xE4;  // Vector4D 
	constexpr uint32_t m_CTransform = 0x100;  // CTransform 
	constexpr uint32_t m_pKeyValues = 0x120;  // KeyValues* 
	constexpr uint32_t m_CUtlBinaryBlock = 0x128;  // CUtlBinaryBlock 
	constexpr uint32_t m_CUtlString = 0x140;  // CUtlString 
	constexpr uint32_t m_CUtlSymbol = 0x148;  // CUtlSymbol 
	constexpr uint32_t m_stringToken = 0x14C;  // CUtlStringToken 
	constexpr uint32_t m_stringTokenWithStorage = 0x150;  // CUtlStringTokenWithStorage 
	constexpr uint32_t m_ResourceTypes = 0x168;  // CResourceArray< CResourcePointer< CResourceString > > 
	constexpr uint32_t m_KV3 = 0x170;  // KeyValues3 
}

// Offset: 0x0 
// N. Class: 1 
// Fields: 0 
namespace InfoForResourceTypeCResourceManifestInternal
{
}

// Offset: 0x7ffe3af33120 
// N. Class: 2 
// Fields: 1 
namespace ResourceId_t
{
	constexpr uint32_t m_Value = 0x0;  // uint64 
}

// Offset: 0x7ffe3af33260 
// N. Class: 3 
// Fields: 2 
namespace CExampleSchemaVData_Monomorphic
{
	constexpr uint32_t m_nExample1 = 0x0;  // int32 
	constexpr uint32_t m_nExample2 = 0x4;  // int32 
}

// Offset: 0x7ffe3af33318 
// N. Class: 4 
// Fields: 1 
namespace CExampleSchemaVData_PolymorphicBase
{
	constexpr uint32_t m_nBase = 0x8;  // int32 
}

// Offset: 0x7ffe3af333b8 
// N. Class: 5 
// Fields: 1 
namespace CExampleSchemaVData_PolymorphicDerivedA
{
	constexpr uint32_t m_nDerivedA = 0x10;  // int32 
}

