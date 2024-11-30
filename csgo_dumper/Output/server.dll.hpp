// Schema offset: 0x26fb9220580 
// Schema name: server.dll 
// Schema declared class: 810 

// Offset: 0x7ffe05902ce0 
// N. Class: 0 
// Fields: 1 
namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe05835540 
// N. Class: 1 
// Fields: 77 
namespace CBaseEntity
{
	constexpr uint32_t m_CBodyComponent = 0x38;  // CBodyComponent* 
	constexpr uint32_t m_NetworkTransmitComponent = 0x40;  // CNetworkTransmitComponent 
	constexpr uint32_t m_aThinkFunctions = 0x240;  // CUtlVector< thinkfunc_t > 
	constexpr uint32_t m_iCurrentThinkContext = 0x258;  // int32 
	constexpr uint32_t m_nLastThinkTick = 0x25C;  // GameTick_t 
	constexpr uint32_t m_bDisabledContextThinks = 0x260;  // bool 
	constexpr uint32_t m_isSteadyState = 0x270;  // CTypedBitVec< 64 > 
	constexpr uint32_t m_lastNetworkChange = 0x278;  // float32 
	constexpr uint32_t m_ResponseContexts = 0x288;  // CUtlVector< ResponseContext_t > 
	constexpr uint32_t m_iszResponseContext = 0x2A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iHealth = 0x2C8;  // int32 
	constexpr uint32_t m_iMaxHealth = 0x2CC;  // int32 
	constexpr uint32_t m_lifeState = 0x2D0;  // uint8 
	constexpr uint32_t m_flDamageAccumulator = 0x2D4;  // float32 
	constexpr uint32_t m_bTakesDamage = 0x2D8;  // bool 
	constexpr uint32_t m_nPlatformType = 0x2E8;  // EntityPlatformTypes_t 
	constexpr uint32_t m_MoveCollide = 0x2EA;  // MoveCollide_t 
	constexpr uint32_t m_MoveType = 0x2EB;  // MoveType_t 
	constexpr uint32_t m_nActualMoveType = 0x2EC;  // MoveType_t 
	constexpr uint32_t m_nWaterTouch = 0x2ED;  // uint8 
	constexpr uint32_t m_nSlimeTouch = 0x2EE;  // uint8 
	constexpr uint32_t m_bRestoreInHierarchy = 0x2EF;  // bool 
	constexpr uint32_t m_target = 0x2F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hDamageFilter = 0x2F8;  // CHandle< CBaseFilter > 
	constexpr uint32_t m_iszDamageFilterName = 0x300;  // CUtlSymbolLarge 
	constexpr uint32_t m_flMoveDoneTime = 0x308;  // float32 
	constexpr uint32_t m_nSubclassID = 0x30C;  // CUtlStringToken 
	constexpr uint32_t m_flAnimTime = 0x318;  // float32 
	constexpr uint32_t m_flSimulationTime = 0x31C;  // float32 
	constexpr uint32_t m_flCreateTime = 0x320;  // GameTime_t 
	constexpr uint32_t m_bClientSideRagdoll = 0x324;  // bool 
	constexpr uint32_t m_ubInterpolationFrame = 0x325;  // uint8 
	constexpr uint32_t m_vPrevVPhysicsUpdatePos = 0x328;  // Vector 
	constexpr uint32_t m_iTeamNum = 0x334;  // uint8 
	constexpr uint32_t m_iGlobalname = 0x338;  // CUtlSymbolLarge 
	constexpr uint32_t m_iSentToClients = 0x340;  // int32 
	constexpr uint32_t m_flSpeed = 0x344;  // float32 
	constexpr uint32_t m_sUniqueHammerID = 0x348;  // CUtlString 
	constexpr uint32_t m_spawnflags = 0x350;  // uint32 
	constexpr uint32_t m_nNextThinkTick = 0x354;  // GameTick_t 
	constexpr uint32_t m_nSimulationTick = 0x358;  // int32 
	constexpr uint32_t m_OnKilled = 0x360;  // CEntityIOOutput 
	constexpr uint32_t m_fFlags = 0x388;  // uint32 
	constexpr uint32_t m_vecAbsVelocity = 0x38C;  // Vector 
	constexpr uint32_t m_vecVelocity = 0x398;  // CNetworkVelocityVector 
	constexpr uint32_t m_vecBaseVelocity = 0x3C8;  // Vector 
	constexpr uint32_t m_nPushEnumCount = 0x3D4;  // int32 
	constexpr uint32_t m_pCollision = 0x3D8;  // CCollisionProperty* 
	constexpr uint32_t m_hEffectEntity = 0x3E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hOwnerEntity = 0x3E4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_fEffects = 0x3E8;  // uint32 
	constexpr uint32_t m_hGroundEntity = 0x3EC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nGroundBodyIndex = 0x3F0;  // int32 
	constexpr uint32_t m_flFriction = 0x3F4;  // float32 
	constexpr uint32_t m_flElasticity = 0x3F8;  // float32 
	constexpr uint32_t m_flGravityScale = 0x3FC;  // float32 
	constexpr uint32_t m_flTimeScale = 0x400;  // float32 
	constexpr uint32_t m_flWaterLevel = 0x404;  // float32 
	constexpr uint32_t m_bAnimatedEveryTick = 0x408;  // bool 
	constexpr uint32_t m_bDisableLowViolence = 0x409;  // bool 
	constexpr uint32_t m_nWaterType = 0x40A;  // uint8 
	constexpr uint32_t m_iEFlags = 0x40C;  // int32 
	constexpr uint32_t m_OnUser1 = 0x410;  // CEntityIOOutput 
	constexpr uint32_t m_OnUser2 = 0x438;  // CEntityIOOutput 
	constexpr uint32_t m_OnUser3 = 0x460;  // CEntityIOOutput 
	constexpr uint32_t m_OnUser4 = 0x488;  // CEntityIOOutput 
	constexpr uint32_t m_iInitialTeamNum = 0x4B0;  // int32 
	constexpr uint32_t m_flNavIgnoreUntilTime = 0x4B4;  // GameTime_t 
	constexpr uint32_t m_vecAngVelocity = 0x4B8;  // QAngle 
	constexpr uint32_t m_bNetworkQuantizeOriginAndAngles = 0x4C4;  // bool 
	constexpr uint32_t m_bLagCompensate = 0x4C5;  // bool 
	constexpr uint32_t m_flOverriddenFriction = 0x4C8;  // float32 
	constexpr uint32_t m_pBlocker = 0x4CC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flLocalTime = 0x4D0;  // float32 
	constexpr uint32_t m_flVPhysicsUpdateLocalTime = 0x4D4;  // float32 
	constexpr uint32_t m_nBloodType = 0x4D8;  // BloodType 
}

// Offset: 0x7ffe0580b200 
// N. Class: 2 
// Fields: 1 
namespace ParticleIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe058424b0 
// N. Class: 3 
// Fields: 4 
namespace CountdownTimer
{
	constexpr uint32_t m_duration = 0x8;  // float32 
	constexpr uint32_t m_timestamp = 0xC;  // GameTime_t 
	constexpr uint32_t m_timescale = 0x10;  // float32 
	constexpr uint32_t m_nWorldGroupId = 0x14;  // WorldGroupId_t 
}

// Offset: 0x7ffe0580fbb8 
// N. Class: 4 
// Fields: 1 
namespace CSkillFloat
{
	constexpr uint32_t m_pValue = 0x0;  // float32[4] 
}

// Offset: 0x7ffe0580fc58 
// N. Class: 5 
// Fields: 1 
namespace CSkillInt
{
	constexpr uint32_t m_pValue = 0x0;  // int32[4] 
}

// Offset: 0x7ffe05942ce8 
// N. Class: 6 
// Fields: 1 
namespace CRangeInt
{
	constexpr uint32_t m_pValue = 0x0;  // int32[2] 
}

// Offset: 0x7ffe05928ec0 
// N. Class: 7 
// Fields: 2 
namespace NavGravity_t
{
	constexpr uint32_t m_vGravity = 0x0;  // Vector 
	constexpr uint32_t m_bDefault = 0xC;  // bool 
}

// Offset: 0x7ffe05928f70 
// N. Class: 8 
// Fields: 2 
namespace Extent
{
	constexpr uint32_t lo = 0x0;  // Vector 
	constexpr uint32_t hi = 0xC;  // Vector 
}

// Offset: 0x0 
// N. Class: 9 
// Fields: 0 
namespace CNavVolume
{
}

// Offset: 0x7ffe059283b0 
// N. Class: 10 
// Fields: 1 
namespace CNavVolumeVector
{
	constexpr uint32_t m_bHasBeenPreFiltered = 0x78;  // bool 
}

// Offset: 0x0 
// N. Class: 11 
// Fields: 0 
namespace CNavVolumeAll
{
}

// Offset: 0x7ffe059284d0 
// N. Class: 12 
// Fields: 2 
namespace CNavVolumeSphere
{
	constexpr uint32_t m_vCenter = 0x70;  // Vector 
	constexpr uint32_t m_flRadius = 0x7C;  // float32 
}

// Offset: 0x7ffe05928590 
// N. Class: 13 
// Fields: 1 
namespace CNavVolumeSphericalShell
{
	constexpr uint32_t m_flRadiusInner = 0x80;  // float32 
}

// Offset: 0x7ffe05928b60 
// N. Class: 14 
// Fields: 13 
namespace CNavHullVData
{
	constexpr uint32_t m_bAgentEnabled = 0x0;  // bool 
	constexpr uint32_t m_agentRadius = 0x4;  // float32 
	constexpr uint32_t m_agentHeight = 0x8;  // float32 
	constexpr uint32_t m_agentShortHeightEnabled = 0xC;  // bool 
	constexpr uint32_t m_agentShortHeight = 0x10;  // float32 
	constexpr uint32_t m_agentMaxClimb = 0x14;  // float32 
	constexpr uint32_t m_agentMaxSlope = 0x18;  // int32 
	constexpr uint32_t m_agentMaxJumpDownDist = 0x1C;  // float32 
	constexpr uint32_t m_agentMaxJumpHorizDistBase = 0x20;  // float32 
	constexpr uint32_t m_agentMaxJumpUpDist = 0x24;  // float32 
	constexpr uint32_t m_agentBorderErosion = 0x28;  // int32 
	constexpr uint32_t m_flowMapGenerationEnabled = 0x2C;  // bool 
	constexpr uint32_t m_flowMapNodeMaxRadius = 0x30;  // float32 
}

// Offset: 0x7ffe05928d90 
// N. Class: 15 
// Fields: 1 
namespace CNavHullPresetVData
{
	constexpr uint32_t m_vecNavHulls = 0x0;  // CUtlVector< CUtlString > 
}

// Offset: 0x0 
// N. Class: 16 
// Fields: 0 
namespace CEntityComponent
{
}

// Offset: 0x7ffe05902f00 
// N. Class: 17 
// Fields: 11 
namespace CEntityIdentity
{
	constexpr uint32_t m_nameStringableIndex = 0x14;  // int32 
	constexpr uint32_t m_name = 0x18;  // CUtlSymbolLarge 
	constexpr uint32_t m_designerName = 0x20;  // CUtlSymbolLarge 
	constexpr uint32_t m_flags = 0x30;  // uint32 
	constexpr uint32_t m_worldGroupId = 0x38;  // WorldGroupId_t 
	constexpr uint32_t m_fDataObjectTypes = 0x3C;  // uint32 
	constexpr uint32_t m_PathIndex = 0x40;  // ChangeAccessorFieldPathIndex_t 
	constexpr uint32_t m_pPrev = 0x58;  // CEntityIdentity* 
	constexpr uint32_t m_pNext = 0x60;  // CEntityIdentity* 
	constexpr uint32_t m_pPrevByClass = 0x68;  // CEntityIdentity* 
	constexpr uint32_t m_pNextByClass = 0x70;  // CEntityIdentity* 
}

// Offset: 0x7ffe05902970 
// N. Class: 18 
// Fields: 4 
namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_pEntity = 0x10;  // CEntityIdentity* 
	constexpr uint32_t m_CScriptComponent = 0x28;  // CScriptComponent* 
	constexpr uint32_t m_bVisibleinPVS = 0x30;  // bool 
}

// Offset: 0x7ffe05838120 
// N. Class: 19 
// Fields: 33 
namespace CGameSceneNode
{
	constexpr uint32_t m_nodeToWorld = 0x10;  // CTransform 
	constexpr uint32_t m_pOwner = 0x30;  // CEntityInstance* 
	constexpr uint32_t m_pParent = 0x38;  // CGameSceneNode* 
	constexpr uint32_t m_pChild = 0x40;  // CGameSceneNode* 
	constexpr uint32_t m_pNextSibling = 0x48;  // CGameSceneNode* 
	constexpr uint32_t m_hParent = 0x78;  // CGameSceneNodeHandle 
	constexpr uint32_t m_vecOrigin = 0x88;  // CNetworkOriginCellCoordQuantizedVector 
	constexpr uint32_t m_angRotation = 0xC0;  // QAngle 
	constexpr uint32_t m_flScale = 0xCC;  // float32 
	constexpr uint32_t m_vecAbsOrigin = 0xD0;  // Vector 
	constexpr uint32_t m_angAbsRotation = 0xDC;  // QAngle 
	constexpr uint32_t m_flAbsScale = 0xE8;  // float32 
	constexpr uint32_t m_nParentAttachmentOrBone = 0xEC;  // int16 
	constexpr uint32_t m_bDebugAbsOriginChanges = 0xEE;  // bool 
	constexpr uint32_t m_bDormant = 0xEF;  // bool 
	constexpr uint32_t m_bForceParentToBeNetworked = 0xF0;  // bool 
	constexpr uint32_t m_bDirtyHierarchy = 0x0;  // bitfield:1 
	constexpr uint32_t m_bDirtyBoneMergeInfo = 0x0;  // bitfield:1 
	constexpr uint32_t m_bNetworkedPositionChanged = 0x0;  // bitfield:1 
	constexpr uint32_t m_bNetworkedAnglesChanged = 0x0;  // bitfield:1 
	constexpr uint32_t m_bNetworkedScaleChanged = 0x0;  // bitfield:1 
	constexpr uint32_t m_bWillBeCallingPostDataUpdate = 0x0;  // bitfield:1 
	constexpr uint32_t m_bBoneMergeFlex = 0x0;  // bitfield:1 
	constexpr uint32_t m_nLatchAbsOrigin = 0x0;  // bitfield:2 
	constexpr uint32_t m_bDirtyBoneMergeBoneToRoot = 0x0;  // bitfield:1 
	constexpr uint32_t m_nHierarchicalDepth = 0xF3;  // uint8 
	constexpr uint32_t m_nHierarchyType = 0xF4;  // uint8 
	constexpr uint32_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5;  // uint8 
	constexpr uint32_t m_name = 0xF8;  // CUtlStringToken 
	constexpr uint32_t m_hierarchyAttachName = 0x138;  // CUtlStringToken 
	constexpr uint32_t m_flZOffset = 0x13C;  // float32 
	constexpr uint32_t m_flClientLocalScale = 0x140;  // float32 
	constexpr uint32_t m_vRenderOrigin = 0x144;  // Vector 
}

// Offset: 0x7ffe057dfb40 
// N. Class: 20 
// Fields: 2 
namespace CBodyComponent
{
	constexpr uint32_t m_pSceneNode = 0x8;  // CGameSceneNode* 
	constexpr uint32_t __m_pChainEntity = 0x20;  // CNetworkVarChainer 
}

// Offset: 0x7ffe057dfca0 
// N. Class: 21 
// Fields: 1 
namespace CBodyComponentPoint
{
	constexpr uint32_t m_sceneNode = 0x50;  // CGameSceneNode 
}

// Offset: 0x7ffe05840070 
// N. Class: 22 
// Fields: 8 
namespace CSkeletonInstance
{
	constexpr uint32_t m_modelState = 0x170;  // CModelState 
	constexpr uint32_t m_bIsAnimationEnabled = 0x3A0;  // bool 
	constexpr uint32_t m_bUseParentRenderBounds = 0x3A1;  // bool 
	constexpr uint32_t m_bDisableSolidCollisionsForHierarchy = 0x3A2;  // bool 
	constexpr uint32_t m_bDirtyMotionType = 0x0;  // bitfield:1 
	constexpr uint32_t m_bIsGeneratingLatchedParentSpaceState = 0x0;  // bitfield:1 
	constexpr uint32_t m_materialGroup = 0x3A4;  // CUtlStringToken 
	constexpr uint32_t m_nHitboxSet = 0x3A8;  // uint8 
}

// Offset: 0x7ffe057dfd70 
// N. Class: 23 
// Fields: 1 
namespace CBodyComponentSkeletonInstance
{
	constexpr uint32_t m_skeletonInstance = 0x50;  // CSkeletonInstance 
}

// Offset: 0x7ffe057dfb80 
// N. Class: 24 
// Fields: 1 
namespace CHitboxComponent
{
	constexpr uint32_t m_bvDisabledHitGroups = 0x24;  // uint32[1] 
}

// Offset: 0x7ffe057dffd0 
// N. Class: 25 
// Fields: 67 
namespace CLightComponent
{
	constexpr uint32_t __m_pChainEntity = 0x38;  // CNetworkVarChainer 
	constexpr uint32_t m_Color = 0x75;  // Color 
	constexpr uint32_t m_SecondaryColor = 0x79;  // Color 
	constexpr uint32_t m_flBrightness = 0x80;  // float32 
	constexpr uint32_t m_flBrightnessScale = 0x84;  // float32 
	constexpr uint32_t m_flBrightnessMult = 0x88;  // float32 
	constexpr uint32_t m_flRange = 0x8C;  // float32 
	constexpr uint32_t m_flFalloff = 0x90;  // float32 
	constexpr uint32_t m_flAttenuation0 = 0x94;  // float32 
	constexpr uint32_t m_flAttenuation1 = 0x98;  // float32 
	constexpr uint32_t m_flAttenuation2 = 0x9C;  // float32 
	constexpr uint32_t m_flTheta = 0xA0;  // float32 
	constexpr uint32_t m_flPhi = 0xA4;  // float32 
	constexpr uint32_t m_hLightCookie = 0xA8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_nCascades = 0xB0;  // int32 
	constexpr uint32_t m_nCastShadows = 0xB4;  // int32 
	constexpr uint32_t m_nShadowWidth = 0xB8;  // int32 
	constexpr uint32_t m_nShadowHeight = 0xBC;  // int32 
	constexpr uint32_t m_bRenderDiffuse = 0xC0;  // bool 
	constexpr uint32_t m_nRenderSpecular = 0xC4;  // int32 
	constexpr uint32_t m_bRenderTransmissive = 0xC8;  // bool 
	constexpr uint32_t m_flOrthoLightWidth = 0xCC;  // float32 
	constexpr uint32_t m_flOrthoLightHeight = 0xD0;  // float32 
	constexpr uint32_t m_nStyle = 0xD4;  // int32 
	constexpr uint32_t m_Pattern = 0xD8;  // CUtlString 
	constexpr uint32_t m_nCascadeRenderStaticObjects = 0xE0;  // int32 
	constexpr uint32_t m_flShadowCascadeCrossFade = 0xE4;  // float32 
	constexpr uint32_t m_flShadowCascadeDistanceFade = 0xE8;  // float32 
	constexpr uint32_t m_flShadowCascadeDistance0 = 0xEC;  // float32 
	constexpr uint32_t m_flShadowCascadeDistance1 = 0xF0;  // float32 
	constexpr uint32_t m_flShadowCascadeDistance2 = 0xF4;  // float32 
	constexpr uint32_t m_flShadowCascadeDistance3 = 0xF8;  // float32 
	constexpr uint32_t m_nShadowCascadeResolution0 = 0xFC;  // int32 
	constexpr uint32_t m_nShadowCascadeResolution1 = 0x100;  // int32 
	constexpr uint32_t m_nShadowCascadeResolution2 = 0x104;  // int32 
	constexpr uint32_t m_nShadowCascadeResolution3 = 0x108;  // int32 
	constexpr uint32_t m_bUsesBakedShadowing = 0x10C;  // bool 
	constexpr uint32_t m_nShadowPriority = 0x110;  // int32 
	constexpr uint32_t m_nBakedShadowIndex = 0x114;  // int32 
	constexpr uint32_t m_bRenderToCubemaps = 0x118;  // bool 
	constexpr uint32_t m_nDirectLight = 0x11C;  // int32 
	constexpr uint32_t m_nIndirectLight = 0x120;  // int32 
	constexpr uint32_t m_flFadeMinDist = 0x124;  // float32 
	constexpr uint32_t m_flFadeMaxDist = 0x128;  // float32 
	constexpr uint32_t m_flShadowFadeMinDist = 0x12C;  // float32 
	constexpr uint32_t m_flShadowFadeMaxDist = 0x130;  // float32 
	constexpr uint32_t m_bEnabled = 0x134;  // bool 
	constexpr uint32_t m_bFlicker = 0x135;  // bool 
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x136;  // bool 
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x138;  // Vector 
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x144;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x150;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x15C;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x168;  // Vector 
	constexpr uint32_t m_flPrecomputedMaxRange = 0x174;  // float32 
	constexpr uint32_t m_nFogLightingMode = 0x178;  // int32 
	constexpr uint32_t m_flFogContributionStength = 0x17C;  // float32 
	constexpr uint32_t m_flNearClipPlane = 0x180;  // float32 
	constexpr uint32_t m_SkyColor = 0x184;  // Color 
	constexpr uint32_t m_flSkyIntensity = 0x188;  // float32 
	constexpr uint32_t m_SkyAmbientBounce = 0x18C;  // Color 
	constexpr uint32_t m_bUseSecondaryColor = 0x190;  // bool 
	constexpr uint32_t m_bMixedShadows = 0x191;  // bool 
	constexpr uint32_t m_flLightStyleStartTime = 0x194;  // GameTime_t 
	constexpr uint32_t m_flCapsuleLength = 0x198;  // float32 
	constexpr uint32_t m_flMinRoughness = 0x19C;  // float32 
	constexpr uint32_t m_bPvsModifyEntity = 0x1B0;  // bool 
}

// Offset: 0x7ffe057dfa50 
// N. Class: 26 
// Fields: 1 
namespace CNetworkTransmitComponent
{
	constexpr uint32_t m_nTransmitStateOwnedCounter = 0x184;  // uint8 
}

// Offset: 0x7ffe057e0b30 
// N. Class: 27 
// Fields: 5 
namespace CRenderComponent
{
	constexpr uint32_t __m_pChainEntity = 0x10;  // CNetworkVarChainer 
	constexpr uint32_t m_bIsRenderingWithViewModels = 0x50;  // bool 
	constexpr uint32_t m_nSplitscreenFlags = 0x54;  // uint32 
	constexpr uint32_t m_bEnableRendering = 0x60;  // bool 
	constexpr uint32_t m_bInterpolationReadyToDraw = 0xB0;  // bool 
}

// Offset: 0x0 
// N. Class: 28 
// Fields: 0 
namespace CAnimEventListenerBase
{
}

// Offset: 0x0 
// N. Class: 29 
// Fields: 0 
namespace CAnimEventListener
{
}

// Offset: 0x0 
// N. Class: 30 
// Fields: 0 
namespace CAnimEventQueueListener
{
}

// Offset: 0x7ffe057fa810 
// N. Class: 31 
// Fields: 4 
namespace PointCameraSettings_t
{
	constexpr uint32_t m_flNearBlurryDistance = 0x0;  // float32 
	constexpr uint32_t m_flNearCrispDistance = 0x4;  // float32 
	constexpr uint32_t m_flFarCrispDistance = 0x8;  // float32 
	constexpr uint32_t m_flFarBlurryDistance = 0xC;  // float32 
}

// Offset: 0x7ffe057fa980 
// N. Class: 32 
// Fields: 3 
namespace CPulseCell_LerpCameraSettings
{
	constexpr uint32_t m_flSeconds = 0x78;  // float32 
	constexpr uint32_t m_Start = 0x7C;  // PointCameraSettings_t 
	constexpr uint32_t m_End = 0x8C;  // PointCameraSettings_t 
}

// Offset: 0x7ffe057fab00 
// N. Class: 33 
// Fields: 3 
namespace CPulseCell_LerpCameraSettings::CursorState_t
{
	constexpr uint32_t m_hCamera = 0x8;  // CHandle< CPointCamera > 
	constexpr uint32_t m_OverlaidStart = 0xC;  // PointCameraSettings_t 
	constexpr uint32_t m_OverlaidEnd = 0x1C;  // PointCameraSettings_t 
}

// Offset: 0x7ffe05802630 
// N. Class: 34 
// Fields: 26 
namespace CPointCamera
{
	constexpr uint32_t m_FOV = 0x4E0;  // float32 
	constexpr uint32_t m_Resolution = 0x4E4;  // float32 
	constexpr uint32_t m_bFogEnable = 0x4E8;  // bool 
	constexpr uint32_t m_FogColor = 0x4E9;  // Color 
	constexpr uint32_t m_flFogStart = 0x4F0;  // float32 
	constexpr uint32_t m_flFogEnd = 0x4F4;  // float32 
	constexpr uint32_t m_flFogMaxDensity = 0x4F8;  // float32 
	constexpr uint32_t m_bActive = 0x4FC;  // bool 
	constexpr uint32_t m_bUseScreenAspectRatio = 0x4FD;  // bool 
	constexpr uint32_t m_flAspectRatio = 0x500;  // float32 
	constexpr uint32_t m_bNoSky = 0x504;  // bool 
	constexpr uint32_t m_fBrightness = 0x508;  // float32 
	constexpr uint32_t m_flZFar = 0x50C;  // float32 
	constexpr uint32_t m_flZNear = 0x510;  // float32 
	constexpr uint32_t m_bCanHLTVUse = 0x514;  // bool 
	constexpr uint32_t m_bAlignWithParent = 0x515;  // bool 
	constexpr uint32_t m_bDofEnabled = 0x516;  // bool 
	constexpr uint32_t m_flDofNearBlurry = 0x518;  // float32 
	constexpr uint32_t m_flDofNearCrisp = 0x51C;  // float32 
	constexpr uint32_t m_flDofFarCrisp = 0x520;  // float32 
	constexpr uint32_t m_flDofFarBlurry = 0x524;  // float32 
	constexpr uint32_t m_flDofTiltToGround = 0x528;  // float32 
	constexpr uint32_t m_TargetFOV = 0x52C;  // float32 
	constexpr uint32_t m_DegreesPerSecond = 0x530;  // float32 
	constexpr uint32_t m_bIsOn = 0x534;  // bool 
	constexpr uint32_t m_pNext = 0x538;  // CPointCamera* 
}

// Offset: 0x0 
// N. Class: 35 
// Fields: 0 
namespace CPointTemplateAPI
{
}

// Offset: 0x7ffe05802080 
// N. Class: 36 
// Fields: 10 
namespace CPropDataComponent
{
	constexpr uint32_t m_flDmgModBullet = 0x10;  // float32 
	constexpr uint32_t m_flDmgModClub = 0x14;  // float32 
	constexpr uint32_t m_flDmgModExplosive = 0x18;  // float32 
	constexpr uint32_t m_flDmgModFire = 0x1C;  // float32 
	constexpr uint32_t m_iszPhysicsDamageTableName = 0x20;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszBasePropData = 0x28;  // CUtlSymbolLarge 
	constexpr uint32_t m_nInteractions = 0x30;  // int32 
	constexpr uint32_t m_bSpawnMotionDisabled = 0x34;  // bool 
	constexpr uint32_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38;  // int32 
	constexpr uint32_t m_nMotionDisabledSpawnFlag = 0x3C;  // int32 
}

// Offset: 0x7ffe057f4950 
// N. Class: 37 
// Fields: 2 
namespace WaterWheelFrictionScale_t
{
	constexpr uint32_t m_flFractionOfWheelSubmerged = 0x0;  // float32 
	constexpr uint32_t m_flFrictionScale = 0x4;  // float32 
}

// Offset: 0x7ffe057f4a10 
// N. Class: 38 
// Fields: 2 
namespace WaterWheelDrag_t
{
	constexpr uint32_t m_flFractionOfWheelSubmerged = 0x0;  // float32 
	constexpr uint32_t m_flWheelDrag = 0x4;  // float32 
}

// Offset: 0x7ffe057f4ac0 
// N. Class: 39 
// Fields: 6 
namespace CBuoyancyHelper
{
	constexpr uint32_t m_nFluidType = 0x18;  // CUtlStringToken 
	constexpr uint32_t m_flFluidDensity = 0x1C;  // float32 
	constexpr uint32_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x20;  // CUtlVector< float32 > 
	constexpr uint32_t m_vecWheelFrictionScales = 0x38;  // CUtlVector< float32 > 
	constexpr uint32_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x50;  // CUtlVector< float32 > 
	constexpr uint32_t m_vecWheelDrag = 0x68;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe05803b70 
// N. Class: 40 
// Fields: 5 
namespace SoundeventPathCornerPairNetworked_t
{
	constexpr uint32_t vP1 = 0x0;  // Vector 
	constexpr uint32_t vP2 = 0xC;  // Vector 
	constexpr uint32_t flPathLengthSqr = 0x18;  // float32 
	constexpr uint32_t flP1Pct = 0x1C;  // float32 
	constexpr uint32_t flP2Pct = 0x20;  // float32 
}

// Offset: 0x7ffe058024c0 
// N. Class: 41 
// Fields: 2 
namespace CWorldCompositionChunkReferenceElement_t
{
	constexpr uint32_t m_strMapToLoad = 0x0;  // CUtlString 
	constexpr uint32_t m_strLandmarkName = 0x8;  // CUtlString 
}

// Offset: 0x7ffe0580fd10 
// N. Class: 42 
// Fields: 3 
namespace CSkillDamage
{
	constexpr uint32_t m_flDamage = 0x0;  // CSkillFloat 
	constexpr uint32_t m_flNPCDamageScalarVsNPC = 0x10;  // float32 
	constexpr uint32_t m_flPhysicsForceDamage = 0x14;  // float32 
}

// Offset: 0x7ffe0580fe18 
// N. Class: 43 
// Fields: 1 
namespace CRemapFloat
{
	constexpr uint32_t m_pValue = 0x0;  // float32[4] 
}

// Offset: 0x7ffe0580ff50 
// N. Class: 44 
// Fields: 2 
namespace CScriptUniformRandomStream
{
	constexpr uint32_t m_hScriptScope = 0x8;  // HSCRIPT 
	constexpr uint32_t m_nInitialSeed = 0x9C;  // int32 
}

// Offset: 0x0 
// N. Class: 45 
// Fields: 0 
namespace IGapHost_GameEntity
{
}

// Offset: 0x7ffe05850d88 
// N. Class: 46 
// Fields: 1 
namespace CPulseCell_Step_EntFire
{
	constexpr uint32_t m_Input = 0x48;  // CUtlString 
}

// Offset: 0x7ffe05850e80 
// N. Class: 47 
// Fields: 4 
namespace CPulseCell_PlaySequence
{
	constexpr uint32_t m_SequenceName = 0x48;  // CUtlString 
	constexpr uint32_t m_PulseAnimEvents = 0x50;  // PulseNodeDynamicOutflows_t 
	constexpr uint32_t m_OnFinished = 0x68;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0x98;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe05850b50 
// N. Class: 48 
// Fields: 1 
namespace CPulseCell_PlaySequence::CursorState_t
{
	constexpr uint32_t m_hTarget = 0x0;  // CHandle< CBaseAnimGraph > 
}

// Offset: 0x7ffe05833110 
// N. Class: 49 
// Fields: 11 
namespace CBaseAnimGraph
{
	constexpr uint32_t m_bInitiallyPopulateInterpHistory = 0x808;  // bool 
	constexpr uint32_t m_pChoreoServices = 0x810;  // IChoreoServices* 
	constexpr uint32_t m_bAnimGraphUpdateEnabled = 0x818;  // bool 
	constexpr uint32_t m_flMaxSlopeDistance = 0x81C;  // float32 
	constexpr uint32_t m_vLastSlopeCheckPos = 0x820;  // Vector 
	constexpr uint32_t m_bAnimationUpdateScheduled = 0x82C;  // bool 
	constexpr uint32_t m_vecForce = 0x830;  // Vector 
	constexpr uint32_t m_nForceBone = 0x83C;  // int32 
	constexpr uint32_t m_RagdollPose = 0x850;  // PhysicsRagdollPose_t 
	constexpr uint32_t m_bRagdollClientSide = 0x878;  // bool 
	constexpr uint32_t m_nLastDestructiblePartDestroyedAnimgraphSetTick = 0x9A0;  // int32 
}

// Offset: 0x0 
// N. Class: 50 
// Fields: 0 
namespace CPulseAnimFuncs
{
}

// Offset: 0x0 
// N. Class: 51 
// Fields: 0 
namespace CSharedGapTypeQueryRegistration
{
}

// Offset: 0x0 
// N. Class: 52 
// Fields: 0 
namespace CBasePlayerControllerAPI
{
}

// Offset: 0x7ffe05870610 
// N. Class: 53 
// Fields: 3 
namespace ViewAngleServerChange_t
{
	constexpr uint32_t nType = 0x30;  // FixAngleSet_t 
	constexpr uint32_t qAngle = 0x34;  // QAngle 
	constexpr uint32_t nIndex = 0x40;  // uint32 
}

// Offset: 0x7ffe05870440 
// N. Class: 54 
// Fields: 2 
namespace CBreakableStageHelper
{
	constexpr uint32_t m_nCurrentStage = 0x8;  // int32 
	constexpr uint32_t m_nStageCount = 0xC;  // int32 
}

// Offset: 0x7ffe058794d0 
// N. Class: 55 
// Fields: 12 
namespace CommandToolCommand_t
{
	constexpr uint32_t m_bEnabled = 0x0;  // bool 
	constexpr uint32_t m_bOpened = 0x1;  // bool 
	constexpr uint32_t m_InternalId = 0x4;  // uint32 
	constexpr uint32_t m_ShortName = 0x8;  // CUtlString 
	constexpr uint32_t m_ExecMode = 0x10;  // CommandExecMode_t 
	constexpr uint32_t m_SpawnGroup = 0x18;  // CUtlString 
	constexpr uint32_t m_PeriodicExecDelay = 0x20;  // float32 
	constexpr uint32_t m_SpecType = 0x24;  // CommandEntitySpecType_t 
	constexpr uint32_t m_EntitySpec = 0x28;  // CUtlString 
	constexpr uint32_t m_Commands = 0x30;  // CUtlString 
	constexpr uint32_t m_SetDebugBits = 0x38;  // DebugOverlayBits_t 
	constexpr uint32_t m_ClearDebugBits = 0x40;  // DebugOverlayBits_t 
}

// Offset: 0x7ffe05884610 
// N. Class: 56 
// Fields: 1 
namespace CPlayerPawnComponent
{
	constexpr uint32_t __m_pChainEntity = 0x8;  // CNetworkVarChainer 
}

// Offset: 0x7ffe05884580 
// N. Class: 57 
// Fields: 1 
namespace CPlayerControllerComponent
{
	constexpr uint32_t __m_pChainEntity = 0x8;  // CNetworkVarChainer 
}

// Offset: 0x0 
// N. Class: 58 
// Fields: 0 
namespace CPlayer_AutoaimServices
{
}

// Offset: 0x7ffe058801d0 
// N. Class: 59 
// Fields: 5 
namespace audioparams_t
{
	constexpr uint32_t localSound = 0x8;  // Vector[8] 
	constexpr uint32_t soundscapeIndex = 0x68;  // int32 
	constexpr uint32_t localBits = 0x6C;  // uint8 
	constexpr uint32_t soundscapeEntityListIndex = 0x70;  // int32 
	constexpr uint32_t soundEventHash = 0x74;  // uint32 
}

// Offset: 0x7ffe05809e20 
// N. Class: 60 
// Fields: 14 
namespace fogplayerparams_t
{
	constexpr uint32_t m_flTransitionTime = 0xC;  // float32 
	constexpr uint32_t m_OldColor = 0x10;  // Color 
	constexpr uint32_t m_flOldStart = 0x14;  // float32 
	constexpr uint32_t m_flOldEnd = 0x18;  // float32 
	constexpr uint32_t m_flOldMaxDensity = 0x1C;  // float32 
	constexpr uint32_t m_flOldHDRColorScale = 0x20;  // float32 
	constexpr uint32_t m_flOldFarZ = 0x24;  // float32 
	constexpr uint32_t m_NewColor = 0x28;  // Color 
	constexpr uint32_t m_flNewStart = 0x2C;  // float32 
	constexpr uint32_t m_flNewEnd = 0x30;  // float32 
	constexpr uint32_t m_flNewMaxDensity = 0x34;  // float32 
	constexpr uint32_t m_flNewHDRColorScale = 0x38;  // float32 
	constexpr uint32_t m_flNewFarZ = 0x3C;  // float32 
}

// Offset: 0x7ffe058325d0 
// N. Class: 61 
// Fields: 17 
namespace CColorCorrection
{
	constexpr uint32_t m_flFadeInDuration = 0x4E0;  // float32 
	constexpr uint32_t m_flFadeOutDuration = 0x4E4;  // float32 
	constexpr uint32_t m_flStartFadeInWeight = 0x4E8;  // float32 
	constexpr uint32_t m_flStartFadeOutWeight = 0x4EC;  // float32 
	constexpr uint32_t m_flTimeStartFadeIn = 0x4F0;  // GameTime_t 
	constexpr uint32_t m_flTimeStartFadeOut = 0x4F4;  // GameTime_t 
	constexpr uint32_t m_flMaxWeight = 0x4F8;  // float32 
	constexpr uint32_t m_bStartDisabled = 0x4FC;  // bool 
	constexpr uint32_t m_bEnabled = 0x4FD;  // bool 
	constexpr uint32_t m_bMaster = 0x4FE;  // bool 
	constexpr uint32_t m_bClientSide = 0x4FF;  // bool 
	constexpr uint32_t m_bExclusive = 0x500;  // bool 
	constexpr uint32_t m_MinFalloff = 0x504;  // float32 
	constexpr uint32_t m_MaxFalloff = 0x508;  // float32 
	constexpr uint32_t m_flCurWeight = 0x50C;  // float32 
	constexpr uint32_t m_netlookupFilename = 0x510;  // char[512] 
	constexpr uint32_t m_lookupFilename = 0x710;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe057fb7f0 
// N. Class: 62 
// Fields: 8 
namespace CTonemapController2
{
	constexpr uint32_t m_flAutoExposureMin = 0x4E0;  // float32 
	constexpr uint32_t m_flAutoExposureMax = 0x4E4;  // float32 
	constexpr uint32_t m_flTonemapPercentTarget = 0x4E8;  // float32 
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x4EC;  // float32 
	constexpr uint32_t m_flTonemapMinAvgLum = 0x4F0;  // float32 
	constexpr uint32_t m_flExposureAdaptationSpeedUp = 0x4F4;  // float32 
	constexpr uint32_t m_flExposureAdaptationSpeedDown = 0x4F8;  // float32 
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x4FC;  // float32 
}

// Offset: 0x7ffe05802fa0 
// N. Class: 63 
// Fields: 16 
namespace CPostProcessingVolume
{
	constexpr uint32_t m_hPostSettings = 0x970;  // CStrongHandle< InfoForResourceTypeCPostProcessingResource > 
	constexpr uint32_t m_flFadeDuration = 0x978;  // float32 
	constexpr uint32_t m_flMinLogExposure = 0x97C;  // float32 
	constexpr uint32_t m_flMaxLogExposure = 0x980;  // float32 
	constexpr uint32_t m_flMinExposure = 0x984;  // float32 
	constexpr uint32_t m_flMaxExposure = 0x988;  // float32 
	constexpr uint32_t m_flExposureCompensation = 0x98C;  // float32 
	constexpr uint32_t m_flExposureFadeSpeedUp = 0x990;  // float32 
	constexpr uint32_t m_flExposureFadeSpeedDown = 0x994;  // float32 
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x998;  // float32 
	constexpr uint32_t m_bMaster = 0x99C;  // bool 
	constexpr uint32_t m_bExposureControl = 0x99D;  // bool 
	constexpr uint32_t m_flRate = 0x9A0;  // float32 
	constexpr uint32_t m_flTonemapPercentTarget = 0x9A4;  // float32 
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x9A8;  // float32 
	constexpr uint32_t m_flTonemapMinAvgLum = 0x9AC;  // float32 
}

// Offset: 0x0 
// N. Class: 64 
// Fields: 0 
namespace CEnvSoundscapeTriggerable
{
}

// Offset: 0x7ffe05880330 
// N. Class: 65 
// Fields: 12 
namespace CPlayer_CameraServices
{
	constexpr uint32_t m_vecCsViewPunchAngle = 0x40;  // QAngle 
	constexpr uint32_t m_nCsViewPunchAngleTick = 0x4C;  // GameTick_t 
	constexpr uint32_t m_flCsViewPunchAngleTickRatio = 0x50;  // float32 
	constexpr uint32_t m_PlayerFog = 0x58;  // fogplayerparams_t 
	constexpr uint32_t m_hColorCorrectionCtrl = 0x98;  // CHandle< CColorCorrection > 
	constexpr uint32_t m_hViewEntity = 0x9C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTonemapController = 0xA0;  // CHandle< CTonemapController2 > 
	constexpr uint32_t m_audio = 0xA8;  // audioparams_t 
	constexpr uint32_t m_PostProcessingVolumes = 0x120;  // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > 
	constexpr uint32_t m_flOldPlayerZ = 0x138;  // float32 
	constexpr uint32_t m_flOldPlayerViewOffsetZ = 0x13C;  // float32 
	constexpr uint32_t m_hTriggerSoundscapeList = 0x158;  // CUtlVector< CHandle< CEnvSoundscapeTriggerable > > 
}

// Offset: 0x0 
// N. Class: 66 
// Fields: 0 
namespace CPlayer_FlashlightServices
{
}

// Offset: 0x0 
// N. Class: 67 
// Fields: 0 
namespace CPlayer_ItemServices
{
}

// Offset: 0x7ffe0583d158 
// N. Class: 68 
// Fields: 1 
namespace CInButtonState
{
	constexpr uint32_t m_pButtonStates = 0x8;  // uint64[3] 
}

// Offset: 0x7ffe058806a0 
// N. Class: 69 
// Fields: 15 
namespace CPlayer_MovementServices
{
	constexpr uint32_t m_nImpulse = 0x40;  // int32 
	constexpr uint32_t m_nButtons = 0x48;  // CInButtonState 
	constexpr uint32_t m_nQueuedButtonDownMask = 0x68;  // uint64 
	constexpr uint32_t m_nQueuedButtonChangeMask = 0x70;  // uint64 
	constexpr uint32_t m_nButtonDoublePressed = 0x78;  // uint64 
	constexpr uint32_t m_pButtonPressedCmdNumber = 0x80;  // uint32[64] 
	constexpr uint32_t m_nLastCommandNumberProcessed = 0x180;  // uint32 
	constexpr uint32_t m_nToggleButtonDownMask = 0x188;  // uint64 
	constexpr uint32_t m_flMaxspeed = 0x198;  // float32 
	constexpr uint32_t m_arrForceSubtickMoveWhen = 0x19C;  // float32[4] 
	constexpr uint32_t m_flForwardMove = 0x1AC;  // float32 
	constexpr uint32_t m_flLeftMove = 0x1B0;  // float32 
	constexpr uint32_t m_flUpMove = 0x1B4;  // float32 
	constexpr uint32_t m_vecLastMovementImpulses = 0x1B8;  // Vector 
	constexpr uint32_t m_vecOldViewAngles = 0x1C4;  // QAngle 
}

// Offset: 0x7ffe05884680 
// N. Class: 70 
// Fields: 14 
namespace CPlayer_MovementServices_Humanoid
{
	constexpr uint32_t m_flStepSoundTime = 0x1D8;  // float32 
	constexpr uint32_t m_flFallVelocity = 0x1DC;  // float32 
	constexpr uint32_t m_bInCrouch = 0x1E0;  // bool 
	constexpr uint32_t m_nCrouchState = 0x1E4;  // uint32 
	constexpr uint32_t m_flCrouchTransitionStartTime = 0x1E8;  // GameTime_t 
	constexpr uint32_t m_bDucked = 0x1EC;  // bool 
	constexpr uint32_t m_bDucking = 0x1ED;  // bool 
	constexpr uint32_t m_bInDuckJump = 0x1EE;  // bool 
	constexpr uint32_t m_groundNormal = 0x1F0;  // Vector 
	constexpr uint32_t m_flSurfaceFriction = 0x1FC;  // float32 
	constexpr uint32_t m_surfaceProps = 0x200;  // CUtlStringToken 
	constexpr uint32_t m_nStepside = 0x210;  // int32 
	constexpr uint32_t m_iTargetVolume = 0x214;  // int32 
	constexpr uint32_t m_vecSmoothedVelocity = 0x218;  // Vector 
}

// Offset: 0x7ffe05884a50 
// N. Class: 71 
// Fields: 4 
namespace CPlayer_ObserverServices
{
	constexpr uint32_t m_iObserverMode = 0x40;  // uint8 
	constexpr uint32_t m_hObserverTarget = 0x44;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iObserverLastMode = 0x48;  // ObserverMode_t 
	constexpr uint32_t m_bForcedObserverMode = 0x4C;  // bool 
}

// Offset: 0x0 
// N. Class: 72 
// Fields: 0 
namespace CPlayer_UseServices
{
}

// Offset: 0x0 
// N. Class: 73 
// Fields: 0 
namespace CPlayer_WaterServices
{
}

// Offset: 0x7ffe05870bc0 
// N. Class: 74 
// Fields: 8 
namespace CBasePlayerWeapon
{
	constexpr uint32_t m_nNextPrimaryAttackTick = 0xD30;  // GameTick_t 
	constexpr uint32_t m_flNextPrimaryAttackTickRatio = 0xD34;  // float32 
	constexpr uint32_t m_nNextSecondaryAttackTick = 0xD38;  // GameTick_t 
	constexpr uint32_t m_flNextSecondaryAttackTickRatio = 0xD3C;  // float32 
	constexpr uint32_t m_iClip1 = 0xD40;  // int32 
	constexpr uint32_t m_iClip2 = 0xD44;  // int32 
	constexpr uint32_t m_pReserveAmmo = 0xD48;  // int32[2] 
	constexpr uint32_t m_OnPlayerUse = 0xD50;  // CEntityIOOutput 
}

// Offset: 0x7ffe058843e0 
// N. Class: 75 
// Fields: 5 
namespace CPlayer_WeaponServices
{
	constexpr uint32_t m_hMyWeapons = 0x40;  // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > 
	constexpr uint32_t m_hActiveWeapon = 0x58;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_hLastWeapon = 0x5C;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_iAmmo = 0x60;  // uint16[32] 
	constexpr uint32_t m_bPreventWeaponPickup = 0xA0;  // bool 
}

// Offset: 0x7ffe058329b0 
// N. Class: 76 
// Fields: 5 
namespace AmmoTypeInfo_t
{
	constexpr uint32_t m_nMaxCarry = 0x10;  // int32 
	constexpr uint32_t m_nSplashSize = 0x1C;  // CRangeInt 
	constexpr uint32_t m_nFlags = 0x24;  // AmmoFlags_t 
	constexpr uint32_t m_flMass = 0x28;  // float32 
	constexpr uint32_t m_flSpeed = 0x2C;  // CRangeFloat 
}

// Offset: 0x7ffe05832d80 
// N. Class: 77 
// Fields: 2 
namespace CAnimGraphControllerBase
{
	constexpr uint32_t m_sDestructiblePartDestroyedHitGroup = 0x18;  // CAnimGraphParamOptionalRef< char* > 
	constexpr uint32_t m_nDestructiblePartDestroyedPartIndex = 0x40;  // CAnimGraphParamOptionalRef< int32 > 
}

// Offset: 0x7ffe05833930 
// N. Class: 78 
// Fields: 14 
namespace CBaseAnimGraphController
{
	constexpr uint32_t m_animGraphNetworkedVars = 0x18;  // CAnimGraphNetworkedVariables 
	constexpr uint32_t m_bSequenceFinished = 0x220;  // bool 
	constexpr uint32_t m_flSoundSyncTime = 0x224;  // float32 
	constexpr uint32_t m_nActiveIKChainMask = 0x228;  // uint32 
	constexpr uint32_t m_hSequence = 0x22C;  // HSequence 
	constexpr uint32_t m_flSeqStartTime = 0x230;  // GameTime_t 
	constexpr uint32_t m_flSeqFixedCycle = 0x234;  // float32 
	constexpr uint32_t m_nAnimLoopMode = 0x238;  // AnimLoopMode_t 
	constexpr uint32_t m_flPlaybackRate = 0x23C;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_nNotifyState = 0x248;  // SequenceFinishNotifyState_t 
	constexpr uint32_t m_bNetworkedAnimationInputsChanged = 0x24A;  // bool 
	constexpr uint32_t m_bNetworkedSequenceChanged = 0x24B;  // bool 
	constexpr uint32_t m_bLastUpdateSkipped = 0x24C;  // bool 
	constexpr uint32_t m_flPrevAnimUpdateTime = 0x250;  // GameTime_t 
}

// Offset: 0x7ffe05833be0 
// N. Class: 79 
// Fields: 1 
namespace CBodyComponentBaseAnimGraph
{
	constexpr uint32_t m_animationController = 0x490;  // CBaseAnimGraphController 
}

// Offset: 0x7ffe05832ac0 
// N. Class: 80 
// Fields: 2 
namespace EntityRenderAttribute_t
{
	constexpr uint32_t m_ID = 0x30;  // CUtlStringToken 
	constexpr uint32_t m_Values = 0x34;  // Vector4D 
}

// Offset: 0x7ffe05832bf0 
// N. Class: 81 
// Fields: 1 
namespace ModelConfigHandle_t
{
	constexpr uint32_t m_Value = 0x0;  // uint32 
}

// Offset: 0x7ffe05833410 
// N. Class: 82 
// Fields: 33 
namespace CBaseModelEntity
{
	constexpr uint32_t m_CRenderComponent = 0x4E0;  // CRenderComponent* 
	constexpr uint32_t m_CHitboxComponent = 0x4E8;  // CHitboxComponent 
	constexpr uint32_t m_nDestructiblePartInitialStateDestructed0 = 0x510;  // HitGroup_t 
	constexpr uint32_t m_nDestructiblePartInitialStateDestructed1 = 0x514;  // HitGroup_t 
	constexpr uint32_t m_nDestructiblePartInitialStateDestructed2 = 0x518;  // HitGroup_t 
	constexpr uint32_t m_nDestructiblePartInitialStateDestructed3 = 0x51C;  // HitGroup_t 
	constexpr uint32_t m_nDestructiblePartInitialStateDestructed4 = 0x520;  // HitGroup_t 
	constexpr uint32_t m_nLastHitDestructiblePartIndex = 0x524;  // int32 
	constexpr uint32_t m_LastHitGroup = 0x550;  // HitGroup_t 
	constexpr uint32_t m_flDissolveStartTime = 0x554;  // GameTime_t 
	constexpr uint32_t m_OnIgnite = 0x558;  // CEntityIOOutput 
	constexpr uint32_t m_nRenderMode = 0x580;  // RenderMode_t 
	constexpr uint32_t m_nRenderFX = 0x581;  // RenderFx_t 
	constexpr uint32_t m_bAllowFadeInView = 0x582;  // bool 
	constexpr uint32_t m_clrRender = 0x5A0;  // Color 
	constexpr uint32_t m_vecRenderAttributes = 0x5A8;  // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > 
	constexpr uint32_t m_bRenderToCubemaps = 0x5F8;  // bool 
	constexpr uint32_t m_bNoInterpolate = 0x5F9;  // bool 
	constexpr uint32_t m_Collision = 0x600;  // CCollisionProperty 
	constexpr uint32_t m_Glow = 0x6B0;  // CGlowProperty 
	constexpr uint32_t m_flGlowBackfaceMult = 0x708;  // float32 
	constexpr uint32_t m_fadeMinDist = 0x70C;  // float32 
	constexpr uint32_t m_fadeMaxDist = 0x710;  // float32 
	constexpr uint32_t m_flFadeScale = 0x714;  // float32 
	constexpr uint32_t m_flShadowStrength = 0x718;  // float32 
	constexpr uint32_t m_nObjectCulling = 0x71C;  // uint8 
	constexpr uint32_t m_nAddDecal = 0x720;  // int32 
	constexpr uint32_t m_vDecalPosition = 0x724;  // Vector 
	constexpr uint32_t m_vDecalForwardAxis = 0x730;  // Vector 
	constexpr uint32_t m_flDecalHealBloodRate = 0x73C;  // float32 
	constexpr uint32_t m_flDecalHealHeightRate = 0x740;  // float32 
	constexpr uint32_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x748;  // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > 
	constexpr uint32_t m_vecViewOffset = 0x760;  // CNetworkViewOffsetVector 
}

// Offset: 0x7ffe05832dc0 
// N. Class: 83 
// Fields: 4 
namespace ActiveModelConfig_t
{
	constexpr uint32_t m_Handle = 0x28;  // ModelConfigHandle_t 
	constexpr uint32_t m_Name = 0x30;  // CUtlSymbolLarge 
	constexpr uint32_t m_AssociatedEntities = 0x38;  // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > 
	constexpr uint32_t m_AssociatedEntityNames = 0x50;  // CNetworkUtlVectorBase< CUtlSymbolLarge > 
}

// Offset: 0x0 
// N. Class: 84 
// Fields: 0 
namespace CBodyComponentBaseModelEntity
{
}

// Offset: 0x7ffe05834100 
// N. Class: 85 
// Fields: 10 
namespace CDestructiblePartsSystemData_PartData
{
	constexpr uint32_t m_sName = 0x0;  // CUtlString 
	constexpr uint32_t m_sBreakablePieceName = 0x8;  // CGlobalSymbol 
	constexpr uint32_t m_sBodyGroupName = 0x10;  // CGlobalSymbol 
	constexpr uint32_t m_nBodyGroupValue = 0x18;  // int32 
	constexpr uint32_t m_sAnimGraphParamName_PartDestroyed = 0x20;  // CGlobalSymbol 
	constexpr uint32_t m_sAnimGraphParamName_PartNormalizedHealth = 0x28;  // CGlobalSymbol 
	constexpr uint32_t m_nHealth = 0x30;  // CSkillInt 
	constexpr uint32_t m_nDamagePassthroughType = 0x40;  // EDestructiblePartDamagePassThroughType 
	constexpr uint32_t m_bKillNPCOnDestruction = 0x44;  // bool 
	constexpr uint32_t m_sCustomDeathHandshake = 0x48;  // CGlobalSymbol 
}

// Offset: 0x7ffe058342e0 
// N. Class: 86 
// Fields: 3 
namespace CDestructiblePartsSystemData_HitGroupInfoAndPartData
{
	constexpr uint32_t m_sName = 0x0;  // CUtlString 
	constexpr uint32_t m_DestructiblePartsData = 0x8;  // CUtlVector< CDestructiblePartsSystemData_PartData > 
	constexpr uint32_t m_bDisableHitGroupWhenDestroyed = 0x20;  // bool 
}

// Offset: 0x7ffe05834450 
// N. Class: 87 
// Fields: 1 
namespace CDestructiblePartsSystemData
{
	constexpr uint32_t m_DestructiblePartsDataByHitGroup = 0x0;  // CUtlOrderedMap< HitGroup_t, CDestructiblePartsSystemData_HitGroupInfoAndPartData > 
}

// Offset: 0x7ffe058345c8 
// N. Class: 88 
// Fields: 1 
namespace CDestructiblePartRuntimeData
{
	constexpr uint32_t m_nHealthRemaining = 0x0;  // int32 
}

// Offset: 0x7ffe058347a8 
// N. Class: 89 
// Fields: 1 
namespace CDestructiblePartRuntimeDataVector
{
	constexpr uint32_t m_DestructiblePartsRuntimeData = 0x0;  // CUtlVector< CDestructiblePartRuntimeData > 
}

// Offset: 0x7ffe05837830 
// N. Class: 90 
// Fields: 7 
namespace CNetworkOriginCellCoordQuantizedVector
{
	constexpr uint32_t m_cellX = 0x10;  // uint16 
	constexpr uint32_t m_cellY = 0x12;  // uint16 
	constexpr uint32_t m_cellZ = 0x14;  // uint16 
	constexpr uint32_t m_nOutsideWorld = 0x16;  // uint16 
	constexpr uint32_t m_vecX = 0x18;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecY = 0x20;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecZ = 0x28;  // CNetworkedQuantizedFloat 
}

// Offset: 0x7ffe058379d0 
// N. Class: 91 
// Fields: 3 
namespace CNetworkOriginQuantizedVector
{
	constexpr uint32_t m_vecX = 0x10;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecY = 0x18;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecZ = 0x20;  // CNetworkedQuantizedFloat 
}

// Offset: 0x7ffe05837af0 
// N. Class: 92 
// Fields: 3 
namespace CNetworkVelocityVector
{
	constexpr uint32_t m_vecX = 0x10;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecY = 0x18;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecZ = 0x20;  // CNetworkedQuantizedFloat 
}

// Offset: 0x7ffe05837d20 
// N. Class: 93 
// Fields: 3 
namespace CNetworkViewOffsetVector
{
	constexpr uint32_t m_vecX = 0x10;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecY = 0x18;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_vecZ = 0x20;  // CNetworkedQuantizedFloat 
}

// Offset: 0x7ffe05837df0 
// N. Class: 94 
// Fields: 2 
namespace CRopeOverlapHit
{
	constexpr uint32_t m_hEntity = 0x0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_vecOverlappingLinks = 0x8;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe05837fb0 
// N. Class: 95 
// Fields: 2 
namespace CGameSceneNodeHandle
{
	constexpr uint32_t m_hOwner = 0x8;  // CEntityHandle 
	constexpr uint32_t m_name = 0xC;  // CUtlStringToken 
}

// Offset: 0x7ffe0583bcd0 
// N. Class: 96 
// Fields: 10 
namespace HullFlags_t
{
	constexpr uint32_t m_bHull_Human = 0x0;  // bool 
	constexpr uint32_t m_bHull_SmallCentered = 0x1;  // bool 
	constexpr uint32_t m_bHull_WideHuman = 0x2;  // bool 
	constexpr uint32_t m_bHull_Tiny = 0x3;  // bool 
	constexpr uint32_t m_bHull_Medium = 0x4;  // bool 
	constexpr uint32_t m_bHull_TinyCentered = 0x5;  // bool 
	constexpr uint32_t m_bHull_Large = 0x6;  // bool 
	constexpr uint32_t m_bHull_LargeCentered = 0x7;  // bool 
	constexpr uint32_t m_bHull_MediumTall = 0x8;  // bool 
	constexpr uint32_t m_bHull_Small = 0x9;  // bool 
}

// Offset: 0x0 
// N. Class: 97 
// Fields: 0 
namespace IChoreoServices
{
}

// Offset: 0x0 
// N. Class: 98 
// Fields: 0 
namespace CPathSimpleAPI
{
}

// Offset: 0x7ffe0583f9a0 
// N. Class: 99 
// Fields: 6 
namespace SequenceHistory_t
{
	constexpr uint32_t m_hSequence = 0x0;  // HSequence 
	constexpr uint32_t m_flSeqStartTime = 0x4;  // GameTime_t 
	constexpr uint32_t m_flSeqFixedCycle = 0x8;  // float32 
	constexpr uint32_t m_nSeqLoopMode = 0xC;  // AnimLoopMode_t 
	constexpr uint32_t m_flPlaybackRate = 0x10;  // float32 
	constexpr uint32_t m_flCyclesPerSecond = 0x14;  // float32 
}

// Offset: 0x0 
// N. Class: 100 
// Fields: 0 
namespace ISkeletonAnimationController
{
}

// Offset: 0x7ffe0583fb40 
// N. Class: 101 
// Fields: 1 
namespace CSkeletonAnimationController
{
	constexpr uint32_t m_pSkeletonInstance = 0x8;  // CSkeletonInstance* 
}

// Offset: 0x7ffe0583fd10 
// N. Class: 102 
// Fields: 8 
namespace CNetworkedSequenceOperation
{
	constexpr uint32_t m_hSequence = 0x8;  // HSequence 
	constexpr uint32_t m_flPrevCycle = 0xC;  // float32 
	constexpr uint32_t m_flCycle = 0x10;  // float32 
	constexpr uint32_t m_flWeight = 0x14;  // CNetworkedQuantizedFloat 
	constexpr uint32_t m_bSequenceChangeNetworked = 0x1C;  // bool 
	constexpr uint32_t m_bDiscontinuity = 0x1D;  // bool 
	constexpr uint32_t m_flPrevCycleFromDiscontinuity = 0x20;  // float32 
	constexpr uint32_t m_flPrevCycleForAnimEventDetection = 0x24;  // float32 
}

// Offset: 0x7ffe0583ff10 
// N. Class: 103 
// Fields: 7 
namespace CModelState
{
	constexpr uint32_t m_hModel = 0xA0;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_ModelName = 0xA8;  // CUtlSymbolLarge 
	constexpr uint32_t m_bClientClothCreationSuppressed = 0xE8;  // bool 
	constexpr uint32_t m_MeshGroupMask = 0x198;  // uint64 
	constexpr uint32_t m_nIdealMotionType = 0x21A;  // int8 
	constexpr uint32_t m_nForceLOD = 0x21B;  // int8 
	constexpr uint32_t m_nClothUpdateFlags = 0x21C;  // int8 
}

// Offset: 0x7ffe05842170 
// N. Class: 104 
// Fields: 2 
namespace IntervalTimer
{
	constexpr uint32_t m_timestamp = 0x8;  // GameTime_t 
	constexpr uint32_t m_nWorldGroupId = 0xC;  // WorldGroupId_t 
}

// Offset: 0x7ffe05842610 
// N. Class: 105 
// Fields: 3 
namespace EngineCountdownTimer
{
	constexpr uint32_t m_duration = 0x8;  // float32 
	constexpr uint32_t m_timestamp = 0xC;  // float32 
	constexpr uint32_t m_timescale = 0x10;  // float32 
}

// Offset: 0x7ffe05842790 
// N. Class: 106 
// Fields: 7 
namespace CTimeline
{
	constexpr uint32_t m_flValues = 0x10;  // float32[64] 
	constexpr uint32_t m_nValueCounts = 0x110;  // int32[64] 
	constexpr uint32_t m_nBucketCount = 0x210;  // int32 
	constexpr uint32_t m_flInterval = 0x214;  // float32 
	constexpr uint32_t m_flFinalValue = 0x218;  // float32 
	constexpr uint32_t m_nCompressionType = 0x21C;  // TimelineCompression_t 
	constexpr uint32_t m_bStopped = 0x220;  // bool 
}

// Offset: 0x7ffe05842fa0 
// N. Class: 107 
// Fields: 24 
namespace CAnimGraphNetworkedVariables
{
	constexpr uint32_t m_PredNetByteVariables = 0x20;  // CNetworkUtlVectorBase< uint8 > 
	constexpr uint32_t m_PredNetUInt16Variables = 0x38;  // CNetworkUtlVectorBase< uint16 > 
	constexpr uint32_t m_PredNetIntVariables = 0x50;  // CNetworkUtlVectorBase< int32 > 
	constexpr uint32_t m_PredNetUInt32Variables = 0x68;  // CNetworkUtlVectorBase< uint32 > 
	constexpr uint32_t m_PredNetUInt64Variables = 0x80;  // CNetworkUtlVectorBase< uint64 > 
	constexpr uint32_t m_PredNetFloatVariables = 0x98;  // CNetworkUtlVectorBase< float32 > 
	constexpr uint32_t m_PredNetVectorVariables = 0xB0;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_PredNetQuaternionVariables = 0xC8;  // CNetworkUtlVectorBase< Quaternion > 
	constexpr uint32_t m_PredNetGlobalSymbolVariables = 0xE0;  // CNetworkUtlVectorBase< CGlobalSymbol > 
	constexpr uint32_t m_OwnerOnlyPredNetBoolVariables = 0xF8;  // CNetworkUtlVectorBase< uint32 > 
	constexpr uint32_t m_OwnerOnlyPredNetByteVariables = 0x110;  // CNetworkUtlVectorBase< uint8 > 
	constexpr uint32_t m_OwnerOnlyPredNetUInt16Variables = 0x128;  // CNetworkUtlVectorBase< uint16 > 
	constexpr uint32_t m_OwnerOnlyPredNetIntVariables = 0x140;  // CNetworkUtlVectorBase< int32 > 
	constexpr uint32_t m_OwnerOnlyPredNetUInt32Variables = 0x158;  // CNetworkUtlVectorBase< uint32 > 
	constexpr uint32_t m_OwnerOnlyPredNetUInt64Variables = 0x170;  // CNetworkUtlVectorBase< uint64 > 
	constexpr uint32_t m_OwnerOnlyPredNetFloatVariables = 0x188;  // CNetworkUtlVectorBase< float32 > 
	constexpr uint32_t m_OwnerOnlyPredNetVectorVariables = 0x1A0;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8;  // CNetworkUtlVectorBase< Quaternion > 
	constexpr uint32_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0;  // CNetworkUtlVectorBase< CGlobalSymbol > 
	constexpr uint32_t m_nBoolVariablesCount = 0x1E8;  // int32 
	constexpr uint32_t m_nOwnerOnlyBoolVariablesCount = 0x1EC;  // int32 
	constexpr uint32_t m_nRandomSeedOffset = 0x1F0;  // int32 
	constexpr uint32_t m_flLastTeleportTime = 0x1F4;  // float32 
}

// Offset: 0x0 
// N. Class: 108 
// Fields: 0 
namespace CFootstepTableHandle
{
}

// Offset: 0x7ffe05850540 
// N. Class: 109 
// Fields: 8 
namespace ResponseFollowup
{
	constexpr uint32_t followup_concept = 0x0;  // char* 
	constexpr uint32_t followup_contexts = 0x8;  // char* 
	constexpr uint32_t followup_delay = 0x10;  // float32 
	constexpr uint32_t followup_target = 0x14;  // char* 
	constexpr uint32_t followup_entityiotarget = 0x1C;  // char* 
	constexpr uint32_t followup_entityioinput = 0x24;  // char* 
	constexpr uint32_t followup_entityiodelay = 0x2C;  // float32 
	constexpr uint32_t bFired = 0x30;  // bool 
}

// Offset: 0x7ffe058506b0 
// N. Class: 110 
// Fields: 3 
namespace ResponseParams
{
	constexpr uint32_t odds = 0x10;  // int16 
	constexpr uint32_t flags = 0x12;  // int16 
	constexpr uint32_t m_pFollowup = 0x18;  // ResponseFollowup* 
}

// Offset: 0x7ffe05850780 
// N. Class: 111 
// Fields: 2 
namespace CResponseCriteriaSet
{
	constexpr uint32_t m_nNumPrefixedContexts = 0x20;  // int32 
	constexpr uint32_t m_bOverrideOnAppend = 0x24;  // bool 
}

// Offset: 0x7ffe05850830 
// N. Class: 112 
// Fields: 11 
namespace CRR_Response
{
	constexpr uint32_t m_Type = 0x0;  // uint8 
	constexpr uint32_t m_szResponseName = 0x1;  // char[192] 
	constexpr uint32_t m_szMatchingRule = 0xC1;  // char[128] 
	constexpr uint32_t m_Params = 0x148;  // ResponseParams 
	constexpr uint32_t m_fMatchScore = 0x168;  // float32 
	constexpr uint32_t m_szSpeakerContext = 0x170;  // char* 
	constexpr uint32_t m_szWorldContext = 0x178;  // char* 
	constexpr uint32_t m_Followup = 0x180;  // ResponseFollowup 
	constexpr uint32_t m_recipientFilter = 0x1B2;  // CUtlSymbol 
	constexpr uint32_t m_pchCriteriaNames = 0x1B8;  // CUtlVector< CUtlSymbol > 
	constexpr uint32_t m_pchCriteriaValues = 0x1D0;  // CUtlVector< char* > 
}

// Offset: 0x7ffe05888ee0 
// N. Class: 113 
// Fields: 10 
namespace CAI_Expresser
{
	constexpr uint32_t m_flStopTalkTime = 0x38;  // GameTime_t 
	constexpr uint32_t m_flStopTalkTimeWithoutDelay = 0x3C;  // GameTime_t 
	constexpr uint32_t m_flBlockedTalkTime = 0x40;  // GameTime_t 
	constexpr uint32_t m_voicePitch = 0x44;  // int32 
	constexpr uint32_t m_flLastTimeAcceptedSpeak = 0x48;  // GameTime_t 
	constexpr uint32_t m_bAllowSpeakingInterrupts = 0x4C;  // bool 
	constexpr uint32_t m_bConsiderSceneInvolvementAsSpeech = 0x4D;  // bool 
	constexpr uint32_t m_bSceneEntityDisabled = 0x4E;  // bool 
	constexpr uint32_t m_nLastSpokenPriority = 0x50;  // int32 
	constexpr uint32_t m_pOuter = 0x70;  // CBaseFlex* 
}

// Offset: 0x7ffe058327f0 
// N. Class: 114 
// Fields: 7 
namespace CBaseFlex
{
	constexpr uint32_t m_flexWeight = 0x9A8;  // CNetworkUtlVectorBase< float32 > 
	constexpr uint32_t m_vLookTargetPosition = 0x9C0;  // Vector 
	constexpr uint32_t m_blinktoggle = 0x9CC;  // bool 
	constexpr uint32_t m_flAllowResponsesEndTime = 0xA20;  // GameTime_t 
	constexpr uint32_t m_flLastFlexAnimationTime = 0xA24;  // GameTime_t 
	constexpr uint32_t m_nNextSceneEventId = 0xA28;  // SceneEventId_t 
	constexpr uint32_t m_bUpdateLayerPriorities = 0xA2C;  // bool 
}

// Offset: 0x7ffe058891f0 
// N. Class: 115 
// Fields: 1 
namespace CResponseQueue
{
	constexpr uint32_t m_ExpresserTargets = 0x48;  // CUtlVector< CAI_Expresser* > 
}

// Offset: 0x7ffe05889290 
// N. Class: 116 
// Fields: 5 
namespace CResponseQueue::CDeferredResponse
{
	constexpr uint32_t m_contexts = 0x8;  // CResponseCriteriaSet 
	constexpr uint32_t m_fDispatchTime = 0x30;  // float32 
	constexpr uint32_t m_hIssuer = 0x34;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_response = 0x40;  // CRR_Response 
	constexpr uint32_t m_bResponseValid = 0x228;  // bool 
}

// Offset: 0x7ffe05889410 
// N. Class: 117 
// Fields: 1 
namespace CAI_ExpresserWithFollowup
{
	constexpr uint32_t m_pPostponedFollowup = 0x78;  // ResponseFollowup* 
}

// Offset: 0x7ffe05889530 
// N. Class: 118 
// Fields: 1 
namespace CMultiplayer_Expresser
{
	constexpr uint32_t m_bAllowMultipleScenes = 0x88;  // bool 
}

// Offset: 0x0 
// N. Class: 119 
// Fields: 0 
namespace CBaseEntityAPI
{
}

// Offset: 0x7ffe058987d0 
// N. Class: 120 
// Fields: 10 
namespace CCommentarySystem
{
	constexpr uint32_t m_bCommentaryConvarsChanging = 0x11;  // bool 
	constexpr uint32_t m_bCommentaryEnabledMidGame = 0x12;  // bool 
	constexpr uint32_t m_flNextTeleportTime = 0x14;  // GameTime_t 
	constexpr uint32_t m_iTeleportStage = 0x18;  // int32 
	constexpr uint32_t m_bCheatState = 0x1C;  // bool 
	constexpr uint32_t m_bIsFirstSpawnGroupToLoad = 0x1D;  // bool 
	constexpr uint32_t m_hCurrentNode = 0x38;  // CHandle< CPointCommentaryNode > 
	constexpr uint32_t m_hActiveCommentaryNode = 0x3C;  // CHandle< CPointCommentaryNode > 
	constexpr uint32_t m_hLastCommentaryNode = 0x40;  // CHandle< CPointCommentaryNode > 
	constexpr uint32_t m_vecNodes = 0x48;  // CUtlVector< CHandle< CPointCommentaryNode > > 
}

// Offset: 0x7ffe05898280 
// N. Class: 121 
// Fields: 30 
namespace CPointCommentaryNode
{
	constexpr uint32_t m_iszPreCommands = 0x9A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszPostCommands = 0x9B0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszCommentaryFile = 0x9B8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszViewTarget = 0x9C0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hViewTarget = 0x9C8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hViewTargetAngles = 0x9CC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iszViewPosition = 0x9D0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hViewPosition = 0x9D8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hViewPositionMover = 0x9DC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bPreventMovement = 0x9E0;  // bool 
	constexpr uint32_t m_bUnderCrosshair = 0x9E1;  // bool 
	constexpr uint32_t m_bUnstoppable = 0x9E2;  // bool 
	constexpr uint32_t m_flFinishedTime = 0x9E4;  // GameTime_t 
	constexpr uint32_t m_vecFinishOrigin = 0x9E8;  // Vector 
	constexpr uint32_t m_vecOriginalAngles = 0x9F4;  // QAngle 
	constexpr uint32_t m_vecFinishAngles = 0xA00;  // QAngle 
	constexpr uint32_t m_bPreventChangesWhileMoving = 0xA0C;  // bool 
	constexpr uint32_t m_bDisabled = 0xA0D;  // bool 
	constexpr uint32_t m_vecTeleportOrigin = 0xA10;  // Vector 
	constexpr uint32_t m_flAbortedPlaybackAt = 0xA1C;  // GameTime_t 
	constexpr uint32_t m_pOnCommentaryStarted = 0xA20;  // CEntityIOOutput 
	constexpr uint32_t m_pOnCommentaryStopped = 0xA48;  // CEntityIOOutput 
	constexpr uint32_t m_bActive = 0xA70;  // bool 
	constexpr uint32_t m_flStartTime = 0xA74;  // GameTime_t 
	constexpr uint32_t m_flStartTimeInCommentary = 0xA78;  // float32 
	constexpr uint32_t m_iszTitle = 0xA80;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSpeakers = 0xA88;  // CUtlSymbolLarge 
	constexpr uint32_t m_iNodeNumber = 0xA90;  // int32 
	constexpr uint32_t m_iNodeNumberMax = 0xA94;  // int32 
	constexpr uint32_t m_bListenedTo = 0xA98;  // bool 
}

// Offset: 0x7ffe058a2b10 
// N. Class: 122 
// Fields: 1 
namespace CPhysicsShake
{
	constexpr uint32_t m_force = 0x8;  // Vector 
}

// Offset: 0x7ffe058adc60 
// N. Class: 123 
// Fields: 18 
namespace CGameScriptedMoveData
{
	constexpr uint32_t m_vAccumulatedRootMotion = 0x0;  // Vector 
	constexpr uint32_t m_vDest = 0xC;  // Vector 
	constexpr uint32_t m_vSrc = 0x18;  // Vector 
	constexpr uint32_t m_angSrc = 0x24;  // QAngle 
	constexpr uint32_t m_angDst = 0x30;  // QAngle 
	constexpr uint32_t m_angCurrent = 0x3C;  // QAngle 
	constexpr uint32_t m_hDestEntity = 0x48;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flLockedSpeed = 0x4C;  // float32 
	constexpr uint32_t m_flAngRate = 0x50;  // float32 
	constexpr uint32_t m_flDuration = 0x54;  // float32 
	constexpr uint32_t m_flStartTime = 0x58;  // GameTime_t 
	constexpr uint32_t m_bActive = 0x5C;  // bool 
	constexpr uint32_t m_bTeleportOnEnd = 0x5D;  // bool 
	constexpr uint32_t m_bIgnoreRotation = 0x5E;  // bool 
	constexpr uint32_t m_nType = 0x60;  // ScriptedMoveType_t 
	constexpr uint32_t m_bSuccess = 0x64;  // bool 
	constexpr uint32_t m_nForcedCrouchState = 0x68;  // ForcedCrouchState_t 
	constexpr uint32_t m_bIgnoreCollisions = 0x6C;  // bool 
}

// Offset: 0x7ffe058ae000 
// N. Class: 124 
// Fields: 6 
namespace CGameScriptedMoveDef_t
{
	constexpr uint32_t m_nType = 0x0;  // ScriptedMoveType_t 
	constexpr uint32_t m_vDestOffset = 0x4;  // Vector 
	constexpr uint32_t m_hDestEntity = 0x10;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_angDest = 0x14;  // QAngle 
	constexpr uint32_t m_flDuration = 0x20;  // float32 
	constexpr uint32_t m_flAngRate = 0x24;  // float32 
}

// Offset: 0x7ffe058ae1a0 
// N. Class: 125 
// Fields: 5 
namespace CGameChoreoServices
{
	constexpr uint32_t m_hOwner = 0x8;  // CHandle< CBaseAnimGraph > 
	constexpr uint32_t m_hScriptedSequence = 0xC;  // CHandle< CScriptedSequence > 
	constexpr uint32_t m_scriptState = 0x10;  // IChoreoServices::ScriptState_t 
	constexpr uint32_t m_choreoState = 0x14;  // IChoreoServices::ChoreoState_t 
	constexpr uint32_t m_flTimeStartedState = 0x18;  // GameTime_t 
}

// Offset: 0x7ffe058e1d10 
// N. Class: 126 
// Fields: 72 
namespace CScriptedSequence
{
	constexpr uint32_t m_iszEntry = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszPreIdle = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszPlay = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszPostIdle = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszModifierToAddOnPlay = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszNextScript = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszEntity = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSyncGroup = 0x518;  // CUtlSymbolLarge 
	constexpr uint32_t m_nMoveTo = 0x520;  // ScriptedMoveTo_t 
	constexpr uint32_t m_nMoveToGait = 0x524;  // MovementGait_t 
	constexpr uint32_t m_nHeldWeaponBehavior = 0x528;  // ScriptedHeldWeaponBehavior_t 
	constexpr uint32_t m_bIsPlayingPreIdle = 0x52C;  // bool 
	constexpr uint32_t m_bIsPlayingEntry = 0x52D;  // bool 
	constexpr uint32_t m_bIsPlayingAction = 0x52E;  // bool 
	constexpr uint32_t m_bIsPlayingPostIdle = 0x52F;  // bool 
	constexpr uint32_t m_bDontRotateOther = 0x530;  // bool 
	constexpr uint32_t m_bIsRepeatable = 0x531;  // bool 
	constexpr uint32_t m_bShouldLeaveCorpse = 0x532;  // bool 
	constexpr uint32_t m_bStartOnSpawn = 0x533;  // bool 
	constexpr uint32_t m_bDisallowInterrupts = 0x534;  // bool 
	constexpr uint32_t m_bCanOverrideNPCState = 0x535;  // bool 
	constexpr uint32_t m_bDontTeleportAtEnd = 0x536;  // bool 
	constexpr uint32_t m_bHighPriority = 0x537;  // bool 
	constexpr uint32_t m_bHideDebugComplaints = 0x538;  // bool 
	constexpr uint32_t m_bContinueOnDeath = 0x539;  // bool 
	constexpr uint32_t m_bLoopPreIdleSequence = 0x53A;  // bool 
	constexpr uint32_t m_bLoopActionSequence = 0x53B;  // bool 
	constexpr uint32_t m_bLoopPostIdleSequence = 0x53C;  // bool 
	constexpr uint32_t m_bSynchPostIdles = 0x53D;  // bool 
	constexpr uint32_t m_bIgnoreLookAt = 0x53E;  // bool 
	constexpr uint32_t m_bIgnoreGravity = 0x53F;  // bool 
	constexpr uint32_t m_bDisableNPCCollisions = 0x540;  // bool 
	constexpr uint32_t m_bKeepAnimgraphLockedPost = 0x541;  // bool 
	constexpr uint32_t m_bDontAddModifiers = 0x542;  // bool 
	constexpr uint32_t m_flRadius = 0x544;  // float32 
	constexpr uint32_t m_flRepeat = 0x548;  // float32 
	constexpr uint32_t m_flPlayAnimFadeInTime = 0x54C;  // float32 
	constexpr uint32_t m_flMoveInterpTime = 0x550;  // float32 
	constexpr uint32_t m_flAngRate = 0x554;  // float32 
	constexpr uint32_t m_bWaitUntilMoveCompletesToStartAnimation = 0x558;  // bool 
	constexpr uint32_t m_nNotReadySequenceCount = 0x55C;  // int32 
	constexpr uint32_t m_startTime = 0x560;  // GameTime_t 
	constexpr uint32_t m_bWaitForBeginSequence = 0x564;  // bool 
	constexpr uint32_t m_saved_effects = 0x568;  // int32 
	constexpr uint32_t m_savedFlags = 0x56C;  // int32 
	constexpr uint32_t m_savedCollisionGroup = 0x570;  // int32 
	constexpr uint32_t m_bInterruptable = 0x574;  // bool 
	constexpr uint32_t m_sequenceStarted = 0x575;  // bool 
	constexpr uint32_t m_bPositionRelativeToOtherEntity = 0x576;  // bool 
	constexpr uint32_t m_hTargetEnt = 0x578;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hNextCine = 0x57C;  // CHandle< CScriptedSequence > 
	constexpr uint32_t m_bThinking = 0x580;  // bool 
	constexpr uint32_t m_bInitiatedSelfDelete = 0x581;  // bool 
	constexpr uint32_t m_bIsTeleportingDueToMoveTo = 0x582;  // bool 
	constexpr uint32_t m_bAllowCustomInterruptConditions = 0x583;  // bool 
	constexpr uint32_t m_hForcedTarget = 0x584;  // CHandle< CBaseAnimGraph > 
	constexpr uint32_t m_bDontCancelOtherSequences = 0x588;  // bool 
	constexpr uint32_t m_bForceSynch = 0x589;  // bool 
	constexpr uint32_t m_bPreventUpdateYawOnFinish = 0x58A;  // bool 
	constexpr uint32_t m_bEnsureOnNavmeshOnFinish = 0x58B;  // bool 
	constexpr uint32_t m_onDeathBehavior = 0x58C;  // ScriptedOnDeath_t 
	constexpr uint32_t m_ConflictResponse = 0x590;  // ScriptedConflictResponse_t 
	constexpr uint32_t m_OnBeginSequence = 0x598;  // CEntityIOOutput 
	constexpr uint32_t m_OnActionStartOrLoop = 0x5C0;  // CEntityIOOutput 
	constexpr uint32_t m_OnEndSequence = 0x5E8;  // CEntityIOOutput 
	constexpr uint32_t m_OnPostIdleEndSequence = 0x610;  // CEntityIOOutput 
	constexpr uint32_t m_OnCancelSequence = 0x638;  // CEntityIOOutput 
	constexpr uint32_t m_OnCancelFailedSequence = 0x660;  // CEntityIOOutput 
	constexpr uint32_t m_OnScriptEvent = 0x688;  // CEntityIOOutput[8] 
	constexpr uint32_t m_matOtherToMain = 0x7D0;  // CTransform 
	constexpr uint32_t m_hInteractionMainEntity = 0x7F0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iPlayerDeathBehavior = 0x7F4;  // int32 
}

// Offset: 0x7ffe058c2e10 
// N. Class: 127 
// Fields: 4 
namespace CConstantForceController
{
	constexpr uint32_t m_linear = 0xC;  // Vector 
	constexpr uint32_t m_angular = 0x18;  // RotationVector 
	constexpr uint32_t m_linearSave = 0x24;  // Vector 
	constexpr uint32_t m_angularSave = 0x30;  // RotationVector 
}

// Offset: 0x7ffe058c37f0 
// N. Class: 128 
// Fields: 4 
namespace CMotorController
{
	constexpr uint32_t m_speed = 0x8;  // float32 
	constexpr uint32_t m_maxTorque = 0xC;  // float32 
	constexpr uint32_t m_axis = 0x10;  // Vector 
	constexpr uint32_t m_inertiaFactor = 0x1C;  // float32 
}

// Offset: 0x7ffe058eeb60 
// N. Class: 129 
// Fields: 4 
namespace CSoundEnvelope
{
	constexpr uint32_t m_current = 0x0;  // float32 
	constexpr uint32_t m_target = 0x4;  // float32 
	constexpr uint32_t m_rate = 0x8;  // float32 
	constexpr uint32_t m_forceupdate = 0xC;  // bool 
}

// Offset: 0x7ffe058eec80 
// N. Class: 130 
// Fields: 2 
namespace CCopyRecipientFilter
{
	constexpr uint32_t m_Flags = 0x8;  // int32 
	constexpr uint32_t m_Recipients = 0x10;  // CUtlVector< CPlayerSlot > 
}

// Offset: 0x7ffe058eed60 
// N. Class: 131 
// Fields: 13 
namespace CSoundPatch
{
	constexpr uint32_t m_pitch = 0x8;  // CSoundEnvelope 
	constexpr uint32_t m_volume = 0x18;  // CSoundEnvelope 
	constexpr uint32_t m_shutdownTime = 0x30;  // float32 
	constexpr uint32_t m_flLastTime = 0x34;  // float32 
	constexpr uint32_t m_iszSoundScriptName = 0x38;  // CUtlSymbolLarge 
	constexpr uint32_t m_hEnt = 0x40;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_soundEntityIndex = 0x44;  // CEntityIndex 
	constexpr uint32_t m_soundOrigin = 0x48;  // Vector 
	constexpr uint32_t m_isPlaying = 0x54;  // int32 
	constexpr uint32_t m_Filter = 0x58;  // CCopyRecipientFilter 
	constexpr uint32_t m_flCloseCaptionDuration = 0x80;  // float32 
	constexpr uint32_t m_bUpdatedSoundOrigin = 0x84;  // bool 
	constexpr uint32_t m_iszClassName = 0x88;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 132 
// Fields: 0 
namespace CTakeDamageInfoAPI
{
}

// Offset: 0x7ffe058dc0f0 
// N. Class: 133 
// Fields: 6 
namespace CPulseGraphComponentBase
{
	constexpr uint32_t m_hOwner = 0x8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bActivated = 0xC;  // bool 
	constexpr uint32_t m_sNameFixupStaticPrefix = 0x10;  // CUtlSymbolLarge 
	constexpr uint32_t m_sNameFixupParent = 0x18;  // CUtlSymbolLarge 
	constexpr uint32_t m_sNameFixupLocal = 0x20;  // CUtlSymbolLarge 
	constexpr uint32_t m_sProceduralWorldNameForRelays = 0x28;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058dbe58 
// N. Class: 134 
// Fields: 1 
namespace CPulseGraphInstance_ServerEntity
{
}

// Offset: 0x0 
// N. Class: 135 
// Fields: 0 
namespace CPulseGraphComponentPointServer
{
}

// Offset: 0x0 
// N. Class: 136 
// Fields: 0 
namespace IPulseComponentEntity
{
}

// Offset: 0x7ffe058da8a0 
// N. Class: 137 
// Fields: 1 
namespace CPulseCell_Value_FindEntByClassNameWithin
{
	constexpr uint32_t m_EntityType = 0x48;  // CUtlString 
}

// Offset: 0x7ffe058dac08 
// N. Class: 138 
// Fields: 1 
namespace CPulseCell_Value_FindEntByName
{
	constexpr uint32_t m_EntityType = 0x48;  // CUtlString 
}

// Offset: 0x7ffe058dad70 
// N. Class: 139 
// Fields: 2 
namespace CPulseCell_Step_FollowEntity
{
	constexpr uint32_t m_ParamBoneOrAttachName = 0x48;  // CUtlString 
	constexpr uint32_t m_ParamBoneOrAttachNameChild = 0x50;  // CUtlString 
}

// Offset: 0x7ffe058dae50 
// N. Class: 140 
// Fields: 1 
namespace CPulseCell_Step_SetAnimGraphParam
{
	constexpr uint32_t m_ParamName = 0x48;  // CUtlString 
}

// Offset: 0x7ffe058daf90 
// N. Class: 141 
// Fields: 5 
namespace CPulseCell_Outflow_ListenForEntityOutput
{
	constexpr uint32_t m_OnFired = 0x48;  // SignatureOutflow_Resume 
	constexpr uint32_t m_OnCanceled = 0x78;  // CPulse_ResumePoint 
	constexpr uint32_t m_strEntityOutput = 0xA8;  // CGlobalSymbol 
	constexpr uint32_t m_strEntityOutputParam = 0xB0;  // CUtlString 
	constexpr uint32_t m_bListenUntilCanceled = 0xB8;  // bool 
}

// Offset: 0x7ffe058db2a8 
// N. Class: 142 
// Fields: 1 
namespace CPulseCell_Outflow_ListenForEntityOutput::CursorState_t
{
	constexpr uint32_t m_entity = 0x0;  // CHandle< CBaseEntity > 
}

// Offset: 0x0 
// N. Class: 143 
// Fields: 0 
namespace CPulseServerFuncs
{
}

// Offset: 0x7ffe058db828 
// N. Class: 144 
// Fields: 1 
namespace CPulseCell_SoundEventStart
{
	constexpr uint32_t m_Type = 0x48;  // SoundEventStartType_t 
}

// Offset: 0x0 
// N. Class: 145 
// Fields: 0 
namespace CPulseServerFuncs_Sounds
{
}

// Offset: 0x7ffe058db660 
// N. Class: 146 
// Fields: 3 
namespace CPulseCell_Outflow_PlaySceneBase
{
	constexpr uint32_t m_OnFinished = 0x48;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0x78;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe058db750 
// N. Class: 147 
// Fields: 2 
namespace CPulseCell_Outflow_PlaySceneBase::CursorState_t
{
	constexpr uint32_t m_sceneInstance = 0x0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_mainActor = 0x4;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe058db870 
// N. Class: 148 
// Fields: 1 
namespace CPulseCell_Outflow_PlayVCD
{
	constexpr uint32_t m_vcdFilename = 0xC0;  // CUtlString 
}

// Offset: 0x7ffe058dbab8 
// N. Class: 149 
// Fields: 1 
namespace CPulseCell_Outflow_PlaySequence
{
	constexpr uint32_t m_ParamSequenceName = 0xC0;  // CUtlString 
}

// Offset: 0x7ffe058dbc40 
// N. Class: 150 
// Fields: 12 
namespace PulseScriptedSequenceData_t
{
	constexpr uint32_t m_nActorID = 0x0;  // int32 
	constexpr uint32_t m_szPreIdleSequence = 0x8;  // CUtlString 
	constexpr uint32_t m_szEntrySequence = 0x10;  // CUtlString 
	constexpr uint32_t m_szSequence = 0x18;  // CUtlString 
	constexpr uint32_t m_szExitSequence = 0x20;  // CUtlString 
	constexpr uint32_t m_nMoveTo = 0x28;  // ScriptedMoveTo_t 
	constexpr uint32_t m_nMoveToGait = 0x2C;  // MovementGait_t 
	constexpr uint32_t m_nHeldWeaponBehavior = 0x30;  // ScriptedHeldWeaponBehavior_t 
	constexpr uint32_t m_bLoopPreIdleSequence = 0x34;  // bool 
	constexpr uint32_t m_bLoopActionSequence = 0x35;  // bool 
	constexpr uint32_t m_bLoopPostIdleSequence = 0x36;  // bool 
	constexpr uint32_t m_bIgnoreLookAt = 0x37;  // bool 
}

// Offset: 0x7ffe058dbf60 
// N. Class: 151 
// Fields: 9 
namespace CPulseCell_Outflow_ScriptedSequence
{
	constexpr uint32_t m_szSyncGroup = 0x48;  // CUtlString 
	constexpr uint32_t m_nExpectedNumSequencesInSyncGroup = 0x50;  // int32 
	constexpr uint32_t m_bEnsureOnNavmeshOnFinish = 0x54;  // bool 
	constexpr uint32_t m_bDontTeleportAtEnd = 0x55;  // bool 
	constexpr uint32_t m_scriptedSequenceDataMain = 0x58;  // PulseScriptedSequenceData_t 
	constexpr uint32_t m_vecAdditionalActors = 0x90;  // CUtlVector< PulseScriptedSequenceData_t > 
	constexpr uint32_t m_OnFinished = 0xA8;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0xD8;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe058dc330 
// N. Class: 152 
// Fields: 1 
namespace CPulseCell_Outflow_ScriptedSequence::CursorState_t
{
	constexpr uint32_t m_scriptedSequence = 0x0;  // CHandle< CBaseEntity > 
}

// Offset: 0x0 
// N. Class: 153 
// Fields: 0 
namespace CPulseGraphInstance_GameBlackboard
{
}

// Offset: 0x0 
// N. Class: 154 
// Fields: 0 
namespace CPulseGraphComponentGameBlackboard
{
}

// Offset: 0x0 
// N. Class: 155 
// Fields: 0 
namespace CTouchExpansionComponent
{
}

// Offset: 0x7ffe05831e60 
// N. Class: 156 
// Fields: 25 
namespace dynpitchvol_base_t
{
	constexpr uint32_t preset = 0x0;  // int32 
	constexpr uint32_t pitchrun = 0x4;  // int32 
	constexpr uint32_t pitchstart = 0x8;  // int32 
	constexpr uint32_t spinup = 0xC;  // int32 
	constexpr uint32_t spindown = 0x10;  // int32 
	constexpr uint32_t volrun = 0x14;  // int32 
	constexpr uint32_t volstart = 0x18;  // int32 
	constexpr uint32_t fadein = 0x1C;  // int32 
	constexpr uint32_t fadeout = 0x20;  // int32 
	constexpr uint32_t lfotype = 0x24;  // int32 
	constexpr uint32_t lforate = 0x28;  // int32 
	constexpr uint32_t lfomodpitch = 0x2C;  // int32 
	constexpr uint32_t lfomodvol = 0x30;  // int32 
	constexpr uint32_t cspinup = 0x34;  // int32 
	constexpr uint32_t cspincount = 0x38;  // int32 
	constexpr uint32_t pitch = 0x3C;  // int32 
	constexpr uint32_t spinupsav = 0x40;  // int32 
	constexpr uint32_t spindownsav = 0x44;  // int32 
	constexpr uint32_t pitchfrac = 0x48;  // int32 
	constexpr uint32_t vol = 0x4C;  // int32 
	constexpr uint32_t fadeinsav = 0x50;  // int32 
	constexpr uint32_t fadeoutsav = 0x54;  // int32 
	constexpr uint32_t volfrac = 0x58;  // int32 
	constexpr uint32_t lfofrac = 0x5C;  // int32 
	constexpr uint32_t lfomult = 0x60;  // int32 
}

// Offset: 0x0 
// N. Class: 157 
// Fields: 0 
namespace dynpitchvol_t
{
}

// Offset: 0x7ffe058346d0 
// N. Class: 158 
// Fields: 3 
namespace ResponseContext_t
{
	constexpr uint32_t m_iszName = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszValue = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_fExpirationTime = 0x10;  // GameTime_t 
}

// Offset: 0x7ffe058347d0 
// N. Class: 159 
// Fields: 2 
namespace Relationship_t
{
	constexpr uint32_t disposition = 0x0;  // Disposition_t 
	constexpr uint32_t priority = 0x4;  // int32 
}

// Offset: 0x7ffe0580c000 
// N. Class: 160 
// Fields: 4 
namespace thinkfunc_t
{
	constexpr uint32_t m_hFn = 0x8;  // HSCRIPT 
	constexpr uint32_t m_nContext = 0x10;  // CUtlStringToken 
	constexpr uint32_t m_nNextThinkTick = 0x14;  // GameTick_t 
	constexpr uint32_t m_nLastThinkTick = 0x18;  // GameTick_t 
}

// Offset: 0x7ffe0583b160 
// N. Class: 161 
// Fields: 3 
namespace CBaseFilter
{
	constexpr uint32_t m_bNegated = 0x4E0;  // bool 
	constexpr uint32_t m_OnPass = 0x4E8;  // CEntityIOOutput 
	constexpr uint32_t m_OnFail = 0x510;  // CEntityIOOutput 
}

// Offset: 0x7ffe05809710 
// N. Class: 162 
// Fields: 17 
namespace CCollisionProperty
{
	constexpr uint32_t m_collisionAttribute = 0x10;  // VPhysicsCollisionAttribute_t 
	constexpr uint32_t m_vecMins = 0x40;  // Vector 
	constexpr uint32_t m_vecMaxs = 0x4C;  // Vector 
	constexpr uint32_t m_usSolidFlags = 0x5A;  // uint8 
	constexpr uint32_t m_nSolidType = 0x5B;  // SolidType_t 
	constexpr uint32_t m_triggerBloat = 0x5C;  // uint8 
	constexpr uint32_t m_nSurroundType = 0x5D;  // SurroundingBoundsType_t 
	constexpr uint32_t m_CollisionGroup = 0x5E;  // uint8 
	constexpr uint32_t m_nEnablePhysics = 0x5F;  // uint8 
	constexpr uint32_t m_flBoundingRadius = 0x60;  // float32 
	constexpr uint32_t m_vecSpecifiedSurroundingMins = 0x64;  // Vector 
	constexpr uint32_t m_vecSpecifiedSurroundingMaxs = 0x70;  // Vector 
	constexpr uint32_t m_vecSurroundingMaxs = 0x7C;  // Vector 
	constexpr uint32_t m_vecSurroundingMins = 0x88;  // Vector 
	constexpr uint32_t m_vCapsuleCenter1 = 0x94;  // Vector 
	constexpr uint32_t m_vCapsuleCenter2 = 0xA0;  // Vector 
	constexpr uint32_t m_flCapsuleRadius = 0xAC;  // float32 
}

// Offset: 0x7ffe05870f70 
// N. Class: 163 
// Fields: 24 
namespace CBasePlayerController
{
	constexpr uint32_t m_nInButtonsWhichAreToggles = 0x4E8;  // uint64 
	constexpr uint32_t m_nTickBase = 0x4F0;  // uint32 
	constexpr uint32_t m_hPawn = 0x520;  // CHandle< CBasePlayerPawn > 
	constexpr uint32_t m_bKnownTeamMismatch = 0x524;  // bool 
	constexpr uint32_t m_nSplitScreenSlot = 0x528;  // CSplitScreenSlot 
	constexpr uint32_t m_hSplitOwner = 0x52C;  // CHandle< CBasePlayerController > 
	constexpr uint32_t m_hSplitScreenPlayers = 0x530;  // CUtlVector< CHandle< CBasePlayerController > > 
	constexpr uint32_t m_bIsHLTV = 0x548;  // bool 
	constexpr uint32_t m_iConnected = 0x54C;  // PlayerConnectedState 
	constexpr uint32_t m_iszPlayerName = 0x550;  // char[128] 
	constexpr uint32_t m_szNetworkIDString = 0x5D0;  // CUtlString 
	constexpr uint32_t m_fLerpTime = 0x5D8;  // float32 
	constexpr uint32_t m_bLagCompensation = 0x5DC;  // bool 
	constexpr uint32_t m_bPredict = 0x5DD;  // bool 
	constexpr uint32_t m_bAutoKickDisabled = 0x5DE;  // bool 
	constexpr uint32_t m_bIsLowViolence = 0x5DF;  // bool 
	constexpr uint32_t m_bGamePaused = 0x5E0;  // bool 
	constexpr uint32_t m_iIgnoreGlobalChat = 0x720;  // ChatIgnoreType_t 
	constexpr uint32_t m_flLastPlayerTalkTime = 0x724;  // float32 
	constexpr uint32_t m_flLastEntitySteadyState = 0x728;  // float32 
	constexpr uint32_t m_nAvailableEntitySteadyState = 0x72C;  // int32 
	constexpr uint32_t m_bHasAnySteadyStateEnts = 0x730;  // bool 
	constexpr uint32_t m_steamID = 0x740;  // uint64 
	constexpr uint32_t m_iDesiredFOV = 0x748;  // uint32 
}

// Offset: 0x0 
// N. Class: 164 
// Fields: 0 
namespace CServerOnlyEntity
{
}

// Offset: 0x0 
// N. Class: 165 
// Fields: 0 
namespace CServerOnlyPointEntity
{
}

// Offset: 0x0 
// N. Class: 166 
// Fields: 0 
namespace CLogicalEntity
{
}

// Offset: 0x7ffe05839e50 
// N. Class: 167 
// Fields: 11 
namespace CEntityFlame
{
	constexpr uint32_t m_hEntAttached = 0x4E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bCheapEffect = 0x4E4;  // bool 
	constexpr uint32_t m_flSize = 0x4E8;  // float32 
	constexpr uint32_t m_bUseHitboxes = 0x4EC;  // bool 
	constexpr uint32_t m_iNumHitboxFires = 0x4F0;  // int32 
	constexpr uint32_t m_flHitboxFireScale = 0x4F4;  // float32 
	constexpr uint32_t m_flLifetime = 0x4F8;  // GameTime_t 
	constexpr uint32_t m_hAttacker = 0x4FC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iDangerSound = 0x500;  // int32 
	constexpr uint32_t m_flDirectDamagePerSecond = 0x504;  // float32 
	constexpr uint32_t m_iCustomDamageType = 0x508;  // int32 
}

// Offset: 0x7ffe0583b2b0 
// N. Class: 168 
// Fields: 4 
namespace CFilterMultiple
{
	constexpr uint32_t m_nFilterType = 0x538;  // filter_t 
	constexpr uint32_t m_iFilterName = 0x540;  // CUtlSymbolLarge[10] 
	constexpr uint32_t m_hFilter = 0x590;  // CHandle< CBaseEntity >[10] 
	constexpr uint32_t m_nFilterCount = 0x5B8;  // int32 
}

// Offset: 0x7ffe0583b438 
// N. Class: 169 
// Fields: 1 
namespace CFilterProximity
{
	constexpr uint32_t m_flRadius = 0x538;  // float32 
}

// Offset: 0x0 
// N. Class: 170 
// Fields: 0 
namespace CFilterLOS
{
}

// Offset: 0x7ffe05837408 
// N. Class: 171 
// Fields: 1 
namespace CFilterClass
{
	constexpr uint32_t m_iFilterClass = 0x538;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe05837bc0 
// N. Class: 172 
// Fields: 4 
namespace CBaseFire
{
	constexpr uint32_t m_flScale = 0x4E0;  // float32 
	constexpr uint32_t m_flStartScale = 0x4E4;  // float32 
	constexpr uint32_t m_flScaleTime = 0x4E8;  // float32 
	constexpr uint32_t m_nFlags = 0x4EC;  // uint32 
}

// Offset: 0x7ffe05837e30 
// N. Class: 173 
// Fields: 2 
namespace CFireSmoke
{
	constexpr uint32_t m_nFlameModelIndex = 0x4F0;  // int32 
	constexpr uint32_t m_nFlameFromAboveModelIndex = 0x4F4;  // int32 
}

// Offset: 0x7ffe05839440 
// N. Class: 174 
// Fields: 24 
namespace CFish
{
	constexpr uint32_t m_pool = 0x9A8;  // CHandle< CFishPool > 
	constexpr uint32_t m_id = 0x9AC;  // uint32 
	constexpr uint32_t m_x = 0x9B0;  // float32 
	constexpr uint32_t m_y = 0x9B4;  // float32 
	constexpr uint32_t m_z = 0x9B8;  // float32 
	constexpr uint32_t m_angle = 0x9BC;  // float32 
	constexpr uint32_t m_angleChange = 0x9C0;  // float32 
	constexpr uint32_t m_forward = 0x9C4;  // Vector 
	constexpr uint32_t m_perp = 0x9D0;  // Vector 
	constexpr uint32_t m_poolOrigin = 0x9DC;  // Vector 
	constexpr uint32_t m_waterLevel = 0x9E8;  // float32 
	constexpr uint32_t m_speed = 0x9EC;  // float32 
	constexpr uint32_t m_desiredSpeed = 0x9F0;  // float32 
	constexpr uint32_t m_calmSpeed = 0x9F4;  // float32 
	constexpr uint32_t m_panicSpeed = 0x9F8;  // float32 
	constexpr uint32_t m_avoidRange = 0x9FC;  // float32 
	constexpr uint32_t m_turnTimer = 0xA00;  // CountdownTimer 
	constexpr uint32_t m_turnClockwise = 0xA18;  // bool 
	constexpr uint32_t m_goTimer = 0xA20;  // CountdownTimer 
	constexpr uint32_t m_moveTimer = 0xA38;  // CountdownTimer 
	constexpr uint32_t m_panicTimer = 0xA50;  // CountdownTimer 
	constexpr uint32_t m_disperseTimer = 0xA68;  // CountdownTimer 
	constexpr uint32_t m_proximityTimer = 0xA80;  // CountdownTimer 
	constexpr uint32_t m_visible = 0xA98;  // CUtlVector< CFish* > 
}

// Offset: 0x7ffe058397c0 
// N. Class: 175 
// Fields: 7 
namespace CFishPool
{
	constexpr uint32_t m_fishCount = 0x4F0;  // int32 
	constexpr uint32_t m_maxRange = 0x4F4;  // float32 
	constexpr uint32_t m_swimDepth = 0x4F8;  // float32 
	constexpr uint32_t m_waterLevel = 0x4FC;  // float32 
	constexpr uint32_t m_isDormant = 0x500;  // bool 
	constexpr uint32_t m_fishes = 0x508;  // CUtlVector< CHandle< CFish > > 
	constexpr uint32_t m_visTimer = 0x520;  // CountdownTimer 
}

// Offset: 0x7ffe0583a740 
// N. Class: 176 
// Fields: 7 
namespace CMoverPathNode
{
	constexpr uint32_t m_vInTangentLocal = 0x4E0;  // Vector 
	constexpr uint32_t m_vOutTangentLocal = 0x4EC;  // Vector 
	constexpr uint32_t m_szParentPathUniqueID = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnPassThrough = 0x500;  // CEntityIOOutput 
	constexpr uint32_t m_OnPassThroughForward = 0x528;  // CEntityIOOutput 
	constexpr uint32_t m_OnPassThroughReverse = 0x550;  // CEntityIOOutput 
	constexpr uint32_t m_hMover = 0x578;  // CHandle< CPathMover > 
}

// Offset: 0x7ffe0583a8a0 
// N. Class: 177 
// Fields: 3 
namespace CPathMover
{
	constexpr uint32_t m_vecPathNodes = 0x4E8;  // CUtlVector< CHandle< CMoverPathNode > > 
	constexpr uint32_t m_flPathLength = 0x500;  // float32 
	constexpr uint32_t m_bClosedLoop = 0x504;  // bool 
}

// Offset: 0x0 
// N. Class: 178 
// Fields: 0 
namespace CFuncMoverAPI
{
}

// Offset: 0x0 
// N. Class: 179 
// Fields: 0 
namespace CInfoData
{
}

// Offset: 0x7ffe0583c2f0 
// N. Class: 180 
// Fields: 3 
namespace locksound_t
{
	constexpr uint32_t sLockedSound = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t sUnlockedSound = 0x10;  // CUtlSymbolLarge 
	constexpr uint32_t flwaitSound = 0x18;  // GameTime_t 
}

// Offset: 0x7ffe0583c3c0 
// N. Class: 181 
// Fields: 4 
namespace CLogicBranch
{
	constexpr uint32_t m_bInValue = 0x4E0;  // bool 
	constexpr uint32_t m_Listeners = 0x4E8;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_OnTrue = 0x500;  // CEntityIOOutput 
	constexpr uint32_t m_OnFalse = 0x528;  // CEntityIOOutput 
}

// Offset: 0x7ffe0583c4f0 
// N. Class: 182 
// Fields: 7 
namespace CLogicDistanceCheck
{
	constexpr uint32_t m_iszEntityA = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszEntityB = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_flZone1Distance = 0x4F0;  // float32 
	constexpr uint32_t m_flZone2Distance = 0x4F4;  // float32 
	constexpr uint32_t m_InZone1 = 0x4F8;  // CEntityIOOutput 
	constexpr uint32_t m_InZone2 = 0x520;  // CEntityIOOutput 
	constexpr uint32_t m_InZone3 = 0x548;  // CEntityIOOutput 
}

// Offset: 0x7ffe0583be60 
// N. Class: 183 
// Fields: 3 
namespace VelocitySampler
{
	constexpr uint32_t m_prevSample = 0x0;  // Vector 
	constexpr uint32_t m_fPrevSampleTime = 0xC;  // GameTime_t 
	constexpr uint32_t m_fIdealSampleRate = 0x10;  // float32 
}

// Offset: 0x7ffe0583bfa0 
// N. Class: 184 
// Fields: 3 
namespace SimpleConstraintSoundProfile
{
	constexpr uint32_t eKeypoints = 0x8;  // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t 
	constexpr uint32_t m_keyPoints = 0xC;  // float32[2] 
	constexpr uint32_t m_reversalSoundThresholds = 0x14;  // float32[3] 
}

// Offset: 0x7ffe0583c180 
// N. Class: 185 
// Fields: 8 
namespace ConstraintSoundInfo
{
	constexpr uint32_t m_vSampler = 0x8;  // VelocitySampler 
	constexpr uint32_t m_soundProfile = 0x20;  // SimpleConstraintSoundProfile 
	constexpr uint32_t m_forwardAxis = 0x40;  // Vector 
	constexpr uint32_t m_iszTravelSoundFwd = 0x50;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTravelSoundBack = 0x58;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszReversalSounds = 0x68;  // CUtlSymbolLarge[3] 
	constexpr uint32_t m_bPlayTravelSound = 0x80;  // bool 
	constexpr uint32_t m_bPlayReversalSound = 0x81;  // bool 
}

// Offset: 0x7ffe0583f440 
// N. Class: 186 
// Fields: 5 
namespace CSmoothFunc
{
	constexpr uint32_t m_flSmoothAmplitude = 0x8;  // float32 
	constexpr uint32_t m_flSmoothBias = 0xC;  // float32 
	constexpr uint32_t m_flSmoothDuration = 0x10;  // float32 
	constexpr uint32_t m_flSmoothRemainingTime = 0x14;  // float32 
	constexpr uint32_t m_nSmoothDir = 0x18;  // int32 
}

// Offset: 0x7ffe0583f1b0 
// N. Class: 187 
// Fields: 1 
namespace magnetted_objects_t
{
	constexpr uint32_t hEntity = 0x8;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0583fc10 
// N. Class: 188 
// Fields: 6 
namespace CPointPrefab
{
	constexpr uint32_t m_targetMapName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_forceWorldGroupID = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_associatedRelayTargetName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_fixupNames = 0x4F8;  // bool 
	constexpr uint32_t m_bLoadDynamic = 0x4F9;  // bool 
	constexpr uint32_t m_associatedRelayEntity = 0x4FC;  // CHandle< CPointPrefab > 
}

// Offset: 0x7ffe058404f0 
// N. Class: 189 
// Fields: 4 
namespace CSkyCamera
{
	constexpr uint32_t m_skyboxData = 0x4E0;  // sky3dparams_t 
	constexpr uint32_t m_skyboxSlotToken = 0x570;  // CUtlStringToken 
	constexpr uint32_t m_bUseAngles = 0x574;  // bool 
	constexpr uint32_t m_pNext = 0x578;  // CSkyCamera* 
}

// Offset: 0x7ffe05840400 
// N. Class: 190 
// Fields: 2 
namespace CSkyboxReference
{
	constexpr uint32_t m_worldGroupId = 0x4E0;  // WorldGroupId_t 
	constexpr uint32_t m_hSkyCamera = 0x4E4;  // CHandle< CSkyCamera > 
}

// Offset: 0x7ffe0580a060 
// N. Class: 191 
// Fields: 6 
namespace sky3dparams_t
{
	constexpr uint32_t scale = 0x8;  // int16 
	constexpr uint32_t origin = 0xC;  // Vector 
	constexpr uint32_t bClip3DSkyBoxNearToWorldFar = 0x18;  // bool 
	constexpr uint32_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C;  // float32 
	constexpr uint32_t fog = 0x20;  // fogparams_t 
	constexpr uint32_t m_nWorldGroupID = 0x88;  // WorldGroupId_t 
}

// Offset: 0x7ffe05840fa0 
// N. Class: 192 
// Fields: 2 
namespace AISound_t
{
	constexpr uint32_t nType = 0x0;  // uint16 
	constexpr uint32_t nFlags = 0x2;  // uint16 
}

// Offset: 0x7ffe05841370 
// N. Class: 193 
// Fields: 12 
namespace CSound
{
	constexpr uint32_t m_hOwner = 0x0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget = 0x4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iVolume = 0x8;  // int32 
	constexpr uint32_t m_flOcclusionScale = 0xC;  // float32 
	constexpr uint32_t m_Sound = 0x10;  // AISound_t 
	constexpr uint32_t m_iNextAudible = 0x14;  // int32 
	constexpr uint32_t m_flExpireTime = 0x18;  // GameTime_t 
	constexpr uint32_t m_iNext = 0x1C;  // int16 
	constexpr uint32_t m_bNoExpirationTime = 0x1E;  // bool 
	constexpr uint32_t m_ownerChannelIndex = 0x20;  // int32 
	constexpr uint32_t m_vecOrigin = 0x24;  // Vector 
	constexpr uint32_t m_bHasOwner = 0x30;  // bool 
}

// Offset: 0x7ffe05840b90 
// N. Class: 194 
// Fields: 6 
namespace lerpdata_t
{
	constexpr uint32_t m_hEnt = 0x0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_MoveType = 0x4;  // MoveType_t 
	constexpr uint32_t m_flStartTime = 0x8;  // GameTime_t 
	constexpr uint32_t m_vecStartOrigin = 0xC;  // Vector 
	constexpr uint32_t m_qStartRot = 0x20;  // Quaternion 
	constexpr uint32_t m_nFXIndex = 0x30;  // ParticleIndex_t 
}

// Offset: 0x7ffe05843f40 
// N. Class: 195 
// Fields: 2 
namespace CNavLinkAnimgraphVar
{
	constexpr uint32_t m_sAnimGraphNavlinkType = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_unAlignmentDegrees = 0x8;  // uint32 
}

// Offset: 0x7ffe05844030 
// N. Class: 196 
// Fields: 4 
namespace CNavLinkMovementVData
{
	constexpr uint32_t m_sToolsOnlyOwnerModelName = 0x0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_bIsInterpolated = 0xE0;  // bool 
	constexpr uint32_t m_unRecommendedDistance = 0xE4;  // uint32 
	constexpr uint32_t m_vecAnimgraphVars = 0xE8;  // CUtlVector< CNavLinkAnimgraphVar > 
}

// Offset: 0x0 
// N. Class: 197 
// Fields: 0 
namespace CNavVolumeMarkupVolume
{
}

// Offset: 0x0 
// N. Class: 198 
// Fields: 0 
namespace CNavVolumeCalculatedVector
{
}

// Offset: 0x7ffe05843af0 
// N. Class: 199 
// Fields: 2 
namespace CNavVolumeBreadthFirstSearch
{
	constexpr uint32_t m_vStartPos = 0xA0;  // Vector 
	constexpr uint32_t m_flSearchDist = 0xAC;  // float32 
}

// Offset: 0x7ffe058090b0 
// N. Class: 200 
// Fields: 8 
namespace VPhysicsCollisionAttribute_t
{
	constexpr uint32_t m_nInteractsAs = 0x8;  // uint64 
	constexpr uint32_t m_nInteractsWith = 0x10;  // uint64 
	constexpr uint32_t m_nInteractsExclude = 0x18;  // uint64 
	constexpr uint32_t m_nEntityId = 0x20;  // uint32 
	constexpr uint32_t m_nOwnerId = 0x24;  // uint32 
	constexpr uint32_t m_nHierarchyId = 0x28;  // uint16 
	constexpr uint32_t m_nCollisionGroup = 0x2A;  // uint8 
	constexpr uint32_t m_nCollisionFunctionMask = 0x2B;  // uint8 
}

// Offset: 0x7ffe0580a2e0 
// N. Class: 201 
// Fields: 21 
namespace CEffectData
{
	constexpr uint32_t m_vOrigin = 0x8;  // Vector 
	constexpr uint32_t m_vStart = 0x14;  // Vector 
	constexpr uint32_t m_vNormal = 0x20;  // Vector 
	constexpr uint32_t m_vAngles = 0x2C;  // QAngle 
	constexpr uint32_t m_hEntity = 0x38;  // CEntityHandle 
	constexpr uint32_t m_hOtherEntity = 0x3C;  // CEntityHandle 
	constexpr uint32_t m_flScale = 0x40;  // float32 
	constexpr uint32_t m_flMagnitude = 0x44;  // float32 
	constexpr uint32_t m_flRadius = 0x48;  // float32 
	constexpr uint32_t m_nSurfaceProp = 0x4C;  // CUtlStringToken 
	constexpr uint32_t m_nEffectIndex = 0x50;  // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_nDamageType = 0x58;  // uint32 
	constexpr uint32_t m_nPenetrate = 0x5C;  // uint8 
	constexpr uint32_t m_nMaterial = 0x5E;  // uint16 
	constexpr uint32_t m_nHitBox = 0x60;  // uint16 
	constexpr uint32_t m_nColor = 0x62;  // uint8 
	constexpr uint32_t m_fFlags = 0x63;  // uint8 
	constexpr uint32_t m_nAttachmentIndex = 0x64;  // AttachmentHandle_t 
	constexpr uint32_t m_nAttachmentName = 0x68;  // CUtlStringToken 
	constexpr uint32_t m_iEffectName = 0x6C;  // uint16 
	constexpr uint32_t m_nExplosionType = 0x6E;  // uint8 
}

// Offset: 0x7ffe0580a5f0 
// N. Class: 202 
// Fields: 2 
namespace CEnvDetailController
{
	constexpr uint32_t m_flFadeStartDist = 0x4E0;  // float32 
	constexpr uint32_t m_flFadeEndDist = 0x4E4;  // float32 
}

// Offset: 0x7ffe058077b0 
// N. Class: 203 
// Fields: 31 
namespace CEnvWindShared
{
	constexpr uint32_t m_flStartTime = 0x8;  // GameTime_t 
	constexpr uint32_t m_iWindSeed = 0xC;  // uint32 
	constexpr uint32_t m_iMinWind = 0x10;  // uint16 
	constexpr uint32_t m_iMaxWind = 0x12;  // uint16 
	constexpr uint32_t m_windRadius = 0x14;  // int32 
	constexpr uint32_t m_iMinGust = 0x18;  // uint16 
	constexpr uint32_t m_iMaxGust = 0x1A;  // uint16 
	constexpr uint32_t m_flMinGustDelay = 0x1C;  // float32 
	constexpr uint32_t m_flMaxGustDelay = 0x20;  // float32 
	constexpr uint32_t m_flGustDuration = 0x24;  // float32 
	constexpr uint32_t m_iGustDirChange = 0x28;  // uint16 
	constexpr uint32_t m_location = 0x2C;  // Vector 
	constexpr uint32_t m_iszGustSound = 0x38;  // int32 
	constexpr uint32_t m_iWindDir = 0x3C;  // int32 
	constexpr uint32_t m_flWindSpeed = 0x40;  // float32 
	constexpr uint32_t m_currentWindVector = 0x44;  // Vector 
	constexpr uint32_t m_CurrentSwayVector = 0x50;  // Vector 
	constexpr uint32_t m_PrevSwayVector = 0x5C;  // Vector 
	constexpr uint32_t m_iInitialWindDir = 0x68;  // uint16 
	constexpr uint32_t m_flInitialWindSpeed = 0x6C;  // float32 
	constexpr uint32_t m_OnGustStart = 0x70;  // CEntityIOOutput 
	constexpr uint32_t m_OnGustEnd = 0x98;  // CEntityIOOutput 
	constexpr uint32_t m_flVariationTime = 0xC0;  // GameTime_t 
	constexpr uint32_t m_flSwayTime = 0xC4;  // GameTime_t 
	constexpr uint32_t m_flSimTime = 0xC8;  // GameTime_t 
	constexpr uint32_t m_flSwitchTime = 0xCC;  // GameTime_t 
	constexpr uint32_t m_flAveWindSpeed = 0xD0;  // float32 
	constexpr uint32_t m_bGusting = 0xD4;  // bool 
	constexpr uint32_t m_flWindAngleVariation = 0xD8;  // float32 
	constexpr uint32_t m_flWindSpeedVariation = 0xDC;  // float32 
	constexpr uint32_t m_hEntOwner = 0xE0;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe05807c00 
// N. Class: 204 
// Fields: 2 
namespace CEnvWindShared::WindAveEvent_t
{
	constexpr uint32_t m_flStartWindSpeed = 0x0;  // float32 
	constexpr uint32_t m_flAveWindSpeed = 0x4;  // float32 
}

// Offset: 0x7ffe05807cb0 
// N. Class: 205 
// Fields: 2 
namespace CEnvWindShared::WindVariationEvent_t
{
	constexpr uint32_t m_flWindAngleVariation = 0x0;  // float32 
	constexpr uint32_t m_flWindSpeedVariation = 0x4;  // float32 
}

// Offset: 0x0 
// N. Class: 206 
// Fields: 0 
namespace CInfoLadderDismount
{
}

// Offset: 0x7ffe05807ed0 
// N. Class: 207 
// Fields: 13 
namespace shard_model_desc_t
{
	constexpr uint32_t m_nModelID = 0x8;  // int32 
	constexpr uint32_t m_hMaterialBase = 0x10;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_hMaterialDamageOverlay = 0x18;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_solid = 0x20;  // ShardSolid_t 
	constexpr uint32_t m_vecPanelSize = 0x24;  // Vector2D 
	constexpr uint32_t m_vecStressPositionA = 0x2C;  // Vector2D 
	constexpr uint32_t m_vecStressPositionB = 0x34;  // Vector2D 
	constexpr uint32_t m_vecPanelVertices = 0x40;  // CNetworkUtlVectorBase< Vector2D > 
	constexpr uint32_t m_vInitialPanelVertices = 0x58;  // CNetworkUtlVectorBase< Vector4D > 
	constexpr uint32_t m_flGlassHalfThickness = 0x70;  // float32 
	constexpr uint32_t m_bHasParent = 0x74;  // bool 
	constexpr uint32_t m_bParentFrozen = 0x75;  // bool 
	constexpr uint32_t m_SurfacePropStringToken = 0x78;  // CUtlStringToken 
}

// Offset: 0x7ffe05808290 
// N. Class: 208 
// Fields: 28 
namespace CShatterGlassShard
{
	constexpr uint32_t m_hShardHandle = 0x8;  // uint32 
	constexpr uint32_t m_vecPanelVertices = 0x10;  // CUtlVector< Vector2D > 
	constexpr uint32_t m_vLocalPanelSpaceOrigin = 0x28;  // Vector2D 
	constexpr uint32_t m_hModel = 0x30;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_hPhysicsEntity = 0x38;  // CHandle< CShatterGlassShardPhysics > 
	constexpr uint32_t m_hParentPanel = 0x3C;  // CHandle< CFuncShatterglass > 
	constexpr uint32_t m_hParentShard = 0x40;  // uint32 
	constexpr uint32_t m_ShatterStressType = 0x44;  // ShatterGlassStressType 
	constexpr uint32_t m_vecStressVelocity = 0x48;  // Vector 
	constexpr uint32_t m_bCreatedModel = 0x54;  // bool 
	constexpr uint32_t m_flLongestEdge = 0x58;  // float32 
	constexpr uint32_t m_flShortestEdge = 0x5C;  // float32 
	constexpr uint32_t m_flLongestAcross = 0x60;  // float32 
	constexpr uint32_t m_flShortestAcross = 0x64;  // float32 
	constexpr uint32_t m_flSumOfAllEdges = 0x68;  // float32 
	constexpr uint32_t m_flArea = 0x6C;  // float32 
	constexpr uint32_t m_nOnFrameEdge = 0x70;  // OnFrame 
	constexpr uint32_t m_nSubShardGeneration = 0x74;  // int32 
	constexpr uint32_t m_vecAverageVertPosition = 0x78;  // Vector2D 
	constexpr uint32_t m_bAverageVertPositionIsValid = 0x80;  // bool 
	constexpr uint32_t m_vecPanelSpaceStressPositionA = 0x84;  // Vector2D 
	constexpr uint32_t m_vecPanelSpaceStressPositionB = 0x8C;  // Vector2D 
	constexpr uint32_t m_bStressPositionAIsValid = 0x94;  // bool 
	constexpr uint32_t m_bStressPositionBIsValid = 0x95;  // bool 
	constexpr uint32_t m_bFlaggedForRemoval = 0x96;  // bool 
	constexpr uint32_t m_flPhysicsEntitySpawnedAtTime = 0x98;  // GameTime_t 
	constexpr uint32_t m_hEntityHittingMe = 0x9C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_vecNeighbors = 0xA0;  // CUtlVector< uint32 > 
}

// Offset: 0x7ffe058080f0 
// N. Class: 209 
// Fields: 3 
namespace CShatterGlassShardPhysics
{
	constexpr uint32_t m_bDebris = 0xD00;  // bool 
	constexpr uint32_t m_hParentShard = 0xD04;  // uint32 
	constexpr uint32_t m_ShardDesc = 0xD08;  // shard_model_desc_t 
}

// Offset: 0x7ffe058089f0 
// N. Class: 210 
// Fields: 26 
namespace CFuncShatterglass
{
	constexpr uint32_t m_matPanelTransform = 0x790;  // matrix3x4_t 
	constexpr uint32_t m_matPanelTransformWsTemp = 0x7C0;  // matrix3x4_t 
	constexpr uint32_t m_vecShatterGlassShards = 0x7F0;  // CUtlVector< uint32 > 
	constexpr uint32_t m_PanelSize = 0x808;  // Vector2D 
	constexpr uint32_t m_flLastShatterSoundEmitTime = 0x810;  // GameTime_t 
	constexpr uint32_t m_flLastCleanupTime = 0x814;  // GameTime_t 
	constexpr uint32_t m_flInitAtTime = 0x818;  // GameTime_t 
	constexpr uint32_t m_flGlassThickness = 0x81C;  // float32 
	constexpr uint32_t m_flSpawnInvulnerability = 0x820;  // float32 
	constexpr uint32_t m_bBreakSilent = 0x824;  // bool 
	constexpr uint32_t m_bBreakShardless = 0x825;  // bool 
	constexpr uint32_t m_bBroken = 0x826;  // bool 
	constexpr uint32_t m_bGlassNavIgnore = 0x827;  // bool 
	constexpr uint32_t m_bGlassInFrame = 0x828;  // bool 
	constexpr uint32_t m_bStartBroken = 0x829;  // bool 
	constexpr uint32_t m_iInitialDamageType = 0x82A;  // uint8 
	constexpr uint32_t m_szDamagePositioningEntityName01 = 0x830;  // CUtlSymbolLarge 
	constexpr uint32_t m_szDamagePositioningEntityName02 = 0x838;  // CUtlSymbolLarge 
	constexpr uint32_t m_szDamagePositioningEntityName03 = 0x840;  // CUtlSymbolLarge 
	constexpr uint32_t m_szDamagePositioningEntityName04 = 0x848;  // CUtlSymbolLarge 
	constexpr uint32_t m_vInitialDamagePositions = 0x850;  // CUtlVector< Vector > 
	constexpr uint32_t m_vExtraDamagePositions = 0x868;  // CUtlVector< Vector > 
	constexpr uint32_t m_vInitialPanelVertices = 0x880;  // CUtlVector< Vector4D > 
	constexpr uint32_t m_OnBroken = 0x898;  // CEntityIOOutput 
	constexpr uint32_t m_iSurfaceType = 0x8C0;  // uint8 
	constexpr uint32_t m_hMaterialDamageBase = 0x8C8;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
}

// Offset: 0x0 
// N. Class: 211 
// Fields: 0 
namespace CGameRulesProxy
{
}

// Offset: 0x7ffe05808f80 
// N. Class: 212 
// Fields: 6 
namespace CGameRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;  // CNetworkVarChainer 
	constexpr uint32_t m_szQuestName = 0x30;  // char[128] 
	constexpr uint32_t m_nQuestPhase = 0xB0;  // int32 
	constexpr uint32_t m_nTotalPausedTicks = 0xB4;  // int32 
	constexpr uint32_t m_nPauseStartTick = 0xB8;  // int32 
	constexpr uint32_t m_bGamePaused = 0xBC;  // bool 
}

// Offset: 0x7ffe058093d0 
// N. Class: 213 
// Fields: 11 
namespace CGlowProperty
{
	constexpr uint32_t m_fGlowColor = 0x8;  // Vector 
	constexpr uint32_t m_iGlowType = 0x30;  // int32 
	constexpr uint32_t m_iGlowTeam = 0x34;  // int32 
	constexpr uint32_t m_nGlowRange = 0x38;  // int32 
	constexpr uint32_t m_nGlowRangeMin = 0x3C;  // int32 
	constexpr uint32_t m_glowColorOverride = 0x40;  // Color 
	constexpr uint32_t m_bFlashing = 0x44;  // bool 
	constexpr uint32_t m_flGlowTime = 0x48;  // float32 
	constexpr uint32_t m_flGlowStartTime = 0x4C;  // float32 
	constexpr uint32_t m_bEligibleForScreenHighlight = 0x50;  // bool 
	constexpr uint32_t m_bGlowing = 0x51;  // bool 
}

// Offset: 0x0 
// N. Class: 214 
// Fields: 0 
namespace CMultiplayRules
{
}

// Offset: 0x0 
// N. Class: 215 
// Fields: 0 
namespace WrappedPhysicsJoint_t
{
}

// Offset: 0x7ffe05809a80 
// N. Class: 216 
// Fields: 25 
namespace fogparams_t
{
	constexpr uint32_t dirPrimary = 0x8;  // Vector 
	constexpr uint32_t colorPrimary = 0x14;  // Color 
	constexpr uint32_t colorSecondary = 0x18;  // Color 
	constexpr uint32_t colorPrimaryLerpTo = 0x1C;  // Color 
	constexpr uint32_t colorSecondaryLerpTo = 0x20;  // Color 
	constexpr uint32_t start = 0x24;  // float32 
	constexpr uint32_t end = 0x28;  // float32 
	constexpr uint32_t farz = 0x2C;  // float32 
	constexpr uint32_t maxdensity = 0x30;  // float32 
	constexpr uint32_t exponent = 0x34;  // float32 
	constexpr uint32_t HDRColorScale = 0x38;  // float32 
	constexpr uint32_t skyboxFogFactor = 0x3C;  // float32 
	constexpr uint32_t skyboxFogFactorLerpTo = 0x40;  // float32 
	constexpr uint32_t startLerpTo = 0x44;  // float32 
	constexpr uint32_t endLerpTo = 0x48;  // float32 
	constexpr uint32_t maxdensityLerpTo = 0x4C;  // float32 
	constexpr uint32_t lerptime = 0x50;  // GameTime_t 
	constexpr uint32_t duration = 0x54;  // float32 
	constexpr uint32_t blendtobackground = 0x58;  // float32 
	constexpr uint32_t scattering = 0x5C;  // float32 
	constexpr uint32_t locallightscale = 0x60;  // float32 
	constexpr uint32_t enable = 0x64;  // bool 
	constexpr uint32_t blend = 0x65;  // bool 
	constexpr uint32_t m_bNoReflectionFog = 0x66;  // bool 
	constexpr uint32_t m_bPadding = 0x67;  // bool 
}

// Offset: 0x7ffe057fa3a0 
// N. Class: 217 
// Fields: 3 
namespace CFogController
{
	constexpr uint32_t m_fog = 0x4E0;  // fogparams_t 
	constexpr uint32_t m_bUseAngles = 0x548;  // bool 
	constexpr uint32_t m_iChangedVariables = 0x54C;  // int32 
}

// Offset: 0x7ffe0580a190 
// N. Class: 218 
// Fields: 5 
namespace sndopvarlatchdata_t
{
	constexpr uint32_t m_iszStack = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOperator = 0x10;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOpvar = 0x18;  // CUtlSymbolLarge 
	constexpr uint32_t m_flVal = 0x20;  // float32 
	constexpr uint32_t m_vPos = 0x24;  // Vector 
}

// Offset: 0x0 
// N. Class: 219 
// Fields: 0 
namespace IRagdoll
{
}

// Offset: 0x7ffe0580c4f0 
// N. Class: 220 
// Fields: 3 
namespace ragdollelement_t
{
	constexpr uint32_t originParentSpace = 0x0;  // Vector 
	constexpr uint32_t parentIndex = 0x20;  // int32 
	constexpr uint32_t m_flRadius = 0x24;  // float32 
}

// Offset: 0x7ffe0580c630 
// N. Class: 221 
// Fields: 4 
namespace ragdoll_t
{
	constexpr uint32_t list = 0x0;  // CUtlVector< ragdollelement_t > 
	constexpr uint32_t boneIndex = 0x18;  // CUtlVector< int32 > 
	constexpr uint32_t allowStretch = 0x30;  // bool 
	constexpr uint32_t unused = 0x31;  // bool 
}

// Offset: 0x7ffe0580c890 
// N. Class: 222 
// Fields: 2 
namespace PhysicsRagdollPose_t
{
	constexpr uint32_t m_Transforms = 0x8;  // CNetworkUtlVectorBase< CTransform > 
	constexpr uint32_t m_hOwner = 0x20;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0580afd0 
// N. Class: 223 
// Fields: 13 
namespace CSceneEventInfo
{
	constexpr uint32_t m_iLayer = 0x0;  // int32 
	constexpr uint32_t m_iPriority = 0x4;  // int32 
	constexpr uint32_t m_hSequence = 0x8;  // HSequence 
	constexpr uint32_t m_flWeight = 0xC;  // float32 
	constexpr uint32_t m_bHasArrived = 0x10;  // bool 
	constexpr uint32_t m_nType = 0x14;  // int32 
	constexpr uint32_t m_flNext = 0x18;  // GameTime_t 
	constexpr uint32_t m_bIsGesture = 0x1C;  // bool 
	constexpr uint32_t m_bShouldRemove = 0x1D;  // bool 
	constexpr uint32_t m_hTarget = 0x44;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nSceneEventId = 0x48;  // SceneEventId_t 
	constexpr uint32_t m_bClientSide = 0x4C;  // bool 
	constexpr uint32_t m_bStarted = 0x4D;  // bool 
}

// Offset: 0x7ffe0580c1e0 
// N. Class: 224 
// Fields: 1 
namespace SceneEventId_t
{
	constexpr uint32_t m_Value = 0x0;  // uint32 
}

// Offset: 0x7ffe0580b290 
// N. Class: 225 
// Fields: 1 
namespace AmmoIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int8 
}

// Offset: 0x0 
// N. Class: 226 
// Fields: 0 
namespace CEntitySubclassVDataBase
{
}

// Offset: 0x7ffe0580c0f0 
// N. Class: 227 
// Fields: 4 
namespace RagdollCreationParams_t
{
	constexpr uint32_t m_vForce = 0x0;  // Vector 
	constexpr uint32_t m_nForceBone = 0xC;  // int32 
	constexpr uint32_t m_bForceCurrentWorldTransform = 0x10;  // bool 
	constexpr uint32_t m_nHealthToGrant = 0x14;  // int32 
}

// Offset: 0x7ffe0580c270 
// N. Class: 228 
// Fields: 6 
namespace hudtextparms_t
{
	constexpr uint32_t color1 = 0x0;  // Color 
	constexpr uint32_t color2 = 0x4;  // Color 
	constexpr uint32_t effect = 0x8;  // uint8 
	constexpr uint32_t channel = 0x9;  // uint8 
	constexpr uint32_t x = 0xC;  // float32 
	constexpr uint32_t y = 0x10;  // float32 
}

// Offset: 0x7ffe0580c3a0 
// N. Class: 229 
// Fields: 2 
namespace CSimpleSimTimer
{
	constexpr uint32_t m_next = 0x0;  // GameTime_t 
	constexpr uint32_t m_nWorldGroupId = 0x4;  // WorldGroupId_t 
}

// Offset: 0x7ffe0580c4c0 
// N. Class: 230 
// Fields: 1 
namespace CSimTimer
{
	constexpr uint32_t m_interval = 0x8;  // float32 
}

// Offset: 0x7ffe0580c6b0 
// N. Class: 231 
// Fields: 2 
namespace CRandSimTimer
{
	constexpr uint32_t m_minInterval = 0x8;  // float32 
	constexpr uint32_t m_maxInterval = 0xC;  // float32 
}

// Offset: 0x7ffe0580c7e0 
// N. Class: 232 
// Fields: 1 
namespace CStopwatchBase
{
	constexpr uint32_t m_fIsRunning = 0x8;  // bool 
}

// Offset: 0x0 
// N. Class: 233 
// Fields: 0 
namespace CSimpleStopwatch
{
}

// Offset: 0x7ffe0580c9c0 
// N. Class: 234 
// Fields: 1 
namespace CStopwatch
{
	constexpr uint32_t m_interval = 0xC;  // float32 
}

// Offset: 0x7ffe0580ca60 
// N. Class: 235 
// Fields: 2 
namespace CRandStopwatch
{
	constexpr uint32_t m_minInterval = 0xC;  // float32 
	constexpr uint32_t m_maxInterval = 0x10;  // float32 
}

// Offset: 0x7ffe0580cb20 
// N. Class: 236 
// Fields: 1 
namespace CSingleplayRules
{
	constexpr uint32_t m_bSinglePlayerGameEnding = 0xC0;  // bool 
}

// Offset: 0x7ffe0580cbc0 
// N. Class: 237 
// Fields: 9 
namespace CSoundOpvarSetPointBase
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_hSource = 0x4E4;  // CEntityHandle 
	constexpr uint32_t m_iszSourceEntityName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_vLastPosition = 0x548;  // Vector 
	constexpr uint32_t m_iszStackName = 0x558;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOperatorName = 0x560;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOpvarName = 0x568;  // CUtlSymbolLarge 
	constexpr uint32_t m_iOpvarIndex = 0x570;  // int32 
	constexpr uint32_t m_bUseAutoCompare = 0x574;  // bool 
}

// Offset: 0x7ffe0580cd60 
// N. Class: 238 
// Fields: 24 
namespace CSoundOpvarSetPointEntity
{
	constexpr uint32_t m_OnEnter = 0x578;  // CEntityIOOutput 
	constexpr uint32_t m_OnExit = 0x5A0;  // CEntityIOOutput 
	constexpr uint32_t m_bAutoDisable = 0x5C8;  // bool 
	constexpr uint32_t m_flDistanceMin = 0x60C;  // float32 
	constexpr uint32_t m_flDistanceMax = 0x610;  // float32 
	constexpr uint32_t m_flDistanceMapMin = 0x614;  // float32 
	constexpr uint32_t m_flDistanceMapMax = 0x618;  // float32 
	constexpr uint32_t m_flOcclusionRadius = 0x61C;  // float32 
	constexpr uint32_t m_flOcclusionMin = 0x620;  // float32 
	constexpr uint32_t m_flOcclusionMax = 0x624;  // float32 
	constexpr uint32_t m_flValSetOnDisable = 0x628;  // float32 
	constexpr uint32_t m_bSetValueOnDisable = 0x62C;  // bool 
	constexpr uint32_t m_bReloading = 0x62D;  // bool 
	constexpr uint32_t m_nSimulationMode = 0x630;  // int32 
	constexpr uint32_t m_nVisibilitySamples = 0x634;  // int32 
	constexpr uint32_t m_vDynamicProxyPoint = 0x638;  // Vector 
	constexpr uint32_t m_flDynamicMaximumOcclusion = 0x644;  // float32 
	constexpr uint32_t m_hDynamicEntity = 0x648;  // CEntityHandle 
	constexpr uint32_t m_iszDynamicEntityName = 0x650;  // CUtlSymbolLarge 
	constexpr uint32_t m_flPathingDistanceNormFactor = 0x658;  // float32 
	constexpr uint32_t m_vPathingSourcePos = 0x65C;  // Vector 
	constexpr uint32_t m_vPathingListenerPos = 0x668;  // Vector 
	constexpr uint32_t m_vPathingDirection = 0x674;  // Vector 
	constexpr uint32_t m_nPathingSourceIndex = 0x680;  // int32 
}

// Offset: 0x7ffe0580d0e0 
// N. Class: 239 
// Fields: 9 
namespace CSoundOpvarSetAABBEntity
{
	constexpr uint32_t m_vDistanceInnerMins = 0x688;  // Vector 
	constexpr uint32_t m_vDistanceInnerMaxs = 0x694;  // Vector 
	constexpr uint32_t m_vDistanceOuterMins = 0x6A0;  // Vector 
	constexpr uint32_t m_vDistanceOuterMaxs = 0x6AC;  // Vector 
	constexpr uint32_t m_nAABBDirection = 0x6B8;  // int32 
	constexpr uint32_t m_vInnerMins = 0x6BC;  // Vector 
	constexpr uint32_t m_vInnerMaxs = 0x6C8;  // Vector 
	constexpr uint32_t m_vOuterMins = 0x6D4;  // Vector 
	constexpr uint32_t m_vOuterMaxs = 0x6E0;  // Vector 
}

// Offset: 0x0 
// N. Class: 240 
// Fields: 0 
namespace CSoundOpvarSetOBBEntity
{
}

// Offset: 0x7ffe0580d300 
// N. Class: 241 
// Fields: 3 
namespace CSoundOpvarSetPathCornerEntity
{
	constexpr uint32_t m_flDistMinSqr = 0x6A0;  // float32 
	constexpr uint32_t m_flDistMaxSqr = 0x6A4;  // float32 
	constexpr uint32_t m_iszPathCornerEntityName = 0x6A8;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe0580d3e0 
// N. Class: 242 
// Fields: 3 
namespace SoundOpvarTraceResult_t
{
	constexpr uint32_t vPos = 0x0;  // Vector 
	constexpr uint32_t bDidHit = 0xC;  // bool 
	constexpr uint32_t flDistSqrToCenter = 0x10;  // float32 
}

// Offset: 0x7ffe0580d4b0 
// N. Class: 243 
// Fields: 2 
namespace AutoRoomDoorwayPairs_t
{
	constexpr uint32_t vP1 = 0x0;  // Vector 
	constexpr uint32_t vP2 = 0xC;  // Vector 
}

// Offset: 0x7ffe0580d560 
// N. Class: 244 
// Fields: 5 
namespace CSoundOpvarSetAutoRoomEntity
{
	constexpr uint32_t m_traceResults = 0x688;  // CUtlVector< SoundOpvarTraceResult_t > 
	constexpr uint32_t m_doorwayPairs = 0x6A0;  // CUtlVector< AutoRoomDoorwayPairs_t > 
	constexpr uint32_t m_flSize = 0x6B8;  // float32 
	constexpr uint32_t m_flHeightTolerance = 0x6BC;  // float32 
	constexpr uint32_t m_flSizeSqr = 0x6C0;  // float32 
}

// Offset: 0x7ffe0580d680 
// N. Class: 245 
// Fields: 8 
namespace CSoundOpvarSetOBBWindEntity
{
	constexpr uint32_t m_vMins = 0x578;  // Vector 
	constexpr uint32_t m_vMaxs = 0x584;  // Vector 
	constexpr uint32_t m_vDistanceMins = 0x590;  // Vector 
	constexpr uint32_t m_vDistanceMaxs = 0x59C;  // Vector 
	constexpr uint32_t m_flWindMin = 0x5A8;  // float32 
	constexpr uint32_t m_flWindMax = 0x5AC;  // float32 
	constexpr uint32_t m_flWindMapMin = 0x5B0;  // float32 
	constexpr uint32_t m_flWindMapMax = 0x5B4;  // float32 
}

// Offset: 0x7ffe0580dc40 
// N. Class: 246 
// Fields: 22 
namespace CTakeDamageInfo
{
	constexpr uint32_t m_vecDamageForce = 0x8;  // Vector 
	constexpr uint32_t m_vecDamagePosition = 0x14;  // Vector 
	constexpr uint32_t m_vecReportedPosition = 0x20;  // Vector 
	constexpr uint32_t m_vecDamageDirection = 0x2C;  // Vector 
	constexpr uint32_t m_hInflictor = 0x38;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hAttacker = 0x3C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hAbility = 0x40;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flDamage = 0x44;  // float32 
	constexpr uint32_t m_flTotalledDamage = 0x48;  // float32 
	constexpr uint32_t m_flTotalledDamageAbsorbed = 0x4C;  // float32 
	constexpr uint32_t m_bitsDamageType = 0x50;  // DamageTypes_t 
	constexpr uint32_t m_iDamageCustom = 0x54;  // int32 
	constexpr uint32_t m_iAmmoType = 0x58;  // AmmoIndex_t 
	constexpr uint32_t m_flOriginalDamage = 0x68;  // float32 
	constexpr uint32_t m_bShouldBleed = 0x6C;  // bool 
	constexpr uint32_t m_bShouldSpark = 0x6D;  // bool 
	constexpr uint32_t m_flDamageAbsorbed = 0x70;  // float32 
	constexpr uint32_t m_nNumObjectsPenetrated = 0x88;  // int32 
	constexpr uint32_t m_flFriendlyFireDamageReductionRatio = 0x8C;  // float32 
	constexpr uint32_t m_hScriptInstance = 0x90;  // HSCRIPT 
	constexpr uint32_t m_bInTakeDamageFlow = 0xAC;  // bool 
}

// Offset: 0x7ffe0580b410 
// N. Class: 247 
// Fields: 6 
namespace CTakeDamageResult
{
	constexpr uint32_t m_pOriginatingInfo = 0x0;  // CTakeDamageInfo* 
	constexpr uint32_t m_nHealthLost = 0x8;  // int32 
	constexpr uint32_t m_nDamageTaken = 0xC;  // int32 
	constexpr uint32_t m_nTotalledHealthLost = 0x10;  // int32 
	constexpr uint32_t m_nTotalledDamageTaken = 0x14;  // int32 
	constexpr uint32_t m_flTotalledDamageAbsorbed = 0x18;  // float32 
}

// Offset: 0x7ffe0580b720 
// N. Class: 248 
// Fields: 4 
namespace SummaryTakeDamageInfo_t
{
	constexpr uint32_t nSummarisedCount = 0x0;  // int32 
	constexpr uint32_t info = 0x8;  // CTakeDamageInfo 
	constexpr uint32_t result = 0xC0;  // CTakeDamageResult 
	constexpr uint32_t hTarget = 0xE0;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0580b8a8 
// N. Class: 249 
// Fields: 1 
namespace CTakeDamageSummaryScopeGuard
{
	constexpr uint32_t m_vecSummaries = 0x8;  // CUtlVector< SummaryTakeDamageInfo_t* > 
}

// Offset: 0x0 
// N. Class: 250 
// Fields: 0 
namespace CTeamplayRules
{
}

// Offset: 0x7ffe058fcf40 
// N. Class: 251 
// Fields: 5 
namespace CEconItemAttribute
{
	constexpr uint32_t m_iAttributeDefinitionIndex = 0x30;  // uint16 
	constexpr uint32_t m_flValue = 0x34;  // float32 
	constexpr uint32_t m_flInitialValue = 0x38;  // float32 
	constexpr uint32_t m_nRefundableCurrency = 0x3C;  // int32 
	constexpr uint32_t m_bSetBonus = 0x40;  // bool 
}

// Offset: 0x7ffe058fbec0 
// N. Class: 252 
// Fields: 6 
namespace CAttributeManager
{
	constexpr uint32_t m_Providers = 0x8;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_iReapplyProvisionParity = 0x20;  // int32 
	constexpr uint32_t m_hOuter = 0x24;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bPreventLoopback = 0x28;  // bool 
	constexpr uint32_t m_ProviderType = 0x2C;  // attributeprovidertypes_t 
	constexpr uint32_t m_CachedResults = 0x30;  // CUtlVector< CAttributeManager::cached_attribute_float_t > 
}

// Offset: 0x7ffe058fce80 
// N. Class: 253 
// Fields: 2 
namespace CAttributeList
{
	constexpr uint32_t m_Attributes = 0x8;  // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute > 
	constexpr uint32_t m_pManager = 0x58;  // CAttributeManager* 
}

// Offset: 0x0 
// N. Class: 254 
// Fields: 0 
namespace IEconItemInterface
{
}

// Offset: 0x7ffe058fbff0 
// N. Class: 255 
// Fields: 3 
namespace CAttributeManager::cached_attribute_float_t
{
	constexpr uint32_t flIn = 0x0;  // float32 
	constexpr uint32_t iAttribHook = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t flOut = 0x10;  // float32 
}

// Offset: 0x7ffe058fd050 
// N. Class: 256 
// Fields: 13 
namespace CEconItemView
{
	constexpr uint32_t m_iItemDefinitionIndex = 0x38;  // uint16 
	constexpr uint32_t m_iEntityQuality = 0x3C;  // int32 
	constexpr uint32_t m_iEntityLevel = 0x40;  // uint32 
	constexpr uint32_t m_iItemID = 0x48;  // uint64 
	constexpr uint32_t m_iItemIDHigh = 0x50;  // uint32 
	constexpr uint32_t m_iItemIDLow = 0x54;  // uint32 
	constexpr uint32_t m_iAccountID = 0x58;  // uint32 
	constexpr uint32_t m_iInventoryPosition = 0x5C;  // uint32 
	constexpr uint32_t m_bInitialized = 0x68;  // bool 
	constexpr uint32_t m_AttributeList = 0x70;  // CAttributeList 
	constexpr uint32_t m_NetworkedDynamicAttributes = 0xD0;  // CAttributeList 
	constexpr uint32_t m_szCustomName = 0x130;  // char[161] 
	constexpr uint32_t m_szCustomNameOverride = 0x1D1;  // char[161] 
}

// Offset: 0x7ffe058fc0e0 
// N. Class: 257 
// Fields: 1 
namespace CAttributeContainer
{
	constexpr uint32_t m_Item = 0x50;  // CEconItemView 
}

// Offset: 0x0 
// N. Class: 258 
// Fields: 0 
namespace IHasAttributes
{
}

// Offset: 0x7ffe058517a0 
// N. Class: 259 
// Fields: 2 
namespace GameAmmoTypeInfo_t
{
	constexpr uint32_t m_nBuySize = 0x38;  // int32 
	constexpr uint32_t m_nCost = 0x3C;  // int32 
}

// Offset: 0x7ffe05853810 
// N. Class: 260 
// Fields: 2 
namespace EntitySpottedState_t
{
	constexpr uint32_t m_bSpotted = 0x8;  // bool 
	constexpr uint32_t m_bSpottedByMask = 0xC;  // uint32[2] 
}

// Offset: 0x7ffe05851670 
// N. Class: 261 
// Fields: 3 
namespace SpawnPoint
{
	constexpr uint32_t m_iPriority = 0x4E0;  // int32 
	constexpr uint32_t m_bEnabled = 0x4E4;  // bool 
	constexpr uint32_t m_nType = 0x4E8;  // int32 
}

// Offset: 0x7ffe058518c0 
// N. Class: 262 
// Fields: 189 
namespace CCSGameRules
{
	constexpr uint32_t m_bFreezePeriod = 0xC8;  // bool 
	constexpr uint32_t m_bWarmupPeriod = 0xC9;  // bool 
	constexpr uint32_t m_fWarmupPeriodEnd = 0xCC;  // GameTime_t 
	constexpr uint32_t m_fWarmupPeriodStart = 0xD0;  // GameTime_t 
	constexpr uint32_t m_bServerPaused = 0xD4;  // bool 
	constexpr uint32_t m_bTerroristTimeOutActive = 0xD5;  // bool 
	constexpr uint32_t m_bCTTimeOutActive = 0xD6;  // bool 
	constexpr uint32_t m_flTerroristTimeOutRemaining = 0xD8;  // float32 
	constexpr uint32_t m_flCTTimeOutRemaining = 0xDC;  // float32 
	constexpr uint32_t m_nTerroristTimeOuts = 0xE0;  // int32 
	constexpr uint32_t m_nCTTimeOuts = 0xE4;  // int32 
	constexpr uint32_t m_bTechnicalTimeOut = 0xE8;  // bool 
	constexpr uint32_t m_bMatchWaitingForResume = 0xE9;  // bool 
	constexpr uint32_t m_iRoundTime = 0xEC;  // int32 
	constexpr uint32_t m_fMatchStartTime = 0xF0;  // float32 
	constexpr uint32_t m_fRoundStartTime = 0xF4;  // GameTime_t 
	constexpr uint32_t m_flRestartRoundTime = 0xF8;  // GameTime_t 
	constexpr uint32_t m_bGameRestart = 0xFC;  // bool 
	constexpr uint32_t m_flGameStartTime = 0x100;  // float32 
	constexpr uint32_t m_timeUntilNextPhaseStarts = 0x104;  // float32 
	constexpr uint32_t m_gamePhase = 0x108;  // int32 
	constexpr uint32_t m_totalRoundsPlayed = 0x10C;  // int32 
	constexpr uint32_t m_nRoundsPlayedThisPhase = 0x110;  // int32 
	constexpr uint32_t m_nOvertimePlaying = 0x114;  // int32 
	constexpr uint32_t m_iHostagesRemaining = 0x118;  // int32 
	constexpr uint32_t m_bAnyHostageReached = 0x11C;  // bool 
	constexpr uint32_t m_bMapHasBombTarget = 0x11D;  // bool 
	constexpr uint32_t m_bMapHasRescueZone = 0x11E;  // bool 
	constexpr uint32_t m_bMapHasBuyZone = 0x11F;  // bool 
	constexpr uint32_t m_bIsQueuedMatchmaking = 0x120;  // bool 
	constexpr uint32_t m_nQueuedMatchmakingMode = 0x124;  // int32 
	constexpr uint32_t m_bIsValveDS = 0x128;  // bool 
	constexpr uint32_t m_bLogoMap = 0x129;  // bool 
	constexpr uint32_t m_bPlayAllStepSoundsOnServer = 0x12A;  // bool 
	constexpr uint32_t m_iSpectatorSlotCount = 0x12C;  // int32 
	constexpr uint32_t m_MatchDevice = 0x130;  // int32 
	constexpr uint32_t m_bHasMatchStarted = 0x134;  // bool 
	constexpr uint32_t m_nNextMapInMapgroup = 0x138;  // int32 
	constexpr uint32_t m_szTournamentEventName = 0x13C;  // char[512] 
	constexpr uint32_t m_szTournamentEventStage = 0x33C;  // char[512] 
	constexpr uint32_t m_szMatchStatTxt = 0x53C;  // char[512] 
	constexpr uint32_t m_szTournamentPredictionsTxt = 0x73C;  // char[512] 
	constexpr uint32_t m_nTournamentPredictionsPct = 0x93C;  // int32 
	constexpr uint32_t m_flCMMItemDropRevealStartTime = 0x940;  // GameTime_t 
	constexpr uint32_t m_flCMMItemDropRevealEndTime = 0x944;  // GameTime_t 
	constexpr uint32_t m_bIsDroppingItems = 0x948;  // bool 
	constexpr uint32_t m_bIsQuestEligible = 0x949;  // bool 
	constexpr uint32_t m_bIsHltvActive = 0x94A;  // bool 
	constexpr uint32_t m_arrProhibitedItemIndices = 0x94C;  // uint16[100] 
	constexpr uint32_t m_arrTournamentActiveCasterAccounts = 0xA14;  // uint32[4] 
	constexpr uint32_t m_numBestOfMaps = 0xA24;  // int32 
	constexpr uint32_t m_nHalloweenMaskListSeed = 0xA28;  // int32 
	constexpr uint32_t m_bBombDropped = 0xA2C;  // bool 
	constexpr uint32_t m_bBombPlanted = 0xA2D;  // bool 
	constexpr uint32_t m_iRoundWinStatus = 0xA30;  // int32 
	constexpr uint32_t m_eRoundWinReason = 0xA34;  // int32 
	constexpr uint32_t m_bTCantBuy = 0xA38;  // bool 
	constexpr uint32_t m_bCTCantBuy = 0xA39;  // bool 
	constexpr uint32_t m_iMatchStats_RoundResults = 0xA3C;  // int32[30] 
	constexpr uint32_t m_iMatchStats_PlayersAlive_CT = 0xAB4;  // int32[30] 
	constexpr uint32_t m_iMatchStats_PlayersAlive_T = 0xB2C;  // int32[30] 
	constexpr uint32_t m_TeamRespawnWaveTimes = 0xBA4;  // float32[32] 
	constexpr uint32_t m_flNextRespawnWave = 0xC24;  // GameTime_t[32] 
	constexpr uint32_t m_nServerQuestID = 0xCA4;  // int32 
	constexpr uint32_t m_vMinimapMins = 0xCA8;  // Vector 
	constexpr uint32_t m_vMinimapMaxs = 0xCB4;  // Vector 
	constexpr uint32_t m_MinimapVerticalSectionHeights = 0xCC0;  // float32[8] 
	constexpr uint32_t m_bSpawnedTerrorHuntHeavy = 0xCE0;  // bool 
	constexpr uint32_t m_nEndMatchMapGroupVoteTypes = 0xCE4;  // int32[10] 
	constexpr uint32_t m_nEndMatchMapGroupVoteOptions = 0xD0C;  // int32[10] 
	constexpr uint32_t m_nEndMatchMapVoteWinner = 0xD34;  // int32 
	constexpr uint32_t m_iNumConsecutiveCTLoses = 0xD38;  // int32 
	constexpr uint32_t m_iNumConsecutiveTerroristLoses = 0xD3C;  // int32 
	constexpr uint32_t m_bHasHostageBeenTouched = 0xD58;  // bool 
	constexpr uint32_t m_flIntermissionStartTime = 0xD5C;  // GameTime_t 
	constexpr uint32_t m_flIntermissionEndTime = 0xD60;  // GameTime_t 
	constexpr uint32_t m_bLevelInitialized = 0xD64;  // bool 
	constexpr uint32_t m_iTotalRoundsPlayed = 0xD68;  // int32 
	constexpr uint32_t m_iUnBalancedRounds = 0xD6C;  // int32 
	constexpr uint32_t m_endMatchOnRoundReset = 0xD70;  // bool 
	constexpr uint32_t m_endMatchOnThink = 0xD71;  // bool 
	constexpr uint32_t m_iFreezeTime = 0xD74;  // int32 
	constexpr uint32_t m_iNumTerrorist = 0xD78;  // int32 
	constexpr uint32_t m_iNumCT = 0xD7C;  // int32 
	constexpr uint32_t m_iNumSpawnableTerrorist = 0xD80;  // int32 
	constexpr uint32_t m_iNumSpawnableCT = 0xD84;  // int32 
	constexpr uint32_t m_arrSelectedHostageSpawnIndices = 0xD88;  // CUtlVector< int32 > 
	constexpr uint32_t m_nSpawnPointsRandomSeed = 0xDA0;  // int32 
	constexpr uint32_t m_bFirstConnected = 0xDA4;  // bool 
	constexpr uint32_t m_bCompleteReset = 0xDA5;  // bool 
	constexpr uint32_t m_bPickNewTeamsOnReset = 0xDA6;  // bool 
	constexpr uint32_t m_bScrambleTeamsOnRestart = 0xDA7;  // bool 
	constexpr uint32_t m_bSwapTeamsOnRestart = 0xDA8;  // bool 
	constexpr uint32_t m_nEndMatchTiedVotes = 0xDB0;  // CUtlVector< int32 > 
	constexpr uint32_t m_bNeedToAskPlayersForContinueVote = 0xDCC;  // bool 
	constexpr uint32_t m_numQueuedMatchmakingAccounts = 0xDD0;  // uint32 
	constexpr uint32_t m_fAvgPlayerRank = 0xDD4;  // float32 
	constexpr uint32_t m_pQueuedMatchmakingReservationString = 0xDD8;  // char* 
	constexpr uint32_t m_numTotalTournamentDrops = 0xDE0;  // uint32 
	constexpr uint32_t m_numSpectatorsCountMax = 0xDE4;  // uint32 
	constexpr uint32_t m_numSpectatorsCountMaxTV = 0xDE8;  // uint32 
	constexpr uint32_t m_numSpectatorsCountMaxLnk = 0xDEC;  // uint32 
	constexpr uint32_t m_bForceTeamChangeSilent = 0xDF8;  // bool 
	constexpr uint32_t m_bLoadingRoundBackupData = 0xDF9;  // bool 
	constexpr uint32_t m_nMatchInfoShowType = 0xE30;  // int32 
	constexpr uint32_t m_flMatchInfoDecidedTime = 0xE34;  // float32 
	constexpr uint32_t mTeamDMLastWinningTeamNumber = 0xE50;  // int32 
	constexpr uint32_t mTeamDMLastThinkTime = 0xE54;  // float32 
	constexpr uint32_t m_flTeamDMLastAnnouncementTime = 0xE58;  // float32 
	constexpr uint32_t m_iAccountTerrorist = 0xE5C;  // int32 
	constexpr uint32_t m_iAccountCT = 0xE60;  // int32 
	constexpr uint32_t m_iSpawnPointCount_Terrorist = 0xE64;  // int32 
	constexpr uint32_t m_iSpawnPointCount_CT = 0xE68;  // int32 
	constexpr uint32_t m_iMaxNumTerrorists = 0xE6C;  // int32 
	constexpr uint32_t m_iMaxNumCTs = 0xE70;  // int32 
	constexpr uint32_t m_iLoserBonusMostRecentTeam = 0xE74;  // int32 
	constexpr uint32_t m_tmNextPeriodicThink = 0xE78;  // float32 
	constexpr uint32_t m_bVoiceWonMatchBragFired = 0xE7C;  // bool 
	constexpr uint32_t m_fWarmupNextChatNoticeTime = 0xE80;  // float32 
	constexpr uint32_t m_iHostagesRescued = 0xE88;  // int32 
	constexpr uint32_t m_iHostagesTouched = 0xE8C;  // int32 
	constexpr uint32_t m_flNextHostageAnnouncement = 0xE90;  // float32 
	constexpr uint32_t m_bNoTerroristsKilled = 0xE94;  // bool 
	constexpr uint32_t m_bNoCTsKilled = 0xE95;  // bool 
	constexpr uint32_t m_bNoEnemiesKilled = 0xE96;  // bool 
	constexpr uint32_t m_bCanDonateWeapons = 0xE97;  // bool 
	constexpr uint32_t m_firstKillTime = 0xE9C;  // float32 
	constexpr uint32_t m_firstBloodTime = 0xEA4;  // float32 
	constexpr uint32_t m_hostageWasInjured = 0xEC0;  // bool 
	constexpr uint32_t m_hostageWasKilled = 0xEC1;  // bool 
	constexpr uint32_t m_bVoteCalled = 0xED0;  // bool 
	constexpr uint32_t m_bServerVoteOnReset = 0xED1;  // bool 
	constexpr uint32_t m_flVoteCheckThrottle = 0xED4;  // float32 
	constexpr uint32_t m_bBuyTimeEnded = 0xED8;  // bool 
	constexpr uint32_t m_nLastFreezeEndBeep = 0xEDC;  // int32 
	constexpr uint32_t m_bTargetBombed = 0xEE0;  // bool 
	constexpr uint32_t m_bBombDefused = 0xEE1;  // bool 
	constexpr uint32_t m_bMapHasBombZone = 0xEE2;  // bool 
	constexpr uint32_t m_vecMainCTSpawnPos = 0xF30;  // Vector 
	constexpr uint32_t m_CTSpawnPointsMasterList = 0xF40;  // CUtlVector< SpawnPoint* > 
	constexpr uint32_t m_TerroristSpawnPointsMasterList = 0xF58;  // CUtlVector< SpawnPoint* > 
	constexpr uint32_t m_bRespawningAllRespawnablePlayers = 0xF70;  // bool 
	constexpr uint32_t m_iNextCTSpawnPoint = 0xF74;  // int32 
	constexpr uint32_t m_flCTSpawnPointUsedTime = 0xF78;  // float32 
	constexpr uint32_t m_iNextTerroristSpawnPoint = 0xF7C;  // int32 
	constexpr uint32_t m_flTerroristSpawnPointUsedTime = 0xF80;  // float32 
	constexpr uint32_t m_CTSpawnPoints = 0xF88;  // CUtlVector< SpawnPoint* > 
	constexpr uint32_t m_TerroristSpawnPoints = 0xFA0;  // CUtlVector< SpawnPoint* > 
	constexpr uint32_t m_bIsUnreservedGameServer = 0xFB8;  // bool 
	constexpr uint32_t m_fAutobalanceDisplayTime = 0xFBC;  // float32 
	constexpr uint32_t m_bAllowWeaponSwitch = 0x1228;  // bool 
	constexpr uint32_t m_bRoundTimeWarningTriggered = 0x1229;  // bool 
	constexpr uint32_t m_phaseChangeAnnouncementTime = 0x122C;  // GameTime_t 
	constexpr uint32_t m_fNextUpdateTeamClanNamesTime = 0x1230;  // float32 
	constexpr uint32_t m_flLastThinkTime = 0x1234;  // GameTime_t 
	constexpr uint32_t m_fAccumulatedRoundOffDamage = 0x1238;  // float32 
	constexpr uint32_t m_nShorthandedBonusLastEvalRound = 0x123C;  // int32 
	constexpr uint32_t m_nMatchAbortedEarlyReason = 0x14B8;  // int32 
	constexpr uint32_t m_bHasTriggeredRoundStartMusic = 0x14BC;  // bool 
	constexpr uint32_t m_bSwitchingTeamsAtRoundReset = 0x14BD;  // bool 
	constexpr uint32_t m_pGameModeRules = 0x14D8;  // CCSGameModeRules* 
	constexpr uint32_t m_BtGlobalBlackboard = 0x14E0;  // KeyValues3 
	constexpr uint32_t m_hPlayerResource = 0x1570;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_RetakeRules = 0x1578;  // CRetakeGameRules 
	constexpr uint32_t m_arrTeamUniqueKillWeaponsMatch = 0x1710;  // CUtlVector< int32 >[4] 
	constexpr uint32_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1770;  // bool[4] 
	constexpr uint32_t m_nMatchEndCount = 0x1798;  // uint8 
	constexpr uint32_t m_nTTeamIntroVariant = 0x179C;  // int32 
	constexpr uint32_t m_nCTTeamIntroVariant = 0x17A0;  // int32 
	constexpr uint32_t m_bTeamIntroPeriod = 0x17A4;  // bool 
	constexpr uint32_t m_fTeamIntroPeriodEnd = 0x17A8;  // GameTime_t 
	constexpr uint32_t m_bPlayedTeamIntroVO = 0x17AC;  // bool 
	constexpr uint32_t m_iRoundEndWinnerTeam = 0x17B0;  // int32 
	constexpr uint32_t m_eRoundEndReason = 0x17B4;  // int32 
	constexpr uint32_t m_bRoundEndShowTimerDefend = 0x17B8;  // bool 
	constexpr uint32_t m_iRoundEndTimerTime = 0x17BC;  // int32 
	constexpr uint32_t m_sRoundEndFunFactToken = 0x17C0;  // CUtlString 
	constexpr uint32_t m_iRoundEndFunFactPlayerSlot = 0x17C8;  // CPlayerSlot 
	constexpr uint32_t m_iRoundEndFunFactData1 = 0x17CC;  // int32 
	constexpr uint32_t m_iRoundEndFunFactData2 = 0x17D0;  // int32 
	constexpr uint32_t m_iRoundEndFunFactData3 = 0x17D4;  // int32 
	constexpr uint32_t m_sRoundEndMessage = 0x17D8;  // CUtlString 
	constexpr uint32_t m_iRoundEndPlayerCount = 0x17E0;  // int32 
	constexpr uint32_t m_bRoundEndNoMusic = 0x17E4;  // bool 
	constexpr uint32_t m_iRoundEndLegacy = 0x17E8;  // int32 
	constexpr uint32_t m_nRoundEndCount = 0x17EC;  // uint8 
	constexpr uint32_t m_iRoundStartRoundNumber = 0x17F0;  // int32 
	constexpr uint32_t m_nRoundStartCount = 0x17F4;  // uint8 
	constexpr uint32_t m_flLastPerfSampleTime = 0x5800;  // float64 
}

// Offset: 0x7ffe058516f0 
// N. Class: 263 
// Fields: 1 
namespace CCSGameRulesProxy
{
	constexpr uint32_t m_pGameRules = 0x4E0;  // CCSGameRules* 
}

// Offset: 0x7ffe058538c0 
// N. Class: 264 
// Fields: 1 
namespace CCSGameModeRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;  // CNetworkVarChainer 
}

// Offset: 0x7ffe05853a30 
// N. Class: 265 
// Fields: 5 
namespace CRetakeGameRules
{
	constexpr uint32_t m_nMatchSeed = 0xF8;  // int32 
	constexpr uint32_t m_bBlockersPresent = 0xFC;  // bool 
	constexpr uint32_t m_bRoundInProgress = 0xFD;  // bool 
	constexpr uint32_t m_iFirstSecondHalfRound = 0x100;  // int32 
	constexpr uint32_t m_iBombSite = 0x104;  // int32 
}

// Offset: 0x0 
// N. Class: 266 
// Fields: 0 
namespace CCSGameModeRules_Noop
{
}

// Offset: 0x7ffe05853070 
// N. Class: 267 
// Fields: 1 
namespace CCSGameModeRules_ArmsRace
{
	constexpr uint32_t m_WeaponSequence = 0x30;  // CNetworkUtlVectorBase< CUtlString > 
}

// Offset: 0x7ffe058536b0 
// N. Class: 268 
// Fields: 3 
namespace CCSGameModeRules_Deathmatch
{
	constexpr uint32_t m_flDMBonusStartTime = 0x30;  // GameTime_t 
	constexpr uint32_t m_flDMBonusTimeLength = 0x34;  // float32 
	constexpr uint32_t m_sDMBonusWeapon = 0x38;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 269 
// Fields: 0 
namespace QuestProgress
{
}

// Offset: 0x7ffe0585bae0 
// N. Class: 270 
// Fields: 13 
namespace CSPerRoundStats_t
{
	constexpr uint32_t m_iKills = 0x30;  // int32 
	constexpr uint32_t m_iDeaths = 0x34;  // int32 
	constexpr uint32_t m_iAssists = 0x38;  // int32 
	constexpr uint32_t m_iDamage = 0x3C;  // int32 
	constexpr uint32_t m_iEquipmentValue = 0x40;  // int32 
	constexpr uint32_t m_iMoneySaved = 0x44;  // int32 
	constexpr uint32_t m_iKillReward = 0x48;  // int32 
	constexpr uint32_t m_iLiveTime = 0x4C;  // int32 
	constexpr uint32_t m_iHeadShotKills = 0x50;  // int32 
	constexpr uint32_t m_iObjective = 0x54;  // int32 
	constexpr uint32_t m_iCashEarned = 0x58;  // int32 
	constexpr uint32_t m_iUtilityDamage = 0x5C;  // int32 
	constexpr uint32_t m_iEnemiesFlashed = 0x60;  // int32 
}

// Offset: 0x7ffe0585bcf0 
// N. Class: 271 
// Fields: 21 
namespace CSMatchStats_t
{
	constexpr uint32_t m_iEnemy5Ks = 0x68;  // int32 
	constexpr uint32_t m_iEnemy4Ks = 0x6C;  // int32 
	constexpr uint32_t m_iEnemy3Ks = 0x70;  // int32 
	constexpr uint32_t m_iEnemyKnifeKills = 0x74;  // int32 
	constexpr uint32_t m_iEnemyTaserKills = 0x78;  // int32 
	constexpr uint32_t m_iEnemy2Ks = 0x7C;  // int32 
	constexpr uint32_t m_iUtility_Count = 0x80;  // int32 
	constexpr uint32_t m_iUtility_Successes = 0x84;  // int32 
	constexpr uint32_t m_iUtility_Enemies = 0x88;  // int32 
	constexpr uint32_t m_iFlash_Count = 0x8C;  // int32 
	constexpr uint32_t m_iFlash_Successes = 0x90;  // int32 
	constexpr uint32_t m_nHealthPointsRemovedTotal = 0x94;  // int32 
	constexpr uint32_t m_nHealthPointsDealtTotal = 0x98;  // int32 
	constexpr uint32_t m_nShotsFiredTotal = 0x9C;  // int32 
	constexpr uint32_t m_nShotsOnTargetTotal = 0xA0;  // int32 
	constexpr uint32_t m_i1v1Count = 0xA4;  // int32 
	constexpr uint32_t m_i1v1Wins = 0xA8;  // int32 
	constexpr uint32_t m_i1v2Count = 0xAC;  // int32 
	constexpr uint32_t m_i1v2Wins = 0xB0;  // int32 
	constexpr uint32_t m_iEntryCount = 0xB4;  // int32 
	constexpr uint32_t m_iEntryWins = 0xB8;  // int32 
}

// Offset: 0x7ffe0585c370 
// N. Class: 272 
// Fields: 8 
namespace CCSGO_TeamPreviewCharacterPosition
{
	constexpr uint32_t m_nVariant = 0x4E0;  // int32 
	constexpr uint32_t m_nRandom = 0x4E4;  // int32 
	constexpr uint32_t m_nOrdinal = 0x4E8;  // int32 
	constexpr uint32_t m_sWeaponName = 0x4F0;  // CUtlString 
	constexpr uint32_t m_xuid = 0x4F8;  // uint64 
	constexpr uint32_t m_agentItem = 0x500;  // CEconItemView 
	constexpr uint32_t m_glovesItem = 0x778;  // CEconItemView 
	constexpr uint32_t m_weaponItem = 0x9F0;  // CEconItemView 
}

// Offset: 0x0 
// N. Class: 273 
// Fields: 0 
namespace CCSGO_TeamSelectCharacterPosition
{
}

// Offset: 0x0 
// N. Class: 274 
// Fields: 0 
namespace CCSGO_TeamSelectTerroristPosition
{
}

// Offset: 0x0 
// N. Class: 275 
// Fields: 0 
namespace CCSGO_TeamSelectCounterTerroristPosition
{
}

// Offset: 0x0 
// N. Class: 276 
// Fields: 0 
namespace CCSGO_TeamIntroCharacterPosition
{
}

// Offset: 0x0 
// N. Class: 277 
// Fields: 0 
namespace CCSGO_TeamIntroTerroristPosition
{
}

// Offset: 0x0 
// N. Class: 278 
// Fields: 0 
namespace CCSGO_TeamIntroCounterTerroristPosition
{
}

// Offset: 0x0 
// N. Class: 279 
// Fields: 0 
namespace CCSGO_WingmanIntroCharacterPosition
{
}

// Offset: 0x0 
// N. Class: 280 
// Fields: 0 
namespace CCSGO_WingmanIntroTerroristPosition
{
}

// Offset: 0x0 
// N. Class: 281 
// Fields: 0 
namespace CCSGO_WingmanIntroCounterTerroristPosition
{
}

// Offset: 0x0 
// N. Class: 282 
// Fields: 0 
namespace CCSMinimapBoundary
{
}

// Offset: 0x0 
// N. Class: 283 
// Fields: 0 
namespace CCSPointScriptEntity
{
}

// Offset: 0x0 
// N. Class: 284 
// Fields: 0 
namespace CCSServerPointScriptEntity
{
}

// Offset: 0x7ffe0585c228 
// N. Class: 285 
// Fields: 1 
namespace CCSPointScript
{
	constexpr uint32_t m_pParent = 0xF8;  // CCSPointScriptEntity* 
}

// Offset: 0x0 
// N. Class: 286 
// Fields: 0 
namespace CCSPointScriptExtensions_entity
{
}

// Offset: 0x0 
// N. Class: 287 
// Fields: 0 
namespace CCSPointScriptExtensions_player
{
}

// Offset: 0x0 
// N. Class: 288 
// Fields: 0 
namespace CCSPointScriptExtensions_observer
{
}

// Offset: 0x0 
// N. Class: 289 
// Fields: 0 
namespace CCSPointScriptExtensions_player_controller
{
}

// Offset: 0x0 
// N. Class: 290 
// Fields: 0 
namespace CCSPointScriptExtensions_weapon_cs_base
{
}

// Offset: 0x0 
// N. Class: 291 
// Fields: 0 
namespace CCSPointScriptExtensions_CCSWeaponBaseVData
{
}

// Offset: 0x0 
// N. Class: 292 
// Fields: 0 
namespace CCSGOPlayerAnimGraphState
{
}

// Offset: 0x7ffe0586dfc0 
// N. Class: 293 
// Fields: 4 
namespace PredictedDamageTag_t
{
	constexpr uint32_t nTagTick = 0x30;  // GameTick_t 
	constexpr uint32_t flFlinchModSmall = 0x34;  // float32 
	constexpr uint32_t flFlinchModLarge = 0x38;  // float32 
	constexpr uint32_t flFriendlyFireDamageReductionRatio = 0x3C;  // float32 
}

// Offset: 0x7ffe057e53a0 
// N. Class: 294 
// Fields: 118 
namespace CCSPlayerPawn
{
	constexpr uint32_t m_pBulletServices = 0xDD0;  // CCSPlayer_BulletServices* 
	constexpr uint32_t m_pHostageServices = 0xDD8;  // CCSPlayer_HostageServices* 
	constexpr uint32_t m_pBuyServices = 0xDE0;  // CCSPlayer_BuyServices* 
	constexpr uint32_t m_pActionTrackingServices = 0xDE8;  // CCSPlayer_ActionTrackingServices* 
	constexpr uint32_t m_pRadioServices = 0xDF0;  // CCSPlayer_RadioServices* 
	constexpr uint32_t m_pDamageReactServices = 0xDF8;  // CCSPlayer_DamageReactServices* 
	constexpr uint32_t m_nCharacterDefIndex = 0xE00;  // uint16 
	constexpr uint32_t m_bHasFemaleVoice = 0xE02;  // bool 
	constexpr uint32_t m_strVOPrefix = 0xE08;  // CUtlString 
	constexpr uint32_t m_szLastPlaceName = 0xE10;  // char[18] 
	constexpr uint32_t m_bInHostageResetZone = 0xED0;  // bool 
	constexpr uint32_t m_bInBuyZone = 0xED1;  // bool 
	constexpr uint32_t m_TouchingBuyZones = 0xED8;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_bWasInBuyZone = 0xEF0;  // bool 
	constexpr uint32_t m_bInHostageRescueZone = 0xEF1;  // bool 
	constexpr uint32_t m_bInBombZone = 0xEF2;  // bool 
	constexpr uint32_t m_bWasInHostageRescueZone = 0xEF3;  // bool 
	constexpr uint32_t m_iRetakesOffering = 0xEF4;  // int32 
	constexpr uint32_t m_iRetakesOfferingCard = 0xEF8;  // int32 
	constexpr uint32_t m_bRetakesHasDefuseKit = 0xEFC;  // bool 
	constexpr uint32_t m_bRetakesMVPLastRound = 0xEFD;  // bool 
	constexpr uint32_t m_iRetakesMVPBoostItem = 0xF00;  // int32 
	constexpr uint32_t m_RetakesMVPBoostExtraUtility = 0xF04;  // loadout_slot_t 
	constexpr uint32_t m_flHealthShotBoostExpirationTime = 0xF08;  // GameTime_t 
	constexpr uint32_t m_flLandingTimeSeconds = 0xF0C;  // float32 
	constexpr uint32_t m_aimPunchAngle = 0xF10;  // QAngle 
	constexpr uint32_t m_aimPunchAngleVel = 0xF1C;  // QAngle 
	constexpr uint32_t m_aimPunchTickBase = 0xF28;  // int32 
	constexpr uint32_t m_aimPunchTickFraction = 0xF2C;  // float32 
	constexpr uint32_t m_aimPunchCache = 0xF30;  // CUtlVector< QAngle > 
	constexpr uint32_t m_bIsBuyMenuOpen = 0xF48;  // bool 
	constexpr uint32_t m_xLastHeadBoneTransform = 0x15F0;  // CTransform 
	constexpr uint32_t m_bLastHeadBoneTransformIsValid = 0x1610;  // bool 
	constexpr uint32_t m_lastLandTime = 0x1614;  // GameTime_t 
	constexpr uint32_t m_bOnGroundLastTick = 0x1618;  // bool 
	constexpr uint32_t m_iPlayerLocked = 0x161C;  // int32 
	constexpr uint32_t m_flTimeOfLastInjury = 0x1624;  // GameTime_t 
	constexpr uint32_t m_flNextSprayDecalTime = 0x1628;  // GameTime_t 
	constexpr uint32_t m_bNextSprayDecalTimeExpedited = 0x162C;  // bool 
	constexpr uint32_t m_nRagdollDamageBone = 0x1630;  // int32 
	constexpr uint32_t m_vRagdollDamageForce = 0x1634;  // Vector 
	constexpr uint32_t m_vRagdollDamagePosition = 0x1640;  // Vector 
	constexpr uint32_t m_szRagdollDamageWeaponName = 0x164C;  // char[64] 
	constexpr uint32_t m_bRagdollDamageHeadshot = 0x168C;  // bool 
	constexpr uint32_t m_vRagdollServerOrigin = 0x1690;  // Vector 
	constexpr uint32_t m_EconGloves = 0x16A0;  // CEconItemView 
	constexpr uint32_t m_nEconGlovesChanged = 0x1918;  // uint8 
	constexpr uint32_t m_qDeathEyeAngles = 0x191C;  // QAngle 
	constexpr uint32_t m_bSkipOneHeadConstraintUpdate = 0x1928;  // bool 
	constexpr uint32_t m_bLeftHanded = 0x1929;  // bool 
	constexpr uint32_t m_fSwitchedHandednessTime = 0x192C;  // GameTime_t 
	constexpr uint32_t m_flViewmodelOffsetX = 0x1930;  // float32 
	constexpr uint32_t m_flViewmodelOffsetY = 0x1934;  // float32 
	constexpr uint32_t m_flViewmodelOffsetZ = 0x1938;  // float32 
	constexpr uint32_t m_flViewmodelFOV = 0x193C;  // float32 
	constexpr uint32_t m_bIsWalking = 0x1940;  // bool 
	constexpr uint32_t m_fLastGivenDefuserTime = 0x1944;  // float32 
	constexpr uint32_t m_fLastGivenBombTime = 0x1948;  // float32 
	constexpr uint32_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x194C;  // float32 
	constexpr uint32_t m_iDisplayHistoryBits = 0x1950;  // uint32 
	constexpr uint32_t m_flLastAttackedTeammate = 0x1954;  // float32 
	constexpr uint32_t m_allowAutoFollowTime = 0x1958;  // GameTime_t 
	constexpr uint32_t m_bResetArmorNextSpawn = 0x195C;  // bool 
	constexpr uint32_t m_nLastKillerIndex = 0x1960;  // CEntityIndex 
	constexpr uint32_t m_entitySpottedState = 0x1968;  // EntitySpottedState_t 
	constexpr uint32_t m_nSpotRules = 0x1980;  // int32 
	constexpr uint32_t m_bIsScoped = 0x1984;  // bool 
	constexpr uint32_t m_bResumeZoom = 0x1985;  // bool 
	constexpr uint32_t m_bIsDefusing = 0x1986;  // bool 
	constexpr uint32_t m_bIsGrabbingHostage = 0x1987;  // bool 
	constexpr uint32_t m_iBlockingUseActionInProgress = 0x1988;  // CSPlayerBlockingUseAction_t 
	constexpr uint32_t m_flEmitSoundTime = 0x198C;  // GameTime_t 
	constexpr uint32_t m_bInNoDefuseArea = 0x1990;  // bool 
	constexpr uint32_t m_iBombSiteIndex = 0x1994;  // CEntityIndex 
	constexpr uint32_t m_nWhichBombZone = 0x1998;  // int32 
	constexpr uint32_t m_bInBombZoneTrigger = 0x199C;  // bool 
	constexpr uint32_t m_bWasInBombZoneTrigger = 0x199D;  // bool 
	constexpr uint32_t m_iShotsFired = 0x19A0;  // int32 
	constexpr uint32_t m_flFlinchStack = 0x19A4;  // float32 
	constexpr uint32_t m_flVelocityModifier = 0x19A8;  // float32 
	constexpr uint32_t m_flHitHeading = 0x19AC;  // float32 
	constexpr uint32_t m_nHitBodyPart = 0x19B0;  // int32 
	constexpr uint32_t m_vecTotalBulletForce = 0x19B4;  // Vector 
	constexpr uint32_t m_bWaitForNoAttack = 0x19C0;  // bool 
	constexpr uint32_t m_ignoreLadderJumpTime = 0x19C4;  // float32 
	constexpr uint32_t m_bKilledByHeadshot = 0x19C8;  // bool 
	constexpr uint32_t m_LastHitBox = 0x19CC;  // int32 
	constexpr uint32_t m_LastHealth = 0x19D0;  // int32 
	constexpr uint32_t m_pBot = 0x19D8;  // CCSBot* 
	constexpr uint32_t m_bBotAllowActive = 0x19E0;  // bool 
	constexpr uint32_t m_thirdPersonHeading = 0x19E4;  // QAngle 
	constexpr uint32_t m_flSlopeDropOffset = 0x19F0;  // float32 
	constexpr uint32_t m_flSlopeDropHeight = 0x19F4;  // float32 
	constexpr uint32_t m_vHeadConstraintOffset = 0x19F8;  // Vector 
	constexpr uint32_t m_nLastPickupPriority = 0x1A04;  // int32 
	constexpr uint32_t m_flLastPickupPriorityTime = 0x1A08;  // float32 
	constexpr uint32_t m_ArmorValue = 0x1A0C;  // int32 
	constexpr uint32_t m_unCurrentEquipmentValue = 0x1A10;  // uint16 
	constexpr uint32_t m_unRoundStartEquipmentValue = 0x1A12;  // uint16 
	constexpr uint32_t m_unFreezetimeEndEquipmentValue = 0x1A14;  // uint16 
	constexpr uint32_t m_iLastWeaponFireUsercmd = 0x1A18;  // int32 
	constexpr uint32_t m_bIsSpawning = 0x1A1C;  // bool 
	constexpr uint32_t m_iDeathFlags = 0x1A28;  // int32 
	constexpr uint32_t m_bHasDeathInfo = 0x1A2C;  // bool 
	constexpr uint32_t m_flDeathInfoTime = 0x1A30;  // float32 
	constexpr uint32_t m_vecDeathInfoOrigin = 0x1A34;  // Vector 
	constexpr uint32_t m_vecPlayerPatchEconIndices = 0x1A40;  // uint32[5] 
	constexpr uint32_t m_GunGameImmunityColor = 0x1A54;  // Color 
	constexpr uint32_t m_grenadeParameterStashTime = 0x1A58;  // GameTime_t 
	constexpr uint32_t m_bGrenadeParametersStashed = 0x1A5C;  // bool 
	constexpr uint32_t m_angStashedShootAngles = 0x1A60;  // QAngle 
	constexpr uint32_t m_vecStashedGrenadeThrowPosition = 0x1A6C;  // Vector 
	constexpr uint32_t m_vecStashedVelocity = 0x1A78;  // Vector 
	constexpr uint32_t m_angShootAngleHistory = 0x1A84;  // QAngle[2] 
	constexpr uint32_t m_vecThrowPositionHistory = 0x1A9C;  // Vector[2] 
	constexpr uint32_t m_vecVelocityHistory = 0x1AB4;  // Vector[2] 
	constexpr uint32_t m_PredictedDamageTags = 0x1AD0;  // CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > 
	constexpr uint32_t m_nHighestAppliedDamageTagTick = 0x1B20;  // int32 
}

// Offset: 0x7ffe0586db90 
// N. Class: 295 
// Fields: 5 
namespace CPlayerPing
{
	constexpr uint32_t m_hPlayer = 0x4E8;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_hPingedEntity = 0x4EC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iType = 0x4F0;  // int32 
	constexpr uint32_t m_bUrgent = 0x4F4;  // bool 
	constexpr uint32_t m_szPlaceName = 0x4F5;  // char[18] 
}

// Offset: 0x7ffe0586de20 
// N. Class: 296 
// Fields: 2 
namespace CCSPlayer_PingServices
{
	constexpr uint32_t m_flPlayerPingTokens = 0x40;  // GameTime_t[5] 
	constexpr uint32_t m_hPlayerPing = 0x54;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0586e0e0 
// N. Class: 297 
// Fields: 10 
namespace CCSPlayerResource
{
	constexpr uint32_t m_bHostageAlive = 0x4E0;  // bool[12] 
	constexpr uint32_t m_isHostageFollowingSomeone = 0x4EC;  // bool[12] 
	constexpr uint32_t m_iHostageEntityIDs = 0x4F8;  // CEntityIndex[12] 
	constexpr uint32_t m_bombsiteCenterA = 0x528;  // Vector 
	constexpr uint32_t m_bombsiteCenterB = 0x534;  // Vector 
	constexpr uint32_t m_hostageRescueX = 0x540;  // int32[4] 
	constexpr uint32_t m_hostageRescueY = 0x550;  // int32[4] 
	constexpr uint32_t m_hostageRescueZ = 0x560;  // int32[4] 
	constexpr uint32_t m_bEndMatchNextMapAllVoted = 0x570;  // bool 
	constexpr uint32_t m_foundGoalPositions = 0x571;  // bool 
}

// Offset: 0x0 
// N. Class: 298 
// Fields: 0 
namespace CCSPlayer_DamageReactServices
{
}

// Offset: 0x0 
// N. Class: 299 
// Fields: 0 
namespace CPlayer_ViewModelServices
{
}

// Offset: 0x7ffe05868fa0 
// N. Class: 300 
// Fields: 7 
namespace CCSPlayerBase_CameraServices
{
	constexpr uint32_t m_iFOV = 0x170;  // uint32 
	constexpr uint32_t m_iFOVStart = 0x174;  // uint32 
	constexpr uint32_t m_flFOVTime = 0x178;  // GameTime_t 
	constexpr uint32_t m_flFOVRate = 0x17C;  // float32 
	constexpr uint32_t m_hZoomOwner = 0x180;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTriggerFogList = 0x188;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_hLastFogTrigger = 0x1A0;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe05868cf0 
// N. Class: 301 
// Fields: 2 
namespace WeaponPurchaseCount_t
{
	constexpr uint32_t m_nItemDefIndex = 0x30;  // uint16 
	constexpr uint32_t m_nCount = 0x32;  // uint16 
}

// Offset: 0x7ffe05868da0 
// N. Class: 302 
// Fields: 1 
namespace WeaponPurchaseTracker_t
{
	constexpr uint32_t m_weaponPurchases = 0x8;  // CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > 
}

// Offset: 0x7ffe05868e30 
// N. Class: 303 
// Fields: 4 
namespace CCSPlayer_ActionTrackingServices
{
	constexpr uint32_t m_hLastWeaponBeforeC4AutoSwitch = 0x200;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_bIsRescuing = 0x22C;  // bool 
	constexpr uint32_t m_weaponPurchasesThisMatch = 0x230;  // WeaponPurchaseTracker_t 
	constexpr uint32_t m_weaponPurchasesThisRound = 0x288;  // WeaponPurchaseTracker_t 
}

// Offset: 0x7ffe05869e50 
// N. Class: 304 
// Fields: 1 
namespace CCSPlayer_BulletServices
{
	constexpr uint32_t m_totalHitsOnServer = 0x40;  // int32 
}

// Offset: 0x7ffe0586b080 
// N. Class: 305 
// Fields: 5 
namespace SellbackPurchaseEntry_t
{
	constexpr uint32_t m_unDefIdx = 0x30;  // uint16 
	constexpr uint32_t m_nCost = 0x34;  // int32 
	constexpr uint32_t m_nPrevArmor = 0x38;  // int32 
	constexpr uint32_t m_bPrevHelmet = 0x3C;  // bool 
	constexpr uint32_t m_hItem = 0x40;  // CEntityHandle 
}

// Offset: 0x7ffe0586b190 
// N. Class: 306 
// Fields: 1 
namespace CCSPlayer_BuyServices
{
	constexpr uint32_t m_vecSellbackPurchaseEntries = 0xC8;  // CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > 
}

// Offset: 0x0 
// N. Class: 307 
// Fields: 0 
namespace CCSPlayer_CameraServices
{
}

// Offset: 0x7ffe05869d90 
// N. Class: 308 
// Fields: 2 
namespace CCSPlayer_HostageServices
{
	constexpr uint32_t m_hCarriedHostage = 0x40;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hCarriedHostageProp = 0x44;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0586a110 
// N. Class: 309 
// Fields: 3 
namespace CCSPlayer_ItemServices
{
	constexpr uint32_t m_bHasDefuser = 0x40;  // bool 
	constexpr uint32_t m_bHasHelmet = 0x41;  // bool 
	constexpr uint32_t m_bHasHeavyArmor = 0x42;  // bool 
}

// Offset: 0x7ffe0586b3c0 
// N. Class: 310 
// Fields: 40 
namespace CCSPlayer_MovementServices
{
	constexpr uint32_t m_vecLadderNormal = 0x228;  // Vector 
	constexpr uint32_t m_nLadderSurfacePropIndex = 0x234;  // int32 
	constexpr uint32_t m_flDuckAmount = 0x238;  // float32 
	constexpr uint32_t m_flDuckSpeed = 0x23C;  // float32 
	constexpr uint32_t m_bDuckOverride = 0x240;  // bool 
	constexpr uint32_t m_bDesiresDuck = 0x241;  // bool 
	constexpr uint32_t m_flDuckOffset = 0x244;  // float32 
	constexpr uint32_t m_nDuckTimeMsecs = 0x248;  // uint32 
	constexpr uint32_t m_nDuckJumpTimeMsecs = 0x24C;  // uint32 
	constexpr uint32_t m_nJumpTimeMsecs = 0x250;  // uint32 
	constexpr uint32_t m_flLastDuckTime = 0x254;  // float32 
	constexpr uint32_t m_vecLastPositionAtFullCrouchSpeed = 0x260;  // Vector2D 
	constexpr uint32_t m_duckUntilOnGround = 0x268;  // bool 
	constexpr uint32_t m_bHasWalkMovedSinceLastJump = 0x269;  // bool 
	constexpr uint32_t m_bInStuckTest = 0x26A;  // bool 
	constexpr uint32_t m_flStuckCheckTime = 0x278;  // float32[64][2] 
	constexpr uint32_t m_nTraceCount = 0x478;  // int32 
	constexpr uint32_t m_StuckLast = 0x47C;  // int32 
	constexpr uint32_t m_bSpeedCropped = 0x480;  // bool 
	constexpr uint32_t m_flGroundMoveEfficiency = 0x484;  // float32 
	constexpr uint32_t m_nOldWaterLevel = 0x488;  // int32 
	constexpr uint32_t m_flWaterEntryTime = 0x48C;  // float32 
	constexpr uint32_t m_vecForward = 0x490;  // Vector 
	constexpr uint32_t m_vecLeft = 0x49C;  // Vector 
	constexpr uint32_t m_vecUp = 0x4A8;  // Vector 
	constexpr uint32_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4B4;  // int32 
	constexpr uint32_t m_bMadeFootstepNoise = 0x4B8;  // bool 
	constexpr uint32_t m_iFootsteps = 0x4BC;  // int32 
	constexpr uint32_t m_bOldJumpPressed = 0x4C0;  // bool 
	constexpr uint32_t m_flJumpPressedTime = 0x4C4;  // float32 
	constexpr uint32_t m_fStashGrenadeParameterWhen = 0x4C8;  // GameTime_t 
	constexpr uint32_t m_nButtonDownMaskPrev = 0x4D0;  // uint64 
	constexpr uint32_t m_flOffsetTickCompleteTime = 0x4D8;  // float32 
	constexpr uint32_t m_flOffsetTickStashedSpeed = 0x4DC;  // float32 
	constexpr uint32_t m_flStamina = 0x4E0;  // float32 
	constexpr uint32_t m_flHeightAtJumpStart = 0x4E4;  // float32 
	constexpr uint32_t m_flMaxJumpHeightThisJump = 0x4E8;  // float32 
	constexpr uint32_t m_flMaxJumpHeightLastJump = 0x4EC;  // float32 
	constexpr uint32_t m_flStaminaAtJumpStart = 0x4F0;  // float32 
	constexpr uint32_t m_flAccumulatedJumpError = 0x4F4;  // float32 
}

// Offset: 0x7ffe0586e300 
// N. Class: 311 
// Fields: 3 
namespace CCSPlayer_UseServices
{
	constexpr uint32_t m_hLastKnownUseEntity = 0x40;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flLastUseTimeStamp = 0x44;  // GameTime_t 
	constexpr uint32_t m_flTimeLastUsedWindow = 0x48;  // GameTime_t 
}

// Offset: 0x7ffe058607a0 
// N. Class: 312 
// Fields: 11 
namespace CBaseViewModel
{
	constexpr uint32_t m_vecLastFacing = 0x9B0;  // Vector 
	constexpr uint32_t m_nViewModelIndex = 0x9BC;  // uint32 
	constexpr uint32_t m_nAnimationParity = 0x9C0;  // uint32 
	constexpr uint32_t m_flAnimationStartTime = 0x9C4;  // float32 
	constexpr uint32_t m_hWeapon = 0x9C8;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_sVMName = 0x9D0;  // CUtlSymbolLarge 
	constexpr uint32_t m_sAnimationPrefix = 0x9D8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hOldLayerSequence = 0x9E0;  // HSequence 
	constexpr uint32_t m_oldLayer = 0x9E4;  // int32 
	constexpr uint32_t m_oldLayerStartTime = 0x9E8;  // float32 
	constexpr uint32_t m_hControlPanel = 0x9EC;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0586dae8 
// N. Class: 313 
// Fields: 1 
namespace CCSPlayer_ViewModelServices
{
	constexpr uint32_t m_hViewModel = 0x40;  // CHandle< CBaseViewModel >[3] 
}

// Offset: 0x7ffe0586dcb0 
// N. Class: 314 
// Fields: 6 
namespace CCSPlayer_WaterServices
{
	constexpr uint32_t m_NextDrownDamageTime = 0x40;  // float32 
	constexpr uint32_t m_nDrownDmgRate = 0x44;  // int32 
	constexpr uint32_t m_AirFinishedTime = 0x48;  // GameTime_t 
	constexpr uint32_t m_flWaterJumpTime = 0x4C;  // float32 
	constexpr uint32_t m_vecWaterJumpVel = 0x50;  // Vector 
	constexpr uint32_t m_flSwimSoundTime = 0x5C;  // float32 
}

// Offset: 0x7ffe0586ed80 
// N. Class: 315 
// Fields: 15 
namespace CCSPlayer_WeaponServices
{
	constexpr uint32_t m_flNextAttack = 0xA8;  // GameTime_t 
	constexpr uint32_t m_bIsLookingAtWeapon = 0xAC;  // bool 
	constexpr uint32_t m_bIsHoldingLookAtWeapon = 0xAD;  // bool 
	constexpr uint32_t m_hSavedWeapon = 0xB0;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_nTimeToMelee = 0xB4;  // int32 
	constexpr uint32_t m_nTimeToSecondary = 0xB8;  // int32 
	constexpr uint32_t m_nTimeToPrimary = 0xBC;  // int32 
	constexpr uint32_t m_nTimeToSniperRifle = 0xC0;  // int32 
	constexpr uint32_t m_bIsBeingGivenItem = 0xC4;  // bool 
	constexpr uint32_t m_bIsPickingUpItemWithUse = 0xC5;  // bool 
	constexpr uint32_t m_bPickedUpWeapon = 0xC6;  // bool 
	constexpr uint32_t m_bDisableAutoDeploy = 0xC7;  // bool 
	constexpr uint32_t m_bIsPickingUpGroundWeapon = 0xC8;  // bool 
	constexpr uint32_t m_nOldShootPositionHistoryCount = 0xCC;  // uint32 
	constexpr uint32_t m_nOldInputHistoryCount = 0x468;  // uint32 
}

// Offset: 0x0 
// N. Class: 316 
// Fields: 0 
namespace CCSObserver_ObserverServices
{
}

// Offset: 0x0 
// N. Class: 317 
// Fields: 0 
namespace CCSObserver_CameraServices
{
}

// Offset: 0x0 
// N. Class: 318 
// Fields: 0 
namespace CCSObserver_MovementServices
{
}

// Offset: 0x0 
// N. Class: 319 
// Fields: 0 
namespace CCSObserver_UseServices
{
}

// Offset: 0x0 
// N. Class: 320 
// Fields: 0 
namespace CCSObserver_ViewModelServices
{
}

// Offset: 0x7ffe0586f010 
// N. Class: 321 
// Fields: 6 
namespace CSAdditionalPerRoundStats_t
{
	constexpr uint32_t m_numChickensKilled = 0x0;  // int32 
	constexpr uint32_t m_killsWhileBlind = 0x4;  // int32 
	constexpr uint32_t m_bombCarrierkills = 0x8;  // int32 
	constexpr uint32_t m_iBurnDamageInflicted = 0xC;  // int32 
	constexpr uint32_t m_iBlastDamageInflicted = 0x10;  // int32 
	constexpr uint32_t m_iDinks = 0x14;  // int32 
}

// Offset: 0x7ffe0586f140 
// N. Class: 322 
// Fields: 12 
namespace CSAdditionalMatchStats_t
{
	constexpr uint32_t m_numRoundsSurvived = 0x18;  // int32 
	constexpr uint32_t m_maxNumRoundsSurvived = 0x1C;  // int32 
	constexpr uint32_t m_numRoundsSurvivedTotal = 0x20;  // int32 
	constexpr uint32_t m_iRoundsWonWithoutPurchase = 0x24;  // int32 
	constexpr uint32_t m_iRoundsWonWithoutPurchaseTotal = 0x28;  // int32 
	constexpr uint32_t m_numFirstKills = 0x2C;  // int32 
	constexpr uint32_t m_numClutchKills = 0x30;  // int32 
	constexpr uint32_t m_numPistolKills = 0x34;  // int32 
	constexpr uint32_t m_numSniperKills = 0x38;  // int32 
	constexpr uint32_t m_iNumSuicides = 0x3C;  // int32 
	constexpr uint32_t m_iNumTeamKills = 0x40;  // int32 
	constexpr uint32_t m_iTeamDamage = 0x44;  // int32 
}

// Offset: 0x7ffe0586f3c0 
// N. Class: 323 
// Fields: 5 
namespace CCSPlayerController_ActionTrackingServices
{
	constexpr uint32_t m_perRoundStats = 0x40;  // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > 
	constexpr uint32_t m_matchStats = 0xB0;  // CSMatchStats_t 
	constexpr uint32_t m_iNumRoundKills = 0x170;  // int32 
	constexpr uint32_t m_iNumRoundKillsHeadshots = 0x174;  // int32 
	constexpr uint32_t m_unTotalRoundDamageDealt = 0x178;  // uint32 
}

// Offset: 0x7ffe0586a250 
// N. Class: 324 
// Fields: 89 
namespace CCSPlayerController
{
	constexpr uint32_t m_pInGameMoneyServices = 0x788;  // CCSPlayerController_InGameMoneyServices* 
	constexpr uint32_t m_pInventoryServices = 0x790;  // CCSPlayerController_InventoryServices* 
	constexpr uint32_t m_pActionTrackingServices = 0x798;  // CCSPlayerController_ActionTrackingServices* 
	constexpr uint32_t m_pDamageServices = 0x7A0;  // CCSPlayerController_DamageServices* 
	constexpr uint32_t m_iPing = 0x7A8;  // uint32 
	constexpr uint32_t m_bHasCommunicationAbuseMute = 0x7AC;  // bool 
	constexpr uint32_t m_szCrosshairCodes = 0x7B0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iPendingTeamNum = 0x7B8;  // uint8 
	constexpr uint32_t m_flForceTeamTime = 0x7BC;  // GameTime_t 
	constexpr uint32_t m_iCompTeammateColor = 0x7C0;  // int32 
	constexpr uint32_t m_bEverPlayedOnTeam = 0x7C4;  // bool 
	constexpr uint32_t m_bAttemptedToGetColor = 0x7C5;  // bool 
	constexpr uint32_t m_iTeammatePreferredColor = 0x7C8;  // int32 
	constexpr uint32_t m_bTeamChanged = 0x7CC;  // bool 
	constexpr uint32_t m_bInSwitchTeam = 0x7CD;  // bool 
	constexpr uint32_t m_bHasSeenJoinGame = 0x7CE;  // bool 
	constexpr uint32_t m_bJustBecameSpectator = 0x7CF;  // bool 
	constexpr uint32_t m_bSwitchTeamsOnNextRoundReset = 0x7D0;  // bool 
	constexpr uint32_t m_bRemoveAllItemsOnNextRoundReset = 0x7D1;  // bool 
	constexpr uint32_t m_szClan = 0x7D8;  // CUtlSymbolLarge 
	constexpr uint32_t m_szClanName = 0x7E0;  // char[32] 
	constexpr uint32_t m_iCoachingTeam = 0x800;  // int32 
	constexpr uint32_t m_nPlayerDominated = 0x808;  // uint64 
	constexpr uint32_t m_nPlayerDominatingMe = 0x810;  // uint64 
	constexpr uint32_t m_iCompetitiveRanking = 0x818;  // int32 
	constexpr uint32_t m_iCompetitiveWins = 0x81C;  // int32 
	constexpr uint32_t m_iCompetitiveRankType = 0x820;  // int8 
	constexpr uint32_t m_iCompetitiveRankingPredicted_Win = 0x824;  // int32 
	constexpr uint32_t m_iCompetitiveRankingPredicted_Loss = 0x828;  // int32 
	constexpr uint32_t m_iCompetitiveRankingPredicted_Tie = 0x82C;  // int32 
	constexpr uint32_t m_nEndMatchNextMapVote = 0x830;  // int32 
	constexpr uint32_t m_unActiveQuestId = 0x834;  // uint16 
	constexpr uint32_t m_nQuestProgressReason = 0x838;  // QuestProgress::Reason 
	constexpr uint32_t m_unPlayerTvControlFlags = 0x83C;  // uint32 
	constexpr uint32_t m_iDraftIndex = 0x868;  // int32 
	constexpr uint32_t m_msQueuedModeDisconnectionTimestamp = 0x86C;  // uint32 
	constexpr uint32_t m_uiAbandonRecordedReason = 0x870;  // uint32 
	constexpr uint32_t m_bCannotBeKicked = 0x874;  // bool 
	constexpr uint32_t m_bEverFullyConnected = 0x875;  // bool 
	constexpr uint32_t m_bAbandonAllowsSurrender = 0x876;  // bool 
	constexpr uint32_t m_bAbandonOffersInstantSurrender = 0x877;  // bool 
	constexpr uint32_t m_bDisconnection1MinWarningPrinted = 0x878;  // bool 
	constexpr uint32_t m_bScoreReported = 0x879;  // bool 
	constexpr uint32_t m_nDisconnectionTick = 0x87C;  // int32 
	constexpr uint32_t m_bControllingBot = 0x888;  // bool 
	constexpr uint32_t m_bHasControlledBotThisRound = 0x889;  // bool 
	constexpr uint32_t m_bHasBeenControlledByPlayerThisRound = 0x88A;  // bool 
	constexpr uint32_t m_nBotsControlledThisRound = 0x88C;  // int32 
	constexpr uint32_t m_bCanControlObservedBot = 0x890;  // bool 
	constexpr uint32_t m_hPlayerPawn = 0x894;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_hObserverPawn = 0x898;  // CHandle< CCSObserverPawn > 
	constexpr uint32_t m_DesiredObserverMode = 0x89C;  // int32 
	constexpr uint32_t m_hDesiredObserverTarget = 0x8A0;  // CEntityHandle 
	constexpr uint32_t m_bPawnIsAlive = 0x8A4;  // bool 
	constexpr uint32_t m_iPawnHealth = 0x8A8;  // uint32 
	constexpr uint32_t m_iPawnArmor = 0x8AC;  // int32 
	constexpr uint32_t m_bPawnHasDefuser = 0x8B0;  // bool 
	constexpr uint32_t m_bPawnHasHelmet = 0x8B1;  // bool 
	constexpr uint32_t m_nPawnCharacterDefIndex = 0x8B2;  // uint16 
	constexpr uint32_t m_iPawnLifetimeStart = 0x8B4;  // int32 
	constexpr uint32_t m_iPawnLifetimeEnd = 0x8B8;  // int32 
	constexpr uint32_t m_iPawnBotDifficulty = 0x8BC;  // int32 
	constexpr uint32_t m_hOriginalControllerOfCurrentPawn = 0x8C0;  // CHandle< CCSPlayerController > 
	constexpr uint32_t m_iScore = 0x8C4;  // int32 
	constexpr uint32_t m_iRoundScore = 0x8C8;  // int32 
	constexpr uint32_t m_iRoundsWon = 0x8CC;  // int32 
	constexpr uint32_t m_recentKillQueue = 0x8D0;  // uint8[8] 
	constexpr uint32_t m_nFirstKill = 0x8D8;  // uint8 
	constexpr uint32_t m_nKillCount = 0x8D9;  // uint8 
	constexpr uint32_t m_bMvpNoMusic = 0x8DA;  // bool 
	constexpr uint32_t m_eMvpReason = 0x8DC;  // int32 
	constexpr uint32_t m_iMusicKitID = 0x8E0;  // int32 
	constexpr uint32_t m_iMusicKitMVPs = 0x8E4;  // int32 
	constexpr uint32_t m_iMVPs = 0x8E8;  // int32 
	constexpr uint32_t m_nUpdateCounter = 0x8EC;  // int32 
	constexpr uint32_t m_flSmoothedPing = 0x8F0;  // float32 
	constexpr uint32_t m_lastHeldVoteTimer = 0xF998;  // IntervalTimer 
	constexpr uint32_t m_bShowHints = 0xF9B0;  // bool 
	constexpr uint32_t m_iNextTimeCheck = 0xF9B4;  // int32 
	constexpr uint32_t m_bJustDidTeamKill = 0xF9B8;  // bool 
	constexpr uint32_t m_bPunishForTeamKill = 0xF9B9;  // bool 
	constexpr uint32_t m_bGaveTeamDamageWarning = 0xF9BA;  // bool 
	constexpr uint32_t m_bGaveTeamDamageWarningThisRound = 0xF9BB;  // bool 
	constexpr uint32_t m_dblLastReceivedPacketPlatFloatTime = 0xF9C0;  // float64 
	constexpr uint32_t m_LastTeamDamageWarningTime = 0xF9C8;  // GameTime_t 
	constexpr uint32_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF9CC;  // GameTime_t 
	constexpr uint32_t m_nSuspiciousHitCount = 0xF9D0;  // uint32 
	constexpr uint32_t m_nNonSuspiciousHitStreak = 0xF9D4;  // uint32 
	constexpr uint32_t m_bFireBulletsSeedSynchronized = 0xFA79;  // bool 
}

// Offset: 0x7ffe0586f820 
// N. Class: 325 
// Fields: 15 
namespace CDamageRecord
{
	constexpr uint32_t m_PlayerDamager = 0x28;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_PlayerRecipient = 0x2C;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_hPlayerControllerDamager = 0x30;  // CHandle< CCSPlayerController > 
	constexpr uint32_t m_hPlayerControllerRecipient = 0x34;  // CHandle< CCSPlayerController > 
	constexpr uint32_t m_szPlayerDamagerName = 0x38;  // CUtlString 
	constexpr uint32_t m_szPlayerRecipientName = 0x40;  // CUtlString 
	constexpr uint32_t m_DamagerXuid = 0x48;  // uint64 
	constexpr uint32_t m_RecipientXuid = 0x50;  // uint64 
	constexpr uint32_t m_iBulletsDamage = 0x58;  // int32 
	constexpr uint32_t m_iDamage = 0x5C;  // int32 
	constexpr uint32_t m_iActualHealthRemoved = 0x60;  // int32 
	constexpr uint32_t m_iNumHits = 0x64;  // int32 
	constexpr uint32_t m_iLastBulletUpdate = 0x68;  // int32 
	constexpr uint32_t m_bIsOtherEnemy = 0x6C;  // bool 
	constexpr uint32_t m_killType = 0x6D;  // EKillTypes_t 
}

// Offset: 0x7ffe0586fa90 
// N. Class: 326 
// Fields: 2 
namespace CCSPlayerController_DamageServices
{
	constexpr uint32_t m_nSendUpdate = 0x40;  // int32 
	constexpr uint32_t m_DamageList = 0x48;  // CUtlVectorEmbeddedNetworkVar< CDamageRecord > 
}

// Offset: 0x7ffe0586ec00 
// N. Class: 327 
// Fields: 6 
namespace CCSPlayerController_InGameMoneyServices
{
	constexpr uint32_t m_bReceivesMoneyNextRound = 0x40;  // bool 
	constexpr uint32_t m_iMoneyEarnedForNextRound = 0x44;  // int32 
	constexpr uint32_t m_iAccount = 0x48;  // int32 
	constexpr uint32_t m_iStartAccount = 0x4C;  // int32 
	constexpr uint32_t m_iTotalCashSpent = 0x50;  // int32 
	constexpr uint32_t m_iCashSpentThisRound = 0x54;  // int32 
}

// Offset: 0x7ffe0586f550 
// N. Class: 328 
// Fields: 3 
namespace ServerAuthoritativeWeaponSlot_t
{
	constexpr uint32_t unClass = 0x28;  // uint16 
	constexpr uint32_t unSlot = 0x2A;  // uint16 
	constexpr uint32_t unItemDefIdx = 0x2C;  // uint16 
}

// Offset: 0x7ffe0586f630 
// N. Class: 329 
// Fields: 9 
namespace CCSPlayerController_InventoryServices
{
	constexpr uint32_t m_unMusicID = 0x40;  // uint16 
	constexpr uint32_t m_rank = 0x44;  // MedalRank_t[6] 
	constexpr uint32_t m_nPersonaDataPublicLevel = 0x5C;  // int32 
	constexpr uint32_t m_nPersonaDataPublicCommendsLeader = 0x60;  // int32 
	constexpr uint32_t m_nPersonaDataPublicCommendsTeacher = 0x64;  // int32 
	constexpr uint32_t m_nPersonaDataPublicCommendsFriendly = 0x68;  // int32 
	constexpr uint32_t m_nPersonaDataXpTrailLevel = 0x6C;  // int32 
	constexpr uint32_t m_unEquippedPlayerSprayIDs = 0xF48;  // uint32[1] 
	constexpr uint32_t m_vecServerAuthoritativeWeaponSlots = 0xF50;  // CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > 
}

// Offset: 0x7ffe05860130 
// N. Class: 330 
// Fields: 1 
namespace CCSGOViewModel_GraphController
{
	constexpr uint32_t m_sReloadComplete = 0x60;  // CAnimGraphTagOptionalRef 
}

// Offset: 0x7ffe05862980 
// N. Class: 331 
// Fields: 1 
namespace CFiringModeFloat
{
	constexpr uint32_t m_flValues = 0x0;  // float32[2] 
}

// Offset: 0x7ffe05862a18 
// N. Class: 332 
// Fields: 1 
namespace CFiringModeInt
{
	constexpr uint32_t m_nValues = 0x0;  // int32[2] 
}

// Offset: 0x7ffe058664a0 
// N. Class: 333 
// Fields: 4 
namespace CIronSightController
{
	constexpr uint32_t m_bIronSightAvailable = 0x8;  // bool 
	constexpr uint32_t m_flIronSightAmount = 0xC;  // float32 
	constexpr uint32_t m_flIronSightAmountGained = 0x10;  // float32 
	constexpr uint32_t m_flIronSightAmountBiased = 0x14;  // float32 
}

// Offset: 0x7ffe058b5690 
// N. Class: 334 
// Fields: 3 
namespace CHintMessage
{
	constexpr uint32_t m_hintString = 0x0;  // char* 
	constexpr uint32_t m_args = 0x8;  // CUtlVector< char* > 
	constexpr uint32_t m_duration = 0x20;  // float32 
}

// Offset: 0x7ffe058b5760 
// N. Class: 335 
// Fields: 3 
namespace CHintMessageQueue
{
	constexpr uint32_t m_tmMessageEnd = 0x0;  // float32 
	constexpr uint32_t m_messages = 0x8;  // CUtlVector< CHintMessage* > 
	constexpr uint32_t m_pPlayerController = 0x20;  // CBasePlayerController* 
}

// Offset: 0x7ffe057e6810 
// N. Class: 336 
// Fields: 5 
namespace CCSPlayer_RadioServices
{
	constexpr uint32_t m_flGotHostageTalkTimer = 0x40;  // GameTime_t 
	constexpr uint32_t m_flDefusingTalkTimer = 0x44;  // GameTime_t 
	constexpr uint32_t m_flC4PlantTalkTimer = 0x48;  // GameTime_t 
	constexpr uint32_t m_flRadioTokenSlots = 0x4C;  // GameTime_t[3] 
	constexpr uint32_t m_bIgnoreRadio = 0x58;  // bool 
}

// Offset: 0x7ffe057e6970 
// N. Class: 337 
// Fields: 6 
namespace CBaseIssue
{
	constexpr uint32_t m_szTypeString = 0x20;  // char[64] 
	constexpr uint32_t m_szDetailsString = 0x60;  // char[260] 
	constexpr uint32_t m_iNumYesVotes = 0x164;  // int32 
	constexpr uint32_t m_iNumNoVotes = 0x168;  // int32 
	constexpr uint32_t m_iNumPotentialVotes = 0x16C;  // int32 
	constexpr uint32_t m_pVoteController = 0x170;  // CVoteController* 
}

// Offset: 0x7ffe057e6aa0 
// N. Class: 338 
// Fields: 14 
namespace CVoteController
{
	constexpr uint32_t m_iActiveIssueIndex = 0x4E0;  // int32 
	constexpr uint32_t m_iOnlyTeamToVote = 0x4E4;  // int32 
	constexpr uint32_t m_nVoteOptionCount = 0x4E8;  // int32[5] 
	constexpr uint32_t m_nPotentialVotes = 0x4FC;  // int32 
	constexpr uint32_t m_bIsYesNoVote = 0x500;  // bool 
	constexpr uint32_t m_acceptingVotesTimer = 0x508;  // CountdownTimer 
	constexpr uint32_t m_executeCommandTimer = 0x520;  // CountdownTimer 
	constexpr uint32_t m_resetVoteTimer = 0x538;  // CountdownTimer 
	constexpr uint32_t m_nVotesCast = 0x550;  // int32[64] 
	constexpr uint32_t m_playerHoldingVote = 0x650;  // CPlayerSlot 
	constexpr uint32_t m_playerOverrideForVote = 0x654;  // CPlayerSlot 
	constexpr uint32_t m_nHighestCountIndex = 0x658;  // int32 
	constexpr uint32_t m_potentialIssues = 0x660;  // CUtlVector< CBaseIssue* > 
	constexpr uint32_t m_VoteOptions = 0x678;  // CUtlVector< char* > 
}

// Offset: 0x7ffe057e6d10 
// N. Class: 339 
// Fields: 24 
namespace CMapVetoPickController
{
	constexpr uint32_t m_bPlayedIntroVcd = 0x4E0;  // bool 
	constexpr uint32_t m_bNeedToPlayFiveSecondsRemaining = 0x4E1;  // bool 
	constexpr uint32_t m_dblPreMatchDraftSequenceTime = 0x500;  // float64 
	constexpr uint32_t m_bPreMatchDraftStateChanged = 0x508;  // bool 
	constexpr uint32_t m_nDraftType = 0x50C;  // int32 
	constexpr uint32_t m_nTeamWinningCoinToss = 0x510;  // int32 
	constexpr uint32_t m_nTeamWithFirstChoice = 0x514;  // int32[64] 
	constexpr uint32_t m_nVoteMapIdsList = 0x614;  // int32[7] 
	constexpr uint32_t m_nAccountIDs = 0x630;  // int32[64] 
	constexpr uint32_t m_nMapId0 = 0x730;  // int32[64] 
	constexpr uint32_t m_nMapId1 = 0x830;  // int32[64] 
	constexpr uint32_t m_nMapId2 = 0x930;  // int32[64] 
	constexpr uint32_t m_nMapId3 = 0xA30;  // int32[64] 
	constexpr uint32_t m_nMapId4 = 0xB30;  // int32[64] 
	constexpr uint32_t m_nMapId5 = 0xC30;  // int32[64] 
	constexpr uint32_t m_nStartingSide0 = 0xD30;  // int32[64] 
	constexpr uint32_t m_nCurrentPhase = 0xE30;  // int32 
	constexpr uint32_t m_nPhaseStartTick = 0xE34;  // int32 
	constexpr uint32_t m_nPhaseDurationTicks = 0xE38;  // int32 
	constexpr uint32_t m_OnMapVetoed = 0xE40;  // CEntityOutputTemplate< CUtlSymbolLarge > 
	constexpr uint32_t m_OnMapPicked = 0xE68;  // CEntityOutputTemplate< CUtlSymbolLarge > 
	constexpr uint32_t m_OnSidesPicked = 0xE90;  // CEntityOutputTemplate< int32 > 
	constexpr uint32_t m_OnNewPhaseStarted = 0xEB8;  // CEntityOutputTemplate< int32 > 
	constexpr uint32_t m_OnLevelTransition = 0xEE0;  // CEntityOutputTemplate< int32 > 
}

// Offset: 0x7ffe057e9670 
// N. Class: 340 
// Fields: 4 
namespace CLogicEventListener
{
	constexpr uint32_t m_strEventName = 0x4F0;  // CUtlString 
	constexpr uint32_t m_bIsEnabled = 0x4F8;  // bool 
	constexpr uint32_t m_nTeam = 0x4FC;  // int32 
	constexpr uint32_t m_OnEventFired = 0x500;  // CEntityIOOutput 
}

// Offset: 0x7ffe057ee870 
// N. Class: 341 
// Fields: 4 
namespace CChicken_GraphController
{
	constexpr uint32_t m_paramActivity = 0x60;  // CAnimGraphParamRef< char* > 
	constexpr uint32_t m_paramEndActivityImmediately = 0x88;  // CAnimGraphParamRef< bool > 
	constexpr uint32_t m_sActivityFinished = 0xA8;  // CAnimGraphTagRef 
	constexpr uint32_t m_paramTurnAngle = 0xC0;  // CAnimGraphParamRef< float32 > 
}

// Offset: 0x0 
// N. Class: 342 
// Fields: 0 
namespace CCSPointPulseAPI
{
}

// Offset: 0x7ffe057ee080 
// N. Class: 343 
// Fields: 13 
namespace CBot
{
	constexpr uint32_t m_pController = 0x10;  // CCSPlayerController* 
	constexpr uint32_t m_pPlayer = 0x18;  // CCSPlayerPawn* 
	constexpr uint32_t m_bHasSpawned = 0x20;  // bool 
	constexpr uint32_t m_id = 0x24;  // uint32 
	constexpr uint32_t m_isRunning = 0xC0;  // bool 
	constexpr uint32_t m_isCrouching = 0xC1;  // bool 
	constexpr uint32_t m_forwardSpeed = 0xC4;  // float32 
	constexpr uint32_t m_leftSpeed = 0xC8;  // float32 
	constexpr uint32_t m_verticalSpeed = 0xCC;  // float32 
	constexpr uint32_t m_buttonFlags = 0xD0;  // uint64 
	constexpr uint32_t m_jumpTimestamp = 0xD8;  // float32 
	constexpr uint32_t m_viewForward = 0xDC;  // Vector 
	constexpr uint32_t m_postureStackIndex = 0xF8;  // int32 
}

// Offset: 0x0 
// N. Class: 344 
// Fields: 0 
namespace CBtNode
{
}

// Offset: 0x0 
// N. Class: 345 
// Fields: 0 
namespace CBtNodeDecorator
{
}

// Offset: 0x0 
// N. Class: 346 
// Fields: 0 
namespace CBtNodeComposite
{
}

// Offset: 0x7ffe057ed9d0 
// N. Class: 347 
// Fields: 12 
namespace CBtActionAim
{
	constexpr uint32_t m_szSensorInputKey = 0x68;  // CUtlString 
	constexpr uint32_t m_szAimReadyKey = 0x80;  // CUtlString 
	constexpr uint32_t m_flZoomCooldownTimestamp = 0x88;  // float32 
	constexpr uint32_t m_bDoneAiming = 0x8C;  // bool 
	constexpr uint32_t m_flLerpStartTime = 0x90;  // float32 
	constexpr uint32_t m_flNextLookTargetLerpTime = 0x94;  // float32 
	constexpr uint32_t m_flPenaltyReductionRatio = 0x98;  // float32 
	constexpr uint32_t m_NextLookTarget = 0x9C;  // QAngle 
	constexpr uint32_t m_AimTimer = 0xA8;  // CountdownTimer 
	constexpr uint32_t m_SniperHoldTimer = 0xC0;  // CountdownTimer 
	constexpr uint32_t m_FocusIntervalTimer = 0xD8;  // CountdownTimer 
	constexpr uint32_t m_bAcquired = 0xF0;  // bool 
}

// Offset: 0x7ffe057ed8d0 
// N. Class: 348 
// Fields: 4 
namespace CBtActionCombatPositioning
{
	constexpr uint32_t m_szSensorInputKey = 0x68;  // CUtlString 
	constexpr uint32_t m_szIsAttackingKey = 0x80;  // CUtlString 
	constexpr uint32_t m_ActionTimer = 0x88;  // CountdownTimer 
	constexpr uint32_t m_bCrouching = 0xA0;  // bool 
}

// Offset: 0x7ffe057edbd0 
// N. Class: 349 
// Fields: 14 
namespace CBtActionMoveTo
{
	constexpr uint32_t m_szDestinationInputKey = 0x60;  // CUtlString 
	constexpr uint32_t m_szHidingSpotInputKey = 0x68;  // CUtlString 
	constexpr uint32_t m_szThreatInputKey = 0x70;  // CUtlString 
	constexpr uint32_t m_vecDestination = 0x78;  // Vector 
	constexpr uint32_t m_bAutoLookAdjust = 0x84;  // bool 
	constexpr uint32_t m_bComputePath = 0x85;  // bool 
	constexpr uint32_t m_flDamagingAreasPenaltyCost = 0x88;  // float32 
	constexpr uint32_t m_CheckApproximateCornersTimer = 0x90;  // CountdownTimer 
	constexpr uint32_t m_CheckHighPriorityItem = 0xA8;  // CountdownTimer 
	constexpr uint32_t m_RepathTimer = 0xC0;  // CountdownTimer 
	constexpr uint32_t m_flArrivalEpsilon = 0xD8;  // float32 
	constexpr uint32_t m_flAdditionalArrivalEpsilon2D = 0xDC;  // float32 
	constexpr uint32_t m_flHidingSpotCheckDistanceThreshold = 0xE0;  // float32 
	constexpr uint32_t m_flNearestAreaDistanceThreshold = 0xE4;  // float32 
}

// Offset: 0x7ffe057ede10 
// N. Class: 350 
// Fields: 1 
namespace CBtActionParachutePositioning
{
	constexpr uint32_t m_ActionTimer = 0x58;  // CountdownTimer 
}

// Offset: 0x7ffe057edeb0 
// N. Class: 351 
// Fields: 1 
namespace CBtNodeCondition
{
	constexpr uint32_t m_bNegated = 0x58;  // bool 
}

// Offset: 0x7ffe057edf60 
// N. Class: 352 
// Fields: 3 
namespace CBtNodeConditionInactive
{
	constexpr uint32_t m_flRoundStartThresholdSeconds = 0x78;  // float32 
	constexpr uint32_t m_flSensorInactivityThresholdSeconds = 0x7C;  // float32 
	constexpr uint32_t m_SensorInactivityTimer = 0x80;  // CountdownTimer 
}

// Offset: 0x0 
// N. Class: 353 
// Fields: 0 
namespace CPointEntity
{
}

// Offset: 0x7ffe057f52f0 
// N. Class: 354 
// Fields: 24 
namespace CEnvCombinedLightProbeVolume
{
	constexpr uint32_t m_Entity_Color = 0x1540;  // Color 
	constexpr uint32_t m_Entity_flBrightness = 0x1544;  // float32 
	constexpr uint32_t m_Entity_hCubemapTexture = 0x1548;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_bCustomCubemapTexture = 0x1550;  // bool 
	constexpr uint32_t m_Entity_hLightProbeTexture = 0x1558;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1560;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1568;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1570;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_vBoxMins = 0x1578;  // Vector 
	constexpr uint32_t m_Entity_vBoxMaxs = 0x1584;  // Vector 
	constexpr uint32_t m_Entity_bMoveable = 0x1590;  // bool 
	constexpr uint32_t m_Entity_nHandshake = 0x1594;  // int32 
	constexpr uint32_t m_Entity_nEnvCubeMapArrayIndex = 0x1598;  // int32 
	constexpr uint32_t m_Entity_nPriority = 0x159C;  // int32 
	constexpr uint32_t m_Entity_bStartDisabled = 0x15A0;  // bool 
	constexpr uint32_t m_Entity_flEdgeFadeDist = 0x15A4;  // float32 
	constexpr uint32_t m_Entity_vEdgeFadeDists = 0x15A8;  // Vector 
	constexpr uint32_t m_Entity_nLightProbeSizeX = 0x15B4;  // int32 
	constexpr uint32_t m_Entity_nLightProbeSizeY = 0x15B8;  // int32 
	constexpr uint32_t m_Entity_nLightProbeSizeZ = 0x15BC;  // int32 
	constexpr uint32_t m_Entity_nLightProbeAtlasX = 0x15C0;  // int32 
	constexpr uint32_t m_Entity_nLightProbeAtlasY = 0x15C4;  // int32 
	constexpr uint32_t m_Entity_nLightProbeAtlasZ = 0x15C8;  // int32 
	constexpr uint32_t m_Entity_bEnabled = 0x15E1;  // bool 
}

// Offset: 0x7ffe057f4600 
// N. Class: 355 
// Fields: 18 
namespace CEnvCubemap
{
	constexpr uint32_t m_Entity_hCubemapTexture = 0x560;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_bCustomCubemapTexture = 0x568;  // bool 
	constexpr uint32_t m_Entity_flInfluenceRadius = 0x56C;  // float32 
	constexpr uint32_t m_Entity_vBoxProjectMins = 0x570;  // Vector 
	constexpr uint32_t m_Entity_vBoxProjectMaxs = 0x57C;  // Vector 
	constexpr uint32_t m_Entity_bMoveable = 0x588;  // bool 
	constexpr uint32_t m_Entity_nHandshake = 0x58C;  // int32 
	constexpr uint32_t m_Entity_nEnvCubeMapArrayIndex = 0x590;  // int32 
	constexpr uint32_t m_Entity_nPriority = 0x594;  // int32 
	constexpr uint32_t m_Entity_flEdgeFadeDist = 0x598;  // float32 
	constexpr uint32_t m_Entity_vEdgeFadeDists = 0x59C;  // Vector 
	constexpr uint32_t m_Entity_flDiffuseScale = 0x5A8;  // float32 
	constexpr uint32_t m_Entity_bStartDisabled = 0x5AC;  // bool 
	constexpr uint32_t m_Entity_bDefaultEnvMap = 0x5AD;  // bool 
	constexpr uint32_t m_Entity_bDefaultSpecEnvMap = 0x5AE;  // bool 
	constexpr uint32_t m_Entity_bIndoorCubeMap = 0x5AF;  // bool 
	constexpr uint32_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x5B0;  // bool 
	constexpr uint32_t m_Entity_bEnabled = 0x5C0;  // bool 
}

// Offset: 0x0 
// N. Class: 356 
// Fields: 0 
namespace CEnvCubemapBox
{
}

// Offset: 0x7ffe057f4c30 
// N. Class: 357 
// Fields: 18 
namespace CEnvCubemapFog
{
	constexpr uint32_t m_flEndDistance = 0x4E0;  // float32 
	constexpr uint32_t m_flStartDistance = 0x4E4;  // float32 
	constexpr uint32_t m_flFogFalloffExponent = 0x4E8;  // float32 
	constexpr uint32_t m_bHeightFogEnabled = 0x4EC;  // bool 
	constexpr uint32_t m_flFogHeightWidth = 0x4F0;  // float32 
	constexpr uint32_t m_flFogHeightEnd = 0x4F4;  // float32 
	constexpr uint32_t m_flFogHeightStart = 0x4F8;  // float32 
	constexpr uint32_t m_flFogHeightExponent = 0x4FC;  // float32 
	constexpr uint32_t m_flLODBias = 0x500;  // float32 
	constexpr uint32_t m_bActive = 0x504;  // bool 
	constexpr uint32_t m_bStartDisabled = 0x505;  // bool 
	constexpr uint32_t m_flFogMaxOpacity = 0x508;  // float32 
	constexpr uint32_t m_nCubemapSourceType = 0x50C;  // int32 
	constexpr uint32_t m_hSkyMaterial = 0x510;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_iszSkyEntity = 0x518;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFogCubemapTexture = 0x520;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_bHasHeightFogEnd = 0x528;  // bool 
	constexpr uint32_t m_bFirstTime = 0x529;  // bool 
}

// Offset: 0x7ffe057f5000 
// N. Class: 358 
// Fields: 16 
namespace CGradientFog
{
	constexpr uint32_t m_hGradientFogTexture = 0x4E0;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_flFogStartDistance = 0x4E8;  // float32 
	constexpr uint32_t m_flFogEndDistance = 0x4EC;  // float32 
	constexpr uint32_t m_bHeightFogEnabled = 0x4F0;  // bool 
	constexpr uint32_t m_flFogStartHeight = 0x4F4;  // float32 
	constexpr uint32_t m_flFogEndHeight = 0x4F8;  // float32 
	constexpr uint32_t m_flFarZ = 0x4FC;  // float32 
	constexpr uint32_t m_flFogMaxOpacity = 0x500;  // float32 
	constexpr uint32_t m_flFogFalloffExponent = 0x504;  // float32 
	constexpr uint32_t m_flFogVerticalExponent = 0x508;  // float32 
	constexpr uint32_t m_fogColor = 0x50C;  // Color 
	constexpr uint32_t m_flFogStrength = 0x510;  // float32 
	constexpr uint32_t m_flFadeTime = 0x514;  // float32 
	constexpr uint32_t m_bStartDisabled = 0x518;  // bool 
	constexpr uint32_t m_bIsEnabled = 0x519;  // bool 
	constexpr uint32_t m_bGradientFogNeedsTextures = 0x51A;  // bool 
}

// Offset: 0x7ffe057f4040 
// N. Class: 359 
// Fields: 17 
namespace CEnvLightProbeVolume
{
	constexpr uint32_t m_Entity_hLightProbeTexture = 0x14C0;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x14C8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D0;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x14D8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Entity_vBoxMins = 0x14E0;  // Vector 
	constexpr uint32_t m_Entity_vBoxMaxs = 0x14EC;  // Vector 
	constexpr uint32_t m_Entity_bMoveable = 0x14F8;  // bool 
	constexpr uint32_t m_Entity_nHandshake = 0x14FC;  // int32 
	constexpr uint32_t m_Entity_nPriority = 0x1500;  // int32 
	constexpr uint32_t m_Entity_bStartDisabled = 0x1504;  // bool 
	constexpr uint32_t m_Entity_nLightProbeSizeX = 0x1508;  // int32 
	constexpr uint32_t m_Entity_nLightProbeSizeY = 0x150C;  // int32 
	constexpr uint32_t m_Entity_nLightProbeSizeZ = 0x1510;  // int32 
	constexpr uint32_t m_Entity_nLightProbeAtlasX = 0x1514;  // int32 
	constexpr uint32_t m_Entity_nLightProbeAtlasY = 0x1518;  // int32 
	constexpr uint32_t m_Entity_nLightProbeAtlasZ = 0x151C;  // int32 
	constexpr uint32_t m_Entity_bEnabled = 0x1529;  // bool 
}

// Offset: 0x7ffe057f44c0 
// N. Class: 360 
// Fields: 6 
namespace CPlayerVisibility
{
	constexpr uint32_t m_flVisibilityStrength = 0x4E0;  // float32 
	constexpr uint32_t m_flFogDistanceMultiplier = 0x4E4;  // float32 
	constexpr uint32_t m_flFogMaxDensityMultiplier = 0x4E8;  // float32 
	constexpr uint32_t m_flFadeTime = 0x4EC;  // float32 
	constexpr uint32_t m_bStartDisabled = 0x4F0;  // bool 
	constexpr uint32_t m_bIsEnabled = 0x4F1;  // bool 
}

// Offset: 0x7ffe057fad40 
// N. Class: 361 
// Fields: 34 
namespace CEnvVolumetricFogController
{
	constexpr uint32_t m_flScattering = 0x4E0;  // float32 
	constexpr uint32_t m_flAnisotropy = 0x4E4;  // float32 
	constexpr uint32_t m_flFadeSpeed = 0x4E8;  // float32 
	constexpr uint32_t m_flDrawDistance = 0x4EC;  // float32 
	constexpr uint32_t m_flFadeInStart = 0x4F0;  // float32 
	constexpr uint32_t m_flFadeInEnd = 0x4F4;  // float32 
	constexpr uint32_t m_flIndirectStrength = 0x4F8;  // float32 
	constexpr uint32_t m_nVolumeDepth = 0x4FC;  // int32 
	constexpr uint32_t m_fFirstVolumeSliceThickness = 0x500;  // float32 
	constexpr uint32_t m_nIndirectTextureDimX = 0x504;  // int32 
	constexpr uint32_t m_nIndirectTextureDimY = 0x508;  // int32 
	constexpr uint32_t m_nIndirectTextureDimZ = 0x50C;  // int32 
	constexpr uint32_t m_vBoxMins = 0x510;  // Vector 
	constexpr uint32_t m_vBoxMaxs = 0x51C;  // Vector 
	constexpr uint32_t m_bActive = 0x528;  // bool 
	constexpr uint32_t m_flStartAnisoTime = 0x52C;  // GameTime_t 
	constexpr uint32_t m_flStartScatterTime = 0x530;  // GameTime_t 
	constexpr uint32_t m_flStartDrawDistanceTime = 0x534;  // GameTime_t 
	constexpr uint32_t m_flStartAnisotropy = 0x538;  // float32 
	constexpr uint32_t m_flStartScattering = 0x53C;  // float32 
	constexpr uint32_t m_flStartDrawDistance = 0x540;  // float32 
	constexpr uint32_t m_flDefaultAnisotropy = 0x544;  // float32 
	constexpr uint32_t m_flDefaultScattering = 0x548;  // float32 
	constexpr uint32_t m_flDefaultDrawDistance = 0x54C;  // float32 
	constexpr uint32_t m_bStartDisabled = 0x550;  // bool 
	constexpr uint32_t m_bEnableIndirect = 0x551;  // bool 
	constexpr uint32_t m_bIndirectUseLPVs = 0x552;  // bool 
	constexpr uint32_t m_bIsMaster = 0x553;  // bool 
	constexpr uint32_t m_hFogIndirectTexture = 0x558;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_nForceRefreshCount = 0x560;  // int32 
	constexpr uint32_t m_fNoiseSpeed = 0x564;  // float32 
	constexpr uint32_t m_fNoiseStrength = 0x568;  // float32 
	constexpr uint32_t m_vNoiseScale = 0x56C;  // Vector 
	constexpr uint32_t m_bFirstTime = 0x578;  // bool 
}

// Offset: 0x7ffe057f9ce0 
// N. Class: 362 
// Fields: 16 
namespace CEnvVolumetricFogVolume
{
	constexpr uint32_t m_bActive = 0x4E0;  // bool 
	constexpr uint32_t m_vBoxMins = 0x4E4;  // Vector 
	constexpr uint32_t m_vBoxMaxs = 0x4F0;  // Vector 
	constexpr uint32_t m_bStartDisabled = 0x4FC;  // bool 
	constexpr uint32_t m_flStrength = 0x500;  // float32 
	constexpr uint32_t m_nFalloffShape = 0x504;  // int32 
	constexpr uint32_t m_flFalloffExponent = 0x508;  // float32 
	constexpr uint32_t m_flHeightFogDepth = 0x50C;  // float32 
	constexpr uint32_t m_fHeightFogEdgeWidth = 0x510;  // float32 
	constexpr uint32_t m_fIndirectLightStrength = 0x514;  // float32 
	constexpr uint32_t m_fSunLightStrength = 0x518;  // float32 
	constexpr uint32_t m_fNoiseStrength = 0x51C;  // float32 
	constexpr uint32_t m_bOverrideIndirectLightStrength = 0x520;  // bool 
	constexpr uint32_t m_bOverrideSunLightStrength = 0x521;  // bool 
	constexpr uint32_t m_bOverrideNoiseStrength = 0x522;  // bool 
	constexpr uint32_t m_bAllowLPVIndirect = 0x523;  // bool 
}

// Offset: 0x0 
// N. Class: 363 
// Fields: 0 
namespace CInfoTarget
{
}

// Offset: 0x0 
// N. Class: 364 
// Fields: 0 
namespace CInfoTargetServerOnly
{
}

// Offset: 0x0 
// N. Class: 365 
// Fields: 0 
namespace CInfoParticleTarget
{
}

// Offset: 0x7ffe057fa6c0 
// N. Class: 366 
// Fields: 3 
namespace CInfoVisibilityBox
{
	constexpr uint32_t m_nMode = 0x4E4;  // int32 
	constexpr uint32_t m_vBoxSize = 0x4E8;  // Vector 
	constexpr uint32_t m_bEnabled = 0x4F4;  // bool 
}

// Offset: 0x7ffe057fabe0 
// N. Class: 367 
// Fields: 7 
namespace CInfoWorldLayer
{
	constexpr uint32_t m_pOutputOnEntitiesSpawned = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_worldName = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_layerName = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_bWorldLayerVisible = 0x518;  // bool 
	constexpr uint32_t m_bEntitiesSpawned = 0x519;  // bool 
	constexpr uint32_t m_bCreateAsChildSpawnGroup = 0x51A;  // bool 
	constexpr uint32_t m_hLayerSpawnGroup = 0x51C;  // uint32 
}

// Offset: 0x7ffe057fb248 
// N. Class: 368 
// Fields: 1 
namespace CLightEntity
{
	constexpr uint32_t m_CLightComponent = 0x790;  // CLightComponent* 
}

// Offset: 0x7ffe057fb550 
// N. Class: 369 
// Fields: 8 
namespace CMultiLightProxy
{
	constexpr uint32_t m_iszLightNameFilter = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszLightClassFilter = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_flLightRadiusFilter = 0x4F0;  // float32 
	constexpr uint32_t m_flBrightnessDelta = 0x4F4;  // float32 
	constexpr uint32_t m_bPerformScreenFade = 0x4F8;  // bool 
	constexpr uint32_t m_flTargetBrightnessMultiplier = 0x4FC;  // float32 
	constexpr uint32_t m_flCurrentBrightnessMultiplier = 0x500;  // float32 
	constexpr uint32_t m_vecLights = 0x508;  // CUtlVector< CHandle< CLightEntity > > 
}

// Offset: 0x7ffe05802f70 
// N. Class: 370 
// Fields: 1 
namespace CPointChildModifier
{
	constexpr uint32_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4E0;  // bool 
}

// Offset: 0x7ffe05802c30 
// N. Class: 371 
// Fields: 1 
namespace CPointCameraVFOV
{
	constexpr uint32_t m_flVerticalFOV = 0x540;  // float32 
}

// Offset: 0x7ffe058039f0 
// N. Class: 372 
// Fields: 12 
namespace CPointTemplate
{
	constexpr uint32_t m_iszWorldName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSource2EntityLumpName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszEntityFilterName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_flTimeoutInterval = 0x4F8;  // float32 
	constexpr uint32_t m_bAsynchronouslySpawnEntities = 0x4FC;  // bool 
	constexpr uint32_t m_pOutputOnSpawned = 0x500;  // CEntityIOOutput 
	constexpr uint32_t m_clientOnlyEntityBehavior = 0x528;  // PointTemplateClientOnlyEntityBehavior_t 
	constexpr uint32_t m_ownerSpawnGroupType = 0x52C;  // PointTemplateOwnerSpawnGroupType_t 
	constexpr uint32_t m_createdSpawnGroupHandles = 0x530;  // CUtlVector< uint32 > 
	constexpr uint32_t m_ScriptSpawnCallback = 0x560;  // HSCRIPT 
	constexpr uint32_t m_ScriptCallbackScope = 0x568;  // HSCRIPT 
}

// Offset: 0x7ffe05801eb0 
// N. Class: 373 
// Fields: 4 
namespace CGameGibManager
{
	constexpr uint32_t m_bAllowNewGibs = 0x500;  // bool 
	constexpr uint32_t m_iCurrentMaxPieces = 0x504;  // int32 
	constexpr uint32_t m_iMaxPieces = 0x508;  // int32 
	constexpr uint32_t m_iLastFrame = 0x50C;  // int32 
}

// Offset: 0x7ffe058023c0 
// N. Class: 374 
// Fields: 4 
namespace CRagdollManager
{
	constexpr uint32_t m_iCurrentMaxRagdollCount = 0x4E0;  // int8 
	constexpr uint32_t m_iMaxRagdollCount = 0x4E4;  // int32 
	constexpr uint32_t m_bSaveImportant = 0x4E8;  // bool 
	constexpr uint32_t m_bCanTakeDamage = 0x4E9;  // bool 
}

// Offset: 0x7ffe05802d00 
// N. Class: 375 
// Fields: 3 
namespace CSoundAreaEntityBase
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_iszSoundAreaType = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_vPos = 0x4F0;  // Vector 
}

// Offset: 0x7ffe05802e10 
// N. Class: 376 
// Fields: 1 
namespace CSoundAreaEntitySphere
{
	constexpr uint32_t m_flRadius = 0x500;  // float32 
}

// Offset: 0x7ffe05802eb0 
// N. Class: 377 
// Fields: 2 
namespace CSoundAreaEntityOrientedBox
{
	constexpr uint32_t m_vMin = 0x500;  // Vector 
	constexpr uint32_t m_vMax = 0x50C;  // Vector 
}

// Offset: 0x7ffe05803250 
// N. Class: 378 
// Fields: 1 
namespace CSoundStackSave
{
	constexpr uint32_t m_iszStackName = 0x4E0;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058033c0 
// N. Class: 379 
// Fields: 14 
namespace CSoundEventEntity
{
	constexpr uint32_t m_bStartOnSpawn = 0x4E0;  // bool 
	constexpr uint32_t m_bToLocalPlayer = 0x4E1;  // bool 
	constexpr uint32_t m_bStopOnNew = 0x4E2;  // bool 
	constexpr uint32_t m_bSaveRestore = 0x4E3;  // bool 
	constexpr uint32_t m_bSavedIsPlaying = 0x4E4;  // bool 
	constexpr uint32_t m_flSavedElapsedTime = 0x4E8;  // float32 
	constexpr uint32_t m_iszSourceEntityName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszAttachmentName = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_onGUIDChanged = 0x500;  // CEntityOutputTemplate< uint64 > 
	constexpr uint32_t m_onSoundFinished = 0x528;  // CEntityIOOutput 
	constexpr uint32_t m_flClientCullRadius = 0x550;  // float32 
	constexpr uint32_t m_iszSoundName = 0x580;  // CUtlSymbolLarge 
	constexpr uint32_t m_hSource = 0x590;  // CEntityHandle 
	constexpr uint32_t m_nEntityIndexSelection = 0x594;  // int32 
}

// Offset: 0x0 
// N. Class: 380 
// Fields: 0 
namespace CSoundEventEntityAlias_snd_event_point
{
}

// Offset: 0x7ffe05803680 
// N. Class: 381 
// Fields: 2 
namespace CSoundEventAABBEntity
{
	constexpr uint32_t m_vMins = 0x598;  // Vector 
	constexpr uint32_t m_vMaxs = 0x5A4;  // Vector 
}

// Offset: 0x7ffe05803760 
// N. Class: 382 
// Fields: 2 
namespace CSoundEventOBBEntity
{
	constexpr uint32_t m_vMins = 0x598;  // Vector 
	constexpr uint32_t m_vMaxs = 0x5A4;  // Vector 
}

// Offset: 0x7ffe05803820 
// N. Class: 383 
// Fields: 1 
namespace CSoundEventSphereEntity
{
	constexpr uint32_t m_flRadius = 0x598;  // float32 
}

// Offset: 0x7ffe05803cc0 
// N. Class: 384 
// Fields: 7 
namespace CSoundEventPathCornerEntity
{
	constexpr uint32_t m_iszPathCorner = 0x598;  // CUtlSymbolLarge 
	constexpr uint32_t m_iCountMax = 0x5A0;  // int32 
	constexpr uint32_t m_flDistanceMax = 0x5A4;  // float32 
	constexpr uint32_t m_flDistMaxSqr = 0x5A8;  // float32 
	constexpr uint32_t m_flDotProductMax = 0x5AC;  // float32 
	constexpr uint32_t m_bPlaying = 0x5B0;  // bool 
	constexpr uint32_t m_vecCornerPairsNetworked = 0x5D8;  // CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > 
}

// Offset: 0x7ffe05803ec0 
// N. Class: 385 
// Fields: 2 
namespace CSoundEventParameter
{
	constexpr uint32_t m_iszParamName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_flFloatValue = 0x4F0;  // float32 
}

// Offset: 0x7ffe058348f0 
// N. Class: 386 
// Fields: 25 
namespace CBasePlayerPawn
{
	constexpr uint32_t m_pWeaponServices = 0xAC0;  // CPlayer_WeaponServices* 
	constexpr uint32_t m_pItemServices = 0xAC8;  // CPlayer_ItemServices* 
	constexpr uint32_t m_pAutoaimServices = 0xAD0;  // CPlayer_AutoaimServices* 
	constexpr uint32_t m_pObserverServices = 0xAD8;  // CPlayer_ObserverServices* 
	constexpr uint32_t m_pWaterServices = 0xAE0;  // CPlayer_WaterServices* 
	constexpr uint32_t m_pUseServices = 0xAE8;  // CPlayer_UseServices* 
	constexpr uint32_t m_pFlashlightServices = 0xAF0;  // CPlayer_FlashlightServices* 
	constexpr uint32_t m_pCameraServices = 0xAF8;  // CPlayer_CameraServices* 
	constexpr uint32_t m_pMovementServices = 0xB00;  // CPlayer_MovementServices* 
	constexpr uint32_t m_ServerViewAngleChanges = 0xB10;  // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > 
	constexpr uint32_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xB60;  // uint32 
	constexpr uint32_t v_angle = 0xB64;  // QAngle 
	constexpr uint32_t v_anglePrevious = 0xB70;  // QAngle 
	constexpr uint32_t m_iHideHUD = 0xB7C;  // uint32 
	constexpr uint32_t m_skybox3d = 0xB80;  // sky3dparams_t 
	constexpr uint32_t m_fTimeLastHurt = 0xC10;  // GameTime_t 
	constexpr uint32_t m_flDeathTime = 0xC14;  // GameTime_t 
	constexpr uint32_t m_fNextSuicideTime = 0xC18;  // GameTime_t 
	constexpr uint32_t m_fInitHUD = 0xC1C;  // bool 
	constexpr uint32_t m_pExpresser = 0xC20;  // CAI_Expresser* 
	constexpr uint32_t m_hController = 0xC28;  // CHandle< CBasePlayerController > 
	constexpr uint32_t m_fHltvReplayDelay = 0xC30;  // float32 
	constexpr uint32_t m_fHltvReplayEnd = 0xC34;  // float32 
	constexpr uint32_t m_iHltvReplayEntity = 0xC38;  // CEntityIndex 
	constexpr uint32_t m_sndOpvarLatchData = 0xC40;  // CUtlVector< sndopvarlatchdata_t > 
}

// Offset: 0x7ffe058021f0 
// N. Class: 387 
// Fields: 4 
namespace CTeam
{
	constexpr uint32_t m_aPlayerControllers = 0x4E0;  // CNetworkUtlVectorBase< CHandle< CBasePlayerController > > 
	constexpr uint32_t m_aPlayers = 0x4F8;  // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > 
	constexpr uint32_t m_iScore = 0x510;  // int32 
	constexpr uint32_t m_szTeamname = 0x514;  // char[129] 
}

// Offset: 0x7ffe058707d0 
// N. Class: 388 
// Fields: 14 
namespace CBasePlayerVData
{
	constexpr uint32_t m_sModelName = 0x28;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_flHeadDamageMultiplier = 0x108;  // CSkillFloat 
	constexpr uint32_t m_flChestDamageMultiplier = 0x118;  // CSkillFloat 
	constexpr uint32_t m_flStomachDamageMultiplier = 0x128;  // CSkillFloat 
	constexpr uint32_t m_flArmDamageMultiplier = 0x138;  // CSkillFloat 
	constexpr uint32_t m_flLegDamageMultiplier = 0x148;  // CSkillFloat 
	constexpr uint32_t m_flHoldBreathTime = 0x158;  // float32 
	constexpr uint32_t m_flDrowningDamageInterval = 0x15C;  // float32 
	constexpr uint32_t m_nDrowningDamageInitial = 0x160;  // int32 
	constexpr uint32_t m_nDrowningDamageMax = 0x164;  // int32 
	constexpr uint32_t m_nWaterSpeed = 0x168;  // int32 
	constexpr uint32_t m_flUseRange = 0x16C;  // float32 
	constexpr uint32_t m_flUseAngleTolerance = 0x170;  // float32 
	constexpr uint32_t m_flCrouchTime = 0x174;  // float32 
}

// Offset: 0x7ffe05885890 
// N. Class: 389 
// Fields: 22 
namespace CBasePlayerWeaponVData
{
	constexpr uint32_t m_szWorldModel = 0x28;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_sToolsOnlyOwnerModelName = 0x108;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_bBuiltRightHanded = 0x1E8;  // bool 
	constexpr uint32_t m_bAllowFlipping = 0x1E9;  // bool 
	constexpr uint32_t m_sMuzzleAttachment = 0x1F0;  // CAttachmentNameSymbolWithStorage 
	constexpr uint32_t m_szMuzzleFlashParticle = 0x210;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_bLinkedCooldowns = 0x2F0;  // bool 
	constexpr uint32_t m_iFlags = 0x2F1;  // ItemFlagTypes_t 
	constexpr uint32_t m_nPrimaryAmmoType = 0x2F2;  // AmmoIndex_t 
	constexpr uint32_t m_nSecondaryAmmoType = 0x2F3;  // AmmoIndex_t 
	constexpr uint32_t m_iMaxClip1 = 0x2F4;  // int32 
	constexpr uint32_t m_iMaxClip2 = 0x2F8;  // int32 
	constexpr uint32_t m_iDefaultClip1 = 0x2FC;  // int32 
	constexpr uint32_t m_iDefaultClip2 = 0x300;  // int32 
	constexpr uint32_t m_bReserveAmmoAsClips = 0x304;  // bool 
	constexpr uint32_t m_iWeight = 0x308;  // int32 
	constexpr uint32_t m_bAutoSwitchTo = 0x30C;  // bool 
	constexpr uint32_t m_bAutoSwitchFrom = 0x30D;  // bool 
	constexpr uint32_t m_iRumbleEffect = 0x310;  // RumbleEffect_t 
	constexpr uint32_t m_iSlot = 0x314;  // int32 
	constexpr uint32_t m_iPosition = 0x318;  // int32 
	constexpr uint32_t m_aShootSounds = 0x320;  // CUtlOrderedMap< WeaponSound_t, CSoundEventName > 
}

// Offset: 0x7ffe05885db0 
// N. Class: 390 
// Fields: 2 
namespace CInfoGameEventProxy
{
	constexpr uint32_t m_iszEventName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_flRange = 0x4E8;  // float32 
}

// Offset: 0x7ffe05885ea0 
// N. Class: 391 
// Fields: 2 
namespace CProjectedDecal
{
	constexpr uint32_t m_nTexture = 0x4E0;  // int32 
	constexpr uint32_t m_flDistance = 0x4E4;  // float32 
}

// Offset: 0x0 
// N. Class: 392 
// Fields: 0 
namespace CServerOnlyModelEntity
{
}

// Offset: 0x0 
// N. Class: 393 
// Fields: 0 
namespace CModelPointEntity
{
}

// Offset: 0x7ffe0583c650 
// N. Class: 394 
// Fields: 7 
namespace CLogicRelay
{
	constexpr uint32_t m_OnTrigger = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnSpawn = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_bDisabled = 0x530;  // bool 
	constexpr uint32_t m_bWaitForRefire = 0x531;  // bool 
	constexpr uint32_t m_bTriggerOnce = 0x532;  // bool 
	constexpr uint32_t m_bFastRetrigger = 0x533;  // bool 
	constexpr uint32_t m_bPassthoughCaller = 0x534;  // bool 
}

// Offset: 0x7ffe0583d250 
// N. Class: 395 
// Fields: 22 
namespace CParticleSystem
{
	constexpr uint32_t m_szSnapshotFileName = 0x790;  // char[512] 
	constexpr uint32_t m_bActive = 0x990;  // bool 
	constexpr uint32_t m_bFrozen = 0x991;  // bool 
	constexpr uint32_t m_flFreezeTransitionDuration = 0x994;  // float32 
	constexpr uint32_t m_nStopType = 0x998;  // int32 
	constexpr uint32_t m_bAnimateDuringGameplayPause = 0x99C;  // bool 
	constexpr uint32_t m_iEffectIndex = 0x9A0;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_flStartTime = 0x9A8;  // GameTime_t 
	constexpr uint32_t m_flPreSimTime = 0x9AC;  // float32 
	constexpr uint32_t m_vServerControlPoints = 0x9B0;  // Vector[4] 
	constexpr uint32_t m_iServerControlPointAssignments = 0x9E0;  // uint8[4] 
	constexpr uint32_t m_hControlPointEnts = 0x9E4;  // CHandle< CBaseEntity >[64] 
	constexpr uint32_t m_bNoSave = 0xAE4;  // bool 
	constexpr uint32_t m_bNoFreeze = 0xAE5;  // bool 
	constexpr uint32_t m_bNoRamp = 0xAE6;  // bool 
	constexpr uint32_t m_bStartActive = 0xAE7;  // bool 
	constexpr uint32_t m_iszEffectName = 0xAE8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszControlPointNames = 0xAF0;  // CUtlSymbolLarge[64] 
	constexpr uint32_t m_nDataCP = 0xCF0;  // int32 
	constexpr uint32_t m_vecDataCPValue = 0xCF4;  // Vector 
	constexpr uint32_t m_nTintCP = 0xD00;  // int32 
	constexpr uint32_t m_clrTint = 0xD04;  // Color 
}

// Offset: 0x7ffe0583d740 
// N. Class: 396 
// Fields: 16 
namespace CPathParticleRope
{
	constexpr uint32_t m_bStartActive = 0x4E8;  // bool 
	constexpr uint32_t m_flMaxSimulationTime = 0x4EC;  // float32 
	constexpr uint32_t m_iszEffectName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_PathNodes_Name = 0x4F8;  // CUtlVector< CUtlSymbolLarge > 
	constexpr uint32_t m_flParticleSpacing = 0x510;  // float32 
	constexpr uint32_t m_flSlack = 0x514;  // float32 
	constexpr uint32_t m_flRadius = 0x518;  // float32 
	constexpr uint32_t m_ColorTint = 0x51C;  // Color 
	constexpr uint32_t m_nEffectState = 0x520;  // int32 
	constexpr uint32_t m_iEffectIndex = 0x528;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_PathNodes_Position = 0x530;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_PathNodes_TangentIn = 0x548;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_PathNodes_TangentOut = 0x560;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_PathNodes_Color = 0x578;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_PathNodes_PinEnabled = 0x590;  // CNetworkUtlVectorBase< bool > 
	constexpr uint32_t m_PathNodes_RadiusScale = 0x5A8;  // CNetworkUtlVectorBase< float32 > 
}

// Offset: 0x0 
// N. Class: 397 
// Fields: 0 
namespace CPathParticleRopeAlias_path_particle_rope_clientside
{
}

// Offset: 0x7ffe0583cc10 
// N. Class: 398 
// Fields: 1 
namespace CPathSimple
{
	constexpr uint32_t m_pathString = 0x538;  // CUtlString 
}

// Offset: 0x7ffe058422d0 
// N. Class: 399 
// Fields: 11 
namespace CEnvSoundscape
{
	constexpr uint32_t m_OnPlay = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_flRadius = 0x508;  // float32 
	constexpr uint32_t m_soundEventName = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_bOverrideWithEvent = 0x518;  // bool 
	constexpr uint32_t m_soundscapeIndex = 0x51C;  // int32 
	constexpr uint32_t m_soundscapeEntityListId = 0x520;  // int32 
	constexpr uint32_t m_positionNames = 0x528;  // CUtlSymbolLarge[8] 
	constexpr uint32_t m_hProxySoundscape = 0x568;  // CHandle< CEnvSoundscape > 
	constexpr uint32_t m_bDisabled = 0x56C;  // bool 
	constexpr uint32_t m_soundscapeName = 0x570;  // CUtlSymbolLarge 
	constexpr uint32_t m_soundEventHash = 0x578;  // uint32 
}

// Offset: 0x7ffe05842670 
// N. Class: 400 
// Fields: 1 
namespace CEnvSoundscapeProxy
{
	constexpr uint32_t m_MainSoundscapeName = 0x580;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe05889148 
// N. Class: 401 
// Fields: 1 
namespace CFuncWall
{
	constexpr uint32_t m_nState = 0x790;  // int32 
}

// Offset: 0x0 
// N. Class: 402 
// Fields: 0 
namespace CFuncWallToggle
{
}

// Offset: 0x0 
// N. Class: 403 
// Fields: 0 
namespace CFuncVehicleClip
{
}

// Offset: 0x0 
// N. Class: 404 
// Fields: 0 
namespace CFuncIllusionary
{
}

// Offset: 0x7ffe05889680 
// N. Class: 405 
// Fields: 1 
namespace CFuncVPhysicsClip
{
	constexpr uint32_t m_bDisabled = 0x790;  // bool 
}

// Offset: 0x7ffe05889750 
// N. Class: 406 
// Fields: 3 
namespace CFuncInteractionLayerClip
{
	constexpr uint32_t m_bDisabled = 0x790;  // bool 
	constexpr uint32_t m_iszInteractsAs = 0x798;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszInteractsWith = 0x7A0;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 407 
// Fields: 0 
namespace CPointClientCommand
{
}

// Offset: 0x0 
// N. Class: 408 
// Fields: 0 
namespace CPointServerCommand
{
}

// Offset: 0x0 
// N. Class: 409 
// Fields: 0 
namespace CPointBroadcastClientCommand
{
}

// Offset: 0x7ffe058989b0 
// N. Class: 410 
// Fields: 3 
namespace CCommentaryAuto
{
	constexpr uint32_t m_OnCommentaryNewGame = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnCommentaryMidGame = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_OnCommentaryMultiplayerSpawn = 0x530;  // CEntityIOOutput 
}

// Offset: 0x7ffe058980b0 
// N. Class: 411 
// Fields: 9 
namespace CDynamicLight
{
	constexpr uint32_t m_ActualFlags = 0x790;  // uint8 
	constexpr uint32_t m_Flags = 0x791;  // uint8 
	constexpr uint32_t m_LightStyle = 0x792;  // uint8 
	constexpr uint32_t m_On = 0x793;  // bool 
	constexpr uint32_t m_Radius = 0x794;  // float32 
	constexpr uint32_t m_Exponent = 0x798;  // int32 
	constexpr uint32_t m_InnerAngle = 0x79C;  // float32 
	constexpr uint32_t m_OuterAngle = 0x7A0;  // float32 
	constexpr uint32_t m_SpotRadius = 0x7A4;  // float32 
}

// Offset: 0x7ffe05898ce0 
// N. Class: 412 
// Fields: 3 
namespace CBubbling
{
	constexpr uint32_t m_density = 0x790;  // int32 
	constexpr uint32_t m_frequency = 0x794;  // int32 
	constexpr uint32_t m_state = 0x798;  // int32 
}

// Offset: 0x7ffe05898dc0 
// N. Class: 413 
// Fields: 2 
namespace CEnvTracer
{
	constexpr uint32_t m_vecEnd = 0x4E0;  // Vector 
	constexpr uint32_t m_flDelay = 0x4EC;  // float32 
}

// Offset: 0x7ffe058086f0 
// N. Class: 414 
// Fields: 24 
namespace CBeam
{
	constexpr uint32_t m_flFrameRate = 0x790;  // float32 
	constexpr uint32_t m_flHDRColorScale = 0x794;  // float32 
	constexpr uint32_t m_flFireTime = 0x798;  // GameTime_t 
	constexpr uint32_t m_flDamage = 0x79C;  // float32 
	constexpr uint32_t m_nNumBeamEnts = 0x7A0;  // uint8 
	constexpr uint32_t m_hBaseMaterial = 0x7A8;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_nHaloIndex = 0x7B0;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_nBeamType = 0x7B8;  // BeamType_t 
	constexpr uint32_t m_nBeamFlags = 0x7BC;  // uint32 
	constexpr uint32_t m_hAttachEntity = 0x7C0;  // CHandle< CBaseEntity >[10] 
	constexpr uint32_t m_nAttachIndex = 0x7E8;  // AttachmentHandle_t[10] 
	constexpr uint32_t m_fWidth = 0x7F4;  // float32 
	constexpr uint32_t m_fEndWidth = 0x7F8;  // float32 
	constexpr uint32_t m_fFadeLength = 0x7FC;  // float32 
	constexpr uint32_t m_fHaloScale = 0x800;  // float32 
	constexpr uint32_t m_fAmplitude = 0x804;  // float32 
	constexpr uint32_t m_fStartFrame = 0x808;  // float32 
	constexpr uint32_t m_fSpeed = 0x80C;  // float32 
	constexpr uint32_t m_flFrame = 0x810;  // float32 
	constexpr uint32_t m_nClipStyle = 0x814;  // BeamClipStyle_t 
	constexpr uint32_t m_bTurnedOff = 0x818;  // bool 
	constexpr uint32_t m_vecEndPos = 0x81C;  // Vector 
	constexpr uint32_t m_hEndEntity = 0x828;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nDissolveType = 0x82C;  // int32 
}

// Offset: 0x7ffe05898e80 
// N. Class: 415 
// Fields: 5 
namespace CTestEffect
{
	constexpr uint32_t m_iLoop = 0x4E0;  // int32 
	constexpr uint32_t m_iBeam = 0x4E4;  // int32 
	constexpr uint32_t m_pBeam = 0x4E8;  // CBeam*[24] 
	constexpr uint32_t m_flBeamTime = 0x5A8;  // GameTime_t[24] 
	constexpr uint32_t m_flStartTime = 0x608;  // GameTime_t 
}

// Offset: 0x7ffe05898fd0 
// N. Class: 416 
// Fields: 4 
namespace CBlood
{
	constexpr uint32_t m_vecSprayAngles = 0x4E0;  // QAngle 
	constexpr uint32_t m_vecSprayDir = 0x4EC;  // Vector 
	constexpr uint32_t m_flAmount = 0x4F8;  // float32 
	constexpr uint32_t m_Color = 0x4FC;  // BloodType 
}

// Offset: 0x0 
// N. Class: 417 
// Fields: 0 
namespace CEnvFunnel
{
}

// Offset: 0x7ffe05899250 
// N. Class: 418 
// Fields: 2 
namespace CEnvBeverage
{
	constexpr uint32_t m_CanInDispenser = 0x4E0;  // bool 
	constexpr uint32_t m_nBeverageType = 0x4E4;  // int32 
}

// Offset: 0x0 
// N. Class: 419 
// Fields: 0 
namespace CPrecipitationBlocker
{
}

// Offset: 0x7ffe058994f0 
// N. Class: 420 
// Fields: 1 
namespace CEnvWind
{
	constexpr uint32_t m_EnvWindShared = 0x4E0;  // CEnvWindShared 
}

// Offset: 0x7ffe05899640 
// N. Class: 421 
// Fields: 1 
namespace CPhysicsWire
{
	constexpr uint32_t m_nDensity = 0x4E0;  // int32 
}

// Offset: 0x7ffe05899710 
// N. Class: 422 
// Fields: 2 
namespace CEnvMuzzleFlash
{
	constexpr uint32_t m_flScale = 0x4E0;  // float32 
	constexpr uint32_t m_iszParentAttachment = 0x4E8;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058997d0 
// N. Class: 423 
// Fields: 1 
namespace CEnvSplash
{
	constexpr uint32_t m_flScale = 0x4E0;  // float32 
}

// Offset: 0x7ffe05899870 
// N. Class: 424 
// Fields: 2 
namespace CEnvViewPunch
{
	constexpr uint32_t m_flRadius = 0x4E0;  // float32 
	constexpr uint32_t m_angViewPunch = 0x4E4;  // QAngle 
}

// Offset: 0x7ffe05899110 
// N. Class: 425 
// Fields: 1 
namespace CEnvEntityIgniter
{
	constexpr uint32_t m_flLifetime = 0x4E0;  // float32 
}

// Offset: 0x7ffe05899590 
// N. Class: 426 
// Fields: 1 
namespace CDebugHistory
{
	constexpr uint32_t m_nNpcEvents = 0x3E8520;  // int32 
}

// Offset: 0x7ffe05897d20 
// N. Class: 427 
// Fields: 12 
namespace CEnvEntityMaker
{
	constexpr uint32_t m_vecEntityMins = 0x4E0;  // Vector 
	constexpr uint32_t m_vecEntityMaxs = 0x4EC;  // Vector 
	constexpr uint32_t m_hCurrentInstance = 0x4F8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hCurrentBlocker = 0x4FC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_vecBlockerOrigin = 0x500;  // Vector 
	constexpr uint32_t m_angPostSpawnDirection = 0x50C;  // QAngle 
	constexpr uint32_t m_flPostSpawnDirectionVariance = 0x518;  // float32 
	constexpr uint32_t m_flPostSpawnSpeed = 0x51C;  // float32 
	constexpr uint32_t m_bPostSpawnUseAngles = 0x520;  // bool 
	constexpr uint32_t m_iszTemplate = 0x528;  // CUtlSymbolLarge 
	constexpr uint32_t m_pOutputOnSpawned = 0x530;  // CEntityIOOutput 
	constexpr uint32_t m_pOutputOnFailedSpawn = 0x558;  // CEntityIOOutput 
}

// Offset: 0x0 
// N. Class: 428 
// Fields: 0 
namespace CInfoInstructorHintTarget
{
}

// Offset: 0x7ffe058a19b0 
// N. Class: 429 
// Fields: 24 
namespace CEnvInstructorHint
{
	constexpr uint32_t m_iszName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszReplace_Key = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszHintTargetEntity = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iTimeout = 0x4F8;  // int32 
	constexpr uint32_t m_iDisplayLimit = 0x4FC;  // int32 
	constexpr uint32_t m_iszIcon_Onscreen = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszIcon_Offscreen = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszCaption = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszActivatorCaption = 0x518;  // CUtlSymbolLarge 
	constexpr uint32_t m_Color = 0x520;  // Color 
	constexpr uint32_t m_fIconOffset = 0x524;  // float32 
	constexpr uint32_t m_fRange = 0x528;  // float32 
	constexpr uint32_t m_iPulseOption = 0x52C;  // uint8 
	constexpr uint32_t m_iAlphaOption = 0x52D;  // uint8 
	constexpr uint32_t m_iShakeOption = 0x52E;  // uint8 
	constexpr uint32_t m_bStatic = 0x52F;  // bool 
	constexpr uint32_t m_bNoOffscreen = 0x530;  // bool 
	constexpr uint32_t m_bForceCaption = 0x531;  // bool 
	constexpr uint32_t m_iInstanceType = 0x534;  // int32 
	constexpr uint32_t m_bSuppressRest = 0x538;  // bool 
	constexpr uint32_t m_iszBinding = 0x540;  // CUtlSymbolLarge 
	constexpr uint32_t m_bAllowNoDrawTarget = 0x548;  // bool 
	constexpr uint32_t m_bAutoStart = 0x549;  // bool 
	constexpr uint32_t m_bLocalPlayerOnly = 0x54A;  // bool 
}

// Offset: 0x7ffe058a1d90 
// N. Class: 430 
// Fields: 9 
namespace CEnvInstructorVRHint
{
	constexpr uint32_t m_iszName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszHintTargetEntity = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iTimeout = 0x4F0;  // int32 
	constexpr uint32_t m_iszCaption = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszStartSound = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_iLayoutFileType = 0x508;  // int32 
	constexpr uint32_t m_iszCustomLayoutFile = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_iAttachType = 0x518;  // int32 
	constexpr uint32_t m_flHeightOffset = 0x51C;  // float32 
}

// Offset: 0x7ffe058a1f60 
// N. Class: 431 
// Fields: 3 
namespace CInstructorEventEntity
{
	constexpr uint32_t m_iszName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszHintTargetEntity = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hTargetPlayer = 0x4F0;  // CHandle< CBasePlayerPawn > 
}

// Offset: 0x7ffe058a34b0 
// N. Class: 432 
// Fields: 5 
namespace CEnvScreenOverlay
{
	constexpr uint32_t m_iszOverlayNames = 0x4E0;  // CUtlSymbolLarge[10] 
	constexpr uint32_t m_flOverlayTimes = 0x530;  // float32[10] 
	constexpr uint32_t m_flStartTime = 0x558;  // GameTime_t 
	constexpr uint32_t m_iDesiredOverlay = 0x55C;  // int32 
	constexpr uint32_t m_bIsActive = 0x560;  // bool 
}

// Offset: 0x7ffe058a3370 
// N. Class: 433 
// Fields: 4 
namespace CEnvFade
{
	constexpr uint32_t m_fadeColor = 0x4E0;  // Color 
	constexpr uint32_t m_Duration = 0x4E4;  // float32 
	constexpr uint32_t m_HoldDuration = 0x4E8;  // float32 
	constexpr uint32_t m_OnBeginFade = 0x4F0;  // CEntityIOOutput 
}

// Offset: 0x7ffe058a22d0 
// N. Class: 434 
// Fields: 3 
namespace CCredits
{
	constexpr uint32_t m_OnCreditsDone = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_bRolledOutroCredits = 0x508;  // bool 
	constexpr uint32_t m_flLogoLength = 0x50C;  // float32 
}

// Offset: 0x7ffe058a2ba0 
// N. Class: 435 
// Fields: 10 
namespace CEnvShake
{
	constexpr uint32_t m_limitToEntity = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Amplitude = 0x4E8;  // float32 
	constexpr uint32_t m_Frequency = 0x4EC;  // float32 
	constexpr uint32_t m_Duration = 0x4F0;  // float32 
	constexpr uint32_t m_Radius = 0x4F4;  // float32 
	constexpr uint32_t m_stopTime = 0x4F8;  // GameTime_t 
	constexpr uint32_t m_nextShake = 0x4FC;  // GameTime_t 
	constexpr uint32_t m_currentAmp = 0x500;  // float32 
	constexpr uint32_t m_maxForce = 0x504;  // Vector 
	constexpr uint32_t m_shakeCallback = 0x518;  // CPhysicsShake 
}

// Offset: 0x7ffe058a2d60 
// N. Class: 436 
// Fields: 4 
namespace CEnvTilt
{
	constexpr uint32_t m_Duration = 0x4E0;  // float32 
	constexpr uint32_t m_Radius = 0x4E4;  // float32 
	constexpr uint32_t m_TiltTime = 0x4E8;  // float32 
	constexpr uint32_t m_stopTime = 0x4EC;  // GameTime_t 
}

// Offset: 0x7ffe058a31f0 
// N. Class: 437 
// Fields: 5 
namespace CEnvSpark
{
	constexpr uint32_t m_flDelay = 0x4E0;  // float32 
	constexpr uint32_t m_nMagnitude = 0x4E4;  // int32 
	constexpr uint32_t m_nTrailLength = 0x4E8;  // int32 
	constexpr uint32_t m_nType = 0x4EC;  // int32 
	constexpr uint32_t m_OnSpark = 0x4F0;  // CEntityIOOutput 
}

// Offset: 0x0 
// N. Class: 438 
// Fields: 0 
namespace CShower
{
}

// Offset: 0x7ffe058a1650 
// N. Class: 439 
// Fields: 16 
namespace CEnvExplosion
{
	constexpr uint32_t m_iMagnitude = 0x790;  // int32 
	constexpr uint32_t m_flPlayerDamage = 0x794;  // float32 
	constexpr uint32_t m_iRadiusOverride = 0x798;  // int32 
	constexpr uint32_t m_flInnerRadius = 0x79C;  // float32 
	constexpr uint32_t m_spriteScale = 0x7A0;  // int32 
	constexpr uint32_t m_flDamageForce = 0x7A4;  // float32 
	constexpr uint32_t m_hInflictor = 0x7A8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iCustomDamageType = 0x7AC;  // DamageTypes_t 
	constexpr uint32_t m_bCreateDebris = 0x7B0;  // bool 
	constexpr uint32_t m_iszExplosionType = 0x7B8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszCustomEffectName = 0x7C0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszCustomSoundName = 0x7C8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iClassIgnore = 0x7D0;  // Class_T 
	constexpr uint32_t m_iClassIgnore2 = 0x7D4;  // Class_T 
	constexpr uint32_t m_iszEntityIgnoreName = 0x7D8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hEntityIgnore = 0x7E0;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe058a2190 
// N. Class: 440 
// Fields: 1 
namespace CFilterName
{
	constexpr uint32_t m_iFilterName = 0x538;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058a2230 
// N. Class: 441 
// Fields: 1 
namespace CFilterModel
{
	constexpr uint32_t m_iFilterModel = 0x538;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058a23b0 
// N. Class: 442 
// Fields: 1 
namespace CFilterContext
{
	constexpr uint32_t m_iFilterContext = 0x538;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058a2450 
// N. Class: 443 
// Fields: 1 
namespace FilterTeam
{
	constexpr uint32_t m_iFilterTeam = 0x538;  // int32 
}

// Offset: 0x7ffe058a24f0 
// N. Class: 444 
// Fields: 1 
namespace CFilterMassGreater
{
	constexpr uint32_t m_fFilterMass = 0x538;  // float32 
}

// Offset: 0x7ffe058a2590 
// N. Class: 445 
// Fields: 1 
namespace FilterDamageType
{
	constexpr uint32_t m_iDamageType = 0x538;  // int32 
}

// Offset: 0x7ffe058a2630 
// N. Class: 446 
// Fields: 3 
namespace FilterHealth
{
	constexpr uint32_t m_bAdrenalineActive = 0x538;  // bool 
	constexpr uint32_t m_iHealthMin = 0x53C;  // int32 
	constexpr uint32_t m_iHealthMax = 0x540;  // int32 
}

// Offset: 0x7ffe058a2710 
// N. Class: 447 
// Fields: 5 
namespace CFilterEnemy
{
	constexpr uint32_t m_iszEnemyName = 0x538;  // CUtlSymbolLarge 
	constexpr uint32_t m_flRadius = 0x540;  // float32 
	constexpr uint32_t m_flOuterRadius = 0x544;  // float32 
	constexpr uint32_t m_nMaxSquadmatesPerEnemy = 0x548;  // int32 
	constexpr uint32_t m_iszPlayerName = 0x550;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058a2890 
// N. Class: 448 
// Fields: 1 
namespace CFilterAttributeInt
{
	constexpr uint32_t m_sAttributeName = 0x538;  // CUtlStringToken 
}

// Offset: 0x7ffe058a0f50 
// N. Class: 449 
// Fields: 19 
namespace CFire
{
	constexpr uint32_t m_hEffect = 0x790;  // CHandle< CBaseFire > 
	constexpr uint32_t m_hOwner = 0x794;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nFireType = 0x798;  // int32 
	constexpr uint32_t m_flFuel = 0x79C;  // float32 
	constexpr uint32_t m_flDamageTime = 0x7A0;  // GameTime_t 
	constexpr uint32_t m_lastDamage = 0x7A4;  // GameTime_t 
	constexpr uint32_t m_flFireSize = 0x7A8;  // float32 
	constexpr uint32_t m_flLastNavUpdateTime = 0x7AC;  // GameTime_t 
	constexpr uint32_t m_flHeatLevel = 0x7B0;  // float32 
	constexpr uint32_t m_flHeatAbsorb = 0x7B4;  // float32 
	constexpr uint32_t m_flDamageScale = 0x7B8;  // float32 
	constexpr uint32_t m_flMaxHeat = 0x7BC;  // float32 
	constexpr uint32_t m_flLastHeatLevel = 0x7C0;  // float32 
	constexpr uint32_t m_flAttackTime = 0x7C4;  // float32 
	constexpr uint32_t m_bEnabled = 0x7C8;  // bool 
	constexpr uint32_t m_bStartDisabled = 0x7C9;  // bool 
	constexpr uint32_t m_bDidActivate = 0x7CA;  // bool 
	constexpr uint32_t m_OnIgnited = 0x7D0;  // CEntityIOOutput 
	constexpr uint32_t m_OnExtinguished = 0x7F8;  // CEntityIOOutput 
}

// Offset: 0x7ffe058a1290 
// N. Class: 450 
// Fields: 3 
namespace CEnvFireSource
{
	constexpr uint32_t m_bEnabled = 0x4E0;  // bool 
	constexpr uint32_t m_radius = 0x4E4;  // float32 
	constexpr uint32_t m_damage = 0x4E8;  // float32 
}

// Offset: 0x7ffe058a1370 
// N. Class: 451 
// Fields: 8 
namespace CEnvFireSensor
{
	constexpr uint32_t m_bEnabled = 0x4E0;  // bool 
	constexpr uint32_t m_bHeatAtLevel = 0x4E1;  // bool 
	constexpr uint32_t m_radius = 0x4E4;  // float32 
	constexpr uint32_t m_targetLevel = 0x4E8;  // float32 
	constexpr uint32_t m_targetTime = 0x4EC;  // float32 
	constexpr uint32_t m_levelTime = 0x4F0;  // float32 
	constexpr uint32_t m_OnHeatLevelStart = 0x4F8;  // CEntityIOOutput 
	constexpr uint32_t m_OnHeatLevelEnd = 0x520;  // CEntityIOOutput 
}

// Offset: 0x7ffe058ad7b0 
// N. Class: 452 
// Fields: 5 
namespace CFuncTimescale
{
	constexpr uint32_t m_flDesiredTimescale = 0x4E0;  // float32 
	constexpr uint32_t m_flAcceleration = 0x4E4;  // float32 
	constexpr uint32_t m_flMinBlendRate = 0x4E8;  // float32 
	constexpr uint32_t m_flBlendDeltaMultiplier = 0x4EC;  // float32 
	constexpr uint32_t m_isStarted = 0x4F0;  // bool 
}

// Offset: 0x7ffe058b5d80 
// N. Class: 453 
// Fields: 7 
namespace CLightGlow
{
	constexpr uint32_t m_nHorizontalSize = 0x790;  // uint32 
	constexpr uint32_t m_nVerticalSize = 0x794;  // uint32 
	constexpr uint32_t m_nMinDist = 0x798;  // uint32 
	constexpr uint32_t m_nMaxDist = 0x79C;  // uint32 
	constexpr uint32_t m_nOuterMaxDist = 0x7A0;  // uint32 
	constexpr uint32_t m_flGlowProxySize = 0x7A4;  // float32 
	constexpr uint32_t m_flHDRColorScale = 0x7A8;  // float32 
}

// Offset: 0x7ffe058b5f70 
// N. Class: 454 
// Fields: 3 
namespace CLogicAchievement
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_iszAchievementEventID = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnFired = 0x4F0;  // CEntityIOOutput 
}

// Offset: 0x7ffe058b6140 
// N. Class: 455 
// Fields: 5 
namespace CLogicGameEventListener
{
	constexpr uint32_t m_OnEventFired = 0x4F0;  // CEntityIOOutput 
	constexpr uint32_t m_iszGameEventName = 0x518;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszGameEventItem = 0x520;  // CUtlSymbolLarge 
	constexpr uint32_t m_bEnabled = 0x528;  // bool 
	constexpr uint32_t m_bStartDisabled = 0x529;  // bool 
}

// Offset: 0x7ffe058b64a0 
// N. Class: 456 
// Fields: 9 
namespace CLogicMeasureMovement
{
	constexpr uint32_t m_strMeasureTarget = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_strMeasureReference = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_strTargetReference = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hMeasureTarget = 0x4F8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hMeasureReference = 0x4FC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget = 0x500;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTargetReference = 0x504;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flScale = 0x508;  // float32 
	constexpr uint32_t m_nMeasureType = 0x50C;  // int32 
}

// Offset: 0x7ffe058b6760 
// N. Class: 457 
// Fields: 2 
namespace CLogicNavigation
{
	constexpr uint32_t m_isOn = 0x4E8;  // bool 
	constexpr uint32_t m_navProperty = 0x4EC;  // navproperties_t 
}

// Offset: 0x7ffe058b7320 
// N. Class: 458 
// Fields: 48 
namespace CLogicNPCCounter
{
	constexpr uint32_t m_OnMinCountAll = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnMaxCountAll = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_OnFactorAll = 0x530;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinPlayerDistAll = 0x558;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinCount_1 = 0x580;  // CEntityIOOutput 
	constexpr uint32_t m_OnMaxCount_1 = 0x5A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnFactor_1 = 0x5D0;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinPlayerDist_1 = 0x5F8;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinCount_2 = 0x620;  // CEntityIOOutput 
	constexpr uint32_t m_OnMaxCount_2 = 0x648;  // CEntityIOOutput 
	constexpr uint32_t m_OnFactor_2 = 0x670;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinPlayerDist_2 = 0x698;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinCount_3 = 0x6C0;  // CEntityIOOutput 
	constexpr uint32_t m_OnMaxCount_3 = 0x6E8;  // CEntityIOOutput 
	constexpr uint32_t m_OnFactor_3 = 0x710;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnMinPlayerDist_3 = 0x738;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_hSource = 0x760;  // CEntityHandle 
	constexpr uint32_t m_iszSourceEntityName = 0x768;  // CUtlSymbolLarge 
	constexpr uint32_t m_flDistanceMax = 0x770;  // float32 
	constexpr uint32_t m_bDisabled = 0x774;  // bool 
	constexpr uint32_t m_nMinCountAll = 0x778;  // int32 
	constexpr uint32_t m_nMaxCountAll = 0x77C;  // int32 
	constexpr uint32_t m_nMinFactorAll = 0x780;  // int32 
	constexpr uint32_t m_nMaxFactorAll = 0x784;  // int32 
	constexpr uint32_t m_iszNPCClassname_1 = 0x790;  // CUtlSymbolLarge 
	constexpr uint32_t m_nNPCState_1 = 0x798;  // int32 
	constexpr uint32_t m_bInvertState_1 = 0x79C;  // bool 
	constexpr uint32_t m_nMinCount_1 = 0x7A0;  // int32 
	constexpr uint32_t m_nMaxCount_1 = 0x7A4;  // int32 
	constexpr uint32_t m_nMinFactor_1 = 0x7A8;  // int32 
	constexpr uint32_t m_nMaxFactor_1 = 0x7AC;  // int32 
	constexpr uint32_t m_flDefaultDist_1 = 0x7B4;  // float32 
	constexpr uint32_t m_iszNPCClassname_2 = 0x7B8;  // CUtlSymbolLarge 
	constexpr uint32_t m_nNPCState_2 = 0x7C0;  // int32 
	constexpr uint32_t m_bInvertState_2 = 0x7C4;  // bool 
	constexpr uint32_t m_nMinCount_2 = 0x7C8;  // int32 
	constexpr uint32_t m_nMaxCount_2 = 0x7CC;  // int32 
	constexpr uint32_t m_nMinFactor_2 = 0x7D0;  // int32 
	constexpr uint32_t m_nMaxFactor_2 = 0x7D4;  // int32 
	constexpr uint32_t m_flDefaultDist_2 = 0x7DC;  // float32 
	constexpr uint32_t m_iszNPCClassname_3 = 0x7E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nNPCState_3 = 0x7E8;  // int32 
	constexpr uint32_t m_bInvertState_3 = 0x7EC;  // bool 
	constexpr uint32_t m_nMinCount_3 = 0x7F0;  // int32 
	constexpr uint32_t m_nMaxCount_3 = 0x7F4;  // int32 
	constexpr uint32_t m_nMinFactor_3 = 0x7F8;  // int32 
	constexpr uint32_t m_nMaxFactor_3 = 0x7FC;  // int32 
	constexpr uint32_t m_flDefaultDist_3 = 0x804;  // float32 
}

// Offset: 0x7ffe058b7b70 
// N. Class: 459 
// Fields: 4 
namespace CLogicNPCCounterAABB
{
	constexpr uint32_t m_vDistanceOuterMins = 0x820;  // Vector 
	constexpr uint32_t m_vDistanceOuterMaxs = 0x82C;  // Vector 
	constexpr uint32_t m_vOuterMins = 0x838;  // Vector 
	constexpr uint32_t m_vOuterMaxs = 0x844;  // Vector 
}

// Offset: 0x0 
// N. Class: 460 
// Fields: 0 
namespace CLogicNPCCounterOBB
{
}

// Offset: 0x7ffe058b4f40 
// N. Class: 461 
// Fields: 5 
namespace CLogicPlayerProxy
{
	constexpr uint32_t m_hPlayer = 0x4E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_PlayerHasAmmo = 0x4E8;  // CEntityIOOutput 
	constexpr uint32_t m_PlayerHasNoAmmo = 0x510;  // CEntityIOOutput 
	constexpr uint32_t m_PlayerDied = 0x538;  // CEntityIOOutput 
	constexpr uint32_t m_RequestedPlayerHealth = 0x560;  // CEntityOutputTemplate< int32 > 
}

// Offset: 0x7ffe058b58d0 
// N. Class: 462 
// Fields: 11 
namespace CLogicAuto
{
	constexpr uint32_t m_OnMapSpawn = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnDemoMapSpawn = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_OnNewGame = 0x530;  // CEntityIOOutput 
	constexpr uint32_t m_OnLoadGame = 0x558;  // CEntityIOOutput 
	constexpr uint32_t m_OnMapTransition = 0x580;  // CEntityIOOutput 
	constexpr uint32_t m_OnBackgroundMap = 0x5A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnMultiNewMap = 0x5D0;  // CEntityIOOutput 
	constexpr uint32_t m_OnMultiNewRound = 0x5F8;  // CEntityIOOutput 
	constexpr uint32_t m_OnVREnabled = 0x620;  // CEntityIOOutput 
	constexpr uint32_t m_OnVRNotEnabled = 0x648;  // CEntityIOOutput 
	constexpr uint32_t m_globalstate = 0x670;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 463 
// Fields: 0 
namespace CLogicScript
{
}

// Offset: 0x7ffe058b6a60 
// N. Class: 464 
// Fields: 13 
namespace CTimerEntity
{
	constexpr uint32_t m_OnTimer = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnTimerHigh = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_OnTimerLow = 0x530;  // CEntityIOOutput 
	constexpr uint32_t m_iDisabled = 0x558;  // int32 
	constexpr uint32_t m_flInitialDelay = 0x55C;  // float32 
	constexpr uint32_t m_flRefireTime = 0x560;  // float32 
	constexpr uint32_t m_bUpDownState = 0x564;  // bool 
	constexpr uint32_t m_iUseRandomTime = 0x568;  // int32 
	constexpr uint32_t m_bPauseAfterFiring = 0x56C;  // bool 
	constexpr uint32_t m_flLowerRandomBound = 0x570;  // float32 
	constexpr uint32_t m_flUpperRandomBound = 0x574;  // float32 
	constexpr uint32_t m_flRemainingTime = 0x578;  // float32 
	constexpr uint32_t m_bPaused = 0x57C;  // bool 
}

// Offset: 0x7ffe058b6e90 
// N. Class: 465 
// Fields: 4 
namespace CLogicLineToEntity
{
	constexpr uint32_t m_Line = 0x4E0;  // CEntityOutputTemplate< Vector > 
	constexpr uint32_t m_SourceName = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_StartEntity = 0x510;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_EndEntity = 0x514;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe058b6ff0 
// N. Class: 466 
// Fields: 11 
namespace CMathRemap
{
	constexpr uint32_t m_flInMin = 0x4E0;  // float32 
	constexpr uint32_t m_flInMax = 0x4E4;  // float32 
	constexpr uint32_t m_flOut1 = 0x4E8;  // float32 
	constexpr uint32_t m_flOut2 = 0x4EC;  // float32 
	constexpr uint32_t m_flOldInValue = 0x4F0;  // float32 
	constexpr uint32_t m_bEnabled = 0x4F4;  // bool 
	constexpr uint32_t m_OutValue = 0x4F8;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnRoseAboveMin = 0x520;  // CEntityIOOutput 
	constexpr uint32_t m_OnRoseAboveMax = 0x548;  // CEntityIOOutput 
	constexpr uint32_t m_OnFellBelowMin = 0x570;  // CEntityIOOutput 
	constexpr uint32_t m_OnFellBelowMax = 0x598;  // CEntityIOOutput 
}

// Offset: 0x7ffe058b7200 
// N. Class: 467 
// Fields: 5 
namespace CMathColorBlend
{
	constexpr uint32_t m_flInMin = 0x4E0;  // float32 
	constexpr uint32_t m_flInMax = 0x4E4;  // float32 
	constexpr uint32_t m_OutColor1 = 0x4E8;  // Color 
	constexpr uint32_t m_OutColor2 = 0x4EC;  // Color 
	constexpr uint32_t m_OutValue = 0x4F0;  // CEntityOutputTemplate< Color > 
}

// Offset: 0x7ffe058b7920 
// N. Class: 468 
// Fields: 5 
namespace CEnvGlobal
{
	constexpr uint32_t m_outCounter = 0x4E0;  // CEntityOutputTemplate< int32 > 
	constexpr uint32_t m_globalstate = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_triggermode = 0x510;  // int32 
	constexpr uint32_t m_initialstate = 0x514;  // int32 
	constexpr uint32_t m_counter = 0x518;  // int32 
}

// Offset: 0x7ffe058b7ac0 
// N. Class: 469 
// Fields: 5 
namespace CMultiSource
{
	constexpr uint32_t m_rgEntities = 0x4E0;  // CHandle< CBaseEntity >[32] 
	constexpr uint32_t m_OnTrigger = 0x5E0;  // CEntityIOOutput 
	constexpr uint32_t m_iTotal = 0x608;  // int32 
	constexpr uint32_t m_globalstate = 0x610;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058b7ce0 
// N. Class: 470 
// Fields: 11 
namespace CMathCounter
{
	constexpr uint32_t m_flMin = 0x4E0;  // float32 
	constexpr uint32_t m_flMax = 0x4E4;  // float32 
	constexpr uint32_t m_bHitMin = 0x4E8;  // bool 
	constexpr uint32_t m_bHitMax = 0x4E9;  // bool 
	constexpr uint32_t m_bDisabled = 0x4EA;  // bool 
	constexpr uint32_t m_OutValue = 0x4F0;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnGetValue = 0x518;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnHitMin = 0x540;  // CEntityIOOutput 
	constexpr uint32_t m_OnHitMax = 0x568;  // CEntityIOOutput 
	constexpr uint32_t m_OnChangedFromMin = 0x590;  // CEntityIOOutput 
	constexpr uint32_t m_OnChangedFromMax = 0x5B8;  // CEntityIOOutput 
}

// Offset: 0x7ffe058b7f40 
// N. Class: 471 
// Fields: 6 
namespace CLogicCase
{
	constexpr uint32_t m_nCase = 0x4E0;  // CUtlSymbolLarge[32] 
	constexpr uint32_t m_nShuffleCases = 0x5E0;  // int32 
	constexpr uint32_t m_nLastShuffleCase = 0x5E4;  // int32 
	constexpr uint32_t m_uchShuffleCaseMap = 0x5E8;  // uint8[32] 
	constexpr uint32_t m_OnCase = 0x608;  // CEntityIOOutput[32] 
	constexpr uint32_t m_OnDefault = 0xB08;  // CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > 
}

// Offset: 0x7ffe058b4e80 
// N. Class: 472 
// Fields: 6 
namespace CLogicCompare
{
	constexpr uint32_t m_flInValue = 0x4E0;  // float32 
	constexpr uint32_t m_flCompareValue = 0x4E4;  // float32 
	constexpr uint32_t m_OnLessThan = 0x4E8;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnEqualTo = 0x510;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnNotEqualTo = 0x538;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnGreaterThan = 0x560;  // CEntityOutputTemplate< float32 > 
}

// Offset: 0x7ffe058b50e0 
// N. Class: 473 
// Fields: 3 
namespace CLogicAutosave
{
	constexpr uint32_t m_bForceNewLevelUnit = 0x4E0;  // bool 
	constexpr uint32_t m_minHitPoints = 0x4E4;  // int32 
	constexpr uint32_t m_minHitPointsToCommit = 0x4E8;  // int32 
}

// Offset: 0x7ffe058b51c0 
// N. Class: 474 
// Fields: 4 
namespace CLogicActiveAutosave
{
	constexpr uint32_t m_TriggerHitPoints = 0x4F0;  // int32 
	constexpr uint32_t m_flTimeToTrigger = 0x4F4;  // float32 
	constexpr uint32_t m_flStartTime = 0x4F8;  // GameTime_t 
	constexpr uint32_t m_flDangerousTime = 0x4FC;  // float32 
}

// Offset: 0x7ffe058b52c0 
// N. Class: 475 
// Fields: 6 
namespace CLogicDistanceAutosave
{
	constexpr uint32_t m_iszTargetEntity = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_flDistanceToPlayer = 0x4E8;  // float32 
	constexpr uint32_t m_bForceNewLevelUnit = 0x4EC;  // bool 
	constexpr uint32_t m_bCheckCough = 0x4ED;  // bool 
	constexpr uint32_t m_bThinkDangerous = 0x4EE;  // bool 
	constexpr uint32_t m_flDangerousTime = 0x4F0;  // float32 
}

// Offset: 0x7ffe058b5400 
// N. Class: 476 
// Fields: 5 
namespace CLogicCollisionPair
{
	constexpr uint32_t m_nameAttach1 = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nameAttach2 = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_supportMultipleEntitiesWithSameName = 0x4F0;  // bool 
	constexpr uint32_t m_disabled = 0x4F1;  // bool 
	constexpr uint32_t m_succeeded = 0x4F2;  // bool 
}

// Offset: 0x7ffe058b5520 
// N. Class: 477 
// Fields: 6 
namespace CLogicBranchList
{
	constexpr uint32_t m_nLogicBranchNames = 0x4E0;  // CUtlSymbolLarge[16] 
	constexpr uint32_t m_LogicBranchList = 0x560;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_eLastState = 0x578;  // CLogicBranchList::LogicBranchListenerLastState_t 
	constexpr uint32_t m_OnAllTrue = 0x580;  // CEntityIOOutput 
	constexpr uint32_t m_OnAllFalse = 0x5A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnMixed = 0x5D0;  // CEntityIOOutput 
}

// Offset: 0x7ffe058b57c0 
// N. Class: 478 
// Fields: 1 
namespace CLogicGameEvent
{
	constexpr uint32_t m_iszEventName = 0x4E0;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058c1ba0 
// N. Class: 479 
// Fields: 5 
namespace CMessageEntity
{
	constexpr uint32_t m_radius = 0x4E0;  // int32 
	constexpr uint32_t m_messageText = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_drawText = 0x4F0;  // bool 
	constexpr uint32_t m_bDeveloperOnly = 0x4F1;  // bool 
	constexpr uint32_t m_bEnabled = 0x4F2;  // bool 
}

// Offset: 0x7ffe058c1e20 
// N. Class: 480 
// Fields: 5 
namespace CTriggerBrush
{
	constexpr uint32_t m_OnStartTouch = 0x790;  // CEntityIOOutput 
	constexpr uint32_t m_OnEndTouch = 0x7B8;  // CEntityIOOutput 
	constexpr uint32_t m_OnUse = 0x7E0;  // CEntityIOOutput 
	constexpr uint32_t m_iInputFilter = 0x808;  // int32 
	constexpr uint32_t m_iDontMessageParent = 0x80C;  // int32 
}

// Offset: 0x7ffe058c22e0 
// N. Class: 481 
// Fields: 8 
namespace CPathKeyFrame
{
	constexpr uint32_t m_Origin = 0x4E0;  // Vector 
	constexpr uint32_t m_Angles = 0x4EC;  // QAngle 
	constexpr uint32_t m_qAngle = 0x500;  // Quaternion 
	constexpr uint32_t m_iNextKey = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_flNextTime = 0x518;  // float32 
	constexpr uint32_t m_pNextKey = 0x520;  // CPathKeyFrame* 
	constexpr uint32_t m_pPrevKey = 0x528;  // CPathKeyFrame* 
	constexpr uint32_t m_flMoveSpeed = 0x530;  // float32 
}

// Offset: 0x7ffe058c2760 
// N. Class: 482 
// Fields: 11 
namespace CBaseMoveBehavior
{
	constexpr uint32_t m_iPositionInterpolator = 0x540;  // int32 
	constexpr uint32_t m_iRotationInterpolator = 0x544;  // int32 
	constexpr uint32_t m_flAnimStartTime = 0x548;  // float32 
	constexpr uint32_t m_flAnimEndTime = 0x54C;  // float32 
	constexpr uint32_t m_flAverageSpeedAcrossFrame = 0x550;  // float32 
	constexpr uint32_t m_pCurrentKeyFrame = 0x558;  // CPathKeyFrame* 
	constexpr uint32_t m_pTargetKeyFrame = 0x560;  // CPathKeyFrame* 
	constexpr uint32_t m_pPreKeyFrame = 0x568;  // CPathKeyFrame* 
	constexpr uint32_t m_pPostKeyFrame = 0x570;  // CPathKeyFrame* 
	constexpr uint32_t m_flTimeIntoFrame = 0x578;  // float32 
	constexpr uint32_t m_iDirection = 0x57C;  // int32 
}

// Offset: 0x7ffe058c2630 
// N. Class: 483 
// Fields: 3 
namespace CPathCorner
{
	constexpr uint32_t m_flWait = 0x4E0;  // float32 
	constexpr uint32_t m_flRadius = 0x4E4;  // float32 
	constexpr uint32_t m_OnPass = 0x4E8;  // CEntityIOOutput 
}

// Offset: 0x7ffe058c2f00 
// N. Class: 484 
// Fields: 6 
namespace CPhysForce
{
	constexpr uint32_t m_nameAttach = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_force = 0x4F0;  // float32 
	constexpr uint32_t m_forceTime = 0x4F4;  // float32 
	constexpr uint32_t m_attachedObject = 0x4F8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_wasRestored = 0x4FC;  // bool 
	constexpr uint32_t m_integrator = 0x500;  // CConstantForceController 
}

// Offset: 0x7ffe058c3400 
// N. Class: 485 
// Fields: 1 
namespace CPhysThruster
{
	constexpr uint32_t m_localOrigin = 0x540;  // Vector 
}

// Offset: 0x7ffe058c35a0 
// N. Class: 486 
// Fields: 1 
namespace CPhysTorque
{
	constexpr uint32_t m_axis = 0x540;  // Vector 
}

// Offset: 0x7ffe058c3950 
// N. Class: 487 
// Fields: 7 
namespace CPhysMotor
{
	constexpr uint32_t m_nameAttach = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hAttachedObject = 0x4E8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_spinUp = 0x4EC;  // float32 
	constexpr uint32_t m_additionalAcceleration = 0x4F0;  // float32 
	constexpr uint32_t m_angularAcceleration = 0x4F4;  // float32 
	constexpr uint32_t m_lastTime = 0x4F8;  // GameTime_t 
	constexpr uint32_t m_motor = 0x510;  // CMotorController 
}

// Offset: 0x7ffe058c3d00 
// N. Class: 488 
// Fields: 7 
namespace CKeepUpright
{
	constexpr uint32_t m_worldGoalAxis = 0x4E8;  // Vector 
	constexpr uint32_t m_localTestAxis = 0x4F4;  // Vector 
	constexpr uint32_t m_nameAttach = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_attachedObject = 0x510;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_angularLimit = 0x514;  // float32 
	constexpr uint32_t m_bActive = 0x518;  // bool 
	constexpr uint32_t m_bDampAllRotation = 0x519;  // bool 
}

// Offset: 0x7ffe058c3640 
// N. Class: 489 
// Fields: 13 
namespace CPhysConstraint
{
	constexpr uint32_t m_nameAttach1 = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_nameAttach2 = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hAttach1 = 0x4F8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hAttach2 = 0x4FC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nameAttachment1 = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_nameAttachment2 = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_breakSound = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_forceLimit = 0x518;  // float32 
	constexpr uint32_t m_torqueLimit = 0x51C;  // float32 
	constexpr uint32_t m_teleportTick = 0x520;  // uint32 
	constexpr uint32_t m_minTeleportDistance = 0x524;  // float32 
	constexpr uint32_t m_bSnapObjectPositions = 0x528;  // bool 
	constexpr uint32_t m_OnBreak = 0x530;  // CEntityIOOutput 
}

// Offset: 0x7ffe058c3a40 
// N. Class: 490 
// Fields: 18 
namespace CPhysHinge
{
	constexpr uint32_t m_soundInfo = 0x560;  // ConstraintSoundInfo 
	constexpr uint32_t m_NotifyMinLimitReached = 0x5E8;  // CEntityIOOutput 
	constexpr uint32_t m_NotifyMaxLimitReached = 0x610;  // CEntityIOOutput 
	constexpr uint32_t m_bAtMinLimit = 0x638;  // bool 
	constexpr uint32_t m_bAtMaxLimit = 0x639;  // bool 
	constexpr uint32_t m_hinge = 0x63C;  // constraint_hingeparams_t 
	constexpr uint32_t m_hingeFriction = 0x67C;  // float32 
	constexpr uint32_t m_systemLoadScale = 0x680;  // float32 
	constexpr uint32_t m_bIsAxisLocal = 0x684;  // bool 
	constexpr uint32_t m_flMinRotation = 0x688;  // float32 
	constexpr uint32_t m_flMaxRotation = 0x68C;  // float32 
	constexpr uint32_t m_flInitialRotation = 0x690;  // float32 
	constexpr uint32_t m_flMotorFrequency = 0x694;  // float32 
	constexpr uint32_t m_flMotorDampingRatio = 0x698;  // float32 
	constexpr uint32_t m_flAngleSpeed = 0x69C;  // float32 
	constexpr uint32_t m_flAngleSpeedThreshold = 0x6A0;  // float32 
	constexpr uint32_t m_OnStartMoving = 0x6A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnStopMoving = 0x6D0;  // CEntityIOOutput 
}

// Offset: 0x0 
// N. Class: 491 
// Fields: 0 
namespace CPhysHingeAlias_phys_hinge_local
{
}

// Offset: 0x7ffe058c3f80 
// N. Class: 492 
// Fields: 6 
namespace CPhysBallSocket
{
	constexpr uint32_t m_flJointFriction = 0x558;  // float32 
	constexpr uint32_t m_bEnableSwingLimit = 0x55C;  // bool 
	constexpr uint32_t m_flSwingLimit = 0x560;  // float32 
	constexpr uint32_t m_bEnableTwistLimit = 0x564;  // bool 
	constexpr uint32_t m_flMinTwistAngle = 0x568;  // float32 
	constexpr uint32_t m_flMaxTwistAngle = 0x56C;  // float32 
}

// Offset: 0x7ffe058c40f0 
// N. Class: 493 
// Fields: 10 
namespace CPhysSlideConstraint
{
	constexpr uint32_t m_axisEnd = 0x560;  // Vector 
	constexpr uint32_t m_slideFriction = 0x56C;  // float32 
	constexpr uint32_t m_systemLoadScale = 0x570;  // float32 
	constexpr uint32_t m_initialOffset = 0x574;  // float32 
	constexpr uint32_t m_bEnableLinearConstraint = 0x578;  // bool 
	constexpr uint32_t m_bEnableAngularConstraint = 0x579;  // bool 
	constexpr uint32_t m_flMotorFrequency = 0x57C;  // float32 
	constexpr uint32_t m_flMotorDampingRatio = 0x580;  // float32 
	constexpr uint32_t m_bUseEntityPivot = 0x584;  // bool 
	constexpr uint32_t m_soundInfo = 0x588;  // ConstraintSoundInfo 
}

// Offset: 0x7ffe058c42b0 
// N. Class: 494 
// Fields: 6 
namespace CPhysFixed
{
	constexpr uint32_t m_flLinearFrequency = 0x558;  // float32 
	constexpr uint32_t m_flLinearDampingRatio = 0x55C;  // float32 
	constexpr uint32_t m_flAngularFrequency = 0x560;  // float32 
	constexpr uint32_t m_flAngularDampingRatio = 0x564;  // float32 
	constexpr uint32_t m_bEnableLinearConstraint = 0x568;  // bool 
	constexpr uint32_t m_bEnableAngularConstraint = 0x569;  // bool 
}

// Offset: 0x7ffe058c43f0 
// N. Class: 495 
// Fields: 4 
namespace CPhysPulley
{
	constexpr uint32_t m_position2 = 0x558;  // Vector 
	constexpr uint32_t m_offset = 0x564;  // Vector[2] 
	constexpr uint32_t m_addLength = 0x57C;  // float32 
	constexpr uint32_t m_gearRatio = 0x580;  // float32 
}

// Offset: 0x7ffe058c44f0 
// N. Class: 496 
// Fields: 6 
namespace CPhysLength
{
	constexpr uint32_t m_offset = 0x558;  // Vector[2] 
	constexpr uint32_t m_vecAttach = 0x570;  // Vector 
	constexpr uint32_t m_addLength = 0x57C;  // float32 
	constexpr uint32_t m_minLength = 0x580;  // float32 
	constexpr uint32_t m_totalLength = 0x584;  // float32 
	constexpr uint32_t m_bEnableCollision = 0x588;  // bool 
}

// Offset: 0x7ffe058c4630 
// N. Class: 497 
// Fields: 9 
namespace CRagdollConstraint
{
	constexpr uint32_t m_xmin = 0x558;  // float32 
	constexpr uint32_t m_xmax = 0x55C;  // float32 
	constexpr uint32_t m_ymin = 0x560;  // float32 
	constexpr uint32_t m_ymax = 0x564;  // float32 
	constexpr uint32_t m_zmin = 0x568;  // float32 
	constexpr uint32_t m_zmax = 0x56C;  // float32 
	constexpr uint32_t m_xfriction = 0x570;  // float32 
	constexpr uint32_t m_yfriction = 0x574;  // float32 
	constexpr uint32_t m_zfriction = 0x578;  // float32 
}

// Offset: 0x7ffe058c47d0 
// N. Class: 498 
// Fields: 48 
namespace CGenericConstraint
{
	constexpr uint32_t m_nLinearMotionX = 0x560;  // JointMotion_t 
	constexpr uint32_t m_nLinearMotionY = 0x564;  // JointMotion_t 
	constexpr uint32_t m_nLinearMotionZ = 0x568;  // JointMotion_t 
	constexpr uint32_t m_flLinearFrequencyX = 0x56C;  // float32 
	constexpr uint32_t m_flLinearFrequencyY = 0x570;  // float32 
	constexpr uint32_t m_flLinearFrequencyZ = 0x574;  // float32 
	constexpr uint32_t m_flLinearDampingRatioX = 0x578;  // float32 
	constexpr uint32_t m_flLinearDampingRatioY = 0x57C;  // float32 
	constexpr uint32_t m_flLinearDampingRatioZ = 0x580;  // float32 
	constexpr uint32_t m_flMaxLinearImpulseX = 0x584;  // float32 
	constexpr uint32_t m_flMaxLinearImpulseY = 0x588;  // float32 
	constexpr uint32_t m_flMaxLinearImpulseZ = 0x58C;  // float32 
	constexpr uint32_t m_flBreakAfterTimeX = 0x590;  // float32 
	constexpr uint32_t m_flBreakAfterTimeY = 0x594;  // float32 
	constexpr uint32_t m_flBreakAfterTimeZ = 0x598;  // float32 
	constexpr uint32_t m_flBreakAfterTimeStartTimeX = 0x59C;  // GameTime_t 
	constexpr uint32_t m_flBreakAfterTimeStartTimeY = 0x5A0;  // GameTime_t 
	constexpr uint32_t m_flBreakAfterTimeStartTimeZ = 0x5A4;  // GameTime_t 
	constexpr uint32_t m_flBreakAfterTimeThresholdX = 0x5A8;  // float32 
	constexpr uint32_t m_flBreakAfterTimeThresholdY = 0x5AC;  // float32 
	constexpr uint32_t m_flBreakAfterTimeThresholdZ = 0x5B0;  // float32 
	constexpr uint32_t m_flNotifyForceX = 0x5B4;  // float32 
	constexpr uint32_t m_flNotifyForceY = 0x5B8;  // float32 
	constexpr uint32_t m_flNotifyForceZ = 0x5BC;  // float32 
	constexpr uint32_t m_flNotifyForceMinTimeX = 0x5C0;  // float32 
	constexpr uint32_t m_flNotifyForceMinTimeY = 0x5C4;  // float32 
	constexpr uint32_t m_flNotifyForceMinTimeZ = 0x5C8;  // float32 
	constexpr uint32_t m_flNotifyForceLastTimeX = 0x5CC;  // GameTime_t 
	constexpr uint32_t m_flNotifyForceLastTimeY = 0x5D0;  // GameTime_t 
	constexpr uint32_t m_flNotifyForceLastTimeZ = 0x5D4;  // GameTime_t 
	constexpr uint32_t m_bAxisNotifiedX = 0x5D8;  // bool 
	constexpr uint32_t m_bAxisNotifiedY = 0x5D9;  // bool 
	constexpr uint32_t m_bAxisNotifiedZ = 0x5DA;  // bool 
	constexpr uint32_t m_nAngularMotionX = 0x5DC;  // JointMotion_t 
	constexpr uint32_t m_nAngularMotionY = 0x5E0;  // JointMotion_t 
	constexpr uint32_t m_nAngularMotionZ = 0x5E4;  // JointMotion_t 
	constexpr uint32_t m_flAngularFrequencyX = 0x5E8;  // float32 
	constexpr uint32_t m_flAngularFrequencyY = 0x5EC;  // float32 
	constexpr uint32_t m_flAngularFrequencyZ = 0x5F0;  // float32 
	constexpr uint32_t m_flAngularDampingRatioX = 0x5F4;  // float32 
	constexpr uint32_t m_flAngularDampingRatioY = 0x5F8;  // float32 
	constexpr uint32_t m_flAngularDampingRatioZ = 0x5FC;  // float32 
	constexpr uint32_t m_flMaxAngularImpulseX = 0x600;  // float32 
	constexpr uint32_t m_flMaxAngularImpulseY = 0x604;  // float32 
	constexpr uint32_t m_flMaxAngularImpulseZ = 0x608;  // float32 
	constexpr uint32_t m_NotifyForceReachedX = 0x610;  // CEntityIOOutput 
	constexpr uint32_t m_NotifyForceReachedY = 0x638;  // CEntityIOOutput 
	constexpr uint32_t m_NotifyForceReachedZ = 0x660;  // CEntityIOOutput 
}

// Offset: 0x7ffe058c4e50 
// N. Class: 499 
// Fields: 1 
namespace CSplineConstraint
{
	constexpr uint32_t m_vAnchorOffsetRestore = 0x5A0;  // Vector 
}

// Offset: 0x7ffe058c4ef0 
// N. Class: 500 
// Fields: 11 
namespace CPhysWheelConstraint
{
	constexpr uint32_t m_flSuspensionFrequency = 0x558;  // float32 
	constexpr uint32_t m_flSuspensionDampingRatio = 0x55C;  // float32 
	constexpr uint32_t m_flSuspensionHeightOffset = 0x560;  // float32 
	constexpr uint32_t m_bEnableSuspensionLimit = 0x564;  // bool 
	constexpr uint32_t m_flMinSuspensionOffset = 0x568;  // float32 
	constexpr uint32_t m_flMaxSuspensionOffset = 0x56C;  // float32 
	constexpr uint32_t m_bEnableSteeringLimit = 0x570;  // bool 
	constexpr uint32_t m_flMinSteeringAngle = 0x574;  // float32 
	constexpr uint32_t m_flMaxSteeringAngle = 0x578;  // float32 
	constexpr uint32_t m_flSteeringAxisFriction = 0x57C;  // float32 
	constexpr uint32_t m_flSpinAxisFriction = 0x580;  // float32 
}

// Offset: 0x7ffe058d0670 
// N. Class: 501 
// Fields: 4 
namespace CPhysicsEntitySolver
{
	constexpr uint32_t m_hMovingEntity = 0x4E8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hPhysicsBlocker = 0x4EC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_separationDuration = 0x4F0;  // float32 
	constexpr uint32_t m_cancelTime = 0x4F4;  // GameTime_t 
}

// Offset: 0x7ffe058ce8d0 
// N. Class: 502 
// Fields: 8 
namespace CPhysicsSpring
{
	constexpr uint32_t m_flFrequency = 0x4E8;  // float32 
	constexpr uint32_t m_flDampingRatio = 0x4EC;  // float32 
	constexpr uint32_t m_flRestLength = 0x4F0;  // float32 
	constexpr uint32_t m_nameAttachStart = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_nameAttachEnd = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_start = 0x508;  // Vector 
	constexpr uint32_t m_end = 0x514;  // Vector 
	constexpr uint32_t m_teleportTick = 0x520;  // uint32 
}

// Offset: 0x7ffe058cea60 
// N. Class: 503 
// Fields: 7 
namespace CPointPush
{
	constexpr uint32_t m_bEnabled = 0x4E0;  // bool 
	constexpr uint32_t m_flMagnitude = 0x4E4;  // float32 
	constexpr uint32_t m_flRadius = 0x4E8;  // float32 
	constexpr uint32_t m_flInnerRadius = 0x4EC;  // float32 
	constexpr uint32_t m_flConeOfInfluence = 0x4F0;  // float32 
	constexpr uint32_t m_iszFilterName = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFilter = 0x500;  // CHandle< CBaseFilter > 
}

// Offset: 0x7ffe058b6430 
// N. Class: 504 
// Fields: 3 
namespace CInfoPlayerStart
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_bIsMaster = 0x4E1;  // bool 
	constexpr uint32_t m_pPawnSubclass = 0x4E8;  // CGlobalSymbol 
}

// Offset: 0x7ffe058cfbd0 
// N. Class: 505 
// Fields: 7 
namespace CPointEntityFinder
{
	constexpr uint32_t m_hEntity = 0x4E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iFilterName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFilter = 0x4F0;  // CHandle< CBaseFilter > 
	constexpr uint32_t m_iRefName = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hReference = 0x500;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_FindMethod = 0x504;  // EntFinderMethod_t 
	constexpr uint32_t m_OnFoundEntity = 0x508;  // CEntityIOOutput 
}

// Offset: 0x7ffe058cf4d0 
// N. Class: 506 
// Fields: 44 
namespace CPointValueRemapper
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_bUpdateOnClient = 0x4E1;  // bool 
	constexpr uint32_t m_nInputType = 0x4E4;  // ValueRemapperInputType_t 
	constexpr uint32_t m_iszRemapLineStartName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszRemapLineEndName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hRemapLineStart = 0x4F8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hRemapLineEnd = 0x4FC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flMaximumChangePerSecond = 0x500;  // float32 
	constexpr uint32_t m_flDisengageDistance = 0x504;  // float32 
	constexpr uint32_t m_flEngageDistance = 0x508;  // float32 
	constexpr uint32_t m_bRequiresUseKey = 0x50C;  // bool 
	constexpr uint32_t m_nOutputType = 0x510;  // ValueRemapperOutputType_t 
	constexpr uint32_t m_iszOutputEntityName = 0x518;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOutputEntity2Name = 0x520;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOutputEntity3Name = 0x528;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOutputEntity4Name = 0x530;  // CUtlSymbolLarge 
	constexpr uint32_t m_hOutputEntities = 0x538;  // CNetworkUtlVectorBase< CHandle< CBaseEntity > > 
	constexpr uint32_t m_nHapticsType = 0x550;  // ValueRemapperHapticsType_t 
	constexpr uint32_t m_nMomentumType = 0x554;  // ValueRemapperMomentumType_t 
	constexpr uint32_t m_flMomentumModifier = 0x558;  // float32 
	constexpr uint32_t m_flSnapValue = 0x55C;  // float32 
	constexpr uint32_t m_flCurrentMomentum = 0x560;  // float32 
	constexpr uint32_t m_nRatchetType = 0x564;  // ValueRemapperRatchetType_t 
	constexpr uint32_t m_flRatchetOffset = 0x568;  // float32 
	constexpr uint32_t m_flInputOffset = 0x56C;  // float32 
	constexpr uint32_t m_bEngaged = 0x570;  // bool 
	constexpr uint32_t m_bFirstUpdate = 0x571;  // bool 
	constexpr uint32_t m_flPreviousValue = 0x574;  // float32 
	constexpr uint32_t m_flPreviousUpdateTickTime = 0x578;  // GameTime_t 
	constexpr uint32_t m_vecPreviousTestPoint = 0x57C;  // Vector 
	constexpr uint32_t m_hUsingPlayer = 0x588;  // CHandle< CBasePlayerPawn > 
	constexpr uint32_t m_flCustomOutputValue = 0x58C;  // float32 
	constexpr uint32_t m_iszSoundEngage = 0x590;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundDisengage = 0x598;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundReachedValueZero = 0x5A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundReachedValueOne = 0x5A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundMovingLoop = 0x5B0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Position = 0x5C0;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_PositionDelta = 0x5E8;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnReachedValueZero = 0x610;  // CEntityIOOutput 
	constexpr uint32_t m_OnReachedValueOne = 0x638;  // CEntityIOOutput 
	constexpr uint32_t m_OnReachedValueCustom = 0x660;  // CEntityIOOutput 
	constexpr uint32_t m_OnEngage = 0x688;  // CEntityIOOutput 
	constexpr uint32_t m_OnDisengage = 0x6B0;  // CEntityIOOutput 
}

// Offset: 0x7ffe058cfe60 
// N. Class: 507 
// Fields: 16 
namespace CPointWorldText
{
	constexpr uint32_t m_messageText = 0x790;  // char[512] 
	constexpr uint32_t m_FontName = 0x990;  // char[64] 
	constexpr uint32_t m_BackgroundMaterialName = 0x9D0;  // char[64] 
	constexpr uint32_t m_bEnabled = 0xA10;  // bool 
	constexpr uint32_t m_bFullbright = 0xA11;  // bool 
	constexpr uint32_t m_flWorldUnitsPerPx = 0xA14;  // float32 
	constexpr uint32_t m_flFontSize = 0xA18;  // float32 
	constexpr uint32_t m_flDepthOffset = 0xA1C;  // float32 
	constexpr uint32_t m_bDrawBackground = 0xA20;  // bool 
	constexpr uint32_t m_flBackgroundBorderWidth = 0xA24;  // float32 
	constexpr uint32_t m_flBackgroundBorderHeight = 0xA28;  // float32 
	constexpr uint32_t m_flBackgroundWorldToUV = 0xA2C;  // float32 
	constexpr uint32_t m_Color = 0xA30;  // Color 
	constexpr uint32_t m_nJustifyHorizontal = 0xA34;  // PointWorldTextJustifyHorizontal_t 
	constexpr uint32_t m_nJustifyVertical = 0xA38;  // PointWorldTextJustifyVertical_t 
	constexpr uint32_t m_nReorientMode = 0xA3C;  // PointWorldTextReorientMode_t 
}

// Offset: 0x7ffe058d02c0 
// N. Class: 508 
// Fields: 12 
namespace CPointAngleSensor
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_nLookAtName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hTargetEntity = 0x4F0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hLookAtEntity = 0x4F4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flDuration = 0x4F8;  // float32 
	constexpr uint32_t m_flDotTolerance = 0x4FC;  // float32 
	constexpr uint32_t m_flFacingTime = 0x500;  // GameTime_t 
	constexpr uint32_t m_bFired = 0x504;  // bool 
	constexpr uint32_t m_OnFacingLookat = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_OnNotFacingLookat = 0x530;  // CEntityIOOutput 
	constexpr uint32_t m_TargetDir = 0x558;  // CEntityOutputTemplate< Vector > 
	constexpr uint32_t m_FacingPercentage = 0x580;  // CEntityOutputTemplate< float32 > 
}

// Offset: 0x7ffe058d04c0 
// N. Class: 509 
// Fields: 3 
namespace CPointProximitySensor
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_hTargetEntity = 0x4E4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_Distance = 0x4E8;  // CEntityOutputTemplate< float32 > 
}

// Offset: 0x7ffe058ceb50 
// N. Class: 510 
// Fields: 16 
namespace CPointAngularVelocitySensor
{
	constexpr uint32_t m_hTargetEntity = 0x4E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flThreshold = 0x4E4;  // float32 
	constexpr uint32_t m_nLastCompareResult = 0x4E8;  // int32 
	constexpr uint32_t m_nLastFireResult = 0x4EC;  // int32 
	constexpr uint32_t m_flFireTime = 0x4F0;  // GameTime_t 
	constexpr uint32_t m_flFireInterval = 0x4F4;  // float32 
	constexpr uint32_t m_flLastAngVelocity = 0x4F8;  // float32 
	constexpr uint32_t m_lastOrientation = 0x4FC;  // QAngle 
	constexpr uint32_t m_vecAxis = 0x508;  // Vector 
	constexpr uint32_t m_bUseHelper = 0x514;  // bool 
	constexpr uint32_t m_AngularVelocity = 0x518;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnLessThan = 0x540;  // CEntityIOOutput 
	constexpr uint32_t m_OnLessThanOrEqualTo = 0x568;  // CEntityIOOutput 
	constexpr uint32_t m_OnGreaterThan = 0x590;  // CEntityIOOutput 
	constexpr uint32_t m_OnGreaterThanOrEqualTo = 0x5B8;  // CEntityIOOutput 
	constexpr uint32_t m_OnEqualTo = 0x5E0;  // CEntityIOOutput 
}

// Offset: 0x7ffe058cee50 
// N. Class: 511 
// Fields: 6 
namespace CPointVelocitySensor
{
	constexpr uint32_t m_hTargetEntity = 0x4E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_vecAxis = 0x4E4;  // Vector 
	constexpr uint32_t m_bEnabled = 0x4F0;  // bool 
	constexpr uint32_t m_fPrevVelocity = 0x4F4;  // float32 
	constexpr uint32_t m_flAvgInterval = 0x4F8;  // float32 
	constexpr uint32_t m_Velocity = 0x500;  // CEntityOutputTemplate< float32 > 
}

// Offset: 0x7ffe058da050 
// N. Class: 512 
// Fields: 6 
namespace CPointHurt
{
	constexpr uint32_t m_nDamage = 0x4E0;  // int32 
	constexpr uint32_t m_bitsDamageType = 0x4E4;  // DamageTypes_t 
	constexpr uint32_t m_flRadius = 0x4E8;  // float32 
	constexpr uint32_t m_flDelay = 0x4EC;  // float32 
	constexpr uint32_t m_strTarget = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_pActivator = 0x4F8;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe058da960 
// N. Class: 513 
// Fields: 4 
namespace CPointTeleport
{
	constexpr uint32_t m_vSaveOrigin = 0x4E0;  // Vector 
	constexpr uint32_t m_vSaveAngles = 0x4EC;  // QAngle 
	constexpr uint32_t m_bTeleportParentedEntities = 0x4F8;  // bool 
	constexpr uint32_t m_bTeleportUseCurrentAngle = 0x4F9;  // bool 
}

// Offset: 0x0 
// N. Class: 514 
// Fields: 0 
namespace CEnableMotionFixup
{
}

// Offset: 0x0 
// N. Class: 515 
// Fields: 0 
namespace CFuncPropRespawnZone
{
}

// Offset: 0x7ffe058e1350 
// N. Class: 516 
// Fields: 3 
namespace CRevertSaved
{
	constexpr uint32_t m_loadTime = 0x790;  // float32 
	constexpr uint32_t m_Duration = 0x794;  // float32 
	constexpr uint32_t m_HoldTime = 0x798;  // float32 
}

// Offset: 0x7ffe058e2b50 
// N. Class: 517 
// Fields: 3 
namespace CSceneListManager
{
	constexpr uint32_t m_hListManagers = 0x4E0;  // CUtlVector< CHandle< CSceneListManager > > 
	constexpr uint32_t m_iszScenes = 0x4F8;  // CUtlSymbolLarge[16] 
	constexpr uint32_t m_hScenes = 0x578;  // CHandle< CBaseEntity >[16] 
}

// Offset: 0x7ffe058e2ce0 
// N. Class: 518 
// Fields: 66 
namespace CSceneEntity
{
	constexpr uint32_t m_iszSceneFile = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszResumeSceneFile = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget1 = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget2 = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget3 = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget4 = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget5 = 0x518;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget6 = 0x520;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget7 = 0x528;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszTarget8 = 0x530;  // CUtlSymbolLarge 
	constexpr uint32_t m_hTarget1 = 0x538;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget2 = 0x53C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget3 = 0x540;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget4 = 0x544;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget5 = 0x548;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget6 = 0x54C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget7 = 0x550;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hTarget8 = 0x554;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_sTargetAttachment = 0x558;  // CUtlSymbolLarge 
	constexpr uint32_t m_bIsPlayingBack = 0x560;  // bool 
	constexpr uint32_t m_bPaused = 0x561;  // bool 
	constexpr uint32_t m_bMultiplayer = 0x562;  // bool 
	constexpr uint32_t m_bAutogenerated = 0x563;  // bool 
	constexpr uint32_t m_flForceClientTime = 0x564;  // float32 
	constexpr uint32_t m_flCurrentTime = 0x568;  // float32 
	constexpr uint32_t m_flFrameTime = 0x56C;  // float32 
	constexpr uint32_t m_bCancelAtNextInterrupt = 0x570;  // bool 
	constexpr uint32_t m_fPitch = 0x574;  // float32 
	constexpr uint32_t m_bAutomated = 0x578;  // bool 
	constexpr uint32_t m_nAutomatedAction = 0x57C;  // int32 
	constexpr uint32_t m_flAutomationDelay = 0x580;  // float32 
	constexpr uint32_t m_flAutomationTime = 0x584;  // float32 
	constexpr uint32_t m_hWaitingForThisResumeScene = 0x588;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bWaitingForResumeScene = 0x58C;  // bool 
	constexpr uint32_t m_bPausedViaInput = 0x58D;  // bool 
	constexpr uint32_t m_bPauseAtNextInterrupt = 0x58E;  // bool 
	constexpr uint32_t m_bWaitingForActor = 0x58F;  // bool 
	constexpr uint32_t m_bWaitingForInterrupt = 0x590;  // bool 
	constexpr uint32_t m_bInterruptedActorsScenes = 0x591;  // bool 
	constexpr uint32_t m_bBreakOnNonIdle = 0x592;  // bool 
	constexpr uint32_t m_bSceneFinished = 0x593;  // bool 
	constexpr uint32_t m_hActorList = 0x598;  // CNetworkUtlVectorBase< CHandle< CBaseFlex > > 
	constexpr uint32_t m_hRemoveActorList = 0x5B0;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_nSceneFlushCounter = 0x5F8;  // int32 
	constexpr uint32_t m_nSceneStringIndex = 0x5FC;  // uint16 
	constexpr uint32_t m_OnStart = 0x600;  // CEntityIOOutput 
	constexpr uint32_t m_OnCompletion = 0x628;  // CEntityIOOutput 
	constexpr uint32_t m_OnCanceled = 0x650;  // CEntityIOOutput 
	constexpr uint32_t m_OnPaused = 0x678;  // CEntityIOOutput 
	constexpr uint32_t m_OnResumed = 0x6A0;  // CEntityIOOutput 
	constexpr uint32_t m_OnTrigger = 0x6C8;  // CEntityIOOutput[16] 
	constexpr uint32_t m_hInterruptScene = 0x9D8;  // CHandle< CSceneEntity > 
	constexpr uint32_t m_nInterruptCount = 0x9DC;  // int32 
	constexpr uint32_t m_bSceneMissing = 0x9E0;  // bool 
	constexpr uint32_t m_bInterrupted = 0x9E1;  // bool 
	constexpr uint32_t m_bCompletedEarly = 0x9E2;  // bool 
	constexpr uint32_t m_bInterruptSceneFinished = 0x9E3;  // bool 
	constexpr uint32_t m_bRestoring = 0x9E4;  // bool 
	constexpr uint32_t m_hNotifySceneCompletion = 0x9E8;  // CUtlVector< CHandle< CSceneEntity > > 
	constexpr uint32_t m_hListManagers = 0xA00;  // CUtlVector< CHandle< CSceneListManager > > 
	constexpr uint32_t m_iszSoundName = 0xA18;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSequenceName = 0xA20;  // CUtlSymbolLarge 
	constexpr uint32_t m_hActor = 0xA28;  // CHandle< CBaseFlex > 
	constexpr uint32_t m_hActivator = 0xA2C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_BusyActor = 0xA30;  // int32 
	constexpr uint32_t m_iPlayerDeathBehavior = 0xA34;  // SceneOnPlayerDeath_t 
}

// Offset: 0x7ffe058e17a0 
// N. Class: 519 
// Fields: 8 
namespace CSoundOpvarSetEntity
{
	constexpr uint32_t m_iszStackName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOperatorName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOpvarName = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_nOpvarType = 0x500;  // int32 
	constexpr uint32_t m_nOpvarIndex = 0x504;  // int32 
	constexpr uint32_t m_flOpvarValue = 0x508;  // float32 
	constexpr uint32_t m_OpvarValueString = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_bSetOnSpawn = 0x518;  // bool 
}

// Offset: 0x7ffe058e14d0 
// N. Class: 520 
// Fields: 8 
namespace CCitadelSoundOpvarSetOBB
{
	constexpr uint32_t m_iszStackName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOperatorName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszOpvarName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_vDistanceInnerMins = 0x4F8;  // Vector 
	constexpr uint32_t m_vDistanceInnerMaxs = 0x504;  // Vector 
	constexpr uint32_t m_vDistanceOuterMins = 0x510;  // Vector 
	constexpr uint32_t m_vDistanceOuterMaxs = 0x51C;  // Vector 
	constexpr uint32_t m_nAABBDirection = 0x528;  // int32 
}

// Offset: 0x7ffe058e2980 
// N. Class: 521 
// Fields: 6 
namespace CAISound
{
	constexpr uint32_t m_iSoundType = 0x4E0;  // SoundTypes_t 
	constexpr uint32_t m_iSoundFlags = 0x4E2;  // SoundFlags_t 
	constexpr uint32_t m_iVolume = 0x4E4;  // int32 
	constexpr uint32_t m_iSoundIndex = 0x4E8;  // int32 
	constexpr uint32_t m_flDuration = 0x4EC;  // float32 
	constexpr uint32_t m_iszProxyEntityName = 0x4F0;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 522 
// Fields: 0 
namespace CNullEntity
{
}

// Offset: 0x7ffe058ee950 
// N. Class: 523 
// Fields: 1 
namespace CBaseDMStart
{
	constexpr uint32_t m_Master = 0x4E0;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 524 
// Fields: 0 
namespace CInfoLandmark
{
}

// Offset: 0x7ffe058ef130 
// N. Class: 525 
// Fields: 14 
namespace CSun
{
	constexpr uint32_t m_vDirection = 0x790;  // Vector 
	constexpr uint32_t m_clrOverlay = 0x79C;  // Color 
	constexpr uint32_t m_iszEffectName = 0x7A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSSEffectName = 0x7A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_bOn = 0x7B0;  // bool 
	constexpr uint32_t m_bmaxColor = 0x7B1;  // bool 
	constexpr uint32_t m_flSize = 0x7B4;  // float32 
	constexpr uint32_t m_flRotation = 0x7B8;  // float32 
	constexpr uint32_t m_flHazeScale = 0x7BC;  // float32 
	constexpr uint32_t m_flAlphaHaze = 0x7C0;  // float32 
	constexpr uint32_t m_flAlphaHdr = 0x7C4;  // float32 
	constexpr uint32_t m_flAlphaScale = 0x7C8;  // float32 
	constexpr uint32_t m_flHDRColorScale = 0x7CC;  // float32 
	constexpr uint32_t m_flFarZScale = 0x7D0;  // float32 
}

// Offset: 0x7ffe058effd0 
// N. Class: 526 
// Fields: 2 
namespace CTankTargetChange
{
	constexpr uint32_t m_newTarget = 0x4E0;  // CVariantBase< CVariantDefaultAllocator > 
	constexpr uint32_t m_newTargetName = 0x4F0;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe0583e7d0 
// N. Class: 527 
// Fields: 37 
namespace CFuncTrackTrain
{
	constexpr uint32_t m_ppath = 0x790;  // CHandle< CPathTrack > 
	constexpr uint32_t m_length = 0x794;  // float32 
	constexpr uint32_t m_vPosPrev = 0x798;  // Vector 
	constexpr uint32_t m_angPrev = 0x7A4;  // QAngle 
	constexpr uint32_t m_controlMins = 0x7B0;  // Vector 
	constexpr uint32_t m_controlMaxs = 0x7BC;  // Vector 
	constexpr uint32_t m_lastBlockPos = 0x7C8;  // Vector 
	constexpr uint32_t m_lastBlockTick = 0x7D4;  // int32 
	constexpr uint32_t m_flVolume = 0x7D8;  // float32 
	constexpr uint32_t m_flBank = 0x7DC;  // float32 
	constexpr uint32_t m_oldSpeed = 0x7E0;  // float32 
	constexpr uint32_t m_flBlockDamage = 0x7E4;  // float32 
	constexpr uint32_t m_height = 0x7E8;  // float32 
	constexpr uint32_t m_maxSpeed = 0x7EC;  // float32 
	constexpr uint32_t m_dir = 0x7F0;  // float32 
	constexpr uint32_t m_iszSoundMove = 0x7F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundMovePing = 0x800;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundStart = 0x808;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSoundStop = 0x810;  // CUtlSymbolLarge 
	constexpr uint32_t m_strPathTarget = 0x818;  // CUtlSymbolLarge 
	constexpr uint32_t m_flMoveSoundMinDuration = 0x820;  // float32 
	constexpr uint32_t m_flMoveSoundMaxDuration = 0x824;  // float32 
	constexpr uint32_t m_flNextMoveSoundTime = 0x828;  // GameTime_t 
	constexpr uint32_t m_flMoveSoundMinPitch = 0x82C;  // float32 
	constexpr uint32_t m_flMoveSoundMaxPitch = 0x830;  // float32 
	constexpr uint32_t m_eOrientationType = 0x834;  // TrainOrientationType_t 
	constexpr uint32_t m_eVelocityType = 0x838;  // TrainVelocityType_t 
	constexpr uint32_t m_OnStart = 0x848;  // CEntityIOOutput 
	constexpr uint32_t m_OnNext = 0x870;  // CEntityIOOutput 
	constexpr uint32_t m_OnArrivedAtDestinationNode = 0x898;  // CEntityIOOutput 
	constexpr uint32_t m_bManualSpeedChanges = 0x8C0;  // bool 
	constexpr uint32_t m_flDesiredSpeed = 0x8C4;  // float32 
	constexpr uint32_t m_flSpeedChangeTime = 0x8C8;  // GameTime_t 
	constexpr uint32_t m_flAccelSpeed = 0x8CC;  // float32 
	constexpr uint32_t m_flDecelSpeed = 0x8D0;  // float32 
	constexpr uint32_t m_bAccelToSpeed = 0x8D4;  // bool 
	constexpr uint32_t m_flNextMPSoundTime = 0x8D8;  // GameTime_t 
}

// Offset: 0x7ffe058f0120 
// N. Class: 528 
// Fields: 7 
namespace CTankTrainAI
{
	constexpr uint32_t m_hTrain = 0x4E0;  // CHandle< CFuncTrackTrain > 
	constexpr uint32_t m_hTargetEntity = 0x4E4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_soundPlaying = 0x4E8;  // int32 
	constexpr uint32_t m_startSoundName = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_engineSoundName = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_movementSoundName = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_targetEntityName = 0x518;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058ee600 
// N. Class: 529 
// Fields: 2 
namespace CHandleTest
{
	constexpr uint32_t m_Handle = 0x4E0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bSendHandle = 0x4E4;  // bool 
}

// Offset: 0x0 
// N. Class: 530 
// Fields: 0 
namespace CHandleDummy
{
}

// Offset: 0x7ffe058f06b0 
// N. Class: 531 
// Fields: 1 
namespace CFuncPlat
{
	constexpr uint32_t m_sNoise = 0x838;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058f0800 
// N. Class: 532 
// Fields: 1 
namespace CPlatTrigger
{
	constexpr uint32_t m_pPlatform = 0x790;  // CHandle< CFuncPlat > 
}

// Offset: 0x0 
// N. Class: 533 
// Fields: 0 
namespace CFuncTrainControls
{
}

// Offset: 0x7ffe058efce0 
// N. Class: 534 
// Fields: 2 
namespace CTriggerVolume
{
	constexpr uint32_t m_iFilterName = 0x790;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFilter = 0x798;  // CHandle< CBaseFilter > 
}

// Offset: 0x0 
// N. Class: 535 
// Fields: 0 
namespace CInfoTeleportDestination
{
}

// Offset: 0x7ffe058f0830 
// N. Class: 536 
// Fields: 4 
namespace CAI_ChangeHintGroup
{
	constexpr uint32_t m_iSearchType = 0x4E0;  // int32 
	constexpr uint32_t m_strSearchName = 0x4E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_strNewHintGroup = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_flRadius = 0x4F8;  // float32 
}

// Offset: 0x0 
// N. Class: 537 
// Fields: 0 
namespace CLogicProximity
{
}

// Offset: 0x0 
// N. Class: 538 
// Fields: 0 
namespace CInfoSpawnGroupLandmark
{
}

// Offset: 0x7ffe058b6c10 
// N. Class: 539 
// Fields: 11 
namespace CInfoSpawnGroupLoadUnload
{
	constexpr uint32_t m_OnSpawnGroupLoadStarted = 0x4E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnSpawnGroupLoadFinished = 0x508;  // CEntityIOOutput 
	constexpr uint32_t m_OnSpawnGroupUnloadStarted = 0x530;  // CEntityIOOutput 
	constexpr uint32_t m_OnSpawnGroupUnloadFinished = 0x558;  // CEntityIOOutput 
	constexpr uint32_t m_iszSpawnGroupName = 0x580;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszSpawnGroupFilterName = 0x588;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszLandmarkName = 0x590;  // CUtlSymbolLarge 
	constexpr uint32_t m_sFixedSpawnGroupName = 0x598;  // CUtlString 
	constexpr uint32_t m_flTimeoutInterval = 0x5A0;  // float32 
	constexpr uint32_t m_bStreamingStarted = 0x5A4;  // bool 
	constexpr uint32_t m_bUnloadingStarted = 0x5A5;  // bool 
}

// Offset: 0x0 
// N. Class: 540 
// Fields: 0 
namespace CPointPulse
{
}

// Offset: 0x7ffe058fdb00 
// N. Class: 541 
// Fields: 1 
namespace CFuncNavObstruction
{
	constexpr uint32_t m_bDisabled = 0x798;  // bool 
}

// Offset: 0x7ffe05832270 
// N. Class: 542 
// Fields: 10 
namespace CAmbientGeneric
{
	constexpr uint32_t m_radius = 0x4E0;  // float32 
	constexpr uint32_t m_flMaxRadius = 0x4E4;  // float32 
	constexpr uint32_t m_iSoundLevel = 0x4E8;  // soundlevel_t 
	constexpr uint32_t m_dpv = 0x4EC;  // dynpitchvol_t 
	constexpr uint32_t m_fActive = 0x550;  // bool 
	constexpr uint32_t m_fLooping = 0x551;  // bool 
	constexpr uint32_t m_iszSound = 0x558;  // CUtlSymbolLarge 
	constexpr uint32_t m_sSourceEntName = 0x560;  // CUtlSymbolLarge 
	constexpr uint32_t m_hSoundSource = 0x568;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nSoundSourceEntIndex = 0x56C;  // CEntityIndex 
}

// Offset: 0x7ffe05833c80 
// N. Class: 543 
// Fields: 2 
namespace RelationshipOverride_t
{
	constexpr uint32_t entity = 0x8;  // CHandle< CBaseEntity > 
	constexpr uint32_t classType = 0xC;  // Class_T 
}

// Offset: 0x7ffe05835340 
// N. Class: 544 
// Fields: 16 
namespace CBaseToggle
{
	constexpr uint32_t m_toggle_state = 0x790;  // TOGGLE_STATE 
	constexpr uint32_t m_flMoveDistance = 0x794;  // float32 
	constexpr uint32_t m_flWait = 0x798;  // float32 
	constexpr uint32_t m_flLip = 0x79C;  // float32 
	constexpr uint32_t m_bAlwaysFireBlockedOutputs = 0x7A0;  // bool 
	constexpr uint32_t m_vecPosition1 = 0x7A4;  // Vector 
	constexpr uint32_t m_vecPosition2 = 0x7B0;  // Vector 
	constexpr uint32_t m_vecMoveAng = 0x7BC;  // QAngle 
	constexpr uint32_t m_vecAngle1 = 0x7C8;  // QAngle 
	constexpr uint32_t m_vecAngle2 = 0x7D4;  // QAngle 
	constexpr uint32_t m_flHeight = 0x7E0;  // float32 
	constexpr uint32_t m_hActivator = 0x7E4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_vecFinalDest = 0x7E8;  // Vector 
	constexpr uint32_t m_vecFinalAngle = 0x7F4;  // QAngle 
	constexpr uint32_t m_movementType = 0x800;  // int32 
	constexpr uint32_t m_sMaster = 0x808;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058364a0 
// N. Class: 545 
// Fields: 25 
namespace CBaseButton
{
	constexpr uint32_t m_angMoveEntitySpace = 0x810;  // QAngle 
	constexpr uint32_t m_fStayPushed = 0x81C;  // bool 
	constexpr uint32_t m_fRotating = 0x81D;  // bool 
	constexpr uint32_t m_ls = 0x820;  // locksound_t 
	constexpr uint32_t m_sUseSound = 0x840;  // CUtlSymbolLarge 
	constexpr uint32_t m_sLockedSound = 0x848;  // CUtlSymbolLarge 
	constexpr uint32_t m_sUnlockedSound = 0x850;  // CUtlSymbolLarge 
	constexpr uint32_t m_sOverrideAnticipationName = 0x858;  // CUtlSymbolLarge 
	constexpr uint32_t m_bLocked = 0x860;  // bool 
	constexpr uint32_t m_bDisabled = 0x861;  // bool 
	constexpr uint32_t m_flUseLockedTime = 0x864;  // GameTime_t 
	constexpr uint32_t m_bSolidBsp = 0x868;  // bool 
	constexpr uint32_t m_OnDamaged = 0x870;  // CEntityIOOutput 
	constexpr uint32_t m_OnPressed = 0x898;  // CEntityIOOutput 
	constexpr uint32_t m_OnUseLocked = 0x8C0;  // CEntityIOOutput 
	constexpr uint32_t m_OnIn = 0x8E8;  // CEntityIOOutput 
	constexpr uint32_t m_OnOut = 0x910;  // CEntityIOOutput 
	constexpr uint32_t m_nState = 0x938;  // int32 
	constexpr uint32_t m_hConstraint = 0x93C;  // CEntityHandle 
	constexpr uint32_t m_hConstraintParent = 0x940;  // CEntityHandle 
	constexpr uint32_t m_bForceNpcExclude = 0x944;  // bool 
	constexpr uint32_t m_sGlowEntity = 0x948;  // CUtlSymbolLarge 
	constexpr uint32_t m_glowEntity = 0x950;  // CHandle< CBaseModelEntity > 
	constexpr uint32_t m_usable = 0x954;  // bool 
	constexpr uint32_t m_szDisplayText = 0x958;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 546 
// Fields: 0 
namespace CPhysicalButton
{
}

// Offset: 0x0 
// N. Class: 547 
// Fields: 0 
namespace CRotButton
{
}

// Offset: 0x7ffe05831c20 
// N. Class: 548 
// Fields: 14 
namespace CMomentaryRotButton
{
	constexpr uint32_t m_Position = 0x960;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnUnpressed = 0x988;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyOpen = 0x9B0;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyClosed = 0x9D8;  // CEntityIOOutput 
	constexpr uint32_t m_OnReachedPosition = 0xA00;  // CEntityIOOutput 
	constexpr uint32_t m_lastUsed = 0xA28;  // int32 
	constexpr uint32_t m_start = 0xA2C;  // QAngle 
	constexpr uint32_t m_end = 0xA38;  // QAngle 
	constexpr uint32_t m_IdealYaw = 0xA44;  // float32 
	constexpr uint32_t m_sNoise = 0xA48;  // CUtlSymbolLarge 
	constexpr uint32_t m_bUpdateTarget = 0xA50;  // bool 
	constexpr uint32_t m_direction = 0xA54;  // int32 
	constexpr uint32_t m_returnSpeed = 0xA58;  // float32 
	constexpr uint32_t m_flStartPosition = 0xA5C;  // float32 
}

// Offset: 0x7ffe05832b70 
// N. Class: 549 
// Fields: 4 
namespace CRagdollMagnet
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_radius = 0x4E4;  // float32 
	constexpr uint32_t m_force = 0x4E8;  // float32 
	constexpr uint32_t m_axis = 0x4EC;  // Vector 
}

// Offset: 0x7ffe058385d0 
// N. Class: 550 
// Fields: 27 
namespace CBaseDoor
{
	constexpr uint32_t m_angMoveEntitySpace = 0x820;  // QAngle 
	constexpr uint32_t m_vecMoveDirParentSpace = 0x82C;  // Vector 
	constexpr uint32_t m_ls = 0x838;  // locksound_t 
	constexpr uint32_t m_bForceClosed = 0x858;  // bool 
	constexpr uint32_t m_bDoorGroup = 0x859;  // bool 
	constexpr uint32_t m_bLocked = 0x85A;  // bool 
	constexpr uint32_t m_bIgnoreDebris = 0x85B;  // bool 
	constexpr uint32_t m_eSpawnPosition = 0x85C;  // FuncDoorSpawnPos_t 
	constexpr uint32_t m_flBlockDamage = 0x860;  // float32 
	constexpr uint32_t m_NoiseMoving = 0x868;  // CUtlSymbolLarge 
	constexpr uint32_t m_NoiseArrived = 0x870;  // CUtlSymbolLarge 
	constexpr uint32_t m_NoiseMovingClosed = 0x878;  // CUtlSymbolLarge 
	constexpr uint32_t m_NoiseArrivedClosed = 0x880;  // CUtlSymbolLarge 
	constexpr uint32_t m_ChainTarget = 0x888;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnBlockedClosing = 0x890;  // CEntityIOOutput 
	constexpr uint32_t m_OnBlockedOpening = 0x8B8;  // CEntityIOOutput 
	constexpr uint32_t m_OnUnblockedClosing = 0x8E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnUnblockedOpening = 0x908;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyClosed = 0x930;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyOpen = 0x958;  // CEntityIOOutput 
	constexpr uint32_t m_OnClose = 0x980;  // CEntityIOOutput 
	constexpr uint32_t m_OnOpen = 0x9A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnLockedUse = 0x9D0;  // CEntityIOOutput 
	constexpr uint32_t m_bLoopMoveSound = 0x9F8;  // bool 
	constexpr uint32_t m_bCreateNavObstacle = 0xA10;  // bool 
	constexpr uint32_t m_isChaining = 0xA11;  // bool 
	constexpr uint32_t m_bIsUsable = 0xA12;  // bool 
}

// Offset: 0x0 
// N. Class: 551 
// Fields: 0 
namespace CEntityBlocker
{
}

// Offset: 0x7ffe05839a10 
// N. Class: 552 
// Fields: 10 
namespace CEntityDissolve
{
	constexpr uint32_t m_flFadeInStart = 0x790;  // float32 
	constexpr uint32_t m_flFadeInLength = 0x794;  // float32 
	constexpr uint32_t m_flFadeOutModelStart = 0x798;  // float32 
	constexpr uint32_t m_flFadeOutModelLength = 0x79C;  // float32 
	constexpr uint32_t m_flFadeOutStart = 0x7A0;  // float32 
	constexpr uint32_t m_flFadeOutLength = 0x7A4;  // float32 
	constexpr uint32_t m_flStartTime = 0x7A8;  // GameTime_t 
	constexpr uint32_t m_nDissolveType = 0x7AC;  // EntityDisolveType_t 
	constexpr uint32_t m_vDissolverOrigin = 0x7B0;  // Vector 
	constexpr uint32_t m_nMagnitude = 0x7BC;  // uint32 
}

// Offset: 0x7ffe05838940 
// N. Class: 553 
// Fields: 30 
namespace CEnvProjectedTexture
{
	constexpr uint32_t m_hTargetEntity = 0x790;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bState = 0x794;  // bool 
	constexpr uint32_t m_bAlwaysUpdate = 0x795;  // bool 
	constexpr uint32_t m_flLightFOV = 0x798;  // float32 
	constexpr uint32_t m_bEnableShadows = 0x79C;  // bool 
	constexpr uint32_t m_bSimpleProjection = 0x79D;  // bool 
	constexpr uint32_t m_bLightOnlyTarget = 0x79E;  // bool 
	constexpr uint32_t m_bLightWorld = 0x79F;  // bool 
	constexpr uint32_t m_bCameraSpace = 0x7A0;  // bool 
	constexpr uint32_t m_flBrightnessScale = 0x7A4;  // float32 
	constexpr uint32_t m_LightColor = 0x7A8;  // Color 
	constexpr uint32_t m_flIntensity = 0x7AC;  // float32 
	constexpr uint32_t m_flLinearAttenuation = 0x7B0;  // float32 
	constexpr uint32_t m_flQuadraticAttenuation = 0x7B4;  // float32 
	constexpr uint32_t m_bVolumetric = 0x7B8;  // bool 
	constexpr uint32_t m_flNoiseStrength = 0x7BC;  // float32 
	constexpr uint32_t m_flFlashlightTime = 0x7C0;  // float32 
	constexpr uint32_t m_nNumPlanes = 0x7C4;  // uint32 
	constexpr uint32_t m_flPlaneOffset = 0x7C8;  // float32 
	constexpr uint32_t m_flVolumetricIntensity = 0x7CC;  // float32 
	constexpr uint32_t m_flColorTransitionTime = 0x7D0;  // float32 
	constexpr uint32_t m_flAmbient = 0x7D4;  // float32 
	constexpr uint32_t m_SpotlightTextureName = 0x7D8;  // char[512] 
	constexpr uint32_t m_nSpotlightTextureFrame = 0x9D8;  // int32 
	constexpr uint32_t m_nShadowQuality = 0x9DC;  // uint32 
	constexpr uint32_t m_flNearZ = 0x9E0;  // float32 
	constexpr uint32_t m_flFarZ = 0x9E4;  // float32 
	constexpr uint32_t m_flProjectionSize = 0x9E8;  // float32 
	constexpr uint32_t m_flRotation = 0x9EC;  // float32 
	constexpr uint32_t m_bFlipHorizontal = 0x9F0;  // bool 
}

// Offset: 0x7ffe0583a490 
// N. Class: 554 
// Fields: 9 
namespace CEnvDecal
{
	constexpr uint32_t m_hDecalMaterial = 0x790;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_flWidth = 0x798;  // float32 
	constexpr uint32_t m_flHeight = 0x79C;  // float32 
	constexpr uint32_t m_flDepth = 0x7A0;  // float32 
	constexpr uint32_t m_nRenderOrder = 0x7A4;  // uint32 
	constexpr uint32_t m_bProjectOnWorld = 0x7A8;  // bool 
	constexpr uint32_t m_bProjectOnCharacters = 0x7A9;  // bool 
	constexpr uint32_t m_bProjectOnWater = 0x7AA;  // bool 
	constexpr uint32_t m_flDepthSortBias = 0x7AC;  // float32 
}

// Offset: 0x7ffe0583a150 
// N. Class: 555 
// Fields: 6 
namespace CMessage
{
	constexpr uint32_t m_iszMessage = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_MessageVolume = 0x4E8;  // float32 
	constexpr uint32_t m_MessageAttenuation = 0x4EC;  // int32 
	constexpr uint32_t m_Radius = 0x4F0;  // float32 
	constexpr uint32_t m_sNoise = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnShowMessage = 0x500;  // CEntityIOOutput 
}

// Offset: 0x7ffe0583a980 
// N. Class: 556 
// Fields: 18 
namespace CEnvMicrophone
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_hMeasureTarget = 0x4E4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nSoundType = 0x4E8;  // SoundTypes_t 
	constexpr uint32_t m_nSoundFlags = 0x4EA;  // SoundFlags_t 
	constexpr uint32_t m_flSensitivity = 0x4EC;  // float32 
	constexpr uint32_t m_flSmoothFactor = 0x4F0;  // float32 
	constexpr uint32_t m_flMaxRange = 0x4F4;  // float32 
	constexpr uint32_t m_iszSpeakerName = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hSpeaker = 0x500;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bAvoidFeedback = 0x504;  // bool 
	constexpr uint32_t m_iSpeakerDSPPreset = 0x508;  // int32 
	constexpr uint32_t m_iszListenFilter = 0x510;  // CUtlSymbolLarge 
	constexpr uint32_t m_hListenFilter = 0x518;  // CHandle< CBaseFilter > 
	constexpr uint32_t m_SoundLevel = 0x520;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnRoutedSound = 0x548;  // CEntityIOOutput 
	constexpr uint32_t m_OnHeardSound = 0x570;  // CEntityIOOutput 
	constexpr uint32_t m_szLastSound = 0x598;  // char[256] 
	constexpr uint32_t m_iLastRoutedFrame = 0x698;  // int32 
}

// Offset: 0x7ffe05839b80 
// N. Class: 557 
// Fields: 15 
namespace CBreakable
{
	constexpr uint32_t m_CPropDataComponent = 0x798;  // CPropDataComponent 
	constexpr uint32_t m_Material = 0x7D8;  // Materials 
	constexpr uint32_t m_hBreaker = 0x7DC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_Explosion = 0x7E0;  // Explosions 
	constexpr uint32_t m_iszSpawnObject = 0x7E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_flPressureDelay = 0x7F0;  // float32 
	constexpr uint32_t m_iMinHealthDmg = 0x7F4;  // int32 
	constexpr uint32_t m_iszPropData = 0x7F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_impactEnergyScale = 0x800;  // float32 
	constexpr uint32_t m_nOverrideBlockLOS = 0x804;  // EOverrideBlockLOS_t 
	constexpr uint32_t m_OnBreak = 0x808;  // CEntityIOOutput 
	constexpr uint32_t m_OnHealthChanged = 0x830;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_PerformanceMode = 0x858;  // PerformanceMode_t 
	constexpr uint32_t m_hPhysicsAttacker = 0x85C;  // CHandle< CBasePlayerPawn > 
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0x860;  // GameTime_t 
}

// Offset: 0x7ffe0583a2f0 
// N. Class: 558 
// Fields: 12 
namespace CFuncMoveLinear
{
	constexpr uint32_t m_authoredPosition = 0x810;  // MoveLinearAuthoredPos_t 
	constexpr uint32_t m_angMoveEntitySpace = 0x814;  // QAngle 
	constexpr uint32_t m_vecMoveDirParentSpace = 0x820;  // Vector 
	constexpr uint32_t m_soundStart = 0x830;  // CUtlSymbolLarge 
	constexpr uint32_t m_soundStop = 0x838;  // CUtlSymbolLarge 
	constexpr uint32_t m_currentSound = 0x840;  // CUtlSymbolLarge 
	constexpr uint32_t m_flBlockDamage = 0x848;  // float32 
	constexpr uint32_t m_flStartPosition = 0x84C;  // float32 
	constexpr uint32_t m_OnFullyOpen = 0x858;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyClosed = 0x880;  // CEntityIOOutput 
	constexpr uint32_t m_bCreateMovableNavMesh = 0x8A8;  // bool 
	constexpr uint32_t m_bCreateNavObstacle = 0x8A9;  // bool 
}

// Offset: 0x7ffe0583ac40 
// N. Class: 559 
// Fields: 38 
namespace CFuncMover
{
	constexpr uint32_t m_bCreateMovableNavMesh = 0x790;  // bool 
	constexpr uint32_t m_iszPathName = 0x798;  // CUtlSymbolLarge 
	constexpr uint32_t m_hPathMover = 0x7A0;  // CHandle< CPathMover > 
	constexpr uint32_t m_iszPathNodeStart = 0x7A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_eMoveType = 0x7B0;  // CFuncMover::Move_t 
	constexpr uint32_t m_bIsReversing = 0x7B4;  // bool 
	constexpr uint32_t m_vTarget = 0x7B8;  // Vector 
	constexpr uint32_t m_flStartSpeed = 0x7C4;  // float32 
	constexpr uint32_t m_flPathLocation = 0x7C8;  // float32 
	constexpr uint32_t m_flT = 0x7CC;  // float32 
	constexpr uint32_t m_nCurrentNodeIndex = 0x7D0;  // int32 
	constexpr uint32_t m_nPreviousNodeIndex = 0x7D4;  // int32 
	constexpr uint32_t m_bFixedOrientation = 0x7D8;  // bool 
	constexpr uint32_t m_bFixedPitch = 0x7D9;  // bool 
	constexpr uint32_t m_eSolidType = 0x7DA;  // SolidType_t 
	constexpr uint32_t m_bIsMoving = 0x7DB;  // bool 
	constexpr uint32_t m_flTimeToReachMaxSpeed = 0x7DC;  // float32 
	constexpr uint32_t m_flDistanceToReachMaxSpeed = 0x7E0;  // float32 
	constexpr uint32_t m_flTimeToReachZeroSpeed = 0x7E4;  // float32 
	constexpr uint32_t m_flDistanceToReachZeroSpeed = 0x7E8;  // float32 
	constexpr uint32_t m_flTimeMovementStart = 0x7EC;  // GameTime_t 
	constexpr uint32_t m_flTimeMovementStop = 0x7F0;  // GameTime_t 
	constexpr uint32_t m_hStopAtNode = 0x7F4;  // CHandle< CMoverPathNode > 
	constexpr uint32_t m_flPathLocationToBeginStop = 0x7F8;  // float32 
	constexpr uint32_t m_iszStartForwardSound = 0x800;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszLoopForwardSound = 0x808;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszStopForwardSound = 0x810;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszStartReverseSound = 0x818;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszLoopReverseSound = 0x820;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszStopReverseSound = 0x828;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszArriveAtDestinationSound = 0x830;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnMovementEnd = 0x840;  // CEntityIOOutput 
	constexpr uint32_t m_bStartAtEnd = 0x868;  // bool 
	constexpr uint32_t m_eOrientationUpdate = 0x86C;  // CFuncMover::OrientationUpdate_t 
	constexpr uint32_t m_flTimeStartOrientationChange = 0x870;  // GameTime_t 
	constexpr uint32_t m_flTimeToBlendToNewOrientation = 0x874;  // float32 
	constexpr uint32_t m_flDurationBlendToNewOrientationRan = 0x878;  // float32 
	constexpr uint32_t m_qOriginalOrientation = 0x880;  // Quaternion 
}

// Offset: 0x7ffe058374b0 
// N. Class: 560 
// Fields: 18 
namespace CFuncRotating
{
	constexpr uint32_t m_OnStopped = 0x790;  // CEntityIOOutput 
	constexpr uint32_t m_OnStarted = 0x7B8;  // CEntityIOOutput 
	constexpr uint32_t m_OnReachedStart = 0x7E0;  // CEntityIOOutput 
	constexpr uint32_t m_localRotationVector = 0x808;  // RotationVector 
	constexpr uint32_t m_flFanFriction = 0x814;  // float32 
	constexpr uint32_t m_flAttenuation = 0x818;  // float32 
	constexpr uint32_t m_flVolume = 0x81C;  // float32 
	constexpr uint32_t m_flTargetSpeed = 0x820;  // float32 
	constexpr uint32_t m_flMaxSpeed = 0x824;  // float32 
	constexpr uint32_t m_flBlockDamage = 0x828;  // float32 
	constexpr uint32_t m_NoiseRunning = 0x830;  // CUtlSymbolLarge 
	constexpr uint32_t m_bReversed = 0x838;  // bool 
	constexpr uint32_t m_bAccelDecel = 0x839;  // bool 
	constexpr uint32_t m_prevLocalAngles = 0x844;  // QAngle 
	constexpr uint32_t m_angStart = 0x850;  // QAngle 
	constexpr uint32_t m_bStopAtStartPos = 0x85C;  // bool 
	constexpr uint32_t m_vecClientOrigin = 0x860;  // Vector 
	constexpr uint32_t m_vecClientAngles = 0x86C;  // QAngle 
}

// Offset: 0x7ffe0583dc50 
// N. Class: 561 
// Fields: 32 
namespace CItemGeneric
{
	constexpr uint32_t m_bHasTriggerRadius = 0xA88;  // bool 
	constexpr uint32_t m_bHasPickupRadius = 0xA89;  // bool 
	constexpr uint32_t m_flPickupRadiusSqr = 0xA8C;  // float32 
	constexpr uint32_t m_flTriggerRadiusSqr = 0xA90;  // float32 
	constexpr uint32_t m_flLastPickupCheck = 0xA94;  // GameTime_t 
	constexpr uint32_t m_bPlayerCounterListenerAdded = 0xA98;  // bool 
	constexpr uint32_t m_bPlayerInTriggerRadius = 0xA99;  // bool 
	constexpr uint32_t m_hSpawnParticleEffect = 0xAA0;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_pAmbientSoundEffect = 0xAA8;  // CUtlSymbolLarge 
	constexpr uint32_t m_bAutoStartAmbientSound = 0xAB0;  // bool 
	constexpr uint32_t m_pSpawnScriptFunction = 0xAB8;  // CUtlSymbolLarge 
	constexpr uint32_t m_hPickupParticleEffect = 0xAC0;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_pPickupSoundEffect = 0xAC8;  // CUtlSymbolLarge 
	constexpr uint32_t m_pPickupScriptFunction = 0xAD0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hTimeoutParticleEffect = 0xAD8;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_pTimeoutSoundEffect = 0xAE0;  // CUtlSymbolLarge 
	constexpr uint32_t m_pTimeoutScriptFunction = 0xAE8;  // CUtlSymbolLarge 
	constexpr uint32_t m_pPickupFilterName = 0xAF0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hPickupFilter = 0xAF8;  // CHandle< CBaseFilter > 
	constexpr uint32_t m_OnPickup = 0xB00;  // CEntityIOOutput 
	constexpr uint32_t m_OnTimeout = 0xB28;  // CEntityIOOutput 
	constexpr uint32_t m_OnTriggerStartTouch = 0xB50;  // CEntityIOOutput 
	constexpr uint32_t m_OnTriggerTouch = 0xB78;  // CEntityIOOutput 
	constexpr uint32_t m_OnTriggerEndTouch = 0xBA0;  // CEntityIOOutput 
	constexpr uint32_t m_pAllowPickupScriptFunction = 0xBC8;  // CUtlSymbolLarge 
	constexpr uint32_t m_flPickupRadius = 0xBD0;  // float32 
	constexpr uint32_t m_flTriggerRadius = 0xBD4;  // float32 
	constexpr uint32_t m_pTriggerSoundEffect = 0xBD8;  // CUtlSymbolLarge 
	constexpr uint32_t m_bGlowWhenInTrigger = 0xBE0;  // bool 
	constexpr uint32_t m_glowColor = 0xBE1;  // Color 
	constexpr uint32_t m_bUseable = 0xBE5;  // bool 
	constexpr uint32_t m_hTriggerHelper = 0xBE8;  // CHandle< CItemGenericTriggerHelper > 
}

// Offset: 0x7ffe0583d988 
// N. Class: 562 
// Fields: 1 
namespace CItemGenericTriggerHelper
{
	constexpr uint32_t m_hParentItem = 0x790;  // CHandle< CItemGeneric > 
}

// Offset: 0x7ffe0583c7b0 
// N. Class: 563 
// Fields: 1 
namespace CRuleEntity
{
	constexpr uint32_t m_iszMaster = 0x790;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe0583c850 
// N. Class: 564 
// Fields: 1 
namespace CRulePointEntity
{
	constexpr uint32_t m_Score = 0x798;  // int32 
}

// Offset: 0x0 
// N. Class: 565 
// Fields: 0 
namespace CGamePlayerEquip
{
}

// Offset: 0x7ffe0583c970 
// N. Class: 566 
// Fields: 1 
namespace CMarkupVolume
{
	constexpr uint32_t m_bDisabled = 0x790;  // bool 
}

// Offset: 0x7ffe0583ca10 
// N. Class: 567 
// Fields: 5 
namespace CMarkupVolumeTagged
{
	constexpr uint32_t m_bIsGroup = 0x7C8;  // bool 
	constexpr uint32_t m_bGroupByPrefab = 0x7C9;  // bool 
	constexpr uint32_t m_bGroupByVolume = 0x7CA;  // bool 
	constexpr uint32_t m_bGroupOtherGroups = 0x7CB;  // bool 
	constexpr uint32_t m_bIsInGroup = 0x7CC;  // bool 
}

// Offset: 0x7ffe0583cb30 
// N. Class: 568 
// Fields: 3 
namespace CMarkupVolumeWithRef
{
	constexpr uint32_t m_bUseRef = 0x7D0;  // bool 
	constexpr uint32_t m_vRefPos = 0x7D4;  // Vector 
	constexpr uint32_t m_flRefDot = 0x7E0;  // float32 
}

// Offset: 0x7ffe0583cf10 
// N. Class: 569 
// Fields: 6 
namespace CFuncBrush
{
	constexpr uint32_t m_iSolidity = 0x790;  // BrushSolidities_e 
	constexpr uint32_t m_iDisabled = 0x794;  // int32 
	constexpr uint32_t m_bSolidBsp = 0x798;  // bool 
	constexpr uint32_t m_iszExcludedClass = 0x7A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_bInvertExclusion = 0x7A8;  // bool 
	constexpr uint32_t m_bScriptedMovement = 0x7A9;  // bool 
}

// Offset: 0x7ffe0583d9d0 
// N. Class: 570 
// Fields: 9 
namespace CPathTrack
{
	constexpr uint32_t m_pnext = 0x4E0;  // CPathTrack* 
	constexpr uint32_t m_pprevious = 0x4E8;  // CPathTrack* 
	constexpr uint32_t m_paltpath = 0x4F0;  // CPathTrack* 
	constexpr uint32_t m_flRadius = 0x4F8;  // float32 
	constexpr uint32_t m_length = 0x4FC;  // float32 
	constexpr uint32_t m_altName = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_nIterVal = 0x508;  // int32 
	constexpr uint32_t m_eOrientationType = 0x50C;  // TrackOrientationType_t 
	constexpr uint32_t m_OnPass = 0x510;  // CEntityIOOutput 
}

// Offset: 0x7ffe0583ecf0 
// N. Class: 571 
// Fields: 14 
namespace CPhysBox
{
	constexpr uint32_t m_damageType = 0x868;  // int32 
	constexpr uint32_t m_damageToEnableMotion = 0x86C;  // int32 
	constexpr uint32_t m_flForceToEnableMotion = 0x870;  // float32 
	constexpr uint32_t m_angPreferredCarryAngles = 0x874;  // QAngle 
	constexpr uint32_t m_bNotSolidToWorld = 0x880;  // bool 
	constexpr uint32_t m_bEnableUseOutput = 0x881;  // bool 
	constexpr uint32_t m_iExploitableByPlayer = 0x884;  // int32 
	constexpr uint32_t m_flTouchOutputPerEntityDelay = 0x888;  // float32 
	constexpr uint32_t m_OnDamaged = 0x890;  // CEntityIOOutput 
	constexpr uint32_t m_OnAwakened = 0x8B8;  // CEntityIOOutput 
	constexpr uint32_t m_OnMotionEnabled = 0x8E0;  // CEntityIOOutput 
	constexpr uint32_t m_OnPlayerUse = 0x908;  // CEntityIOOutput 
	constexpr uint32_t m_OnStartTouch = 0x930;  // CEntityIOOutput 
	constexpr uint32_t m_hCarryingPlayer = 0x958;  // CHandle< CBasePlayerPawn > 
}

// Offset: 0x7ffe0583ef30 
// N. Class: 572 
// Fields: 9 
namespace CPhysExplosion
{
	constexpr uint32_t m_bExplodeOnSpawn = 0x4E0;  // bool 
	constexpr uint32_t m_flMagnitude = 0x4E4;  // float32 
	constexpr uint32_t m_flDamage = 0x4E8;  // float32 
	constexpr uint32_t m_radius = 0x4EC;  // float32 
	constexpr uint32_t m_targetEntityName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_flInnerRadius = 0x4F8;  // float32 
	constexpr uint32_t m_flPushScale = 0x4FC;  // float32 
	constexpr uint32_t m_bConvertToDebrisWhenPossible = 0x500;  // bool 
	constexpr uint32_t m_OnPushedPlayer = 0x508;  // CEntityIOOutput 
}

// Offset: 0x7ffe0583f0d0 
// N. Class: 573 
// Fields: 3 
namespace CPhysImpact
{
	constexpr uint32_t m_damage = 0x4E0;  // float32 
	constexpr uint32_t m_distance = 0x4E4;  // float32 
	constexpr uint32_t m_directionEntityName = 0x4E8;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe05841060 
// N. Class: 574 
// Fields: 21 
namespace CRopeKeyframe
{
	constexpr uint32_t m_RopeFlags = 0x798;  // uint16 
	constexpr uint32_t m_iNextLinkName = 0x7A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Slack = 0x7A8;  // int16 
	constexpr uint32_t m_Width = 0x7AC;  // float32 
	constexpr uint32_t m_TextureScale = 0x7B0;  // float32 
	constexpr uint32_t m_nSegments = 0x7B4;  // uint8 
	constexpr uint32_t m_bConstrainBetweenEndpoints = 0x7B5;  // bool 
	constexpr uint32_t m_strRopeMaterialModel = 0x7B8;  // CUtlSymbolLarge 
	constexpr uint32_t m_iRopeMaterialModelIndex = 0x7C0;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_Subdiv = 0x7C8;  // uint8 
	constexpr uint32_t m_nChangeCount = 0x7C9;  // uint8 
	constexpr uint32_t m_RopeLength = 0x7CA;  // int16 
	constexpr uint32_t m_fLockedPoints = 0x7CC;  // uint8 
	constexpr uint32_t m_bCreatedFromMapFile = 0x7CD;  // bool 
	constexpr uint32_t m_flScrollSpeed = 0x7D0;  // float32 
	constexpr uint32_t m_bStartPointValid = 0x7D4;  // bool 
	constexpr uint32_t m_bEndPointValid = 0x7D5;  // bool 
	constexpr uint32_t m_hStartPoint = 0x7D8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hEndPoint = 0x7DC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iStartAttachment = 0x7E0;  // AttachmentHandle_t 
	constexpr uint32_t m_iEndAttachment = 0x7E1;  // AttachmentHandle_t 
}

// Offset: 0x7ffe05841ba0 
// N. Class: 575 
// Fields: 4 
namespace CSoundEnt
{
	constexpr uint32_t m_iFreeSound = 0x4E0;  // int32 
	constexpr uint32_t m_iActiveSound = 0x4E4;  // int32 
	constexpr uint32_t m_cLastActiveSounds = 0x4E8;  // int32 
	constexpr uint32_t m_SoundPool = 0x4EC;  // CSound[128] 
}

// Offset: 0x7ffe0583e630 
// N. Class: 576 
// Fields: 4 
namespace CSpotlightEnd
{
	constexpr uint32_t m_flLightScale = 0x790;  // float32 
	constexpr uint32_t m_Radius = 0x794;  // float32 
	constexpr uint32_t m_vSpotlightDir = 0x798;  // Vector 
	constexpr uint32_t m_vSpotlightOrg = 0x7A4;  // Vector 
}

// Offset: 0x7ffe05840200 
// N. Class: 577 
// Fields: 12 
namespace CBaseTrigger
{
	constexpr uint32_t m_bDisabled = 0x810;  // bool 
	constexpr uint32_t m_iFilterName = 0x818;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFilter = 0x820;  // CHandle< CBaseFilter > 
	constexpr uint32_t m_OnStartTouch = 0x828;  // CEntityIOOutput 
	constexpr uint32_t m_OnStartTouchAll = 0x850;  // CEntityIOOutput 
	constexpr uint32_t m_OnEndTouch = 0x878;  // CEntityIOOutput 
	constexpr uint32_t m_OnEndTouchAll = 0x8A0;  // CEntityIOOutput 
	constexpr uint32_t m_OnTouching = 0x8C8;  // CEntityIOOutput 
	constexpr uint32_t m_OnTouchingEachEntity = 0x8F0;  // CEntityIOOutput 
	constexpr uint32_t m_OnNotTouching = 0x918;  // CEntityIOOutput 
	constexpr uint32_t m_hTouchingEntities = 0x940;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_bClientSidePredicted = 0x958;  // bool 
}

// Offset: 0x7ffe058404c0 
// N. Class: 578 
// Fields: 1 
namespace CTriggerMultiple
{
	constexpr uint32_t m_OnTrigger = 0x960;  // CEntityIOOutput 
}

// Offset: 0x7ffe05840660 
// N. Class: 579 
// Fields: 14 
namespace CTriggerSndSosOpvar
{
	constexpr uint32_t m_hTouchingPlayers = 0x960;  // CUtlVector< CHandle< CBaseEntity > > 
	constexpr uint32_t m_flPosition = 0x978;  // Vector 
	constexpr uint32_t m_flCenterSize = 0x984;  // float32 
	constexpr uint32_t m_flMinVal = 0x988;  // float32 
	constexpr uint32_t m_flMaxVal = 0x98C;  // float32 
	constexpr uint32_t m_opvarName = 0x990;  // CUtlSymbolLarge 
	constexpr uint32_t m_stackName = 0x998;  // CUtlSymbolLarge 
	constexpr uint32_t m_operatorName = 0x9A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_bVolIs2D = 0x9A8;  // bool 
	constexpr uint32_t m_opvarNameChar = 0x9A9;  // char[256] 
	constexpr uint32_t m_stackNameChar = 0xAA9;  // char[256] 
	constexpr uint32_t m_operatorNameChar = 0xBA9;  // char[256] 
	constexpr uint32_t m_VecNormPos = 0xCAC;  // Vector 
	constexpr uint32_t m_flNormCenterSize = 0xCB8;  // float32 
}

// Offset: 0x7ffe058408a0 
// N. Class: 580 
// Fields: 14 
namespace CTriggerHurt
{
	constexpr uint32_t m_flOriginalDamage = 0x960;  // float32 
	constexpr uint32_t m_flDamage = 0x964;  // float32 
	constexpr uint32_t m_flDamageCap = 0x968;  // float32 
	constexpr uint32_t m_flLastDmgTime = 0x96C;  // GameTime_t 
	constexpr uint32_t m_flForgivenessDelay = 0x970;  // float32 
	constexpr uint32_t m_bitsDamageInflict = 0x974;  // DamageTypes_t 
	constexpr uint32_t m_damageModel = 0x978;  // int32 
	constexpr uint32_t m_bNoDmgForce = 0x97C;  // bool 
	constexpr uint32_t m_vDamageForce = 0x980;  // Vector 
	constexpr uint32_t m_thinkAlways = 0x98C;  // bool 
	constexpr uint32_t m_hurtThinkPeriod = 0x990;  // float32 
	constexpr uint32_t m_OnHurt = 0x998;  // CEntityIOOutput 
	constexpr uint32_t m_OnHurtPlayer = 0x9C0;  // CEntityIOOutput 
	constexpr uint32_t m_hurtEntities = 0x9E8;  // CUtlVector< CHandle< CBaseEntity > > 
}

// Offset: 0x0 
// N. Class: 581 
// Fields: 0 
namespace CTriggerCallback
{
}

// Offset: 0x7ffe05840de0 
// N. Class: 582 
// Fields: 14 
namespace CTriggerLerpObject
{
	constexpr uint32_t m_iszLerpTarget = 0x960;  // CUtlSymbolLarge 
	constexpr uint32_t m_hLerpTarget = 0x968;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iszLerpTargetAttachment = 0x970;  // CUtlSymbolLarge 
	constexpr uint32_t m_hLerpTargetAttachment = 0x978;  // AttachmentHandle_t 
	constexpr uint32_t m_flLerpDuration = 0x97C;  // float32 
	constexpr uint32_t m_bLerpRestoreMoveType = 0x980;  // bool 
	constexpr uint32_t m_bSingleLerpObject = 0x981;  // bool 
	constexpr uint32_t m_vecLerpingObjects = 0x988;  // CUtlVector< lerpdata_t > 
	constexpr uint32_t m_iszLerpEffect = 0x9A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszLerpSound = 0x9A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_bAttachTouchingObject = 0x9B0;  // bool 
	constexpr uint32_t m_hEntityToWaitForDisconnect = 0x9B4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_OnLerpStarted = 0x9B8;  // CEntityIOOutput 
	constexpr uint32_t m_OnLerpFinished = 0x9E0;  // CEntityIOOutput 
}

// Offset: 0x7ffe05841ac0 
// N. Class: 583 
// Fields: 7 
namespace CChangeLevel
{
	constexpr uint32_t m_sMapName = 0x960;  // CUtlString 
	constexpr uint32_t m_sLandmarkName = 0x968;  // CUtlString 
	constexpr uint32_t m_OnChangeLevel = 0x970;  // CEntityIOOutput 
	constexpr uint32_t m_bTouched = 0x998;  // bool 
	constexpr uint32_t m_bNoTouch = 0x999;  // bool 
	constexpr uint32_t m_bNewChapter = 0x99A;  // bool 
	constexpr uint32_t m_bOnChangeLevelFired = 0x99B;  // bool 
}

// Offset: 0x7ffe05841da0 
// N. Class: 584 
// Fields: 4 
namespace CTriggerTeleport
{
	constexpr uint32_t m_iLandmark = 0x960;  // CUtlSymbolLarge 
	constexpr uint32_t m_bUseLandmarkAngles = 0x968;  // bool 
	constexpr uint32_t m_bMirrorPlayer = 0x969;  // bool 
	constexpr uint32_t m_bCheckDestIfClearForPlayer = 0x96A;  // bool 
}

// Offset: 0x7ffe05841ea0 
// N. Class: 585 
// Fields: 12 
namespace CTriggerFan
{
	constexpr uint32_t m_vFanOrigin = 0x960;  // Vector 
	constexpr uint32_t m_vFanEnd = 0x96C;  // Vector 
	constexpr uint32_t m_vNoise = 0x978;  // Vector 
	constexpr uint32_t m_flForce = 0x984;  // float32 
	constexpr uint32_t m_flRopeForceScale = 0x988;  // float32 
	constexpr uint32_t m_flPlayerForce = 0x98C;  // float32 
	constexpr uint32_t m_flRampTime = 0x990;  // float32 
	constexpr uint32_t m_bFalloff = 0x994;  // bool 
	constexpr uint32_t m_bPushPlayer = 0x995;  // bool 
	constexpr uint32_t m_bRampDown = 0x996;  // bool 
	constexpr uint32_t m_bAddNoise = 0x997;  // bool 
	constexpr uint32_t m_RampTimer = 0x998;  // CountdownTimer 
}

// Offset: 0x0 
// N. Class: 586 
// Fields: 0 
namespace CNavWalkable
{
}

// Offset: 0x7ffe05843c30 
// N. Class: 587 
// Fields: 2 
namespace CFuncNavBlocker
{
	constexpr uint32_t m_bDisabled = 0x790;  // bool 
	constexpr uint32_t m_nBlockedTeamNumber = 0x794;  // int32 
}

// Offset: 0x7ffe05843cf0 
// N. Class: 588 
// Fields: 13 
namespace CNavLinkAreaEntity
{
	constexpr uint32_t m_flWidth = 0x4E0;  // float32 
	constexpr uint32_t m_vLocatorOffset = 0x4E4;  // Vector 
	constexpr uint32_t m_qLocatorAnglesOffset = 0x4F0;  // QAngle 
	constexpr uint32_t m_strMovementForward = 0x500;  // CUtlSymbolLarge 
	constexpr uint32_t m_strMovementReverse = 0x508;  // CUtlSymbolLarge 
	constexpr uint32_t m_nNavLinkIdForward = 0x510;  // int32 
	constexpr uint32_t m_nNavLinkIdReverse = 0x514;  // int32 
	constexpr uint32_t m_bEnabled = 0x518;  // bool 
	constexpr uint32_t m_strFilterName = 0x520;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFilter = 0x528;  // CHandle< CBaseFilter > 
	constexpr uint32_t m_OnNavLinkStart = 0x530;  // CEntityIOOutput 
	constexpr uint32_t m_OnNavLinkFinish = 0x558;  // CEntityIOOutput 
	constexpr uint32_t m_bIsTerminus = 0x580;  // bool 
}

// Offset: 0x7ffe05844120 
// N. Class: 589 
// Fields: 1 
namespace CNavSpaceInfo
{
	constexpr uint32_t m_bCreateFlightSpace = 0x4E0;  // bool 
}

// Offset: 0x7ffe05809250 
// N. Class: 590 
// Fields: 12 
namespace CFuncLadder
{
	constexpr uint32_t m_vecLadderDir = 0x790;  // Vector 
	constexpr uint32_t m_Dismounts = 0x7A0;  // CUtlVector< CHandle< CInfoLadderDismount > > 
	constexpr uint32_t m_vecLocalTop = 0x7B8;  // Vector 
	constexpr uint32_t m_vecPlayerMountPositionTop = 0x7C4;  // Vector 
	constexpr uint32_t m_vecPlayerMountPositionBottom = 0x7D0;  // Vector 
	constexpr uint32_t m_flAutoRideSpeed = 0x7DC;  // float32 
	constexpr uint32_t m_bDisabled = 0x7E0;  // bool 
	constexpr uint32_t m_bFakeLadder = 0x7E1;  // bool 
	constexpr uint32_t m_bHasSlack = 0x7E2;  // bool 
	constexpr uint32_t m_surfacePropName = 0x7E8;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnPlayerGotOnLadder = 0x7F0;  // CEntityIOOutput 
	constexpr uint32_t m_OnPlayerGotOffLadder = 0x818;  // CEntityIOOutput 
}

// Offset: 0x7ffe0580be30 
// N. Class: 591 
// Fields: 7 
namespace CPrecipitationVData
{
	constexpr uint32_t m_szParticlePrecipitationEffect = 0x28;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_flInnerDistance = 0x108;  // float32 
	constexpr uint32_t m_nAttachType = 0x10C;  // ParticleAttachment_t 
	constexpr uint32_t m_bBatchSameVolumeType = 0x110;  // bool 
	constexpr uint32_t m_nRTEnvCP = 0x114;  // int32 
	constexpr uint32_t m_nRTEnvCPComponent = 0x118;  // int32 
	constexpr uint32_t m_szModifier = 0x120;  // CUtlString 
}

// Offset: 0x7ffe0580d860 
// N. Class: 592 
// Fields: 23 
namespace CSprite
{
	constexpr uint32_t m_hSpriteMaterial = 0x790;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_hAttachedToEntity = 0x798;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nAttachment = 0x79C;  // AttachmentHandle_t 
	constexpr uint32_t m_flSpriteFramerate = 0x7A0;  // float32 
	constexpr uint32_t m_flFrame = 0x7A4;  // float32 
	constexpr uint32_t m_flDieTime = 0x7A8;  // GameTime_t 
	constexpr uint32_t m_nBrightness = 0x7B8;  // uint32 
	constexpr uint32_t m_flBrightnessDuration = 0x7BC;  // float32 
	constexpr uint32_t m_flSpriteScale = 0x7C0;  // float32 
	constexpr uint32_t m_flScaleDuration = 0x7C4;  // float32 
	constexpr uint32_t m_bWorldSpaceScale = 0x7C8;  // bool 
	constexpr uint32_t m_flGlowProxySize = 0x7CC;  // float32 
	constexpr uint32_t m_flHDRColorScale = 0x7D0;  // float32 
	constexpr uint32_t m_flLastTime = 0x7D4;  // GameTime_t 
	constexpr uint32_t m_flMaxFrame = 0x7D8;  // float32 
	constexpr uint32_t m_flStartScale = 0x7DC;  // float32 
	constexpr uint32_t m_flDestScale = 0x7E0;  // float32 
	constexpr uint32_t m_flScaleTimeStart = 0x7E4;  // GameTime_t 
	constexpr uint32_t m_nStartBrightness = 0x7E8;  // int32 
	constexpr uint32_t m_nDestBrightness = 0x7EC;  // int32 
	constexpr uint32_t m_flBrightnessTimeStart = 0x7F0;  // GameTime_t 
	constexpr uint32_t m_nSpriteWidth = 0x7F4;  // int32 
	constexpr uint32_t m_nSpriteHeight = 0x7F8;  // int32 
}

// Offset: 0x0 
// N. Class: 593 
// Fields: 0 
namespace CSpriteOriented
{
}

// Offset: 0x7ffe057dd1e0 
// N. Class: 594 
// Fields: 14 
namespace CBaseClientUIEntity
{
	constexpr uint32_t m_bEnabled = 0x790;  // bool 
	constexpr uint32_t m_DialogXMLName = 0x798;  // CUtlSymbolLarge 
	constexpr uint32_t m_PanelClassName = 0x7A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_PanelID = 0x7A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_CustomOutput0 = 0x7B0;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput1 = 0x7D8;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput2 = 0x800;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput3 = 0x828;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput4 = 0x850;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput5 = 0x878;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput6 = 0x8A0;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput7 = 0x8C8;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput8 = 0x8F0;  // CEntityIOOutput 
	constexpr uint32_t m_CustomOutput9 = 0x918;  // CEntityIOOutput 
}

// Offset: 0x7ffe057dd0f0 
// N. Class: 595 
// Fields: 2 
namespace CPointClientUIDialog
{
	constexpr uint32_t m_hActivator = 0x940;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bStartEnabled = 0x944;  // bool 
}

// Offset: 0x7ffe057dd450 
// N. Class: 596 
// Fields: 23 
namespace CPointClientUIWorldPanel
{
	constexpr uint32_t m_bIgnoreInput = 0x940;  // bool 
	constexpr uint32_t m_bLit = 0x941;  // bool 
	constexpr uint32_t m_bFollowPlayerAcrossTeleport = 0x942;  // bool 
	constexpr uint32_t m_flWidth = 0x944;  // float32 
	constexpr uint32_t m_flHeight = 0x948;  // float32 
	constexpr uint32_t m_flDPI = 0x94C;  // float32 
	constexpr uint32_t m_flInteractDistance = 0x950;  // float32 
	constexpr uint32_t m_flDepthOffset = 0x954;  // float32 
	constexpr uint32_t m_unOwnerContext = 0x958;  // uint32 
	constexpr uint32_t m_unHorizontalAlign = 0x95C;  // uint32 
	constexpr uint32_t m_unVerticalAlign = 0x960;  // uint32 
	constexpr uint32_t m_unOrientation = 0x964;  // uint32 
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0x968;  // bool 
	constexpr uint32_t m_vecCSSClasses = 0x970;  // CNetworkUtlVectorBase< CUtlSymbolLarge > 
	constexpr uint32_t m_bOpaque = 0x988;  // bool 
	constexpr uint32_t m_bNoDepth = 0x989;  // bool 
	constexpr uint32_t m_bRenderBackface = 0x98A;  // bool 
	constexpr uint32_t m_bUseOffScreenIndicator = 0x98B;  // bool 
	constexpr uint32_t m_bExcludeFromSaveGames = 0x98C;  // bool 
	constexpr uint32_t m_bGrabbable = 0x98D;  // bool 
	constexpr uint32_t m_bOnlyRenderToTexture = 0x98E;  // bool 
	constexpr uint32_t m_bDisableMipGen = 0x98F;  // bool 
	constexpr uint32_t m_nExplicitImageLayout = 0x990;  // int32 
}

// Offset: 0x7ffe057dd8c8 
// N. Class: 597 
// Fields: 1 
namespace CPointClientUIWorldTextPanel
{
	constexpr uint32_t m_messageText = 0x998;  // char[512] 
}

// Offset: 0x7ffe057dd970 
// N. Class: 598 
// Fields: 10 
namespace CInfoOffscreenPanoramaTexture
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_nResolutionX = 0x4E4;  // int32 
	constexpr uint32_t m_nResolutionY = 0x4E8;  // int32 
	constexpr uint32_t m_szLayoutFileName = 0x4F0;  // CUtlSymbolLarge 
	constexpr uint32_t m_RenderAttrName = 0x4F8;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetEntities = 0x500;  // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > 
	constexpr uint32_t m_nTargetChangeCount = 0x518;  // int32 
	constexpr uint32_t m_vecCSSClasses = 0x520;  // CNetworkUtlVectorBase< CUtlSymbolLarge > 
	constexpr uint32_t m_szTargetsName = 0x538;  // CUtlSymbolLarge 
	constexpr uint32_t m_AdditionalTargetEntities = 0x540;  // CUtlVector< CHandle< CBaseModelEntity > > 
}

// Offset: 0x0 
// N. Class: 599 
// Fields: 0 
namespace CInfoPlayerTerrorist
{
}

// Offset: 0x0 
// N. Class: 600 
// Fields: 0 
namespace CInfoPlayerCounterterrorist
{
}

// Offset: 0x0 
// N. Class: 601 
// Fields: 0 
namespace CInfoDeathmatchSpawn
{
}

// Offset: 0x7ffe058515a0 
// N. Class: 602 
// Fields: 1 
namespace CPointGiveAmmo
{
	constexpr uint32_t m_pActivator = 0x4E0;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe0585f050 
// N. Class: 603 
// Fields: 9 
namespace CBombTarget
{
	constexpr uint32_t m_OnBombExplode = 0x960;  // CEntityIOOutput 
	constexpr uint32_t m_OnBombPlanted = 0x988;  // CEntityIOOutput 
	constexpr uint32_t m_OnBombDefused = 0x9B0;  // CEntityIOOutput 
	constexpr uint32_t m_bIsBombSiteB = 0x9D8;  // bool 
	constexpr uint32_t m_bIsHeistBombTarget = 0x9D9;  // bool 
	constexpr uint32_t m_bBombPlantedHere = 0x9DA;  // bool 
	constexpr uint32_t m_szMountTarget = 0x9E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_hInstructorHint = 0x9E8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_nBombSiteDesignation = 0x9EC;  // int32 
}

// Offset: 0x0 
// N. Class: 604 
// Fields: 0 
namespace CInfoInstructorHintBombTargetA
{
}

// Offset: 0x0 
// N. Class: 605 
// Fields: 0 
namespace CInfoInstructorHintBombTargetB
{
}

// Offset: 0x0 
// N. Class: 606 
// Fields: 0 
namespace CHostageRescueZoneShim
{
}

// Offset: 0x0 
// N. Class: 607 
// Fields: 0 
namespace CHostageRescueZone
{
}

// Offset: 0x0 
// N. Class: 608 
// Fields: 0 
namespace CInfoInstructorHintHostageRescueZone
{
}

// Offset: 0x7ffe0585f320 
// N. Class: 609 
// Fields: 2 
namespace CTriggerBuoyancy
{
	constexpr uint32_t m_BuoyancyHelper = 0x960;  // CBuoyancyHelper 
	constexpr uint32_t m_flFluidDensity = 0x9E0;  // float32 
}

// Offset: 0x7ffe0585f410 
// N. Class: 610 
// Fields: 1 
namespace CFuncWater
{
	constexpr uint32_t m_BuoyancyHelper = 0x790;  // CBuoyancyHelper 
}

// Offset: 0x0 
// N. Class: 611 
// Fields: 0 
namespace CCSSprite
{
}

// Offset: 0x0 
// N. Class: 612 
// Fields: 0 
namespace CCSObserverPawn
{
}

// Offset: 0x7ffe0586b290 
// N. Class: 613 
// Fields: 2 
namespace CFootstepControl
{
	constexpr uint32_t m_source = 0x960;  // CUtlSymbolLarge 
	constexpr uint32_t m_destination = 0x968;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe05862c00 
// N. Class: 614 
// Fields: 92 
namespace CCSWeaponBaseVData
{
	constexpr uint32_t m_WeaponType = 0x348;  // CSWeaponType 
	constexpr uint32_t m_WeaponCategory = 0x34C;  // CSWeaponCategory 
	constexpr uint32_t m_szViewModel = 0x350;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_szPlayerModel = 0x430;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_szWorldDroppedModel = 0x510;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_szAimsightLensMaskModel = 0x5F0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_szMagazineModel = 0x6D0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_szHeatEffect = 0x7B0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_szEjectBrassEffect = 0x890;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_szMuzzleFlashParticleAlt = 0x970;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticle = 0xA50;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticleAlt = 0xB30;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_szTracerParticle = 0xC10;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > 
	constexpr uint32_t m_GearSlot = 0xCF0;  // gear_slot_t 
	constexpr uint32_t m_GearSlotPosition = 0xCF4;  // int32 
	constexpr uint32_t m_DefaultLoadoutSlot = 0xCF8;  // loadout_slot_t 
	constexpr uint32_t m_sWrongTeamMsg = 0xD00;  // CUtlString 
	constexpr uint32_t m_nPrice = 0xD08;  // int32 
	constexpr uint32_t m_nKillAward = 0xD0C;  // int32 
	constexpr uint32_t m_nPrimaryReserveAmmoMax = 0xD10;  // int32 
	constexpr uint32_t m_nSecondaryReserveAmmoMax = 0xD14;  // int32 
	constexpr uint32_t m_bMeleeWeapon = 0xD18;  // bool 
	constexpr uint32_t m_bHasBurstMode = 0xD19;  // bool 
	constexpr uint32_t m_bIsRevolver = 0xD1A;  // bool 
	constexpr uint32_t m_bCannotShootUnderwater = 0xD1B;  // bool 
	constexpr uint32_t m_szName = 0xD20;  // CGlobalSymbol 
	constexpr uint32_t m_szAnimExtension = 0xD28;  // CUtlString 
	constexpr uint32_t m_eSilencerType = 0xD30;  // CSWeaponSilencerType 
	constexpr uint32_t m_nCrosshairMinDistance = 0xD34;  // int32 
	constexpr uint32_t m_nCrosshairDeltaDistance = 0xD38;  // int32 
	constexpr uint32_t m_bIsFullAuto = 0xD3C;  // bool 
	constexpr uint32_t m_nNumBullets = 0xD40;  // int32 
	constexpr uint32_t m_flCycleTime = 0xD44;  // CFiringModeFloat 
	constexpr uint32_t m_flMaxSpeed = 0xD4C;  // CFiringModeFloat 
	constexpr uint32_t m_flSpread = 0xD54;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyCrouch = 0xD5C;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyStand = 0xD64;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyJump = 0xD6C;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyLand = 0xD74;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyLadder = 0xD7C;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyFire = 0xD84;  // CFiringModeFloat 
	constexpr uint32_t m_flInaccuracyMove = 0xD8C;  // CFiringModeFloat 
	constexpr uint32_t m_flRecoilAngle = 0xD94;  // CFiringModeFloat 
	constexpr uint32_t m_flRecoilAngleVariance = 0xD9C;  // CFiringModeFloat 
	constexpr uint32_t m_flRecoilMagnitude = 0xDA4;  // CFiringModeFloat 
	constexpr uint32_t m_flRecoilMagnitudeVariance = 0xDAC;  // CFiringModeFloat 
	constexpr uint32_t m_nTracerFrequency = 0xDB4;  // CFiringModeInt 
	constexpr uint32_t m_flInaccuracyJumpInitial = 0xDBC;  // float32 
	constexpr uint32_t m_flInaccuracyJumpApex = 0xDC0;  // float32 
	constexpr uint32_t m_flInaccuracyReload = 0xDC4;  // float32 
	constexpr uint32_t m_nRecoilSeed = 0xDC8;  // int32 
	constexpr uint32_t m_nSpreadSeed = 0xDCC;  // int32 
	constexpr uint32_t m_flTimeToIdleAfterFire = 0xDD0;  // float32 
	constexpr uint32_t m_flIdleInterval = 0xDD4;  // float32 
	constexpr uint32_t m_flAttackMovespeedFactor = 0xDD8;  // float32 
	constexpr uint32_t m_flHeatPerShot = 0xDDC;  // float32 
	constexpr uint32_t m_flInaccuracyPitchShift = 0xDE0;  // float32 
	constexpr uint32_t m_flInaccuracyAltSoundThreshold = 0xDE4;  // float32 
	constexpr uint32_t m_flBotAudibleRange = 0xDE8;  // float32 
	constexpr uint32_t m_szUseRadioSubtitle = 0xDF0;  // CUtlString 
	constexpr uint32_t m_bUnzoomsAfterShot = 0xDF8;  // bool 
	constexpr uint32_t m_bHideViewModelWhenZoomed = 0xDF9;  // bool 
	constexpr uint32_t m_nZoomLevels = 0xDFC;  // int32 
	constexpr uint32_t m_nZoomFOV1 = 0xE00;  // int32 
	constexpr uint32_t m_nZoomFOV2 = 0xE04;  // int32 
	constexpr uint32_t m_flZoomTime0 = 0xE08;  // float32 
	constexpr uint32_t m_flZoomTime1 = 0xE0C;  // float32 
	constexpr uint32_t m_flZoomTime2 = 0xE10;  // float32 
	constexpr uint32_t m_flIronSightPullUpSpeed = 0xE14;  // float32 
	constexpr uint32_t m_flIronSightPutDownSpeed = 0xE18;  // float32 
	constexpr uint32_t m_flIronSightFOV = 0xE1C;  // float32 
	constexpr uint32_t m_flIronSightPivotForward = 0xE20;  // float32 
	constexpr uint32_t m_flIronSightLooseness = 0xE24;  // float32 
	constexpr uint32_t m_angPivotAngle = 0xE28;  // QAngle 
	constexpr uint32_t m_vecIronSightEyePos = 0xE34;  // Vector 
	constexpr uint32_t m_nDamage = 0xE40;  // int32 
	constexpr uint32_t m_flHeadshotMultiplier = 0xE44;  // float32 
	constexpr uint32_t m_flArmorRatio = 0xE48;  // float32 
	constexpr uint32_t m_flPenetration = 0xE4C;  // float32 
	constexpr uint32_t m_flRange = 0xE50;  // float32 
	constexpr uint32_t m_flRangeModifier = 0xE54;  // float32 
	constexpr uint32_t m_flFlinchVelocityModifierLarge = 0xE58;  // float32 
	constexpr uint32_t m_flFlinchVelocityModifierSmall = 0xE5C;  // float32 
	constexpr uint32_t m_flRecoveryTimeCrouch = 0xE60;  // float32 
	constexpr uint32_t m_flRecoveryTimeStand = 0xE64;  // float32 
	constexpr uint32_t m_flRecoveryTimeCrouchFinal = 0xE68;  // float32 
	constexpr uint32_t m_flRecoveryTimeStandFinal = 0xE6C;  // float32 
	constexpr uint32_t m_nRecoveryTransitionStartBullet = 0xE70;  // int32 
	constexpr uint32_t m_nRecoveryTransitionEndBullet = 0xE74;  // int32 
	constexpr uint32_t m_flThrowVelocity = 0xE78;  // float32 
	constexpr uint32_t m_vSmokeColor = 0xE7C;  // Vector 
	constexpr uint32_t m_szAnimClass = 0xE88;  // CGlobalSymbol 
}

// Offset: 0x0 
// N. Class: 615 
// Fields: 0 
namespace CTriggerTripWire
{
}

// Offset: 0x7ffe0587afc0 
// N. Class: 616 
// Fields: 2 
namespace CPointGamestatsCounter
{
	constexpr uint32_t m_strStatisticName = 0x4E0;  // CUtlSymbolLarge 
	constexpr uint32_t m_bDisabled = 0x4E8;  // bool 
}

// Offset: 0x7ffe057e9770 
// N. Class: 617 
// Fields: 1 
namespace CEnvHudHint
{
	constexpr uint32_t m_iszMessage = 0x4E0;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe057e90c0 
// N. Class: 618 
// Fields: 1 
namespace CBuyZone
{
	constexpr uint32_t m_LegacyTeamNum = 0x960;  // int32 
}

// Offset: 0x7ffe057e91d0 
// N. Class: 619 
// Fields: 9 
namespace CFuncConveyor
{
	constexpr uint32_t m_szConveyorModels = 0x790;  // CUtlSymbolLarge 
	constexpr uint32_t m_flTransitionDurationSeconds = 0x798;  // float32 
	constexpr uint32_t m_angMoveEntitySpace = 0x79C;  // QAngle 
	constexpr uint32_t m_vecMoveDirEntitySpace = 0x7A8;  // Vector 
	constexpr uint32_t m_flTargetSpeed = 0x7B4;  // float32 
	constexpr uint32_t m_nTransitionStartTick = 0x7B8;  // GameTick_t 
	constexpr uint32_t m_nTransitionDurationTicks = 0x7BC;  // int32 
	constexpr uint32_t m_flTransitionStartSpeed = 0x7C0;  // float32 
	constexpr uint32_t m_hConveyorModels = 0x7C8;  // CNetworkUtlVectorBase< CHandle< CBaseEntity > > 
}

// Offset: 0x0 
// N. Class: 620 
// Fields: 0 
namespace CTriggerBombReset
{
}

// Offset: 0x0 
// N. Class: 621 
// Fields: 0 
namespace CTriggerHostageReset
{
}

// Offset: 0x7ffe057e4760 
// N. Class: 622 
// Fields: 1 
namespace CCSPlace
{
	constexpr uint32_t m_name = 0x798;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe057e9810 
// N. Class: 623 
// Fields: 4 
namespace CGameMoney
{
	constexpr uint32_t m_OnMoneySpent = 0x7A0;  // CEntityIOOutput 
	constexpr uint32_t m_OnMoneySpentFail = 0x7C8;  // CEntityIOOutput 
	constexpr uint32_t m_nMoney = 0x7F0;  // int32 
	constexpr uint32_t m_strAwardText = 0x7F8;  // CUtlString 
}

// Offset: 0x7ffe057e9370 
// N. Class: 624 
// Fields: 15 
namespace CPlayerSprayDecal
{
	constexpr uint32_t m_nUniqueID = 0x790;  // int32 
	constexpr uint32_t m_unAccountID = 0x794;  // uint32 
	constexpr uint32_t m_unTraceID = 0x798;  // uint32 
	constexpr uint32_t m_rtGcTime = 0x79C;  // uint32 
	constexpr uint32_t m_vecEndPos = 0x7A0;  // Vector 
	constexpr uint32_t m_vecStart = 0x7AC;  // Vector 
	constexpr uint32_t m_vecLeft = 0x7B8;  // Vector 
	constexpr uint32_t m_vecNormal = 0x7C4;  // Vector 
	constexpr uint32_t m_nPlayer = 0x7D0;  // int32 
	constexpr uint32_t m_nEntity = 0x7D4;  // int32 
	constexpr uint32_t m_nHitbox = 0x7D8;  // int32 
	constexpr uint32_t m_flCreationTime = 0x7DC;  // float32 
	constexpr uint32_t m_nTintID = 0x7E0;  // int32 
	constexpr uint32_t m_nVersion = 0x7E4;  // uint8 
	constexpr uint32_t m_ubSignature = 0x7E5;  // uint8[128] 
}

// Offset: 0x7ffe057eedf0 
// N. Class: 625 
// Fields: 25 
namespace CInferno
{
	constexpr uint32_t m_firePositions = 0x7A0;  // Vector[64] 
	constexpr uint32_t m_fireParentPositions = 0xAA0;  // Vector[64] 
	constexpr uint32_t m_bFireIsBurning = 0xDA0;  // bool[64] 
	constexpr uint32_t m_BurnNormal = 0xDE0;  // Vector[64] 
	constexpr uint32_t m_fireCount = 0x10E0;  // int32 
	constexpr uint32_t m_nInfernoType = 0x10E4;  // int32 
	constexpr uint32_t m_nFireEffectTickBegin = 0x10E8;  // int32 
	constexpr uint32_t m_nFireLifetime = 0x10EC;  // float32 
	constexpr uint32_t m_bInPostEffectTime = 0x10F0;  // bool 
	constexpr uint32_t m_nFiresExtinguishCount = 0x10F4;  // int32 
	constexpr uint32_t m_bWasCreatedInSmoke = 0x10F8;  // bool 
	constexpr uint32_t m_extent = 0x1300;  // Extent 
	constexpr uint32_t m_damageTimer = 0x1318;  // CountdownTimer 
	constexpr uint32_t m_damageRampTimer = 0x1330;  // CountdownTimer 
	constexpr uint32_t m_splashVelocity = 0x1348;  // Vector 
	constexpr uint32_t m_InitialSplashVelocity = 0x1354;  // Vector 
	constexpr uint32_t m_startPos = 0x1360;  // Vector 
	constexpr uint32_t m_vecOriginalSpawnLocation = 0x136C;  // Vector 
	constexpr uint32_t m_activeTimer = 0x1378;  // IntervalTimer 
	constexpr uint32_t m_fireSpawnOffset = 0x1388;  // int32 
	constexpr uint32_t m_nMaxFlames = 0x138C;  // int32 
	constexpr uint32_t m_nSpreadCount = 0x1390;  // int32 
	constexpr uint32_t m_BookkeepingTimer = 0x1398;  // CountdownTimer 
	constexpr uint32_t m_NextSpreadTimer = 0x13B0;  // CountdownTimer 
	constexpr uint32_t m_nSourceItemDefIndex = 0x13C8;  // uint16 
}

// Offset: 0x0 
// N. Class: 626 
// Fields: 0 
namespace CFireCrackerBlast
{
}

// Offset: 0x7ffe057f0610 
// N. Class: 627 
// Fields: 73 
namespace CBarnLight
{
	constexpr uint32_t m_bEnabled = 0x790;  // bool 
	constexpr uint32_t m_nColorMode = 0x794;  // int32 
	constexpr uint32_t m_Color = 0x798;  // Color 
	constexpr uint32_t m_flColorTemperature = 0x79C;  // float32 
	constexpr uint32_t m_flBrightness = 0x7A0;  // float32 
	constexpr uint32_t m_flBrightnessScale = 0x7A4;  // float32 
	constexpr uint32_t m_nDirectLight = 0x7A8;  // int32 
	constexpr uint32_t m_nBakedShadowIndex = 0x7AC;  // int32 
	constexpr uint32_t m_nLuminaireShape = 0x7B0;  // int32 
	constexpr uint32_t m_flLuminaireSize = 0x7B4;  // float32 
	constexpr uint32_t m_flLuminaireAnisotropy = 0x7B8;  // float32 
	constexpr uint32_t m_LightStyleString = 0x7C0;  // CUtlString 
	constexpr uint32_t m_flLightStyleStartTime = 0x7C8;  // GameTime_t 
	constexpr uint32_t m_QueuedLightStyleStrings = 0x7D0;  // CNetworkUtlVectorBase< CUtlString > 
	constexpr uint32_t m_LightStyleEvents = 0x7E8;  // CNetworkUtlVectorBase< CUtlString > 
	constexpr uint32_t m_LightStyleTargets = 0x800;  // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > 
	constexpr uint32_t m_StyleEvent = 0x818;  // CEntityIOOutput[4] 
	constexpr uint32_t m_hLightCookie = 0x8D8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_flShape = 0x8E0;  // float32 
	constexpr uint32_t m_flSoftX = 0x8E4;  // float32 
	constexpr uint32_t m_flSoftY = 0x8E8;  // float32 
	constexpr uint32_t m_flSkirt = 0x8EC;  // float32 
	constexpr uint32_t m_flSkirtNear = 0x8F0;  // float32 
	constexpr uint32_t m_vSizeParams = 0x8F4;  // Vector 
	constexpr uint32_t m_flRange = 0x900;  // float32 
	constexpr uint32_t m_vShear = 0x904;  // Vector 
	constexpr uint32_t m_nBakeSpecularToCubemaps = 0x910;  // int32 
	constexpr uint32_t m_vBakeSpecularToCubemapsSize = 0x914;  // Vector 
	constexpr uint32_t m_nCastShadows = 0x920;  // int32 
	constexpr uint32_t m_nShadowMapSize = 0x924;  // int32 
	constexpr uint32_t m_nShadowPriority = 0x928;  // int32 
	constexpr uint32_t m_bContactShadow = 0x92C;  // bool 
	constexpr uint32_t m_nBounceLight = 0x930;  // int32 
	constexpr uint32_t m_flBounceScale = 0x934;  // float32 
	constexpr uint32_t m_flMinRoughness = 0x938;  // float32 
	constexpr uint32_t m_vAlternateColor = 0x93C;  // Vector 
	constexpr uint32_t m_fAlternateColorBrightness = 0x948;  // float32 
	constexpr uint32_t m_nFog = 0x94C;  // int32 
	constexpr uint32_t m_flFogStrength = 0x950;  // float32 
	constexpr uint32_t m_nFogShadows = 0x954;  // int32 
	constexpr uint32_t m_flFogScale = 0x958;  // float32 
	constexpr uint32_t m_bFogMixedShadows = 0x95C;  // bool 
	constexpr uint32_t m_flFadeSizeStart = 0x960;  // float32 
	constexpr uint32_t m_flFadeSizeEnd = 0x964;  // float32 
	constexpr uint32_t m_flShadowFadeSizeStart = 0x968;  // float32 
	constexpr uint32_t m_flShadowFadeSizeEnd = 0x96C;  // float32 
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x970;  // bool 
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x974;  // Vector 
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x980;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x98C;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x998;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x9A4;  // Vector 
	constexpr uint32_t m_nPrecomputedSubFrusta = 0x9B0;  // int32 
	constexpr uint32_t m_vPrecomputedOBBOrigin0 = 0x9B4;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles0 = 0x9C0;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent0 = 0x9CC;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin1 = 0x9D8;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles1 = 0x9E4;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent1 = 0x9F0;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin2 = 0x9FC;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles2 = 0xA08;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent2 = 0xA14;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin3 = 0xA20;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles3 = 0xA2C;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent3 = 0xA38;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin4 = 0xA44;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles4 = 0xA50;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent4 = 0xA5C;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBOrigin5 = 0xA68;  // Vector 
	constexpr uint32_t m_vPrecomputedOBBAngles5 = 0xA74;  // QAngle 
	constexpr uint32_t m_vPrecomputedOBBExtent5 = 0xA80;  // Vector 
	constexpr uint32_t m_bPvsModifyEntity = 0xA8C;  // bool 
	constexpr uint32_t m_VisClusters = 0xA90;  // CNetworkUtlVectorBase< uint16 > 
}

// Offset: 0x7ffe057f0fb8 
// N. Class: 628 
// Fields: 1 
namespace CRectLight
{
	constexpr uint32_t m_bShowLight = 0xAB0;  // bool 
}

// Offset: 0x7ffe057f1080 
// N. Class: 629 
// Fields: 3 
namespace COmniLight
{
	constexpr uint32_t m_flInnerAngle = 0xAB0;  // float32 
	constexpr uint32_t m_flOuterAngle = 0xAB4;  // float32 
	constexpr uint32_t m_bShowLight = 0xAB8;  // bool 
}

// Offset: 0x7ffe057e5160 
// N. Class: 630 
// Fields: 14 
namespace CCSTeam
{
	constexpr uint32_t m_nLastRecievedShorthandedRoundBonus = 0x598;  // int32 
	constexpr uint32_t m_nShorthandedRoundBonusStartRound = 0x59C;  // int32 
	constexpr uint32_t m_bSurrendered = 0x5A0;  // bool 
	constexpr uint32_t m_szTeamMatchStat = 0x5A1;  // char[512] 
	constexpr uint32_t m_numMapVictories = 0x7A4;  // int32 
	constexpr uint32_t m_scoreFirstHalf = 0x7A8;  // int32 
	constexpr uint32_t m_scoreSecondHalf = 0x7AC;  // int32 
	constexpr uint32_t m_scoreOvertime = 0x7B0;  // int32 
	constexpr uint32_t m_szClanTeamname = 0x7B4;  // char[129] 
	constexpr uint32_t m_iClanID = 0x838;  // uint32 
	constexpr uint32_t m_szTeamFlagImage = 0x83C;  // char[8] 
	constexpr uint32_t m_szTeamLogoImage = 0x844;  // char[8] 
	constexpr uint32_t m_flNextResourceTime = 0x84C;  // float32 
	constexpr uint32_t m_iLastUpdateSentAt = 0x850;  // int32 
}

// Offset: 0x7ffe057e9940 
// N. Class: 631 
// Fields: 9 
namespace CMapInfo
{
	constexpr uint32_t m_iBuyingStatus = 0x4E0;  // int32 
	constexpr uint32_t m_flBombRadius = 0x4E4;  // float32 
	constexpr uint32_t m_iPetPopulation = 0x4E8;  // int32 
	constexpr uint32_t m_bUseNormalSpawnsForDM = 0x4EC;  // bool 
	constexpr uint32_t m_bDisableAutoGeneratedDMSpawns = 0x4ED;  // bool 
	constexpr uint32_t m_flBotMaxVisionDistance = 0x4F0;  // float32 
	constexpr uint32_t m_iHostageCount = 0x4F4;  // int32 
	constexpr uint32_t m_bFadePlayerVisibilityFarZ = 0x4F8;  // bool 
	constexpr uint32_t m_bRainTraceToSkyEnabled = 0x4F9;  // bool 
}

// Offset: 0x7ffe057ebf80 
// N. Class: 632 
// Fields: 139 
namespace CCSBot
{
	constexpr uint32_t m_eyePosition = 0x108;  // Vector 
	constexpr uint32_t m_name = 0x114;  // char[64] 
	constexpr uint32_t m_combatRange = 0x154;  // float32 
	constexpr uint32_t m_isRogue = 0x158;  // bool 
	constexpr uint32_t m_rogueTimer = 0x160;  // CountdownTimer 
	constexpr uint32_t m_diedLastRound = 0x17C;  // bool 
	constexpr uint32_t m_safeTime = 0x180;  // float32 
	constexpr uint32_t m_wasSafe = 0x184;  // bool 
	constexpr uint32_t m_blindFire = 0x18C;  // bool 
	constexpr uint32_t m_surpriseTimer = 0x190;  // CountdownTimer 
	constexpr uint32_t m_bAllowActive = 0x1A8;  // bool 
	constexpr uint32_t m_isFollowing = 0x1A9;  // bool 
	constexpr uint32_t m_leader = 0x1AC;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_followTimestamp = 0x1B0;  // float32 
	constexpr uint32_t m_allowAutoFollowTime = 0x1B4;  // float32 
	constexpr uint32_t m_hurryTimer = 0x1B8;  // CountdownTimer 
	constexpr uint32_t m_alertTimer = 0x1D0;  // CountdownTimer 
	constexpr uint32_t m_sneakTimer = 0x1E8;  // CountdownTimer 
	constexpr uint32_t m_panicTimer = 0x200;  // CountdownTimer 
	constexpr uint32_t m_stateTimestamp = 0x4D0;  // float32 
	constexpr uint32_t m_isAttacking = 0x4D4;  // bool 
	constexpr uint32_t m_isOpeningDoor = 0x4D5;  // bool 
	constexpr uint32_t m_taskEntity = 0x4DC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_goalPosition = 0x4EC;  // Vector 
	constexpr uint32_t m_goalEntity = 0x4F8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_avoid = 0x4FC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_avoidTimestamp = 0x500;  // float32 
	constexpr uint32_t m_isStopping = 0x504;  // bool 
	constexpr uint32_t m_hasVisitedEnemySpawn = 0x505;  // bool 
	constexpr uint32_t m_stillTimer = 0x508;  // IntervalTimer 
	constexpr uint32_t m_bEyeAnglesUnderPathFinderControl = 0x518;  // bool 
	constexpr uint32_t m_pathIndex = 0x5610;  // int32 
	constexpr uint32_t m_areaEnteredTimestamp = 0x5614;  // GameTime_t 
	constexpr uint32_t m_repathTimer = 0x5618;  // CountdownTimer 
	constexpr uint32_t m_avoidFriendTimer = 0x5630;  // CountdownTimer 
	constexpr uint32_t m_isFriendInTheWay = 0x5648;  // bool 
	constexpr uint32_t m_politeTimer = 0x5650;  // CountdownTimer 
	constexpr uint32_t m_isWaitingBehindFriend = 0x5668;  // bool 
	constexpr uint32_t m_pathLadderEnd = 0x5694;  // float32 
	constexpr uint32_t m_mustRunTimer = 0x56E0;  // CountdownTimer 
	constexpr uint32_t m_waitTimer = 0x56F8;  // CountdownTimer 
	constexpr uint32_t m_updateTravelDistanceTimer = 0x5710;  // CountdownTimer 
	constexpr uint32_t m_playerTravelDistance = 0x5728;  // float32[64] 
	constexpr uint32_t m_travelDistancePhase = 0x5828;  // uint8 
	constexpr uint32_t m_hostageEscortCount = 0x59C0;  // uint8 
	constexpr uint32_t m_hostageEscortCountTimestamp = 0x59C4;  // float32 
	constexpr uint32_t m_desiredTeam = 0x59C8;  // int32 
	constexpr uint32_t m_hasJoined = 0x59CC;  // bool 
	constexpr uint32_t m_isWaitingForHostage = 0x59CD;  // bool 
	constexpr uint32_t m_inhibitWaitingForHostageTimer = 0x59D0;  // CountdownTimer 
	constexpr uint32_t m_waitForHostageTimer = 0x59E8;  // CountdownTimer 
	constexpr uint32_t m_noisePosition = 0x5A00;  // Vector 
	constexpr uint32_t m_noiseTravelDistance = 0x5A0C;  // float32 
	constexpr uint32_t m_noiseTimestamp = 0x5A10;  // float32 
	constexpr uint32_t m_noiseSource = 0x5A18;  // CCSPlayerPawn* 
	constexpr uint32_t m_noiseBendTimer = 0x5A30;  // CountdownTimer 
	constexpr uint32_t m_bentNoisePosition = 0x5A48;  // Vector 
	constexpr uint32_t m_bendNoisePositionValid = 0x5A54;  // bool 
	constexpr uint32_t m_lookAroundStateTimestamp = 0x5A58;  // float32 
	constexpr uint32_t m_lookAheadAngle = 0x5A5C;  // float32 
	constexpr uint32_t m_forwardAngle = 0x5A60;  // float32 
	constexpr uint32_t m_inhibitLookAroundTimestamp = 0x5A64;  // float32 
	constexpr uint32_t m_lookAtSpot = 0x5A6C;  // Vector 
	constexpr uint32_t m_lookAtSpotDuration = 0x5A7C;  // float32 
	constexpr uint32_t m_lookAtSpotTimestamp = 0x5A80;  // float32 
	constexpr uint32_t m_lookAtSpotAngleTolerance = 0x5A84;  // float32 
	constexpr uint32_t m_lookAtSpotClearIfClose = 0x5A88;  // bool 
	constexpr uint32_t m_lookAtSpotAttack = 0x5A89;  // bool 
	constexpr uint32_t m_lookAtDesc = 0x5A90;  // char* 
	constexpr uint32_t m_peripheralTimestamp = 0x5A98;  // float32 
	constexpr uint32_t m_approachPointCount = 0x5C20;  // uint8 
	constexpr uint32_t m_approachPointViewPosition = 0x5C24;  // Vector 
	constexpr uint32_t m_viewSteadyTimer = 0x5C30;  // IntervalTimer 
	constexpr uint32_t m_tossGrenadeTimer = 0x5C48;  // CountdownTimer 
	constexpr uint32_t m_isAvoidingGrenade = 0x5C68;  // CountdownTimer 
	constexpr uint32_t m_spotCheckTimestamp = 0x5C88;  // float32 
	constexpr uint32_t m_checkedHidingSpotCount = 0x6090;  // int32 
	constexpr uint32_t m_lookPitch = 0x6094;  // float32 
	constexpr uint32_t m_lookPitchVel = 0x6098;  // float32 
	constexpr uint32_t m_lookYaw = 0x609C;  // float32 
	constexpr uint32_t m_lookYawVel = 0x60A0;  // float32 
	constexpr uint32_t m_targetSpot = 0x60A4;  // Vector 
	constexpr uint32_t m_targetSpotVelocity = 0x60B0;  // Vector 
	constexpr uint32_t m_targetSpotPredicted = 0x60BC;  // Vector 
	constexpr uint32_t m_aimError = 0x60C8;  // QAngle 
	constexpr uint32_t m_aimGoal = 0x60D4;  // QAngle 
	constexpr uint32_t m_targetSpotTime = 0x60E0;  // GameTime_t 
	constexpr uint32_t m_aimFocus = 0x60E4;  // float32 
	constexpr uint32_t m_aimFocusInterval = 0x60E8;  // float32 
	constexpr uint32_t m_aimFocusNextUpdate = 0x60EC;  // GameTime_t 
	constexpr uint32_t m_ignoreEnemiesTimer = 0x60F8;  // CountdownTimer 
	constexpr uint32_t m_enemy = 0x6110;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_isEnemyVisible = 0x6114;  // bool 
	constexpr uint32_t m_visibleEnemyParts = 0x6115;  // uint8 
	constexpr uint32_t m_lastEnemyPosition = 0x6118;  // Vector 
	constexpr uint32_t m_lastSawEnemyTimestamp = 0x6124;  // float32 
	constexpr uint32_t m_firstSawEnemyTimestamp = 0x6128;  // float32 
	constexpr uint32_t m_currentEnemyAcquireTimestamp = 0x612C;  // float32 
	constexpr uint32_t m_enemyDeathTimestamp = 0x6130;  // float32 
	constexpr uint32_t m_friendDeathTimestamp = 0x6134;  // float32 
	constexpr uint32_t m_isLastEnemyDead = 0x6138;  // bool 
	constexpr uint32_t m_nearbyEnemyCount = 0x613C;  // int32 
	constexpr uint32_t m_bomber = 0x6348;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_nearbyFriendCount = 0x634C;  // int32 
	constexpr uint32_t m_closestVisibleFriend = 0x6350;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_closestVisibleHumanFriend = 0x6354;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_attentionInterval = 0x6358;  // IntervalTimer 
	constexpr uint32_t m_attacker = 0x6368;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_attackedTimestamp = 0x636C;  // float32 
	constexpr uint32_t m_burnedByFlamesTimer = 0x6370;  // IntervalTimer 
	constexpr uint32_t m_lastVictimID = 0x6380;  // int32 
	constexpr uint32_t m_isAimingAtEnemy = 0x6384;  // bool 
	constexpr uint32_t m_isRapidFiring = 0x6385;  // bool 
	constexpr uint32_t m_equipTimer = 0x6388;  // IntervalTimer 
	constexpr uint32_t m_zoomTimer = 0x6398;  // CountdownTimer 
	constexpr uint32_t m_fireWeaponTimestamp = 0x63B0;  // GameTime_t 
	constexpr uint32_t m_lookForWeaponsOnGroundTimer = 0x63B8;  // CountdownTimer 
	constexpr uint32_t m_bIsSleeping = 0x63D0;  // bool 
	constexpr uint32_t m_isEnemySniperVisible = 0x63D1;  // bool 
	constexpr uint32_t m_sawEnemySniperTimer = 0x63D8;  // CountdownTimer 
	constexpr uint32_t m_enemyQueueIndex = 0x6490;  // uint8 
	constexpr uint32_t m_enemyQueueCount = 0x6491;  // uint8 
	constexpr uint32_t m_enemyQueueAttendIndex = 0x6492;  // uint8 
	constexpr uint32_t m_isStuck = 0x6493;  // bool 
	constexpr uint32_t m_stuckTimestamp = 0x6494;  // GameTime_t 
	constexpr uint32_t m_stuckSpot = 0x6498;  // Vector 
	constexpr uint32_t m_wiggleTimer = 0x64A8;  // CountdownTimer 
	constexpr uint32_t m_stuckJumpTimer = 0x64C0;  // CountdownTimer 
	constexpr uint32_t m_nextCleanupCheckTimestamp = 0x64D8;  // GameTime_t 
	constexpr uint32_t m_avgVel = 0x64DC;  // float32[10] 
	constexpr uint32_t m_avgVelIndex = 0x6504;  // int32 
	constexpr uint32_t m_avgVelCount = 0x6508;  // int32 
	constexpr uint32_t m_lastOrigin = 0x650C;  // Vector 
	constexpr uint32_t m_lastRadioRecievedTimestamp = 0x651C;  // float32 
	constexpr uint32_t m_lastRadioSentTimestamp = 0x6520;  // float32 
	constexpr uint32_t m_radioSubject = 0x6524;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_radioPosition = 0x6528;  // Vector 
	constexpr uint32_t m_voiceEndTimestamp = 0x6534;  // float32 
	constexpr uint32_t m_lastValidReactionQueueFrame = 0x6540;  // int32 
}

// Offset: 0x7ffe058441f0 
// N. Class: 633 
// Fields: 5 
namespace CFogVolume
{
	constexpr uint32_t m_fogName = 0x790;  // CUtlSymbolLarge 
	constexpr uint32_t m_postProcessName = 0x798;  // CUtlSymbolLarge 
	constexpr uint32_t m_colorCorrectionName = 0x7A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_bDisabled = 0x7B0;  // bool 
	constexpr uint32_t m_bInFogVolumesList = 0x7B1;  // bool 
}

// Offset: 0x7ffe057e08b0 
// N. Class: 634 
// Fields: 5 
namespace CInfoDynamicShadowHint
{
	constexpr uint32_t m_bDisabled = 0x4E0;  // bool 
	constexpr uint32_t m_flRange = 0x4E4;  // float32 
	constexpr uint32_t m_nImportance = 0x4E8;  // int32 
	constexpr uint32_t m_nLightChoice = 0x4EC;  // int32 
	constexpr uint32_t m_hLight = 0x4F0;  // CHandle< CBaseEntity > 
}

// Offset: 0x7ffe057e09d0 
// N. Class: 635 
// Fields: 2 
namespace CInfoDynamicShadowHintBox
{
	constexpr uint32_t m_vBoxMins = 0x4F8;  // Vector 
	constexpr uint32_t m_vBoxMaxs = 0x504;  // Vector 
}

// Offset: 0x7ffe057fa020 
// N. Class: 636 
// Fields: 12 
namespace CEnvSky
{
	constexpr uint32_t m_hSkyMaterial = 0x790;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_hSkyMaterialLightingOnly = 0x798;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_bStartDisabled = 0x7A0;  // bool 
	constexpr uint32_t m_vTintColor = 0x7A1;  // Color 
	constexpr uint32_t m_vTintColorLightingOnly = 0x7A5;  // Color 
	constexpr uint32_t m_flBrightnessScale = 0x7AC;  // float32 
	constexpr uint32_t m_nFogType = 0x7B0;  // int32 
	constexpr uint32_t m_flFogMinStart = 0x7B4;  // float32 
	constexpr uint32_t m_flFogMinEnd = 0x7B8;  // float32 
	constexpr uint32_t m_flFogMaxStart = 0x7BC;  // float32 
	constexpr uint32_t m_flFogMaxEnd = 0x7C0;  // float32 
	constexpr uint32_t m_bEnabled = 0x7C4;  // bool 
}

// Offset: 0x0 
// N. Class: 637 
// Fields: 0 
namespace CTonemapController2Alias_env_tonemap_controller2
{
}

// Offset: 0x7ffe057fb900 
// N. Class: 638 
// Fields: 2 
namespace CTonemapTrigger
{
	constexpr uint32_t m_tonemapControllerName = 0x960;  // CUtlSymbolLarge 
	constexpr uint32_t m_hTonemapController = 0x968;  // CEntityHandle 
}

// Offset: 0x7ffe057fa2c8 
// N. Class: 639 
// Fields: 1 
namespace CFogTrigger
{
	constexpr uint32_t m_fog = 0x960;  // fogparams_t 
}

// Offset: 0x0 
// N. Class: 640 
// Fields: 0 
namespace CLightSpotEntity
{
}

// Offset: 0x0 
// N. Class: 641 
// Fields: 0 
namespace CLightOrthoEntity
{
}

// Offset: 0x0 
// N. Class: 642 
// Fields: 0 
namespace CLightDirectionalEntity
{
}

// Offset: 0x0 
// N. Class: 643 
// Fields: 0 
namespace CLightEnvironmentEntity
{
}

// Offset: 0x0 
// N. Class: 644 
// Fields: 0 
namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy
{
}

// Offset: 0x0 
// N. Class: 645 
// Fields: 0 
namespace CEnvSoundscapeAlias_snd_soundscape
{
}

// Offset: 0x0 
// N. Class: 646 
// Fields: 0 
namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable
{
}

// Offset: 0x7ffe0580f8e0 
// N. Class: 647 
// Fields: 3 
namespace CTriggerSoundscape
{
	constexpr uint32_t m_hSoundscape = 0x960;  // CHandle< CEnvSoundscapeTriggerable > 
	constexpr uint32_t m_SoundscapeName = 0x968;  // CUtlSymbolLarge 
	constexpr uint32_t m_spectators = 0x970;  // CUtlVector< CHandle< CBasePlayerPawn > > 
}

// Offset: 0x7ffe0587ffc0 
// N. Class: 648 
// Fields: 5 
namespace CEnvParticleGlow
{
	constexpr uint32_t m_flAlphaScale = 0xD08;  // float32 
	constexpr uint32_t m_flRadiusScale = 0xD0C;  // float32 
	constexpr uint32_t m_flSelfIllumScale = 0xD10;  // float32 
	constexpr uint32_t m_ColorTint = 0xD14;  // Color 
	constexpr uint32_t m_hTextureOverride = 0xD18;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
}

// Offset: 0x7ffe058853d0 
// N. Class: 649 
// Fields: 8 
namespace CTextureBasedAnimatable
{
	constexpr uint32_t m_bLoop = 0x790;  // bool 
	constexpr uint32_t m_flFPS = 0x794;  // float32 
	constexpr uint32_t m_hPositionKeys = 0x798;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_hRotationKeys = 0x7A0;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_vAnimationBoundsMin = 0x7A8;  // Vector 
	constexpr uint32_t m_vAnimationBoundsMax = 0x7B4;  // Vector 
	constexpr uint32_t m_flStartTime = 0x7C0;  // float32 
	constexpr uint32_t m_flStartFrame = 0x7C4;  // float32 
}

// Offset: 0x0 
// N. Class: 650 
// Fields: 0 
namespace CWorld
{
}

// Offset: 0x7ffe058338a0 
// N. Class: 651 
// Fields: 4 
namespace CBaseProp
{
	constexpr uint32_t m_bModelOverrodeBlockLOS = 0x9A8;  // bool 
	constexpr uint32_t m_iShapeType = 0x9AC;  // int32 
	constexpr uint32_t m_bConformToCollisionBounds = 0x9B0;  // bool 
	constexpr uint32_t m_mPreferredCatchTransform = 0x9B4;  // matrix3x4_t 
}

// Offset: 0x7ffe05835f90 
// N. Class: 652 
// Fields: 33 
namespace CBreakableProp
{
	constexpr uint32_t m_CPropDataComponent = 0x9F0;  // CPropDataComponent 
	constexpr uint32_t m_OnBreak = 0xA30;  // CEntityIOOutput 
	constexpr uint32_t m_OnHealthChanged = 0xA58;  // CEntityOutputTemplate< float32 > 
	constexpr uint32_t m_OnTakeDamage = 0xA80;  // CEntityIOOutput 
	constexpr uint32_t m_impactEnergyScale = 0xAA8;  // float32 
	constexpr uint32_t m_iMinHealthDmg = 0xAAC;  // int32 
	constexpr uint32_t m_preferredCarryAngles = 0xAB0;  // QAngle 
	constexpr uint32_t m_flPressureDelay = 0xABC;  // float32 
	constexpr uint32_t m_flDefBurstScale = 0xAC0;  // float32 
	constexpr uint32_t m_vDefBurstOffset = 0xAC4;  // Vector 
	constexpr uint32_t m_hBreaker = 0xAD0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_PerformanceMode = 0xAD4;  // PerformanceMode_t 
	constexpr uint32_t m_flPreventDamageBeforeTime = 0xAD8;  // GameTime_t 
	constexpr uint32_t m_BreakableContentsType = 0xADC;  // BreakableContentsType_t 
	constexpr uint32_t m_strBreakableContentsPropGroupOverride = 0xAE0;  // CUtlString 
	constexpr uint32_t m_strBreakableContentsParticleOverride = 0xAE8;  // CUtlString 
	constexpr uint32_t m_bHasBreakPiecesOrCommands = 0xAF0;  // bool 
	constexpr uint32_t m_explodeDamage = 0xAF4;  // float32 
	constexpr uint32_t m_explodeRadius = 0xAF8;  // float32 
	constexpr uint32_t m_explosionDelay = 0xB00;  // float32 
	constexpr uint32_t m_explosionBuildupSound = 0xB08;  // CUtlSymbolLarge 
	constexpr uint32_t m_explosionCustomEffect = 0xB10;  // CUtlSymbolLarge 
	constexpr uint32_t m_explosionCustomSound = 0xB18;  // CUtlSymbolLarge 
	constexpr uint32_t m_explosionModifier = 0xB20;  // CUtlSymbolLarge 
	constexpr uint32_t m_hPhysicsAttacker = 0xB28;  // CHandle< CBasePlayerPawn > 
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0xB2C;  // GameTime_t 
	constexpr uint32_t m_bOriginalBlockLOS = 0xB30;  // bool 
	constexpr uint32_t m_flDefaultFadeScale = 0xB34;  // float32 
	constexpr uint32_t m_hLastAttacker = 0xB38;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hFlareEnt = 0xB3C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bUsePuntSound = 0xB40;  // bool 
	constexpr uint32_t m_iszPuntSound = 0xB48;  // CUtlSymbolLarge 
	constexpr uint32_t m_noGhostCollision = 0xB50;  // bool 
}

// Offset: 0x7ffe05838e50 
// N. Class: 653 
// Fields: 22 
namespace CDynamicProp
{
	constexpr uint32_t m_bCreateNavObstacle = 0xB60;  // bool 
	constexpr uint32_t m_bNavObstacleUpdatesOverridden = 0xB61;  // bool 
	constexpr uint32_t m_bUseHitboxesForRenderBox = 0xB62;  // bool 
	constexpr uint32_t m_bUseAnimGraph = 0xB63;  // bool 
	constexpr uint32_t m_pOutputAnimBegun = 0xB68;  // CEntityIOOutput 
	constexpr uint32_t m_pOutputAnimOver = 0xB90;  // CEntityIOOutput 
	constexpr uint32_t m_pOutputAnimLoopCycleOver = 0xBB8;  // CEntityIOOutput 
	constexpr uint32_t m_OnAnimReachedStart = 0xBE0;  // CEntityIOOutput 
	constexpr uint32_t m_OnAnimReachedEnd = 0xC08;  // CEntityIOOutput 
	constexpr uint32_t m_iszIdleAnim = 0xC30;  // CUtlSymbolLarge 
	constexpr uint32_t m_nIdleAnimLoopMode = 0xC38;  // AnimLoopMode_t 
	constexpr uint32_t m_bRandomizeCycle = 0xC3C;  // bool 
	constexpr uint32_t m_bStartDisabled = 0xC3D;  // bool 
	constexpr uint32_t m_bFiredStartEndOutput = 0xC3E;  // bool 
	constexpr uint32_t m_bForceNpcExclude = 0xC3F;  // bool 
	constexpr uint32_t m_bCreateNonSolid = 0xC40;  // bool 
	constexpr uint32_t m_bIsOverrideProp = 0xC41;  // bool 
	constexpr uint32_t m_iInitialGlowState = 0xC44;  // int32 
	constexpr uint32_t m_nGlowRange = 0xC48;  // int32 
	constexpr uint32_t m_nGlowRangeMin = 0xC4C;  // int32 
	constexpr uint32_t m_glowColor = 0xC50;  // Color 
	constexpr uint32_t m_nGlowTeam = 0xC54;  // int32 
}

// Offset: 0x0 
// N. Class: 654 
// Fields: 0 
namespace CDynamicPropAlias_dynamic_prop
{
}

// Offset: 0x0 
// N. Class: 655 
// Fields: 0 
namespace CDynamicPropAlias_prop_dynamic_override
{
}

// Offset: 0x0 
// N. Class: 656 
// Fields: 0 
namespace CDynamicPropAlias_cable_dynamic
{
}

// Offset: 0x7ffe05899930 
// N. Class: 657 
// Fields: 10 
namespace CColorCorrectionVolume
{
	constexpr uint32_t m_bEnabled = 0x960;  // bool 
	constexpr uint32_t m_MaxWeight = 0x964;  // float32 
	constexpr uint32_t m_FadeDuration = 0x968;  // float32 
	constexpr uint32_t m_bStartDisabled = 0x96C;  // bool 
	constexpr uint32_t m_Weight = 0x970;  // float32 
	constexpr uint32_t m_lookupFilename = 0x974;  // char[512] 
	constexpr uint32_t m_LastEnterWeight = 0xB74;  // float32 
	constexpr uint32_t m_LastEnterTime = 0xB78;  // GameTime_t 
	constexpr uint32_t m_LastExitWeight = 0xB7C;  // float32 
	constexpr uint32_t m_LastExitTime = 0xB80;  // GameTime_t 
}

// Offset: 0x0 
// N. Class: 658 
// Fields: 0 
namespace CCommentaryViewPosition
{
}

// Offset: 0x7ffe05897f50 
// N. Class: 659 
// Fields: 1 
namespace CRotDoor
{
	constexpr uint32_t m_bSolidBsp = 0xA18;  // bool 
}

// Offset: 0x0 
// N. Class: 660 
// Fields: 0 
namespace CItemSoda
{
}

// Offset: 0x0 
// N. Class: 661 
// Fields: 0 
namespace CPrecipitation
{
}

// Offset: 0x7ffe058a2eb0 
// N. Class: 662 
// Fields: 19 
namespace CEnvBeam
{
	constexpr uint32_t m_active = 0x830;  // int32 
	constexpr uint32_t m_spriteTexture = 0x838;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_iszStartEntity = 0x840;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszEndEntity = 0x848;  // CUtlSymbolLarge 
	constexpr uint32_t m_life = 0x850;  // float32 
	constexpr uint32_t m_boltWidth = 0x854;  // float32 
	constexpr uint32_t m_noiseAmplitude = 0x858;  // float32 
	constexpr uint32_t m_speed = 0x85C;  // int32 
	constexpr uint32_t m_restrike = 0x860;  // float32 
	constexpr uint32_t m_iszSpriteName = 0x868;  // CUtlSymbolLarge 
	constexpr uint32_t m_frameStart = 0x870;  // int32 
	constexpr uint32_t m_vEndPointWorld = 0x874;  // Vector 
	constexpr uint32_t m_vEndPointRelative = 0x880;  // Vector 
	constexpr uint32_t m_radius = 0x88C;  // float32 
	constexpr uint32_t m_TouchType = 0x890;  // Touch_t 
	constexpr uint32_t m_iFilterName = 0x898;  // CUtlSymbolLarge 
	constexpr uint32_t m_hFilter = 0x8A0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iszDecal = 0x8A8;  // CUtlSymbolLarge 
	constexpr uint32_t m_OnTouchedByEntity = 0x8B0;  // CEntityIOOutput 
}

// Offset: 0x0 
// N. Class: 663 
// Fields: 0 
namespace CPushable
{
}

// Offset: 0x0 
// N. Class: 664 
// Fields: 0 
namespace CFuncLadderAlias_func_useableladder
{
}

// Offset: 0x7ffe058ad230 
// N. Class: 665 
// Fields: 9 
namespace CFuncMonitor
{
	constexpr uint32_t m_targetCamera = 0x7B0;  // CUtlString 
	constexpr uint32_t m_nResolutionEnum = 0x7B8;  // int32 
	constexpr uint32_t m_bRenderShadows = 0x7BC;  // bool 
	constexpr uint32_t m_bUseUniqueColorTarget = 0x7BD;  // bool 
	constexpr uint32_t m_brushModelName = 0x7C0;  // CUtlString 
	constexpr uint32_t m_hTargetCamera = 0x7C8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bEnabled = 0x7CC;  // bool 
	constexpr uint32_t m_bDraw3DSkybox = 0x7CD;  // bool 
	constexpr uint32_t m_bStartEnabled = 0x7CE;  // bool 
}

// Offset: 0x0 
// N. Class: 666 
// Fields: 0 
namespace CFuncMoveLinearAlias_momentary_door
{
}

// Offset: 0x7ffe058adf10 
// N. Class: 667 
// Fields: 3 
namespace CGunTarget
{
	constexpr uint32_t m_on = 0x810;  // bool 
	constexpr uint32_t m_hTargetEnt = 0x814;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_OnDeath = 0x818;  // CEntityIOOutput 
}

// Offset: 0x7ffe058b6260 
// N. Class: 668 
// Fields: 3 
namespace CTriggerGameEvent
{
	constexpr uint32_t m_strStartTouchEventName = 0x960;  // CUtlString 
	constexpr uint32_t m_strEndTouchEventName = 0x968;  // CUtlString 
	constexpr uint32_t m_strTriggerID = 0x970;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 669 
// Fields: 0 
namespace CRuleBrushEntity
{
}

// Offset: 0x0 
// N. Class: 670 
// Fields: 0 
namespace CGameEnd
{
}

// Offset: 0x7ffe058c2500 
// N. Class: 671 
// Fields: 2 
namespace CGameText
{
	constexpr uint32_t m_iszMessage = 0x7A0;  // CUtlSymbolLarge 
	constexpr uint32_t m_textParms = 0x7A8;  // hudtextparms_t 
}

// Offset: 0x7ffe058c26a0 
// N. Class: 672 
// Fields: 4 
namespace CGamePlayerZone
{
	constexpr uint32_t m_OnPlayerInZone = 0x798;  // CEntityIOOutput 
	constexpr uint32_t m_OnPlayerOutZone = 0x7C0;  // CEntityIOOutput 
	constexpr uint32_t m_PlayersInCount = 0x7E8;  // CEntityOutputTemplate< int32 > 
	constexpr uint32_t m_PlayersOutCount = 0x810;  // CEntityOutputTemplate< int32 > 
}

// Offset: 0x0 
// N. Class: 673 
// Fields: 0 
namespace CSimpleMarkupVolumeTagged
{
}

// Offset: 0x0 
// N. Class: 674 
// Fields: 0 
namespace CMarkupVolumeTagged_Nav
{
}

// Offset: 0x7ffe058c51e0 
// N. Class: 675 
// Fields: 1 
namespace CMarkupVolumeTagged_NavGame
{
	constexpr uint32_t m_bFloodFillAttribute = 0x7E8;  // bool 
}

// Offset: 0x7ffe058c1cf0 
// N. Class: 676 
// Fields: 4 
namespace CFuncElectrifiedVolume
{
	constexpr uint32_t m_EffectName = 0x7B0;  // CUtlSymbolLarge 
	constexpr uint32_t m_EffectInterpenetrateName = 0x7B8;  // CUtlSymbolLarge 
	constexpr uint32_t m_EffectZapName = 0x7C0;  // CUtlSymbolLarge 
	constexpr uint32_t m_iszEffectSource = 0x7C8;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 677 
// Fields: 0 
namespace CPathCornerCrash
{
}

// Offset: 0x7ffe058c3500 
// N. Class: 678 
// Fields: 1 
namespace CConstraintAnchor
{
	constexpr uint32_t m_massScale = 0x9A8;  // float32 
}

// Offset: 0x7ffe058db120 
// N. Class: 679 
// Fields: 1 
namespace COrnamentProp
{
	constexpr uint32_t m_initialOwner = 0xC58;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 680 
// Fields: 0 
namespace CRopeKeyframeAlias_move_rope
{
}

// Offset: 0x0 
// N. Class: 681 
// Fields: 0 
namespace CSceneEntityAlias_logic_choreographed_scene
{
}

// Offset: 0x7ffe058e27b0 
// N. Class: 682 
// Fields: 7 
namespace CInstancedSceneEntity
{
	constexpr uint32_t m_hOwner = 0xA40;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bHadOwner = 0xA44;  // bool 
	constexpr uint32_t m_flPostSpeakDelay = 0xA48;  // float32 
	constexpr uint32_t m_flPreDelay = 0xA4C;  // float32 
	constexpr uint32_t m_bIsBackground = 0xA50;  // bool 
	constexpr uint32_t m_bRemoveOnCompletion = 0xA51;  // bool 
	constexpr uint32_t m_hTarget = 0xA54;  // CHandle< CBaseEntity > 
}

// Offset: 0x0 
// N. Class: 683 
// Fields: 0 
namespace CSpriteAlias_env_glow
{
}

// Offset: 0x7ffe058efdd0 
// N. Class: 684 
// Fields: 1 
namespace CFuncTankTrain
{
	constexpr uint32_t m_OnDeath = 0x8E0;  // CEntityIOOutput 
}

// Offset: 0x7ffe058f0440 
// N. Class: 685 
// Fields: 5 
namespace CBasePlatTrain
{
	constexpr uint32_t m_NoiseMoving = 0x810;  // CUtlSymbolLarge 
	constexpr uint32_t m_NoiseArrived = 0x818;  // CUtlSymbolLarge 
	constexpr uint32_t m_volume = 0x828;  // float32 
	constexpr uint32_t m_flTWidth = 0x82C;  // float32 
	constexpr uint32_t m_flTLength = 0x830;  // float32 
}

// Offset: 0x7ffe058f09a0 
// N. Class: 686 
// Fields: 2 
namespace CFuncPlatRot
{
	constexpr uint32_t m_end = 0x840;  // QAngle 
	constexpr uint32_t m_start = 0x84C;  // QAngle 
}

// Offset: 0x7ffe058ed800 
// N. Class: 687 
// Fields: 6 
namespace CFuncTrain
{
	constexpr uint32_t m_hCurrentTarget = 0x838;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_activated = 0x83C;  // bool 
	constexpr uint32_t m_hEnemy = 0x840;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flBlockDamage = 0x844;  // float32 
	constexpr uint32_t m_flNextBlockTime = 0x848;  // GameTime_t 
	constexpr uint32_t m_iszLastTarget = 0x850;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058edbd0 
// N. Class: 688 
// Fields: 9 
namespace CFuncTrackChange
{
	constexpr uint32_t m_trackTop = 0x858;  // CPathTrack* 
	constexpr uint32_t m_trackBottom = 0x860;  // CPathTrack* 
	constexpr uint32_t m_train = 0x868;  // CFuncTrackTrain* 
	constexpr uint32_t m_trackTopName = 0x870;  // CUtlSymbolLarge 
	constexpr uint32_t m_trackBottomName = 0x878;  // CUtlSymbolLarge 
	constexpr uint32_t m_trainName = 0x880;  // CUtlSymbolLarge 
	constexpr uint32_t m_code = 0x888;  // TRAIN_CODE 
	constexpr uint32_t m_targetState = 0x88C;  // int32 
	constexpr uint32_t m_use = 0x890;  // int32 
}

// Offset: 0x0 
// N. Class: 689 
// Fields: 0 
namespace CFuncTrackAuto
{
}

// Offset: 0x7ffe058ef5e8 
// N. Class: 690 
// Fields: 1 
namespace CTriggerRemove
{
	constexpr uint32_t m_OnRemove = 0x960;  // CEntityIOOutput 
}

// Offset: 0x7ffe058ef6c0 
// N. Class: 691 
// Fields: 1 
namespace CScriptTriggerHurt
{
	constexpr uint32_t m_vExtent = 0xA00;  // Vector 
}

// Offset: 0x7ffe058ef790 
// N. Class: 692 
// Fields: 1 
namespace CScriptTriggerMultiple
{
	constexpr uint32_t m_vExtent = 0x988;  // Vector 
}

// Offset: 0x0 
// N. Class: 693 
// Fields: 0 
namespace CTriggerOnce
{
}

// Offset: 0x7ffe058ef940 
// N. Class: 694 
// Fields: 1 
namespace CScriptTriggerOnce
{
	constexpr uint32_t m_vExtent = 0x988;  // Vector 
}

// Offset: 0x7ffe058efa70 
// N. Class: 695 
// Fields: 14 
namespace CTriggerLook
{
	constexpr uint32_t m_hLookTarget = 0x988;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_flFieldOfView = 0x98C;  // float32 
	constexpr uint32_t m_flLookTime = 0x990;  // float32 
	constexpr uint32_t m_flLookTimeTotal = 0x994;  // float32 
	constexpr uint32_t m_flLookTimeLast = 0x998;  // GameTime_t 
	constexpr uint32_t m_flTimeoutDuration = 0x99C;  // float32 
	constexpr uint32_t m_bTimeoutFired = 0x9A0;  // bool 
	constexpr uint32_t m_bIsLooking = 0x9A1;  // bool 
	constexpr uint32_t m_b2DFOV = 0x9A2;  // bool 
	constexpr uint32_t m_bUseVelocity = 0x9A3;  // bool 
	constexpr uint32_t m_bTestOcclusion = 0x9A4;  // bool 
	constexpr uint32_t m_OnTimeout = 0x9A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnStartLook = 0x9D0;  // CEntityIOOutput 
	constexpr uint32_t m_OnEndLook = 0x9F8;  // CEntityIOOutput 
}

// Offset: 0x7ffe058efe70 
// N. Class: 696 
// Fields: 7 
namespace CTriggerPush
{
	constexpr uint32_t m_angPushEntitySpace = 0x960;  // QAngle 
	constexpr uint32_t m_vecPushDirEntitySpace = 0x96C;  // Vector 
	constexpr uint32_t m_bTriggerOnStartTouch = 0x978;  // bool 
	constexpr uint32_t m_bUsePathSimple = 0x979;  // bool 
	constexpr uint32_t m_iszPathSimpleName = 0x980;  // CUtlSymbolLarge 
	constexpr uint32_t m_PathSimple = 0x988;  // CPathSimple* 
	constexpr uint32_t m_splinePushType = 0x990;  // uint32 
}

// Offset: 0x7ffe058f00f0 
// N. Class: 697 
// Fields: 1 
namespace CScriptTriggerPush
{
	constexpr uint32_t m_vExtent = 0x998;  // Vector 
}

// Offset: 0x0 
// N. Class: 698 
// Fields: 0 
namespace CTriggerToggleSave
{
}

// Offset: 0x7ffe058f05d0 
// N. Class: 699 
// Fields: 3 
namespace CTriggerSave
{
	constexpr uint32_t m_bForceNewLevelUnit = 0x960;  // bool 
	constexpr uint32_t m_fDangerousTimer = 0x964;  // float32 
	constexpr uint32_t m_minHitPoints = 0x968;  // int32 
}

// Offset: 0x0 
// N. Class: 700 
// Fields: 0 
namespace CTriggerGravity
{
}

// Offset: 0x7ffe058ed630 
// N. Class: 701 
// Fields: 5 
namespace CTriggerProximity
{
	constexpr uint32_t m_hMeasureTarget = 0x960;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iszMeasureTarget = 0x968;  // CUtlSymbolLarge 
	constexpr uint32_t m_fRadius = 0x970;  // float32 
	constexpr uint32_t m_nTouchers = 0x974;  // int32 
	constexpr uint32_t m_NearestEntityDistance = 0x978;  // CEntityOutputTemplate< float32 > 
}

// Offset: 0x7ffe058ed9e0 
// N. Class: 702 
// Fields: 4 
namespace CTriggerImpact
{
	constexpr uint32_t m_flMagnitude = 0x988;  // float32 
	constexpr uint32_t m_flNoise = 0x98C;  // float32 
	constexpr uint32_t m_flViewkick = 0x990;  // float32 
	constexpr uint32_t m_pOutputForce = 0x998;  // CEntityOutputTemplate< Vector > 
}

// Offset: 0x0 
// N. Class: 703 
// Fields: 0 
namespace CServerRagdollTrigger
{
}

// Offset: 0x7ffe058eddb0 
// N. Class: 704 
// Fields: 2 
namespace CTriggerActiveWeaponDetect
{
	constexpr uint32_t m_OnTouchedActiveWeapon = 0x960;  // CEntityIOOutput 
	constexpr uint32_t m_iszWeaponClassName = 0x988;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe058edff0 
// N. Class: 705 
// Fields: 13 
namespace CTriggerPhysics
{
	constexpr uint32_t m_gravityScale = 0x970;  // float32 
	constexpr uint32_t m_linearLimit = 0x974;  // float32 
	constexpr uint32_t m_linearDamping = 0x978;  // float32 
	constexpr uint32_t m_angularLimit = 0x97C;  // float32 
	constexpr uint32_t m_angularDamping = 0x980;  // float32 
	constexpr uint32_t m_linearForce = 0x984;  // float32 
	constexpr uint32_t m_flFrequency = 0x988;  // float32 
	constexpr uint32_t m_flDampingRatio = 0x98C;  // float32 
	constexpr uint32_t m_vecLinearForcePointAt = 0x990;  // Vector 
	constexpr uint32_t m_bCollapseToForcePoint = 0x99C;  // bool 
	constexpr uint32_t m_vecLinearForcePointAtWorld = 0x9A0;  // Vector 
	constexpr uint32_t m_vecLinearForceDirection = 0x9AC;  // Vector 
	constexpr uint32_t m_bConvertToDebrisWhenPossible = 0x9B8;  // bool 
}

// Offset: 0x7ffe058ee240 
// N. Class: 706 
// Fields: 2 
namespace CTriggerDetectBulletFire
{
	constexpr uint32_t m_bPlayerFireOnly = 0x960;  // bool 
	constexpr uint32_t m_OnDetectedBulletFire = 0x968;  // CEntityIOOutput 
}

// Offset: 0x7ffe058ee3e0 
// N. Class: 707 
// Fields: 1 
namespace CTriggerDetectExplosion
{
	constexpr uint32_t m_OnDetectedExplosion = 0x988;  // CEntityIOOutput 
}

// Offset: 0x7ffe058fda58 
// N. Class: 708 
// Fields: 1 
namespace CScriptNavBlocker
{
	constexpr uint32_t m_vExtent = 0x7A0;  // Vector 
}

// Offset: 0x7ffe05834c90 
// N. Class: 709 
// Fields: 37 
namespace CBasePropDoor
{
	constexpr uint32_t m_flAutoReturnDelay = 0xC68;  // float32 
	constexpr uint32_t m_hDoorList = 0xC70;  // CUtlVector< CHandle< CBasePropDoor > > 
	constexpr uint32_t m_nHardwareType = 0xC88;  // int32 
	constexpr uint32_t m_bNeedsHardware = 0xC8C;  // bool 
	constexpr uint32_t m_eDoorState = 0xC90;  // DoorState_t 
	constexpr uint32_t m_bLocked = 0xC94;  // bool 
	constexpr uint32_t m_closedPosition = 0xC98;  // Vector 
	constexpr uint32_t m_closedAngles = 0xCA4;  // QAngle 
	constexpr uint32_t m_hBlocker = 0xCB0;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_bFirstBlocked = 0xCB4;  // bool 
	constexpr uint32_t m_ls = 0xCB8;  // locksound_t 
	constexpr uint32_t m_bForceClosed = 0xCD8;  // bool 
	constexpr uint32_t m_vecLatchWorldPosition = 0xCDC;  // Vector 
	constexpr uint32_t m_hActivator = 0xCE8;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_SoundMoving = 0xCF8;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundOpen = 0xD00;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundClose = 0xD08;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundLock = 0xD10;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundUnlock = 0xD18;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundLatch = 0xD20;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundPound = 0xD28;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundJiggle = 0xD30;  // CUtlSymbolLarge 
	constexpr uint32_t m_SoundLockedAnim = 0xD38;  // CUtlSymbolLarge 
	constexpr uint32_t m_numCloseAttempts = 0xD40;  // int32 
	constexpr uint32_t m_nPhysicsMaterial = 0xD44;  // CUtlStringToken 
	constexpr uint32_t m_SlaveName = 0xD48;  // CUtlSymbolLarge 
	constexpr uint32_t m_hMaster = 0xD50;  // CHandle< CBasePropDoor > 
	constexpr uint32_t m_OnBlockedClosing = 0xD58;  // CEntityIOOutput 
	constexpr uint32_t m_OnBlockedOpening = 0xD80;  // CEntityIOOutput 
	constexpr uint32_t m_OnUnblockedClosing = 0xDA8;  // CEntityIOOutput 
	constexpr uint32_t m_OnUnblockedOpening = 0xDD0;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyClosed = 0xDF8;  // CEntityIOOutput 
	constexpr uint32_t m_OnFullyOpen = 0xE20;  // CEntityIOOutput 
	constexpr uint32_t m_OnClose = 0xE48;  // CEntityIOOutput 
	constexpr uint32_t m_OnOpen = 0xE70;  // CEntityIOOutput 
	constexpr uint32_t m_OnLockedUse = 0xE98;  // CEntityIOOutput 
	constexpr uint32_t m_OnAjarOpen = 0xEC0;  // CEntityIOOutput 
}

// Offset: 0x7ffe05839fc0 
// N. Class: 710 
// Fields: 5 
namespace CEnvLaser
{
	constexpr uint32_t m_iszLaserTarget = 0x830;  // CUtlSymbolLarge 
	constexpr uint32_t m_pSprite = 0x838;  // CSprite* 
	constexpr uint32_t m_iszSpriteName = 0x840;  // CUtlSymbolLarge 
	constexpr uint32_t m_firePosition = 0x848;  // Vector 
	constexpr uint32_t m_flStartFrame = 0x854;  // float32 
}

// Offset: 0x7ffe0583c000 
// N. Class: 711 
// Fields: 8 
namespace CItem
{
	constexpr uint32_t m_OnPlayerTouch = 0x9B0;  // CEntityIOOutput 
	constexpr uint32_t m_OnPlayerPickup = 0x9D8;  // CEntityIOOutput 
	constexpr uint32_t m_bActivateWhenAtRest = 0xA00;  // bool 
	constexpr uint32_t m_OnCacheInteraction = 0xA08;  // CEntityIOOutput 
	constexpr uint32_t m_OnGlovePulled = 0xA30;  // CEntityIOOutput 
	constexpr uint32_t m_vOriginalSpawnOrigin = 0xA58;  // Vector 
	constexpr uint32_t m_vOriginalSpawnAngles = 0xA64;  // QAngle 
	constexpr uint32_t m_bPhysStartAsleep = 0xA70;  // bool 
}

// Offset: 0x7ffe0583f570 
// N. Class: 712 
// Fields: 27 
namespace CRagdollProp
{
	constexpr uint32_t m_ragdoll = 0x9B0;  // ragdoll_t 
	constexpr uint32_t m_bStartDisabled = 0x9E8;  // bool 
	constexpr uint32_t m_ragPos = 0x9F0;  // CNetworkUtlVectorBase< Vector > 
	constexpr uint32_t m_ragAngles = 0xA08;  // CNetworkUtlVectorBase< QAngle > 
	constexpr uint32_t m_hRagdollSource = 0xA20;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_lastUpdateTickCount = 0xA24;  // uint32 
	constexpr uint32_t m_allAsleep = 0xA28;  // bool 
	constexpr uint32_t m_bFirstCollisionAfterLaunch = 0xA29;  // bool 
	constexpr uint32_t m_hDamageEntity = 0xA2C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hKiller = 0xA30;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_hPhysicsAttacker = 0xA34;  // CHandle< CBasePlayerPawn > 
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0xA38;  // GameTime_t 
	constexpr uint32_t m_flFadeOutStartTime = 0xA3C;  // GameTime_t 
	constexpr uint32_t m_flFadeTime = 0xA40;  // float32 
	constexpr uint32_t m_vecLastOrigin = 0xA44;  // Vector 
	constexpr uint32_t m_flAwakeTime = 0xA50;  // GameTime_t 
	constexpr uint32_t m_flLastOriginChangeTime = 0xA54;  // GameTime_t 
	constexpr uint32_t m_strOriginClassName = 0xA58;  // CUtlSymbolLarge 
	constexpr uint32_t m_strSourceClassName = 0xA60;  // CUtlSymbolLarge 
	constexpr uint32_t m_bHasBeenPhysgunned = 0xA68;  // bool 
	constexpr uint32_t m_bShouldTeleportPhysics = 0xA69;  // bool 
	constexpr uint32_t m_flBlendWeight = 0xA6C;  // float32 
	constexpr uint32_t m_flDefaultFadeScale = 0xA70;  // float32 
	constexpr uint32_t m_ragdollMins = 0xA78;  // CUtlVector< Vector > 
	constexpr uint32_t m_ragdollMaxs = 0xA90;  // CUtlVector< Vector > 
	constexpr uint32_t m_bShouldDeleteActivationRecord = 0xAA8;  // bool 
	constexpr uint32_t m_bValidatePoweredRagdollPose = 0xB08;  // bool 
}

// Offset: 0x7ffe0583f240 
// N. Class: 713 
// Fields: 12 
namespace CPhysMagnet
{
	constexpr uint32_t m_OnMagnetAttach = 0x9A8;  // CEntityIOOutput 
	constexpr uint32_t m_OnMagnetDetach = 0x9D0;  // CEntityIOOutput 
	constexpr uint32_t m_massScale = 0x9F8;  // float32 
	constexpr uint32_t m_forceLimit = 0x9FC;  // float32 
	constexpr uint32_t m_torqueLimit = 0xA00;  // float32 
	constexpr uint32_t m_MagnettedEntities = 0xA08;  // CUtlVector< magnetted_objects_t > 
	constexpr uint32_t m_bActive = 0xA20;  // bool 
	constexpr uint32_t m_bHasHitSomething = 0xA21;  // bool 
	constexpr uint32_t m_flTotalMass = 0xA24;  // float32 
	constexpr uint32_t m_flRadius = 0xA28;  // float32 
	constexpr uint32_t m_flNextSuckTime = 0xA2C;  // GameTime_t 
	constexpr uint32_t m_iMaxObjectsAttached = 0xA30;  // int32 
}

// Offset: 0x7ffe05841540 
// N. Class: 714 
// Fields: 37 
namespace CPhysicsProp
{
	constexpr uint32_t m_MotionEnabled = 0xB60;  // CEntityIOOutput 
	constexpr uint32_t m_OnAwakened = 0xB88;  // CEntityIOOutput 
	constexpr uint32_t m_OnAwake = 0xBB0;  // CEntityIOOutput 
	constexpr uint32_t m_OnAsleep = 0xBD8;  // CEntityIOOutput 
	constexpr uint32_t m_OnPlayerUse = 0xC00;  // CEntityIOOutput 
	constexpr uint32_t m_OnOutOfWorld = 0xC28;  // CEntityIOOutput 
	constexpr uint32_t m_OnPlayerPickup = 0xC50;  // CEntityIOOutput 
	constexpr uint32_t m_bForceNavIgnore = 0xC78;  // bool 
	constexpr uint32_t m_bNoNavmeshBlocker = 0xC79;  // bool 
	constexpr uint32_t m_bForceNpcExclude = 0xC7A;  // bool 
	constexpr uint32_t m_massScale = 0xC7C;  // float32 
	constexpr uint32_t m_inertiaScale = 0xC80;  // float32 
	constexpr uint32_t m_buoyancyScale = 0xC84;  // float32 
	constexpr uint32_t m_damageType = 0xC88;  // int32 
	constexpr uint32_t m_damageToEnableMotion = 0xC8C;  // int32 
	constexpr uint32_t m_flForceToEnableMotion = 0xC90;  // float32 
	constexpr uint32_t m_bThrownByPlayer = 0xC94;  // bool 
	constexpr uint32_t m_bDroppedByPlayer = 0xC95;  // bool 
	constexpr uint32_t m_bTouchedByPlayer = 0xC96;  // bool 
	constexpr uint32_t m_bFirstCollisionAfterLaunch = 0xC97;  // bool 
	constexpr uint32_t m_iExploitableByPlayer = 0xC98;  // int32 
	constexpr uint32_t m_bHasBeenAwakened = 0xC9C;  // bool 
	constexpr uint32_t m_bIsOverrideProp = 0xC9D;  // bool 
	constexpr uint32_t m_fNextCheckDisableMotionContactsTime = 0xCA0;  // GameTime_t 
	constexpr uint32_t m_iInitialGlowState = 0xCA4;  // int32 
	constexpr uint32_t m_nGlowRange = 0xCA8;  // int32 
	constexpr uint32_t m_nGlowRangeMin = 0xCAC;  // int32 
	constexpr uint32_t m_glowColor = 0xCB0;  // Color 
	constexpr uint32_t m_bShouldAutoConvertBackFromDebris = 0xCB4;  // bool 
	constexpr uint32_t m_bMuteImpactEffects = 0xCB5;  // bool 
	constexpr uint32_t m_bAcceptDamageFromHeldObjects = 0xCBF;  // bool 
	constexpr uint32_t m_bEnableUseOutput = 0xCC0;  // bool 
	constexpr uint32_t m_CrateType = 0xCC4;  // CPhysicsProp::CrateType_t 
	constexpr uint32_t m_strItemClass = 0xCC8;  // CUtlSymbolLarge[4] 
	constexpr uint32_t m_nItemCount = 0xCE8;  // int32[4] 
	constexpr uint32_t m_bRemovableForAmmoBalancing = 0xCF8;  // bool 
	constexpr uint32_t m_bAwake = 0xCF9;  // bool 
}

// Offset: 0x0 
// N. Class: 715 
// Fields: 0 
namespace CPhysicsPropOverride
{
}

// Offset: 0x7ffe05842220 
// N. Class: 716 
// Fields: 5 
namespace CPhysicsPropRespawnable
{
	constexpr uint32_t m_vOriginalSpawnOrigin = 0xD00;  // Vector 
	constexpr uint32_t m_vOriginalSpawnAngles = 0xD0C;  // QAngle 
	constexpr uint32_t m_vOriginalMins = 0xD18;  // Vector 
	constexpr uint32_t m_vOriginalMaxs = 0xD24;  // Vector 
	constexpr uint32_t m_flRespawnDuration = 0xD30;  // float32 
}

// Offset: 0x0 
// N. Class: 717 
// Fields: 0 
namespace CWaterBullet
{
}

// Offset: 0x7ffe058fc1d0 
// N. Class: 718 
// Fields: 9 
namespace CEconEntity
{
	constexpr uint32_t m_AttributeManager = 0xA48;  // CAttributeContainer 
	constexpr uint32_t m_OriginalOwnerXuidLow = 0xD10;  // uint32 
	constexpr uint32_t m_OriginalOwnerXuidHigh = 0xD14;  // uint32 
	constexpr uint32_t m_nFallbackPaintKit = 0xD18;  // int32 
	constexpr uint32_t m_nFallbackSeed = 0xD1C;  // int32 
	constexpr uint32_t m_flFallbackWear = 0xD20;  // float32 
	constexpr uint32_t m_nFallbackStatTrak = 0xD24;  // int32 
	constexpr uint32_t m_hOldProvidee = 0xD28;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iOldOwnerClass = 0xD2C;  // int32 
}

// Offset: 0x7ffe058fd2a0 
// N. Class: 719 
// Fields: 2 
namespace CEconWearable
{
	constexpr uint32_t m_nForceSkin = 0xD30;  // int32 
	constexpr uint32_t m_bAlwaysAllow = 0xD34;  // bool 
}

// Offset: 0x7ffe058534e0 
// N. Class: 720 
// Fields: 14 
namespace CBaseGrenade
{
	constexpr uint32_t m_OnPlayerPickup = 0xA40;  // CEntityIOOutput 
	constexpr uint32_t m_OnExplode = 0xA68;  // CEntityIOOutput 
	constexpr uint32_t m_bHasWarnedAI = 0xA90;  // bool 
	constexpr uint32_t m_bIsSmokeGrenade = 0xA91;  // bool 
	constexpr uint32_t m_bIsLive = 0xA92;  // bool 
	constexpr uint32_t m_DmgRadius = 0xA94;  // float32 
	constexpr uint32_t m_flDetonateTime = 0xA98;  // GameTime_t 
	constexpr uint32_t m_flWarnAITime = 0xA9C;  // float32 
	constexpr uint32_t m_flDamage = 0xAA0;  // float32 
	constexpr uint32_t m_iszBounceSound = 0xAA8;  // CUtlSymbolLarge 
	constexpr uint32_t m_ExplosionSound = 0xAB0;  // CUtlString 
	constexpr uint32_t m_hThrower = 0xABC;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_flNextAttack = 0xAD4;  // GameTime_t 
	constexpr uint32_t m_hOriginalThrower = 0xAD8;  // CHandle< CCSPlayerPawn > 
}

// Offset: 0x0 
// N. Class: 721 
// Fields: 0 
namespace CPhysicsPropMultiplayer
{
}

// Offset: 0x0 
// N. Class: 722 
// Fields: 0 
namespace CPredictedViewModel
{
}

// Offset: 0x7ffe05864730 
// N. Class: 723 
// Fields: 27 
namespace CPlantedC4
{
	constexpr uint32_t m_bBombTicking = 0x9B0;  // bool 
	constexpr uint32_t m_flC4Blow = 0x9B4;  // GameTime_t 
	constexpr uint32_t m_nBombSite = 0x9B8;  // int32 
	constexpr uint32_t m_nSourceSoundscapeHash = 0x9BC;  // int32 
	constexpr uint32_t m_AttributeManager = 0x9C0;  // CAttributeContainer 
	constexpr uint32_t m_OnBombDefused = 0xC88;  // CEntityIOOutput 
	constexpr uint32_t m_OnBombBeginDefuse = 0xCB0;  // CEntityIOOutput 
	constexpr uint32_t m_OnBombDefuseAborted = 0xCD8;  // CEntityIOOutput 
	constexpr uint32_t m_bCannotBeDefused = 0xD00;  // bool 
	constexpr uint32_t m_entitySpottedState = 0xD08;  // EntitySpottedState_t 
	constexpr uint32_t m_nSpotRules = 0xD20;  // int32 
	constexpr uint32_t m_bTrainingPlacedByPlayer = 0xD24;  // bool 
	constexpr uint32_t m_bHasExploded = 0xD25;  // bool 
	constexpr uint32_t m_flTimerLength = 0xD28;  // float32 
	constexpr uint32_t m_bBeingDefused = 0xD2C;  // bool 
	constexpr uint32_t m_fLastDefuseTime = 0xD34;  // GameTime_t 
	constexpr uint32_t m_flDefuseLength = 0xD3C;  // float32 
	constexpr uint32_t m_flDefuseCountDown = 0xD40;  // GameTime_t 
	constexpr uint32_t m_bBombDefused = 0xD44;  // bool 
	constexpr uint32_t m_hBombDefuser = 0xD48;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_hControlPanel = 0xD4C;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_iProgressBarTime = 0xD50;  // int32 
	constexpr uint32_t m_bVoiceAlertFired = 0xD54;  // bool 
	constexpr uint32_t m_bVoiceAlertPlayed = 0xD55;  // bool[4] 
	constexpr uint32_t m_flNextBotBeepTime = 0xD5C;  // GameTime_t 
	constexpr uint32_t m_angCatchUpToPlayerEye = 0xD64;  // QAngle 
	constexpr uint32_t m_flLastSpinDetectionTime = 0xD70;  // GameTime_t 
}

// Offset: 0x7ffe058609e0 
// N. Class: 724 
// Fields: 17 
namespace CBaseCSGrenadeProjectile
{
	constexpr uint32_t m_vInitialPosition = 0xAE0;  // Vector 
	constexpr uint32_t m_vInitialVelocity = 0xAEC;  // Vector 
	constexpr uint32_t m_nBounces = 0xAF8;  // int32 
	constexpr uint32_t m_nExplodeEffectIndex = 0xB00;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_nExplodeEffectTickBegin = 0xB08;  // int32 
	constexpr uint32_t m_vecExplodeEffectOrigin = 0xB0C;  // Vector 
	constexpr uint32_t m_flSpawnTime = 0xB18;  // GameTime_t 
	constexpr uint32_t m_unOGSExtraFlags = 0xB1C;  // uint8 
	constexpr uint32_t m_bDetonationRecorded = 0xB1D;  // bool 
	constexpr uint32_t m_nItemIndex = 0xB1E;  // uint16 
	constexpr uint32_t m_vecOriginalSpawnLocation = 0xB20;  // Vector 
	constexpr uint32_t m_flLastBounceSoundTime = 0xB2C;  // GameTime_t 
	constexpr uint32_t m_vecGrenadeSpin = 0xB30;  // RotationVector 
	constexpr uint32_t m_vecLastHitSurfaceNormal = 0xB3C;  // Vector 
	constexpr uint32_t m_nTicksAtZeroVelocity = 0xB48;  // int32 
	constexpr uint32_t m_bHasEverHitPlayer = 0xB4C;  // bool 
	constexpr uint32_t m_bClearFromPlayers = 0xB4D;  // bool 
}

// Offset: 0x7ffe0585fd20 
// N. Class: 725 
// Fields: 2 
namespace CItemDogtags
{
	constexpr uint32_t m_OwningPlayer = 0xA80;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_KillingPlayer = 0xA84;  // CHandle< CCSPlayerPawn > 
}

// Offset: 0x7ffe058626d0 
// N. Class: 726 
// Fields: 3 
namespace CSensorGrenadeProjectile
{
	constexpr uint32_t m_fExpireTime = 0xB50;  // GameTime_t 
	constexpr uint32_t m_fNextDetectPlayerSound = 0xB54;  // GameTime_t 
	constexpr uint32_t m_hDisplayGrenade = 0xB58;  // CHandle< CBaseEntity > 
}

// Offset: 0x0 
// N. Class: 727 
// Fields: 0 
namespace CBreachChargeProjectile
{
}

// Offset: 0x0 
// N. Class: 728 
// Fields: 0 
namespace CBumpMineProjectile
{
}

// Offset: 0x0 
// N. Class: 729 
// Fields: 0 
namespace CTripWireFireProjectile
{
}

// Offset: 0x7ffe057f3b80 
// N. Class: 730 
// Fields: 3 
namespace CFlashbangProjectile
{
	constexpr uint32_t m_flTimeToDetonate = 0xB50;  // float32 
	constexpr uint32_t m_numOpponentsHit = 0xB54;  // uint8 
	constexpr uint32_t m_numTeammatesHit = 0xB55;  // uint8 
}

// Offset: 0x0 
// N. Class: 731 
// Fields: 0 
namespace CHEGrenadeProjectile
{
}

// Offset: 0x7ffe057ee970 
// N. Class: 732 
// Fields: 28 
namespace CChicken
{
	constexpr uint32_t m_AttributeManager = 0xC78;  // CAttributeContainer 
	constexpr uint32_t m_updateTimer = 0xF40;  // CountdownTimer 
	constexpr uint32_t m_stuckAnchor = 0xF58;  // Vector 
	constexpr uint32_t m_stuckTimer = 0xF68;  // CountdownTimer 
	constexpr uint32_t m_collisionStuckTimer = 0xF80;  // CountdownTimer 
	constexpr uint32_t m_isOnGround = 0xF98;  // bool 
	constexpr uint32_t m_vFallVelocity = 0xF9C;  // Vector 
	constexpr uint32_t m_desiredActivity = 0xFA8;  // ChickenActivity 
	constexpr uint32_t m_currentActivity = 0xFAC;  // ChickenActivity 
	constexpr uint32_t m_activityTimer = 0xFB0;  // CountdownTimer 
	constexpr uint32_t m_turnRate = 0xFC8;  // float32 
	constexpr uint32_t m_fleeFrom = 0xFCC;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_moveRateThrottleTimer = 0xFD0;  // CountdownTimer 
	constexpr uint32_t m_startleTimer = 0xFE8;  // CountdownTimer 
	constexpr uint32_t m_vocalizeTimer = 0x1000;  // CountdownTimer 
	constexpr uint32_t m_flWhenZombified = 0x1018;  // GameTime_t 
	constexpr uint32_t m_jumpedThisFrame = 0x101C;  // bool 
	constexpr uint32_t m_leader = 0x1020;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_reuseTimer = 0x1038;  // CountdownTimer 
	constexpr uint32_t m_hasBeenUsed = 0x1050;  // bool 
	constexpr uint32_t m_jumpTimer = 0x1058;  // CountdownTimer 
	constexpr uint32_t m_flLastJumpTime = 0x1070;  // float32 
	constexpr uint32_t m_bInJump = 0x1074;  // bool 
	constexpr uint32_t m_repathTimer = 0x3080;  // CountdownTimer 
	constexpr uint32_t m_vecPathGoal = 0x3118;  // Vector 
	constexpr uint32_t m_flActiveFollowStartTime = 0x3124;  // GameTime_t 
	constexpr uint32_t m_followMinuteTimer = 0x3128;  // CountdownTimer 
	constexpr uint32_t m_BlockDirectionTimer = 0x3148;  // CountdownTimer 
}

// Offset: 0x0 
// N. Class: 733 
// Fields: 0 
namespace CHostageCarriableProp
{
}

// Offset: 0x0 
// N. Class: 734 
// Fields: 0 
namespace CItemAssaultSuit
{
}

// Offset: 0x0 
// N. Class: 735 
// Fields: 0 
namespace CItemHeavyAssaultSuit
{
}

// Offset: 0x0 
// N. Class: 736 
// Fields: 0 
namespace CItemKevlar
{
}

// Offset: 0x7ffe057e3e20 
// N. Class: 737 
// Fields: 2 
namespace CItemDefuser
{
	constexpr uint32_t m_entitySpottedState = 0xA80;  // EntitySpottedState_t 
	constexpr uint32_t m_nSpotRules = 0xA98;  // int32 
}

// Offset: 0x0 
// N. Class: 738 
// Fields: 0 
namespace CBaseFlexAlias_funCBaseFlex
{
}

// Offset: 0x7ffe058b5b80 
// N. Class: 739 
// Fields: 1 
namespace CScriptItem
{
	constexpr uint32_t m_MoveTypeOverride = 0xA80;  // MoveType_t 
}

// Offset: 0x0 
// N. Class: 740 
// Fields: 0 
namespace CRagdollPropAlias_physics_prop_ragdoll
{
}

// Offset: 0x7ffe058cf1d0 
// N. Class: 741 
// Fields: 6 
namespace CRagdollPropAttached
{
	constexpr uint32_t m_boneIndexAttached = 0xB48;  // uint32 
	constexpr uint32_t m_ragdollAttachedObjectIndex = 0xB4C;  // uint32 
	constexpr uint32_t m_attachmentPointBoneSpace = 0xB50;  // Vector 
	constexpr uint32_t m_attachmentPointRagdollSpace = 0xB5C;  // Vector 
	constexpr uint32_t m_bShouldDetach = 0xB68;  // bool 
	constexpr uint32_t m_bShouldDeleteAttachedActivationRecord = 0xB78;  // bool 
}

// Offset: 0x7ffe058da570 
// N. Class: 742 
// Fields: 17 
namespace CPropDoorRotating
{
	constexpr uint32_t m_vecAxis = 0xEE8;  // Vector 
	constexpr uint32_t m_flDistance = 0xEF4;  // float32 
	constexpr uint32_t m_eSpawnPosition = 0xEF8;  // PropDoorRotatingSpawnPos_t 
	constexpr uint32_t m_eOpenDirection = 0xEFC;  // PropDoorRotatingOpenDirection_e 
	constexpr uint32_t m_eCurrentOpenDirection = 0xF00;  // PropDoorRotatingOpenDirection_e 
	constexpr uint32_t m_flAjarAngle = 0xF04;  // float32 
	constexpr uint32_t m_angRotationAjarDeprecated = 0xF08;  // QAngle 
	constexpr uint32_t m_angRotationClosed = 0xF14;  // QAngle 
	constexpr uint32_t m_angRotationOpenForward = 0xF20;  // QAngle 
	constexpr uint32_t m_angRotationOpenBack = 0xF2C;  // QAngle 
	constexpr uint32_t m_angGoal = 0xF38;  // QAngle 
	constexpr uint32_t m_vecForwardBoundsMin = 0xF44;  // Vector 
	constexpr uint32_t m_vecForwardBoundsMax = 0xF50;  // Vector 
	constexpr uint32_t m_vecBackBoundsMin = 0xF5C;  // Vector 
	constexpr uint32_t m_vecBackBoundsMax = 0xF68;  // Vector 
	constexpr uint32_t m_bAjarDoorShouldntAlwaysOpen = 0xF74;  // bool 
	constexpr uint32_t m_hEntityBlocker = 0xF78;  // CHandle< CEntityBlocker > 
}

// Offset: 0x7ffe058da8d0 
// N. Class: 743 
// Fields: 4 
namespace CPropDoorRotatingBreakable
{
	constexpr uint32_t m_bBreakable = 0xF80;  // bool 
	constexpr uint32_t m_isAbleToCloseAreaPortals = 0xF81;  // bool 
	constexpr uint32_t m_currentDamageState = 0xF84;  // int32 
	constexpr uint32_t m_damageStates = 0xF88;  // CUtlVector< CUtlSymbolLarge > 
}

// Offset: 0x7ffe05833f10 
// N. Class: 744 
// Fields: 9 
namespace CBaseCombatCharacter
{
	constexpr uint32_t m_bForceServerRagdoll = 0xA38;  // bool 
	constexpr uint32_t m_hMyWearables = 0xA40;  // CNetworkUtlVectorBase< CHandle< CEconWearable > > 
	constexpr uint32_t m_impactEnergyScale = 0xA58;  // float32 
	constexpr uint32_t m_bApplyStressDamage = 0xA5C;  // bool 
	constexpr uint32_t m_iDamageCount = 0xAA0;  // int32 
	constexpr uint32_t m_pVecRelationships = 0xAA8;  // CUtlVector< RelationshipOverride_t >* 
	constexpr uint32_t m_strRelationships = 0xAB0;  // CUtlSymbolLarge 
	constexpr uint32_t m_eHull = 0xAB8;  // Hull_t 
	constexpr uint32_t m_nNavHullIdx = 0xABC;  // uint32 
}

// Offset: 0x7ffe05860250 
// N. Class: 745 
// Fields: 1 
namespace CCSGOViewModel
{
	constexpr uint32_t m_bShouldIgnoreOffsetAndAccuracy = 0x9F0;  // bool 
}

// Offset: 0x7ffe05863880 
// N. Class: 746 
// Fields: 65 
namespace CCSWeaponBase
{
	constexpr uint32_t m_bRemoveable = 0xDA0;  // bool 
	constexpr uint32_t m_flFireSequenceStartTime = 0xDA8;  // float32 
	constexpr uint32_t m_nFireSequenceStartTimeChange = 0xDAC;  // int32 
	constexpr uint32_t m_nFireSequenceStartTimeAck = 0xDB0;  // int32 
	constexpr uint32_t m_ePlayerFireEvent = 0xDB4;  // PlayerAnimEvent_t 
	constexpr uint32_t m_ePlayerFireEventAttackType = 0xDB8;  // WeaponAttackType_t 
	constexpr uint32_t m_seqIdle = 0xDBC;  // HSequence 
	constexpr uint32_t m_seqFirePrimary = 0xDC0;  // HSequence 
	constexpr uint32_t m_seqFireSecondary = 0xDC4;  // HSequence 
	constexpr uint32_t m_thirdPersonFireSequences = 0xDC8;  // CUtlVector< HSequence > 
	constexpr uint32_t m_hCurrentThirdPersonSequence = 0xDE0;  // HSequence 
	constexpr uint32_t m_nSilencerBoneIndex = 0xDE4;  // int32 
	constexpr uint32_t m_thirdPersonSequences = 0xDE8;  // HSequence[7] 
	constexpr uint32_t m_bPlayerAmmoStockOnPickup = 0xE10;  // bool 
	constexpr uint32_t m_bRequireUseToTouch = 0xE11;  // bool 
	constexpr uint32_t m_iState = 0xE14;  // CSWeaponState_t 
	constexpr uint32_t m_flLastTimeInAir = 0xE18;  // GameTime_t 
	constexpr uint32_t m_flLastDeployTime = 0xE1C;  // GameTime_t 
	constexpr uint32_t m_nLastEmptySoundCmdNum = 0xE20;  // int32 
	constexpr uint32_t m_nViewModelIndex = 0xE24;  // uint32 
	constexpr uint32_t m_bReloadsWithClips = 0xE28;  // bool 
	constexpr uint32_t m_flTimeWeaponIdle = 0xE48;  // GameTime_t 
	constexpr uint32_t m_bFireOnEmpty = 0xE4C;  // bool 
	constexpr uint32_t m_OnPlayerPickup = 0xE50;  // CEntityIOOutput 
	constexpr uint32_t m_weaponMode = 0xE78;  // CSWeaponMode 
	constexpr uint32_t m_flTurningInaccuracyDelta = 0xE7C;  // float32 
	constexpr uint32_t m_vecTurningInaccuracyEyeDirLast = 0xE80;  // Vector 
	constexpr uint32_t m_flTurningInaccuracy = 0xE8C;  // float32 
	constexpr uint32_t m_fAccuracyPenalty = 0xE90;  // float32 
	constexpr uint32_t m_flLastAccuracyUpdateTime = 0xE94;  // GameTime_t 
	constexpr uint32_t m_fAccuracySmoothedForZoom = 0xE98;  // float32 
	constexpr uint32_t m_fScopeZoomEndTime = 0xE9C;  // GameTime_t 
	constexpr uint32_t m_iRecoilIndex = 0xEA0;  // int32 
	constexpr uint32_t m_flRecoilIndex = 0xEA4;  // float32 
	constexpr uint32_t m_bBurstMode = 0xEA8;  // bool 
	constexpr uint32_t m_nPostponeFireReadyTicks = 0xEAC;  // GameTick_t 
	constexpr uint32_t m_flPostponeFireReadyFrac = 0xEB0;  // float32 
	constexpr uint32_t m_bInReload = 0xEB4;  // bool 
	constexpr uint32_t m_bReloadVisuallyComplete = 0xEB5;  // bool 
	constexpr uint32_t m_flDroppedAtTime = 0xEB8;  // GameTime_t 
	constexpr uint32_t m_bIsHauledBack = 0xEBC;  // bool 
	constexpr uint32_t m_bSilencerOn = 0xEBD;  // bool 
	constexpr uint32_t m_flTimeSilencerSwitchComplete = 0xEC0;  // GameTime_t 
	constexpr uint32_t m_iOriginalTeamNumber = 0xEC4;  // int32 
	constexpr uint32_t m_iMostRecentTeamNumber = 0xEC8;  // int32 
	constexpr uint32_t m_bDroppedNearBuyZone = 0xECC;  // bool 
	constexpr uint32_t m_flNextAttackRenderTimeOffset = 0xED0;  // float32 
	constexpr uint32_t m_bCanBePickedUp = 0xEE8;  // bool 
	constexpr uint32_t m_bUseCanOverrideNextOwnerTouchTime = 0xEE9;  // bool 
	constexpr uint32_t m_nextOwnerTouchTime = 0xEEC;  // GameTime_t 
	constexpr uint32_t m_nextPrevOwnerTouchTime = 0xEF0;  // GameTime_t 
	constexpr uint32_t m_nextPrevOwnerUseTime = 0xEF8;  // GameTime_t 
	constexpr uint32_t m_hPrevOwner = 0xEFC;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_nDropTick = 0xF00;  // GameTick_t 
	constexpr uint32_t m_donated = 0xF24;  // bool 
	constexpr uint32_t m_fLastShotTime = 0xF28;  // GameTime_t 
	constexpr uint32_t m_bWasOwnedByCT = 0xF2C;  // bool 
	constexpr uint32_t m_bWasOwnedByTerrorist = 0xF2D;  // bool 
	constexpr uint32_t m_bFiredOutOfAmmoEvent = 0xF2E;  // bool 
	constexpr uint32_t m_numRemoveUnownedWeaponThink = 0xF30;  // int32 
	constexpr uint32_t m_IronSightController = 0xF38;  // CIronSightController 
	constexpr uint32_t m_iIronSightMode = 0xF50;  // int32 
	constexpr uint32_t m_flLastLOSTraceFailureTime = 0xF54;  // GameTime_t 
	constexpr uint32_t m_iNumEmptyAttacks = 0xF58;  // int32 
	constexpr uint32_t m_flWatTickOffset = 0xF5C;  // float32 
}

// Offset: 0x7ffe05865c00 
// N. Class: 747 
// Fields: 9 
namespace CCSWeaponBaseGun
{
	constexpr uint32_t m_zoomLevel = 0xF70;  // int32 
	constexpr uint32_t m_iBurstShotsRemaining = 0xF74;  // int32 
	constexpr uint32_t m_silencedModelIndex = 0xF80;  // int32 
	constexpr uint32_t m_inPrecache = 0xF84;  // bool 
	constexpr uint32_t m_bNeedsBoltAction = 0xF85;  // bool 
	constexpr uint32_t m_bSkillReloadAvailable = 0xF86;  // bool 
	constexpr uint32_t m_bSkillReloadLiftedReloadKey = 0xF87;  // bool 
	constexpr uint32_t m_bSkillBoltInterruptAvailable = 0xF88;  // bool 
	constexpr uint32_t m_bSkillBoltLiftedFireKey = 0xF89;  // bool 
}

// Offset: 0x7ffe05862490 
// N. Class: 748 
// Fields: 11 
namespace CC4
{
	constexpr uint32_t m_vecLastValidPlayerHeldPosition = 0xFA0;  // Vector 
	constexpr uint32_t m_vecLastValidDroppedPosition = 0xFAC;  // Vector 
	constexpr uint32_t m_bDoValidDroppedPositionCheck = 0xFB8;  // bool 
	constexpr uint32_t m_bStartedArming = 0xFB9;  // bool 
	constexpr uint32_t m_fArmedTime = 0xFBC;  // GameTime_t 
	constexpr uint32_t m_bBombPlacedAnimation = 0xFC0;  // bool 
	constexpr uint32_t m_bIsPlantingViaUse = 0xFC1;  // bool 
	constexpr uint32_t m_entitySpottedState = 0xFC8;  // EntitySpottedState_t 
	constexpr uint32_t m_nSpotRules = 0xFE0;  // int32 
	constexpr uint32_t m_bPlayedArmingBeeps = 0xFE4;  // bool[7] 
	constexpr uint32_t m_bBombPlanted = 0xFEB;  // bool 
}

// Offset: 0x0 
// N. Class: 749 
// Fields: 0 
namespace CDEagle
{
}

// Offset: 0x0 
// N. Class: 750 
// Fields: 0 
namespace CWeaponElite
{
}

// Offset: 0x0 
// N. Class: 751 
// Fields: 0 
namespace CWeaponNOVA
{
}

// Offset: 0x0 
// N. Class: 752 
// Fields: 0 
namespace CWeaponSawedoff
{
}

// Offset: 0x7ffe05867de0 
// N. Class: 753 
// Fields: 2 
namespace CWeaponTaser
{
	constexpr uint32_t m_fFireTime = 0xF90;  // GameTime_t 
	constexpr uint32_t m_nLastAttackTick = 0xF94;  // int32 
}

// Offset: 0x0 
// N. Class: 754 
// Fields: 0 
namespace CWeaponXM1014
{
}

// Offset: 0x7ffe05867be0 
// N. Class: 755 
// Fields: 1 
namespace CKnife
{
	constexpr uint32_t m_bFirstAttack = 0xF70;  // bool 
}

// Offset: 0x0 
// N. Class: 756 
// Fields: 0 
namespace CMelee
{
}

// Offset: 0x7ffe05867f50 
// N. Class: 757 
// Fields: 3 
namespace CWeaponShield
{
	constexpr uint32_t m_flBulletDamageAbsorbed = 0xF90;  // float32 
	constexpr uint32_t m_flLastBulletHitSoundTime = 0xF94;  // GameTime_t 
	constexpr uint32_t m_flDisplayHealth = 0xF98;  // float32 
}

// Offset: 0x7ffe058627e0 
// N. Class: 758 
// Fields: 4 
namespace CMolotovProjectile
{
	constexpr uint32_t m_bIsIncGrenade = 0xB50;  // bool 
	constexpr uint32_t m_bDetonated = 0xB5C;  // bool 
	constexpr uint32_t m_stillTimer = 0xB60;  // IntervalTimer 
	constexpr uint32_t m_bHasBouncedOffPlayer = 0xC40;  // bool 
}

// Offset: 0x7ffe05860d50 
// N. Class: 759 
// Fields: 4 
namespace CDecoyProjectile
{
	constexpr uint32_t m_nDecoyShotTick = 0xB58;  // int32 
	constexpr uint32_t m_shotsRemaining = 0xB5C;  // int32 
	constexpr uint32_t m_fExpireTime = 0xB60;  // GameTime_t 
	constexpr uint32_t m_decoyWeaponDefIndex = 0xB70;  // uint16 
}

// Offset: 0x7ffe05864410 
// N. Class: 760 
// Fields: 11 
namespace CSmokeGrenadeProjectile
{
	constexpr uint32_t m_nSmokeEffectTickBegin = 0xB68;  // int32 
	constexpr uint32_t m_bDidSmokeEffect = 0xB6C;  // bool 
	constexpr uint32_t m_nRandomSeed = 0xB70;  // int32 
	constexpr uint32_t m_vSmokeColor = 0xB74;  // Vector 
	constexpr uint32_t m_vSmokeDetonationPos = 0xB80;  // Vector 
	constexpr uint32_t m_VoxelFrameData = 0xB90;  // CNetworkUtlVectorBase< uint8 > 
	constexpr uint32_t m_nVoxelFrameDataSize = 0xBA8;  // int32 
	constexpr uint32_t m_nVoxelUpdate = 0xBAC;  // int32 
	constexpr uint32_t m_flLastBounce = 0xBB0;  // GameTime_t 
	constexpr uint32_t m_fllastSimulationTime = 0xBB4;  // GameTime_t 
	constexpr uint32_t m_bExplodeFromInferno = 0x2E38;  // bool 
}

// Offset: 0x7ffe05864130 
// N. Class: 761 
// Fields: 14 
namespace CBaseCSGrenade
{
	constexpr uint32_t m_bRedraw = 0xF70;  // bool 
	constexpr uint32_t m_bIsHeldByPlayer = 0xF71;  // bool 
	constexpr uint32_t m_bPinPulled = 0xF72;  // bool 
	constexpr uint32_t m_bJumpThrow = 0xF73;  // bool 
	constexpr uint32_t m_bThrowAnimating = 0xF74;  // bool 
	constexpr uint32_t m_fThrowTime = 0xF78;  // GameTime_t 
	constexpr uint32_t m_flThrowStrength = 0xF7C;  // float32 
	constexpr uint32_t m_flThrowStrengthApproach = 0xF80;  // float32 
	constexpr uint32_t m_fDropTime = 0xF84;  // GameTime_t 
	constexpr uint32_t m_fPinPullTime = 0xF88;  // GameTime_t 
	constexpr uint32_t m_bJustPulledPin = 0xF8C;  // bool 
	constexpr uint32_t m_nNextHoldTick = 0xF90;  // GameTick_t 
	constexpr uint32_t m_flNextHoldFrac = 0xF94;  // float32 
	constexpr uint32_t m_hSwitchToWeaponAfterThrow = 0xF98;  // CHandle< CCSWeaponBase > 
}

// Offset: 0x7ffe058645f0 
// N. Class: 762 
// Fields: 2 
namespace CWeaponBaseItem
{
	constexpr uint32_t m_SequenceCompleteTimer = 0xF70;  // CountdownTimer 
	constexpr uint32_t m_bRedraw = 0xF88;  // bool 
}

// Offset: 0x0 
// N. Class: 763 
// Fields: 0 
namespace CItem_Healthshot
{
}

// Offset: 0x7ffe058660c0 
// N. Class: 764 
// Fields: 7 
namespace CFists
{
	constexpr uint32_t m_bPlayingUninterruptableAct = 0xF70;  // bool 
	constexpr uint32_t m_nUninterruptableActivity = 0xF74;  // PlayerAnimEvent_t 
	constexpr uint32_t m_bRestorePrevWep = 0xF78;  // bool 
	constexpr uint32_t m_hWeaponBeforePrevious = 0xF7C;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_hWeaponPrevious = 0xF80;  // CHandle< CBasePlayerWeapon > 
	constexpr uint32_t m_bDelayedHardPunchIncoming = 0xF84;  // bool 
	constexpr uint32_t m_bDestroyAfterTaunt = 0xF85;  // bool 
}

// Offset: 0x0 
// N. Class: 765 
// Fields: 0 
namespace CSensorGrenade
{
}

// Offset: 0x0 
// N. Class: 766 
// Fields: 0 
namespace CBreachCharge
{
}

// Offset: 0x0 
// N. Class: 767 
// Fields: 0 
namespace CBumpMine
{
}

// Offset: 0x0 
// N. Class: 768 
// Fields: 0 
namespace CTablet
{
}

// Offset: 0x0 
// N. Class: 769 
// Fields: 0 
namespace CTripWireFire
{
}

// Offset: 0x0 
// N. Class: 770 
// Fields: 0 
namespace CWeaponZoneRepulsor
{
}

// Offset: 0x7ffe057e63a0 
// N. Class: 771 
// Fields: 22 
namespace CCSPlayerPawnBase
{
	constexpr uint32_t m_CTouchExpansionComponent = 0xC68;  // CTouchExpansionComponent 
	constexpr uint32_t m_pPingServices = 0xCB8;  // CCSPlayer_PingServices* 
	constexpr uint32_t m_pViewModelServices = 0xCC0;  // CPlayer_ViewModelServices* 
	constexpr uint32_t m_blindUntilTime = 0xCC8;  // GameTime_t 
	constexpr uint32_t m_blindStartTime = 0xCCC;  // GameTime_t 
	constexpr uint32_t m_iPlayerState = 0xCD0;  // CSPlayerState 
	constexpr uint32_t m_bRespawning = 0xD80;  // bool 
	constexpr uint32_t m_fImmuneToGunGameDamageTime = 0xD84;  // GameTime_t 
	constexpr uint32_t m_bGunGameImmunity = 0xD88;  // bool 
	constexpr uint32_t m_fMolotovDamageTime = 0xD8C;  // float32 
	constexpr uint32_t m_bHasMovedSinceSpawn = 0xD90;  // bool 
	constexpr uint32_t m_iNumSpawns = 0xD94;  // int32 
	constexpr uint32_t m_flIdleTimeSinceLastAction = 0xD9C;  // float32 
	constexpr uint32_t m_fNextRadarUpdateTime = 0xDA0;  // float32 
	constexpr uint32_t m_flFlashDuration = 0xDA4;  // float32 
	constexpr uint32_t m_flFlashMaxAlpha = 0xDA8;  // float32 
	constexpr uint32_t m_flProgressBarStartTime = 0xDAC;  // float32 
	constexpr uint32_t m_iProgressBarDuration = 0xDB0;  // int32 
	constexpr uint32_t m_angEyeAngles = 0xDB4;  // QAngle 
	constexpr uint32_t m_wasNotKilledNaturally = 0xDC0;  // bool 
	constexpr uint32_t m_bCommittingSuicideOnTeamChange = 0xDC1;  // bool 
	constexpr uint32_t m_hOriginalController = 0xDC4;  // CHandle< CCSPlayerController > 
}

// Offset: 0x7ffe057ef7b0 
// N. Class: 772 
// Fields: 1 
namespace CHostageExpresserShim
{
	constexpr uint32_t m_pExpresser = 0xAC0;  // CAI_Expresser* 
}

// Offset: 0x7ffe057ef900 
// N. Class: 773 
// Fields: 39 
namespace CHostage
{
	constexpr uint32_t m_OnHostageBeginGrab = 0xAD8;  // CEntityIOOutput 
	constexpr uint32_t m_OnFirstPickedUp = 0xB00;  // CEntityIOOutput 
	constexpr uint32_t m_OnDroppedNotRescued = 0xB28;  // CEntityIOOutput 
	constexpr uint32_t m_OnRescued = 0xB50;  // CEntityIOOutput 
	constexpr uint32_t m_entitySpottedState = 0xB78;  // EntitySpottedState_t 
	constexpr uint32_t m_nSpotRules = 0xB90;  // int32 
	constexpr uint32_t m_uiHostageSpawnExclusionGroupMask = 0xB94;  // uint32 
	constexpr uint32_t m_nHostageSpawnRandomFactor = 0xB98;  // uint32 
	constexpr uint32_t m_bRemove = 0xB9C;  // bool 
	constexpr uint32_t m_vel = 0xBA0;  // Vector 
	constexpr uint32_t m_isRescued = 0xBAC;  // bool 
	constexpr uint32_t m_jumpedThisFrame = 0xBAD;  // bool 
	constexpr uint32_t m_nHostageState = 0xBB0;  // int32 
	constexpr uint32_t m_leader = 0xBB4;  // CHandle< CBaseEntity > 
	constexpr uint32_t m_lastLeader = 0xBB8;  // CHandle< CCSPlayerPawnBase > 
	constexpr uint32_t m_reuseTimer = 0xBC0;  // CountdownTimer 
	constexpr uint32_t m_hasBeenUsed = 0xBD8;  // bool 
	constexpr uint32_t m_accel = 0xBDC;  // Vector 
	constexpr uint32_t m_isRunning = 0xBE8;  // bool 
	constexpr uint32_t m_isCrouching = 0xBE9;  // bool 
	constexpr uint32_t m_jumpTimer = 0xBF0;  // CountdownTimer 
	constexpr uint32_t m_isWaitingForLeader = 0xC08;  // bool 
	constexpr uint32_t m_repathTimer = 0x2C18;  // CountdownTimer 
	constexpr uint32_t m_inhibitDoorTimer = 0x2C30;  // CountdownTimer 
	constexpr uint32_t m_inhibitObstacleAvoidanceTimer = 0x2CC0;  // CountdownTimer 
	constexpr uint32_t m_wiggleTimer = 0x2CE0;  // CountdownTimer 
	constexpr uint32_t m_isAdjusted = 0x2CFC;  // bool 
	constexpr uint32_t m_bHandsHaveBeenCut = 0x2CFD;  // bool 
	constexpr uint32_t m_hHostageGrabber = 0x2D00;  // CHandle< CCSPlayerPawn > 
	constexpr uint32_t m_fLastGrabTime = 0x2D04;  // GameTime_t 
	constexpr uint32_t m_vecPositionWhenStartedDroppingToGround = 0x2D08;  // Vector 
	constexpr uint32_t m_vecGrabbedPos = 0x2D14;  // Vector 
	constexpr uint32_t m_flRescueStartTime = 0x2D20;  // GameTime_t 
	constexpr uint32_t m_flGrabSuccessTime = 0x2D24;  // GameTime_t 
	constexpr uint32_t m_flDropStartTime = 0x2D28;  // GameTime_t 
	constexpr uint32_t m_nApproachRewardPayouts = 0x2D2C;  // int32 
	constexpr uint32_t m_nPickupEventCount = 0x2D30;  // int32 
	constexpr uint32_t m_vecSpawnGroundPos = 0x2D34;  // Vector 
	constexpr uint32_t m_vecHostageResetPosition = 0x2D54;  // Vector 
}

// Offset: 0x0 
// N. Class: 774 
// Fields: 0 
namespace CHostageAlias_info_hostage_spawn
{
}

// Offset: 0x0 
// N. Class: 775 
// Fields: 0 
namespace CItemDefuserAlias_item_defuser
{
}

// Offset: 0x0 
// N. Class: 776 
// Fields: 0 
namespace CAK47
{
}

// Offset: 0x0 
// N. Class: 777 
// Fields: 0 
namespace CWeaponAug
{
}

// Offset: 0x0 
// N. Class: 778 
// Fields: 0 
namespace CWeaponAWP
{
}

// Offset: 0x0 
// N. Class: 779 
// Fields: 0 
namespace CWeaponBizon
{
}

// Offset: 0x0 
// N. Class: 780 
// Fields: 0 
namespace CWeaponFamas
{
}

// Offset: 0x0 
// N. Class: 781 
// Fields: 0 
namespace CWeaponFiveSeven
{
}

// Offset: 0x0 
// N. Class: 782 
// Fields: 0 
namespace CWeaponG3SG1
{
}

// Offset: 0x0 
// N. Class: 783 
// Fields: 0 
namespace CWeaponGalilAR
{
}

// Offset: 0x0 
// N. Class: 784 
// Fields: 0 
namespace CWeaponGlock
{
}

// Offset: 0x0 
// N. Class: 785 
// Fields: 0 
namespace CWeaponHKP2000
{
}

// Offset: 0x0 
// N. Class: 786 
// Fields: 0 
namespace CWeaponUSPSilencer
{
}

// Offset: 0x0 
// N. Class: 787 
// Fields: 0 
namespace CWeaponM4A1
{
}

// Offset: 0x0 
// N. Class: 788 
// Fields: 0 
namespace CWeaponM4A1Silencer
{
}

// Offset: 0x0 
// N. Class: 789 
// Fields: 0 
namespace CWeaponMAC10
{
}

// Offset: 0x0 
// N. Class: 790 
// Fields: 0 
namespace CWeaponMag7
{
}

// Offset: 0x0 
// N. Class: 791 
// Fields: 0 
namespace CWeaponMP5SD
{
}

// Offset: 0x0 
// N. Class: 792 
// Fields: 0 
namespace CWeaponMP7
{
}

// Offset: 0x0 
// N. Class: 793 
// Fields: 0 
namespace CWeaponMP9
{
}

// Offset: 0x0 
// N. Class: 794 
// Fields: 0 
namespace CWeaponNegev
{
}

// Offset: 0x0 
// N. Class: 795 
// Fields: 0 
namespace CWeaponP250
{
}

// Offset: 0x0 
// N. Class: 796 
// Fields: 0 
namespace CWeaponCZ75a
{
}

// Offset: 0x0 
// N. Class: 797 
// Fields: 0 
namespace CWeaponP90
{
}

// Offset: 0x0 
// N. Class: 798 
// Fields: 0 
namespace CWeaponSCAR20
{
}

// Offset: 0x0 
// N. Class: 799 
// Fields: 0 
namespace CWeaponSG556
{
}

// Offset: 0x0 
// N. Class: 800 
// Fields: 0 
namespace CWeaponSSG08
{
}

// Offset: 0x0 
// N. Class: 801 
// Fields: 0 
namespace CWeaponTec9
{
}

// Offset: 0x0 
// N. Class: 802 
// Fields: 0 
namespace CWeaponUMP45
{
}

// Offset: 0x0 
// N. Class: 803 
// Fields: 0 
namespace CWeaponM249
{
}

// Offset: 0x0 
// N. Class: 804 
// Fields: 0 
namespace CWeaponRevolver
{
}

// Offset: 0x0 
// N. Class: 805 
// Fields: 0 
namespace CMolotovGrenade
{
}

// Offset: 0x0 
// N. Class: 806 
// Fields: 0 
namespace CIncendiaryGrenade
{
}

// Offset: 0x0 
// N. Class: 807 
// Fields: 0 
namespace CDecoyGrenade
{
}

// Offset: 0x0 
// N. Class: 808 
// Fields: 0 
namespace CFlashbang
{
}

// Offset: 0x0 
// N. Class: 809 
// Fields: 0 
namespace CHEGrenade
{
}

