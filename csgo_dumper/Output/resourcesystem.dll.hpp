namespace TestResource_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
}

namespace InfoForResourceTypeTestResource_t
{
}

namespace InfoForResourceTypeProceduralTestResource_t
{
}

namespace InfoForResourceTypeManifestTestResource_t
{
}

namespace ManifestTestResource_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_child = 0x8;  // CStrongHandle< InfoForResourceTypeManifestTestResource_t > 
}

namespace InfoForResourceTypeCVDataResource
{
}

namespace InfoForResourceTypeIPulseGraphDef
{
}

namespace InfoForResourceTypeCTypeScriptResource
{
}

namespace InfoForResourceTypeCJavaScriptResource
{
}

namespace InfoForResourceTypeIParticleSystemDefinition
{
}

namespace InfoForResourceTypeIParticleSnapshot
{
}

namespace InfoForResourceTypeCAnimData
{
}

namespace InfoForResourceTypeCAnimationGroup
{
}

namespace InfoForResourceTypeCSequenceGroupData
{
}

namespace InfoForResourceTypeIMaterial2
{
}

namespace InfoForResourceTypeCMorphSetData
{
}

namespace InfoForResourceTypeCRenderMesh
{
}

namespace InfoForResourceTypeCModel
{
}

namespace InfoForResourceTypeCTextureBase
{
}

namespace InfoForResourceTypeIVectorGraphic
{
}

namespace InfoForResourceTypeCVSoundEventScriptList
{
}

namespace InfoForResourceTypeCVSoundStackScriptList
{
}

namespace InfoForResourceTypeCVoiceContainerBase
{
}

namespace InfoForResourceTypeCVMixListResource
{
}

namespace InfoForResourceTypeCPhysAggregateData
{
}

namespace InfoForResourceTypeCVPhysXSurfacePropertiesList
{
}

namespace InfoForResourceTypeCEntityLump
{
}

namespace InfoForResourceTypeCWorldNode
{
}

namespace InfoForResourceTypeWorld_t
{
}

namespace InfoForResourceTypeCVoxelVisibility
{
}

namespace InfoForResourceTypeCPostProcessingResource
{
}

namespace InfoForResourceTypeCPanoramaStyle
{
}

namespace InfoForResourceTypeCPanoramaLayout
{
}

namespace InfoForResourceTypeCPanoramaDynamicImages
{
}

namespace InfoForResourceTypeCDotaItemDefinitionResource
{
}

namespace InfoForResourceTypeCDOTAPatchNotesList
{
}

namespace InfoForResourceTypeCDOTANovelsList
{
}

namespace InfoForResourceTypeIAnimGraphModelBinding
{
}

namespace InfoForResourceTypeCChoreoSceneFileData
{
}

namespace InfoForResourceTypeCCompositeMaterialKit
{
}

namespace InfoForResourceTypeCGcExportableExternalData
{
}

namespace InfoForResourceTypeCSmartProp
{
}

namespace InfoForResourceTypeCCSGOEconItem
{
}

namespace InfoForResourceTypeCResponseRulesList
{
}

namespace InfoForResourceTypeCNmSkeleton
{
}

namespace InfoForResourceTypeCNmClip
{
}

namespace InfoForResourceTypeCNmGraphDefinition
{
}

namespace InfoForResourceTypeCNmGraphVariation
{
}

namespace InfoForResourceTypeCNmIKRig
{
}

namespace AABB_t
{
	constexpr uint32_t m_vMinBounds = 0x0;  // Vector 
	constexpr uint32_t m_vMaxBounds = 0xC;  // Vector 
}

namespace PackedAABB_t
{
	constexpr uint32_t m_nPackedMin = 0x0;  // uint32 
	constexpr uint32_t m_nPackedMax = 0x4;  // uint32 
}

namespace FourQuaternions
{
	constexpr uint32_t x = 0x0;  // fltx4 
	constexpr uint32_t y = 0x10;  // fltx4 
	constexpr uint32_t z = 0x20;  // fltx4 
	constexpr uint32_t w = 0x30;  // fltx4 
}

namespace FuseVariableIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // uint16 
}

namespace FuseFunctionIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // uint16 
}

namespace ConstantInfo_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_nameToken = 0x8;  // CUtlStringToken 
	constexpr uint32_t m_flValue = 0xC;  // float32 
}

namespace VariableInfo_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_nameToken = 0x8;  // CUtlStringToken 
	constexpr uint32_t m_nIndex = 0xC;  // FuseVariableIndex_t 
	constexpr uint32_t m_nNumComponents = 0xE;  // uint8 
	constexpr uint32_t m_eVarType = 0xF;  // FuseVariableType_t 
	constexpr uint32_t m_eAccess = 0x10;  // FuseVariableAccess_t 
}

namespace FunctionInfo_t
{
	constexpr uint32_t m_name = 0x8;  // CUtlString 
	constexpr uint32_t m_nameToken = 0x10;  // CUtlStringToken 
	constexpr uint32_t m_nParamCount = 0x14;  // int32 
	constexpr uint32_t m_nIndex = 0x18;  // FuseFunctionIndex_t 
	constexpr uint32_t m_bIsPure = 0x1A;  // bool 
}

namespace CFuseProgram
{
	constexpr uint32_t m_programBuffer = 0x0;  // CUtlVector< uint8 > 
	constexpr uint32_t m_variablesRead = 0x18;  // CUtlVector< FuseVariableIndex_t > 
	constexpr uint32_t m_variablesWritten = 0x30;  // CUtlVector< FuseVariableIndex_t > 
	constexpr uint32_t m_nMaxTempVarsUsed = 0x48;  // int32 
}

