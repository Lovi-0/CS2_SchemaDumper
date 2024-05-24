namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;
}

namespace EntityIOConnectionData_t
{
	constexpr uint32_t m_outputName = 0x0;
	constexpr uint32_t m_targetType = 0x8;
	constexpr uint32_t m_targetName = 0x10;
	constexpr uint32_t m_inputName = 0x18;
	constexpr uint32_t m_overrideParam = 0x20;
	constexpr uint32_t m_flDelay = 0x28;
	constexpr uint32_t m_nTimesToFire = 0x2C;
}

namespace EntityKeyValueData_t
{
	constexpr uint32_t m_connections = 0x8;
	constexpr uint32_t m_keyValuesData = 0x20;
}

namespace PermEntityLumpData_t
{
	constexpr uint32_t m_name = 0x8;
	constexpr uint32_t m_childLumps = 0x10;
	constexpr uint32_t m_entityKeyValues = 0x28;
}

namespace SceneObject_t
{
	constexpr uint32_t m_nObjectID = 0x0;
	constexpr uint32_t m_vTransform = 0x4;
	constexpr uint32_t m_flFadeStartDistance = 0x34;
	constexpr uint32_t m_flFadeEndDistance = 0x38;
	constexpr uint32_t m_vTintColor = 0x3C;
	constexpr uint32_t m_skin = 0x50;
	constexpr uint32_t m_nObjectTypeFlags = 0x58;
	constexpr uint32_t m_vLightingOrigin = 0x5C;
	constexpr uint32_t m_nOverlayRenderOrder = 0x68;
	constexpr uint32_t m_nLODOverride = 0x6A;
	constexpr uint32_t m_nCubeMapPrecomputedHandshake = 0x6C;
	constexpr uint32_t m_nLightProbeVolumePrecomputedHandshake = 0x70;
	constexpr uint32_t m_renderableModel = 0x78;
	constexpr uint32_t m_renderable = 0x80;
}

namespace BaseSceneObjectOverride_t
{
	constexpr uint32_t m_nSceneObjectIndex = 0x0;
}

namespace ExtraVertexStreamOverride_t
{
	constexpr uint32_t m_nSubSceneObject = 0x4;
	constexpr uint32_t m_nDrawCallIndex = 0x8;
	constexpr uint32_t m_nAdditionalMeshDrawPrimitiveFlags = 0xC;
	constexpr uint32_t m_extraBufferBinding = 0x10;
}

namespace MaterialOverride_t
{
	constexpr uint32_t m_nSubSceneObject = 0x4;
	constexpr uint32_t m_nDrawCallIndex = 0x8;
	constexpr uint32_t m_pMaterial = 0x10;
}

namespace InfoOverlayData_t
{
	constexpr uint32_t m_transform = 0x0;
	constexpr uint32_t m_flWidth = 0x30;
	constexpr uint32_t m_flHeight = 0x34;
	constexpr uint32_t m_flDepth = 0x38;
	constexpr uint32_t m_vUVStart = 0x3C;
	constexpr uint32_t m_vUVEnd = 0x44;
	constexpr uint32_t m_pMaterial = 0x50;
	constexpr uint32_t m_nRenderOrder = 0x58;
	constexpr uint32_t m_vTintColor = 0x5C;
	constexpr uint32_t m_nSequenceOverride = 0x6C;
}

namespace BakedLightingInfo_t
{
	constexpr uint32_t m_nLightmapVersionNumber = 0x0;
	constexpr uint32_t m_nLightmapGameVersionNumber = 0x4;
	constexpr uint32_t m_vLightmapUvScale = 0x8;
	constexpr uint32_t m_bHasLightmaps = 0x10;
	constexpr uint32_t m_bBakedShadowsGamma20 = 0x11;
	constexpr uint32_t m_bCompressionEnabled = 0x12;
	constexpr uint32_t m_nChartPackIterations = 0x13;
	constexpr uint32_t m_nVradQuality = 0x14;
	constexpr uint32_t m_lightMaps = 0x18;
}

namespace WorldNodeOnDiskBufferData_t
{
	constexpr uint32_t m_nElementCount = 0x0;
	constexpr uint32_t m_nElementSizeInBytes = 0x4;
	constexpr uint32_t m_inputLayoutFields = 0x8;
	constexpr uint32_t m_pData = 0x20;
}

namespace AggregateMeshInfo_t
{
	constexpr uint32_t m_nVisClusterMemberOffset = 0x0;
	constexpr uint32_t m_nVisClusterMemberCount = 0x4;
	constexpr uint32_t m_bHasTransform = 0x5;
	constexpr uint32_t m_nDrawCallIndex = 0x6;
	constexpr uint32_t m_nLODSetupIndex = 0x8;
	constexpr uint32_t m_nLODGroupMask = 0xA;
	constexpr uint32_t m_vTintColor = 0xB;
	constexpr uint32_t m_objectFlags = 0x10;
	constexpr uint32_t m_nLightProbeVolumePrecomputedHandshake = 0x14;
}

namespace AggregateLODSetup_t
{
	constexpr uint32_t m_vLODOrigin = 0x0;
	constexpr uint32_t m_fMaxObjectScale = 0xC;
	constexpr uint32_t m_fSwitchDistances = 0x10;
}

namespace AggregateSceneObject_t
{
	constexpr uint32_t m_allFlags = 0x0;
	constexpr uint32_t m_anyFlags = 0x4;
	constexpr uint32_t m_nLayer = 0x8;
	constexpr uint32_t m_aggregateMeshes = 0x10;
	constexpr uint32_t m_lodSetups = 0x28;
	constexpr uint32_t m_visClusterMembership = 0x40;
	constexpr uint32_t m_fragmentTransforms = 0x58;
	constexpr uint32_t m_renderableModel = 0x70;
}

namespace ClutterTile_t
{
	constexpr uint32_t m_nFirstInstance = 0x0;
	constexpr uint32_t m_nLastInstance = 0x4;
	constexpr uint32_t m_BoundsWs = 0x8;
}

namespace ClutterSceneObject_t
{
	constexpr uint32_t m_Bounds = 0x0;
	constexpr uint32_t m_flags = 0x18;
	constexpr uint32_t m_nLayer = 0x1C;
	constexpr uint32_t m_instancePositions = 0x20;
	constexpr uint32_t m_instanceScales = 0x50;
	constexpr uint32_t m_instanceTintSrgb = 0x68;
	constexpr uint32_t m_tiles = 0x80;
	constexpr uint32_t m_renderableModel = 0x98;
}

namespace WorldNode_t
{
	constexpr uint32_t m_sceneObjects = 0x0;
	constexpr uint32_t m_infoOverlays = 0x18;
	constexpr uint32_t m_visClusterMembership = 0x30;
	constexpr uint32_t m_aggregateSceneObjects = 0x48;
	constexpr uint32_t m_clutterSceneObjects = 0x60;
	constexpr uint32_t m_extraVertexStreamOverrides = 0x78;
	constexpr uint32_t m_materialOverrides = 0x90;
	constexpr uint32_t m_extraVertexStreams = 0xA8;
	constexpr uint32_t m_layerNames = 0xC0;
	constexpr uint32_t m_sceneObjectLayerIndices = 0xD8;
	constexpr uint32_t m_overlayLayerIndices = 0xF0;
	constexpr uint32_t m_grassFileName = 0x108;
	constexpr uint32_t m_nodeLightingInfo = 0x110;
}

namespace WorldBuilderParams_t
{
	constexpr uint32_t m_flMinDrawVolumeSize = 0x0;
	constexpr uint32_t m_bBuildBakedLighting = 0x4;
	constexpr uint32_t m_bakedLightingInfo = 0x8;
	constexpr uint32_t m_nCompileTimestamp = 0x38;
	constexpr uint32_t m_nCompileFingerprint = 0x40;
}

namespace NodeData_t
{
	constexpr uint32_t m_nParent = 0x0;
	constexpr uint32_t m_vOrigin = 0x4;
	constexpr uint32_t m_vMinBounds = 0x10;
	constexpr uint32_t m_vMaxBounds = 0x1C;
	constexpr uint32_t m_flMinimumDistance = 0x28;
	constexpr uint32_t m_ChildNodeIndices = 0x30;
	constexpr uint32_t m_worldNodePrefix = 0x48;
}

namespace World_t
{
	constexpr uint32_t m_builderParams = 0x0;
	constexpr uint32_t m_worldNodes = 0x48;
	constexpr uint32_t m_worldLightingInfo = 0x60;
	constexpr uint32_t m_entityLumps = 0x90;
}

namespace VoxelVisBlockOffset_t
{
	constexpr uint32_t m_nOffset = 0x0;
	constexpr uint32_t m_nElementCount = 0x4;
}

namespace CVoxelVisibility
{
	constexpr uint32_t m_nBaseClusterCount = 0x40;
	constexpr uint32_t m_nPVSBytesPerCluster = 0x44;
	constexpr uint32_t m_vMinBounds = 0x48;
	constexpr uint32_t m_vMaxBounds = 0x54;
	constexpr uint32_t m_flGridSize = 0x60;
	constexpr uint32_t m_nSkyVisibilityCluster = 0x64;
	constexpr uint32_t m_nSunVisibilityCluster = 0x68;
	constexpr uint32_t m_NodeBlock = 0x6C;
	constexpr uint32_t m_RegionBlock = 0x74;
	constexpr uint32_t m_EnclosedClusterListBlock = 0x7C;
	constexpr uint32_t m_EnclosedClustersBlock = 0x84;
	constexpr uint32_t m_MasksBlock = 0x8C;
	constexpr uint32_t m_nVisBlocks = 0x94;
}

namespace VMapResourceData_t
{
}

namespace InfoForResourceTypeVMapResourceData_t
{
}

namespace CEntityComponent
{
}

namespace CEntityIdentity
{
	constexpr uint32_t m_nameStringableIndex = 0x14;
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_designerName = 0x20;
	constexpr uint32_t m_flags = 0x30;
	constexpr uint32_t m_worldGroupId = 0x38;
	constexpr uint32_t m_fDataObjectTypes = 0x3C;
	constexpr uint32_t m_PathIndex = 0x40;
	constexpr uint32_t m_pPrev = 0x58;
	constexpr uint32_t m_pNext = 0x60;
	constexpr uint32_t m_pPrevByClass = 0x68;
	constexpr uint32_t m_pNextByClass = 0x70;
}

namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;
	constexpr uint32_t m_pEntity = 0x10;
	constexpr uint32_t m_CScriptComponent = 0x28;
	constexpr uint32_t m_bVisibleinPVS = 0x30;
}

