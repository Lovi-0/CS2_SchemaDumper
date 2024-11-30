// Schema offset: 0x26faca30140 
// Schema name: particles.dll 
// Schema declared class: 446 

// Offset: 0x7ffe1e013be8 
// N. Class: 0 
// Fields: 1 
namespace ParticleAttributeIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x0 
// N. Class: 1 
// Fields: 0 
namespace CPerParticleFloatInput
{
}

// Offset: 0x0 
// N. Class: 2 
// Fields: 0 
namespace CParticleCollectionFloatInput
{
}

// Offset: 0x0 
// N. Class: 3 
// Fields: 0 
namespace CPerParticleVecInput
{
}

// Offset: 0x0 
// N. Class: 4 
// Fields: 0 
namespace CParticleCollectionVecInput
{
}

// Offset: 0x7ffe1e019210 
// N. Class: 5 
// Fields: 2 
namespace CRandomNumberGeneratorParameters
{
	constexpr uint32_t m_bDistributeEvenly = 0x0;  // bool 
	constexpr uint32_t m_nSeed = 0x4;  // int32 
}

// Offset: 0x7ffe1e02af80 
// N. Class: 6 
// Fields: 4 
namespace CParticleMassCalculationParameters
{
	constexpr uint32_t m_nMassMode = 0x0;  // ParticleMassMode_t 
	constexpr uint32_t m_flRadius = 0x8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flNominalRadius = 0x168;  // CPerParticleFloatInput 
	constexpr uint32_t m_flScale = 0x2C8;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e03afe0 
// N. Class: 7 
// Fields: 3 
namespace MaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;  // CUtlString 
	constexpr uint32_t m_nVariableField = 0x8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0xC;  // float32 
}

// Offset: 0x7ffe1e038048 
// N. Class: 8 
// Fields: 1 
namespace RenderProjectedMaterial_t
{
	constexpr uint32_t m_hMaterial = 0x0;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
}

// Offset: 0x7ffe1e0138c0 
// N. Class: 9 
// Fields: 2 
namespace ParticlePreviewBodyGroup_t
{
	constexpr uint32_t m_bodyGroupName = 0x0;  // CUtlString 
	constexpr uint32_t m_nValue = 0x8;  // int32 
}

// Offset: 0x7ffe1e013e70 
// N. Class: 10 
// Fields: 16 
namespace ParticlePreviewState_t
{
	constexpr uint32_t m_previewModel = 0x0;  // CUtlString 
	constexpr uint32_t m_nModSpecificData = 0x8;  // uint32 
	constexpr uint32_t m_groundType = 0xC;  // PetGroundType_t 
	constexpr uint32_t m_sequenceName = 0x10;  // CUtlString 
	constexpr uint32_t m_nFireParticleOnSequenceFrame = 0x18;  // int32 
	constexpr uint32_t m_hitboxSetName = 0x20;  // CUtlString 
	constexpr uint32_t m_materialGroupName = 0x28;  // CUtlString 
	constexpr uint32_t m_vecBodyGroups = 0x30;  // CUtlVector< ParticlePreviewBodyGroup_t > 
	constexpr uint32_t m_flPlaybackSpeed = 0x48;  // float32 
	constexpr uint32_t m_flParticleSimulationRate = 0x4C;  // float32 
	constexpr uint32_t m_bShouldDrawHitboxes = 0x50;  // bool 
	constexpr uint32_t m_bShouldDrawAttachments = 0x51;  // bool 
	constexpr uint32_t m_bShouldDrawAttachmentNames = 0x52;  // bool 
	constexpr uint32_t m_bShouldDrawControlPointAxes = 0x53;  // bool 
	constexpr uint32_t m_bAnimationNonLooping = 0x54;  // bool 
	constexpr uint32_t m_vecPreviewGravity = 0x58;  // Vector 
}

// Offset: 0x7ffe1e013730 
// N. Class: 11 
// Fields: 6 
namespace ParticleControlPointDriver_t
{
	constexpr uint32_t m_iControlPoint = 0x0;  // int32 
	constexpr uint32_t m_iAttachType = 0x4;  // ParticleAttachment_t 
	constexpr uint32_t m_attachmentName = 0x8;  // CUtlString 
	constexpr uint32_t m_vecOffset = 0x10;  // Vector 
	constexpr uint32_t m_angOffset = 0x1C;  // QAngle 
	constexpr uint32_t m_entityName = 0x28;  // CUtlString 
}

// Offset: 0x7ffe1e013d30 
// N. Class: 12 
// Fields: 3 
namespace ParticleControlPointConfiguration_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_drivers = 0x8;  // CUtlVector< ParticleControlPointDriver_t > 
	constexpr uint32_t m_previewState = 0x20;  // ParticlePreviewState_t 
}

// Offset: 0x0 
// N. Class: 13 
// Fields: 0 
namespace IParticleCollection
{
}

// Offset: 0x0 
// N. Class: 14 
// Fields: 0 
namespace IParticleSystemDefinition
{
}

// Offset: 0x7ffe1e014800 
// N. Class: 15 
// Fields: 19 
namespace CParticleVisibilityInputs
{
	constexpr uint32_t m_flCameraBias = 0x0;  // float32 
	constexpr uint32_t m_nCPin = 0x4;  // int32 
	constexpr uint32_t m_flProxyRadius = 0x8;  // float32 
	constexpr uint32_t m_flInputMin = 0xC;  // float32 
	constexpr uint32_t m_flInputMax = 0x10;  // float32 
	constexpr uint32_t m_flInputPixelVisFade = 0x14;  // float32 
	constexpr uint32_t m_flNoPixelVisibilityFallback = 0x18;  // float32 
	constexpr uint32_t m_flDistanceInputMin = 0x1C;  // float32 
	constexpr uint32_t m_flDistanceInputMax = 0x20;  // float32 
	constexpr uint32_t m_flDotInputMin = 0x24;  // float32 
	constexpr uint32_t m_flDotInputMax = 0x28;  // float32 
	constexpr uint32_t m_bDotCPAngles = 0x2C;  // bool 
	constexpr uint32_t m_bDotCameraAngles = 0x2D;  // bool 
	constexpr uint32_t m_flAlphaScaleMin = 0x30;  // float32 
	constexpr uint32_t m_flAlphaScaleMax = 0x34;  // float32 
	constexpr uint32_t m_flRadiusScaleMin = 0x38;  // float32 
	constexpr uint32_t m_flRadiusScaleMax = 0x3C;  // float32 
	constexpr uint32_t m_flRadiusScaleFOVBase = 0x40;  // float32 
	constexpr uint32_t m_bRightEye = 0x44;  // bool 
}

// Offset: 0x7ffe1e014da0 
// N. Class: 16 
// Fields: 8 
namespace CPathParameters
{
	constexpr uint32_t m_nStartControlPointNumber = 0x0;  // int32 
	constexpr uint32_t m_nEndControlPointNumber = 0x4;  // int32 
	constexpr uint32_t m_nBulgeControl = 0x8;  // int32 
	constexpr uint32_t m_flBulge = 0xC;  // float32 
	constexpr uint32_t m_flMidPoint = 0x10;  // float32 
	constexpr uint32_t m_vStartPointOffset = 0x14;  // Vector 
	constexpr uint32_t m_vMidPointOffset = 0x20;  // Vector 
	constexpr uint32_t m_vEndOffset = 0x2C;  // Vector 
}

// Offset: 0x7ffe1e014440 
// N. Class: 17 
// Fields: 5 
namespace ParticleChildrenInfo_t
{
	constexpr uint32_t m_ChildRef = 0x0;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_flDelay = 0x8;  // float32 
	constexpr uint32_t m_bEndCap = 0xC;  // bool 
	constexpr uint32_t m_bDisableChild = 0xD;  // bool 
	constexpr uint32_t m_nDetailLevel = 0x10;  // ParticleDetailLevel_t 
}

// Offset: 0x7ffe1e014ed0 
// N. Class: 18 
// Fields: 3 
namespace ControlPointReference_t
{
	constexpr uint32_t m_controlPointNameString = 0x0;  // int32 
	constexpr uint32_t m_vOffsetFromControlPoint = 0x4;  // Vector 
	constexpr uint32_t m_bOffsetInLocalSpace = 0x10;  // bool 
}

// Offset: 0x7ffe1e014c90 
// N. Class: 19 
// Fields: 2 
namespace ModelReference_t
{
	constexpr uint32_t m_model = 0x0;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_flRelativeProbabilityOfSpawn = 0x8;  // float32 
}

// Offset: 0x7ffe1e014260 
// N. Class: 20 
// Fields: 2 
namespace SequenceWeightedList_t
{
	constexpr uint32_t m_nSequence = 0x0;  // int32 
	constexpr uint32_t m_flRelativeWeight = 0x4;  // float32 
}

// Offset: 0x7ffe1e014c70 
// N. Class: 21 
// Fields: 1 
namespace CollisionGroupContext_t
{
	constexpr uint32_t m_nCollisionGroupNumber = 0x0;  // int32 
}

// Offset: 0x7ffe1e014600 
// N. Class: 22 
// Fields: 3 
namespace PointDefinition_t
{
	constexpr uint32_t m_nControlPoint = 0x0;  // int32 
	constexpr uint32_t m_bLocalCoords = 0x4;  // bool 
	constexpr uint32_t m_vOffset = 0x8;  // Vector 
}

// Offset: 0x7ffe1e014220 
// N. Class: 23 
// Fields: 1 
namespace PointDefinitionWithTimeValues_t
{
	constexpr uint32_t m_flTimeDuration = 0x14;  // float32 
}

// Offset: 0x7ffe1e015150 
// N. Class: 24 
// Fields: 65 
namespace CParticleSystemDefinition
{
	constexpr uint32_t m_nBehaviorVersion = 0x8;  // int32 
	constexpr uint32_t m_PreEmissionOperators = 0x10;  // CUtlVector< CParticleFunctionPreEmission* > 
	constexpr uint32_t m_Emitters = 0x28;  // CUtlVector< CParticleFunctionEmitter* > 
	constexpr uint32_t m_Initializers = 0x40;  // CUtlVector< CParticleFunctionInitializer* > 
	constexpr uint32_t m_Operators = 0x58;  // CUtlVector< CParticleFunctionOperator* > 
	constexpr uint32_t m_ForceGenerators = 0x70;  // CUtlVector< CParticleFunctionForce* > 
	constexpr uint32_t m_Constraints = 0x88;  // CUtlVector< CParticleFunctionConstraint* > 
	constexpr uint32_t m_Renderers = 0xA0;  // CUtlVector< CParticleFunctionRenderer* > 
	constexpr uint32_t m_Children = 0xB8;  // CUtlVector< ParticleChildrenInfo_t > 
	constexpr uint32_t m_nFirstMultipleOverride_BackwardCompat = 0x178;  // int32 
	constexpr uint32_t m_nInitialParticles = 0x210;  // int32 
	constexpr uint32_t m_nMaxParticles = 0x214;  // int32 
	constexpr uint32_t m_nGroupID = 0x218;  // int32 
	constexpr uint32_t m_BoundingBoxMin = 0x21C;  // Vector 
	constexpr uint32_t m_BoundingBoxMax = 0x228;  // Vector 
	constexpr uint32_t m_flDepthSortBias = 0x234;  // float32 
	constexpr uint32_t m_nSortOverridePositionCP = 0x238;  // int32 
	constexpr uint32_t m_bInfiniteBounds = 0x23C;  // bool 
	constexpr uint32_t m_bEnableNamedValues = 0x23D;  // bool 
	constexpr uint32_t m_NamedValueDomain = 0x240;  // CUtlString 
	constexpr uint32_t m_NamedValueLocals = 0x248;  // CUtlVector< ParticleNamedValueSource_t* > 
	constexpr uint32_t m_ConstantColor = 0x260;  // Color 
	constexpr uint32_t m_ConstantNormal = 0x264;  // Vector 
	constexpr uint32_t m_flConstantRadius = 0x270;  // float32 
	constexpr uint32_t m_flConstantRotation = 0x274;  // float32 
	constexpr uint32_t m_flConstantRotationSpeed = 0x278;  // float32 
	constexpr uint32_t m_flConstantLifespan = 0x27C;  // float32 
	constexpr uint32_t m_nConstantSequenceNumber = 0x280;  // int32 
	constexpr uint32_t m_nConstantSequenceNumber1 = 0x284;  // int32 
	constexpr uint32_t m_nSnapshotControlPoint = 0x288;  // int32 
	constexpr uint32_t m_hSnapshot = 0x290;  // CStrongHandle< InfoForResourceTypeIParticleSnapshot > 
	constexpr uint32_t m_pszCullReplacementName = 0x298;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_flCullRadius = 0x2A0;  // float32 
	constexpr uint32_t m_flCullFillCost = 0x2A4;  // float32 
	constexpr uint32_t m_nCullControlPoint = 0x2A8;  // int32 
	constexpr uint32_t m_hFallback = 0x2B0;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_nFallbackMaxCount = 0x2B8;  // int32 
	constexpr uint32_t m_hLowViolenceDef = 0x2C0;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_hReferenceReplacement = 0x2C8;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_flPreSimulationTime = 0x2D0;  // float32 
	constexpr uint32_t m_flStopSimulationAfterTime = 0x2D4;  // float32 
	constexpr uint32_t m_flMaximumTimeStep = 0x2D8;  // float32 
	constexpr uint32_t m_flMaximumSimTime = 0x2DC;  // float32 
	constexpr uint32_t m_flMinimumSimTime = 0x2E0;  // float32 
	constexpr uint32_t m_flMinimumTimeStep = 0x2E4;  // float32 
	constexpr uint32_t m_nMinimumFrames = 0x2E8;  // int32 
	constexpr uint32_t m_nMinCPULevel = 0x2EC;  // int32 
	constexpr uint32_t m_nMinGPULevel = 0x2F0;  // int32 
	constexpr uint32_t m_flNoDrawTimeToGoToSleep = 0x2F4;  // float32 
	constexpr uint32_t m_flMaxDrawDistance = 0x2F8;  // float32 
	constexpr uint32_t m_flStartFadeDistance = 0x2FC;  // float32 
	constexpr uint32_t m_flMaxCreationDistance = 0x300;  // float32 
	constexpr uint32_t m_nAggregationMinAvailableParticles = 0x304;  // int32 
	constexpr uint32_t m_flAggregateRadius = 0x308;  // float32 
	constexpr uint32_t m_bShouldBatch = 0x30C;  // bool 
	constexpr uint32_t m_bShouldHitboxesFallbackToRenderBounds = 0x30D;  // bool 
	constexpr uint32_t m_bShouldHitboxesFallbackToSnapshot = 0x30E;  // bool 
	constexpr uint32_t m_bShouldHitboxesFallbackToCollisionHulls = 0x30F;  // bool 
	constexpr uint32_t m_nViewModelEffect = 0x310;  // InheritableBoolType_t 
	constexpr uint32_t m_bScreenSpaceEffect = 0x314;  // bool 
	constexpr uint32_t m_pszTargetLayerID = 0x318;  // CUtlSymbolLarge 
	constexpr uint32_t m_nSkipRenderControlPoint = 0x320;  // int32 
	constexpr uint32_t m_nAllowRenderControlPoint = 0x324;  // int32 
	constexpr uint32_t m_bShouldSort = 0x328;  // bool 
	constexpr uint32_t m_controlPointConfigurations = 0x370;  // CUtlVector< ParticleControlPointConfiguration_t > 
}

// Offset: 0x7ffe1e012bc0 
// N. Class: 25 
// Fields: 1 
namespace CParticleFunctionPreEmission
{
	constexpr uint32_t m_bRunOnce = 0x1C0;  // bool 
}

// Offset: 0x7ffe1e012e38 
// N. Class: 26 
// Fields: 1 
namespace CParticleFunctionEmitter
{
	constexpr uint32_t m_nEmitterIndex = 0x1C0;  // int32 
}

// Offset: 0x7ffe1e0125d0 
// N. Class: 27 
// Fields: 1 
namespace CParticleFunctionInitializer
{
	constexpr uint32_t m_nAssociatedEmitterIndex = 0x1C0;  // int32 
}

// Offset: 0x0 
// N. Class: 28 
// Fields: 0 
namespace CParticleFunctionOperator
{
}

// Offset: 0x0 
// N. Class: 29 
// Fields: 0 
namespace CParticleFunctionForce
{
}

// Offset: 0x0 
// N. Class: 30 
// Fields: 0 
namespace CParticleFunctionConstraint
{
}

// Offset: 0x7ffe1e012290 
// N. Class: 31 
// Fields: 3 
namespace CParticleFunctionRenderer
{
	constexpr uint32_t VisibilityInputs = 0x1C0;  // CParticleVisibilityInputs 
	constexpr uint32_t m_bCannotBeRefracted = 0x208;  // bool 
	constexpr uint32_t m_bSkipRenderingOnMobile = 0x209;  // bool 
}

// Offset: 0x7ffe1dfff5a0 
// N. Class: 32 
// Fields: 5 
namespace ParticleNamedValueSource_t
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
	constexpr uint32_t m_IsPublic = 0x8;  // bool 
	constexpr uint32_t m_ValueType = 0xC;  // PulseValueType_t 
	constexpr uint32_t m_DefaultConfig = 0x10;  // ParticleNamedValueConfiguration_t 
}

// Offset: 0x7ffe1e0130e0 
// N. Class: 33 
// Fields: 16 
namespace CParticleFunction
{
	constexpr uint32_t m_flOpStrength = 0x8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOpStartFadeInTime = 0x16C;  // float32 
	constexpr uint32_t m_flOpEndFadeInTime = 0x170;  // float32 
	constexpr uint32_t m_flOpStartFadeOutTime = 0x174;  // float32 
	constexpr uint32_t m_flOpEndFadeOutTime = 0x178;  // float32 
	constexpr uint32_t m_flOpFadeOscillatePeriod = 0x17C;  // float32 
	constexpr uint32_t m_bNormalizeToStopTime = 0x180;  // bool 
	constexpr uint32_t m_flOpTimeOffsetMin = 0x184;  // float32 
	constexpr uint32_t m_flOpTimeOffsetMax = 0x188;  // float32 
	constexpr uint32_t m_nOpTimeOffsetSeed = 0x18C;  // int32 
	constexpr uint32_t m_nOpTimeScaleSeed = 0x190;  // int32 
	constexpr uint32_t m_flOpTimeScaleMin = 0x194;  // float32 
	constexpr uint32_t m_flOpTimeScaleMax = 0x198;  // float32 
	constexpr uint32_t m_bDisableOperator = 0x19E;  // bool 
	constexpr uint32_t m_Notes = 0x1A0;  // CUtlString 
}

// Offset: 0x7ffe1e03e050 
// N. Class: 34 
// Fields: 16 
namespace TextureControls_t
{
	constexpr uint32_t m_flFinalTextureScaleU = 0x0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flFinalTextureScaleV = 0x160;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flFinalTextureOffsetU = 0x2C0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flFinalTextureOffsetV = 0x420;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flFinalTextureUVRotation = 0x580;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flZoomScale = 0x6E0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flDistortion = 0x840;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_bRandomizeOffsets = 0x9A0;  // bool 
	constexpr uint32_t m_bClampUVs = 0x9A1;  // bool 
	constexpr uint32_t m_nPerParticleBlend = 0x9A4;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleScale = 0x9A8;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleOffsetU = 0x9AC;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleOffsetV = 0x9B0;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleRotation = 0x9B4;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleZoom = 0x9B8;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleDistortion = 0x9BC;  // SpriteCardPerParticleScale_t 
}

// Offset: 0x0 
// N. Class: 35 
// Fields: 0 
namespace CParticleCollectionRendererFloatInput
{
}

// Offset: 0x7ffe1e03e560 
// N. Class: 36 
// Fields: 9 
namespace TextureGroup_t
{
	constexpr uint32_t m_bEnabled = 0x0;  // bool 
	constexpr uint32_t m_bReplaceTextureWithGradient = 0x1;  // bool 
	constexpr uint32_t m_hTexture = 0x8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_Gradient = 0x10;  // CColorGradient 
	constexpr uint32_t m_nTextureType = 0x28;  // SpriteCardTextureType_t 
	constexpr uint32_t m_nTextureChannels = 0x2C;  // SpriteCardTextureChannel_t 
	constexpr uint32_t m_nTextureBlendMode = 0x30;  // ParticleTextureLayerBlendType_t 
	constexpr uint32_t m_flTextureBlend = 0x38;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_TextureControls = 0x198;  // TextureControls_t 
}

// Offset: 0x7ffe1e03d2d0 
// N. Class: 37 
// Fields: 64 
namespace CBaseRendererSource2
{
	constexpr uint32_t m_flRadiusScale = 0x210;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flAlphaScale = 0x370;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flRollScale = 0x4D0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nAlpha2Field = 0x630;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecColorScale = 0x638;  // CParticleCollectionRendererVecInput 
	constexpr uint32_t m_nColorBlendType = 0xCB0;  // ParticleColorBlendType_t 
	constexpr uint32_t m_nShaderType = 0xCB4;  // SpriteCardShaderType_t 
	constexpr uint32_t m_strShaderOverride = 0xCB8;  // CUtlString 
	constexpr uint32_t m_flCenterXOffset = 0xCC0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flCenterYOffset = 0xE20;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flBumpStrength = 0xF80;  // float32 
	constexpr uint32_t m_nCropTextureOverride = 0xF84;  // ParticleSequenceCropOverride_t 
	constexpr uint32_t m_vecTexturesInput = 0xF88;  // CUtlVector< TextureGroup_t > 
	constexpr uint32_t m_flAnimationRate = 0xFA0;  // float32 
	constexpr uint32_t m_nAnimationType = 0xFA4;  // AnimationType_t 
	constexpr uint32_t m_bAnimateInFPS = 0xFA8;  // bool 
	constexpr uint32_t m_flMotionVectorScaleU = 0xFB0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flMotionVectorScaleV = 0x1110;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flSelfIllumAmount = 0x1270;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flDiffuseAmount = 0x13D0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flDiffuseClamp = 0x1530;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nLightingControlPoint = 0x1690;  // int32 
	constexpr uint32_t m_nSelfIllumPerParticle = 0x1694;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nOutputBlendMode = 0x1698;  // ParticleOutputBlendMode_t 
	constexpr uint32_t m_bGammaCorrectVertexColors = 0x169C;  // bool 
	constexpr uint32_t m_bSaturateColorPreAlphaBlend = 0x169D;  // bool 
	constexpr uint32_t m_flAddSelfAmount = 0x16A0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flDesaturation = 0x1800;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flOverbrightFactor = 0x1960;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nHSVShiftControlPoint = 0x1AC0;  // int32 
	constexpr uint32_t m_nFogType = 0x1AC4;  // ParticleFogType_t 
	constexpr uint32_t m_flFogAmount = 0x1AC8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_bTintByFOW = 0x1C28;  // bool 
	constexpr uint32_t m_bTintByGlobalLight = 0x1C29;  // bool 
	constexpr uint32_t m_nPerParticleAlphaReference = 0x1C2C;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nPerParticleAlphaRefWindow = 0x1C30;  // SpriteCardPerParticleScale_t 
	constexpr uint32_t m_nAlphaReferenceType = 0x1C34;  // ParticleAlphaReferenceType_t 
	constexpr uint32_t m_flAlphaReferenceSoftness = 0x1C38;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flSourceAlphaValueToMapToZero = 0x1D98;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flSourceAlphaValueToMapToOne = 0x1EF8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_bRefract = 0x2058;  // bool 
	constexpr uint32_t m_bRefractSolid = 0x2059;  // bool 
	constexpr uint32_t m_flRefractAmount = 0x2060;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nRefractBlurRadius = 0x21C0;  // int32 
	constexpr uint32_t m_nRefractBlurType = 0x21C4;  // BlurFilterType_t 
	constexpr uint32_t m_bOnlyRenderInEffectsBloomPass = 0x21C8;  // bool 
	constexpr uint32_t m_bOnlyRenderInEffectsWaterPass = 0x21C9;  // bool 
	constexpr uint32_t m_bUseMixedResolutionRendering = 0x21CA;  // bool 
	constexpr uint32_t m_bOnlyRenderInEffecsGameOverlay = 0x21CB;  // bool 
	constexpr uint32_t m_stencilTestID = 0x21CC;  // char[128] 
	constexpr uint32_t m_bStencilTestExclude = 0x224C;  // bool 
	constexpr uint32_t m_stencilWriteID = 0x224D;  // char[128] 
	constexpr uint32_t m_bWriteStencilOnDepthPass = 0x22CD;  // bool 
	constexpr uint32_t m_bWriteStencilOnDepthFail = 0x22CE;  // bool 
	constexpr uint32_t m_bReverseZBuffering = 0x22CF;  // bool 
	constexpr uint32_t m_bDisableZBuffering = 0x22D0;  // bool 
	constexpr uint32_t m_nFeatheringMode = 0x22D4;  // ParticleDepthFeatheringMode_t 
	constexpr uint32_t m_flFeatheringMinDist = 0x22D8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flFeatheringMaxDist = 0x2438;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flFeatheringFilter = 0x2598;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flDepthBias = 0x26F8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nSortMethod = 0x2858;  // ParticleSortingChoiceList_t 
	constexpr uint32_t m_bBlendFramesSeq0 = 0x285C;  // bool 
	constexpr uint32_t m_bMaxLuminanceBlendingSequence0 = 0x285D;  // bool 
}

// Offset: 0x0 
// N. Class: 38 
// Fields: 0 
namespace CParticleCollectionRendererVecInput
{
}

// Offset: 0x7ffe1e03ce60 
// N. Class: 39 
// Fields: 28 
namespace C_OP_RenderSprites
{
	constexpr uint32_t m_nSequenceOverride = 0x2AA8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nOrientationType = 0x2C08;  // ParticleOrientationChoiceList_t 
	constexpr uint32_t m_nOrientationControlPoint = 0x2C0C;  // int32 
	constexpr uint32_t m_bUseYawWithNormalAligned = 0x2C10;  // bool 
	constexpr uint32_t m_flMinSize = 0x2C18;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flMaxSize = 0x2D78;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flAlphaAdjustWithSizeAdjust = 0x2ED8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flStartFadeSize = 0x3038;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flEndFadeSize = 0x3198;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flStartFadeDot = 0x32F8;  // float32 
	constexpr uint32_t m_flEndFadeDot = 0x32FC;  // float32 
	constexpr uint32_t m_bDistanceAlpha = 0x3300;  // bool 
	constexpr uint32_t m_bSoftEdges = 0x3301;  // bool 
	constexpr uint32_t m_flEdgeSoftnessStart = 0x3304;  // float32 
	constexpr uint32_t m_flEdgeSoftnessEnd = 0x3308;  // float32 
	constexpr uint32_t m_bOutline = 0x330C;  // bool 
	constexpr uint32_t m_OutlineColor = 0x330D;  // Color 
	constexpr uint32_t m_nOutlineAlpha = 0x3314;  // int32 
	constexpr uint32_t m_flOutlineStart0 = 0x3318;  // float32 
	constexpr uint32_t m_flOutlineStart1 = 0x331C;  // float32 
	constexpr uint32_t m_flOutlineEnd0 = 0x3320;  // float32 
	constexpr uint32_t m_flOutlineEnd1 = 0x3324;  // float32 
	constexpr uint32_t m_nLightingMode = 0x3328;  // ParticleLightingQuality_t 
	constexpr uint32_t m_flLightingTessellation = 0x3330;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flLightingDirectionality = 0x3490;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_bParticleShadows = 0x35F0;  // bool 
	constexpr uint32_t m_flShadowDensity = 0x35F4;  // float32 
	constexpr uint32_t m_replicationParameters = 0x35F8;  // CReplicationParameters 
}

// Offset: 0x7ffe1e012050 
// N. Class: 40 
// Fields: 7 
namespace CReplicationParameters
{
	constexpr uint32_t m_nReplicationMode = 0x0;  // ParticleReplicationMode_t 
	constexpr uint32_t m_bScaleChildParticleRadii = 0x4;  // bool 
	constexpr uint32_t m_flMinRandomRadiusScale = 0x8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flMaxRandomRadiusScale = 0x168;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vMinRandomDisplacement = 0x2C8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vMaxRandomDisplacement = 0x940;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flModellingScale = 0xFB8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e036c80 
// N. Class: 41 
// Fields: 2 
namespace FloatInputMaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;  // CUtlString 
	constexpr uint32_t m_flInput = 0x8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e036bd0 
// N. Class: 42 
// Fields: 2 
namespace VecInputMaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;  // CUtlString 
	constexpr uint32_t m_vecInput = 0x8;  // CParticleCollectionVecInput 
}

// Offset: 0x7ffe1e0368f0 
// N. Class: 43 
// Fields: 22 
namespace C_OP_RenderCables
{
	constexpr uint32_t m_flRadiusScale = 0x210;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flAlphaScale = 0x370;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vecColorScale = 0x4D0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0xB48;  // ParticleColorBlendType_t 
	constexpr uint32_t m_hMaterial = 0xB50;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_nTextureRepetitionMode = 0xB58;  // TextureRepetitionMode_t 
	constexpr uint32_t m_flTextureRepeatsPerSegment = 0xB60;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flTextureRepeatsCircumference = 0xCC0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flColorMapOffsetV = 0xE20;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flColorMapOffsetU = 0xF80;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flNormalMapOffsetV = 0x10E0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flNormalMapOffsetU = 0x1240;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bDrawCableCaps = 0x13A0;  // bool 
	constexpr uint32_t m_flCapRoundness = 0x13A4;  // float32 
	constexpr uint32_t m_flCapOffsetAmount = 0x13A8;  // float32 
	constexpr uint32_t m_flTessScale = 0x13AC;  // float32 
	constexpr uint32_t m_nMinTesselation = 0x13B0;  // int32 
	constexpr uint32_t m_nMaxTesselation = 0x13B4;  // int32 
	constexpr uint32_t m_nRoundness = 0x13B8;  // int32 
	constexpr uint32_t m_LightingTransform = 0x13C0;  // CParticleTransformInput 
	constexpr uint32_t m_MaterialFloatVars = 0x1428;  // CUtlVector< FloatInputMaterialVariable_t > 
	constexpr uint32_t m_MaterialVecVars = 0x1458;  // CUtlVector< VecInputMaterialVariable_t > 
}

// Offset: 0x7ffe1dfff710 
// N. Class: 44 
// Fields: 8 
namespace CParticleTransformInput
{
	constexpr uint32_t m_nType = 0x10;  // ParticleTransformType_t 
	constexpr uint32_t m_NamedValue = 0x18;  // CParticleNamedValueRef 
	constexpr uint32_t m_bFollowNamedValue = 0x58;  // bool 
	constexpr uint32_t m_bSupportsDisabled = 0x59;  // bool 
	constexpr uint32_t m_bUseOrientation = 0x5A;  // bool 
	constexpr uint32_t m_nControlPoint = 0x5C;  // int32 
	constexpr uint32_t m_nControlPointRangeMax = 0x60;  // int32 
	constexpr uint32_t m_flEndCPGrowthTime = 0x64;  // float32 
}

// Offset: 0x0 
// N. Class: 45 
// Fields: 0 
namespace CParticleInput
{
}

// Offset: 0x7ffe1dffe630 
// N. Class: 46 
// Fields: 47 
namespace CParticleFloatInput
{
	constexpr uint32_t m_nType = 0x10;  // ParticleFloatType_t 
	constexpr uint32_t m_nMapType = 0x14;  // ParticleFloatMapType_t 
	constexpr uint32_t m_flLiteralValue = 0x18;  // float32 
	constexpr uint32_t m_NamedValue = 0x20;  // CParticleNamedValueRef 
	constexpr uint32_t m_nControlPoint = 0x60;  // int32 
	constexpr uint32_t m_nScalarAttribute = 0x64;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVectorAttribute = 0x68;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVectorComponent = 0x6C;  // int32 
	constexpr uint32_t m_flRandomMin = 0x70;  // float32 
	constexpr uint32_t m_flRandomMax = 0x74;  // float32 
	constexpr uint32_t m_bHasRandomSignFlip = 0x78;  // bool 
	constexpr uint32_t m_nRandomSeed = 0x7C;  // int32 
	constexpr uint32_t m_nRandomMode = 0x80;  // ParticleFloatRandomMode_t 
	constexpr uint32_t m_flLOD0 = 0x88;  // float32 
	constexpr uint32_t m_flLOD1 = 0x8C;  // float32 
	constexpr uint32_t m_flLOD2 = 0x90;  // float32 
	constexpr uint32_t m_flLOD3 = 0x94;  // float32 
	constexpr uint32_t m_nNoiseInputVectorAttribute = 0x98;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flNoiseOutputMin = 0x9C;  // float32 
	constexpr uint32_t m_flNoiseOutputMax = 0xA0;  // float32 
	constexpr uint32_t m_flNoiseScale = 0xA4;  // float32 
	constexpr uint32_t m_vecNoiseOffsetRate = 0xA8;  // Vector 
	constexpr uint32_t m_flNoiseOffset = 0xB4;  // float32 
	constexpr uint32_t m_nNoiseOctaves = 0xB8;  // int32 
	constexpr uint32_t m_nNoiseTurbulence = 0xBC;  // PFNoiseTurbulence_t 
	constexpr uint32_t m_nNoiseType = 0xC0;  // PFNoiseType_t 
	constexpr uint32_t m_nNoiseModifier = 0xC4;  // PFNoiseModifier_t 
	constexpr uint32_t m_flNoiseTurbulenceScale = 0xC8;  // float32 
	constexpr uint32_t m_flNoiseTurbulenceMix = 0xCC;  // float32 
	constexpr uint32_t m_flNoiseImgPreviewScale = 0xD0;  // float32 
	constexpr uint32_t m_bNoiseImgPreviewLive = 0xD4;  // bool 
	constexpr uint32_t m_flNoCameraFallback = 0xE0;  // float32 
	constexpr uint32_t m_bUseBoundsCenter = 0xE4;  // bool 
	constexpr uint32_t m_nInputMode = 0xE8;  // ParticleFloatInputMode_t 
	constexpr uint32_t m_flMultFactor = 0xEC;  // float32 
	constexpr uint32_t m_flInput0 = 0xF0;  // float32 
	constexpr uint32_t m_flInput1 = 0xF4;  // float32 
	constexpr uint32_t m_flOutput0 = 0xF8;  // float32 
	constexpr uint32_t m_flOutput1 = 0xFC;  // float32 
	constexpr uint32_t m_flNotchedRangeMin = 0x100;  // float32 
	constexpr uint32_t m_flNotchedRangeMax = 0x104;  // float32 
	constexpr uint32_t m_flNotchedOutputOutside = 0x108;  // float32 
	constexpr uint32_t m_flNotchedOutputInside = 0x10C;  // float32 
	constexpr uint32_t m_nRoundType = 0x110;  // ParticleFloatRoundType_t 
	constexpr uint32_t m_nBiasType = 0x114;  // ParticleFloatBiasType_t 
	constexpr uint32_t m_flBiasParameter = 0x118;  // float32 
	constexpr uint32_t m_Curve = 0x120;  // CPiecewiseCurve 
}

// Offset: 0x0 
// N. Class: 47 
// Fields: 0 
namespace CParticleRemapFloatInput
{
}

// Offset: 0x7ffe1dfff8f0 
// N. Class: 48 
// Fields: 3 
namespace CParticleModelInput
{
	constexpr uint32_t m_nType = 0x10;  // ParticleModelType_t 
	constexpr uint32_t m_NamedValue = 0x18;  // CParticleNamedValueRef 
	constexpr uint32_t m_nControlPoint = 0x58;  // int32 
}

// Offset: 0x7ffe1dffef40 
// N. Class: 49 
// Fields: 23 
namespace CParticleVecInput
{
	constexpr uint32_t m_nType = 0x10;  // ParticleVecType_t 
	constexpr uint32_t m_vLiteralValue = 0x14;  // Vector 
	constexpr uint32_t m_LiteralColor = 0x20;  // Color 
	constexpr uint32_t m_NamedValue = 0x28;  // CParticleNamedValueRef 
	constexpr uint32_t m_bFollowNamedValue = 0x68;  // bool 
	constexpr uint32_t m_nVectorAttribute = 0x6C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vVectorAttributeScale = 0x70;  // Vector 
	constexpr uint32_t m_nControlPoint = 0x7C;  // int32 
	constexpr uint32_t m_nDeltaControlPoint = 0x80;  // int32 
	constexpr uint32_t m_vCPValueScale = 0x84;  // Vector 
	constexpr uint32_t m_vCPRelativePosition = 0x90;  // Vector 
	constexpr uint32_t m_vCPRelativeDir = 0x9C;  // Vector 
	constexpr uint32_t m_FloatComponentX = 0xA8;  // CParticleFloatInput 
	constexpr uint32_t m_FloatComponentY = 0x208;  // CParticleFloatInput 
	constexpr uint32_t m_FloatComponentZ = 0x368;  // CParticleFloatInput 
	constexpr uint32_t m_FloatInterp = 0x4C8;  // CParticleFloatInput 
	constexpr uint32_t m_flInterpInput0 = 0x628;  // float32 
	constexpr uint32_t m_flInterpInput1 = 0x62C;  // float32 
	constexpr uint32_t m_vInterpOutput0 = 0x630;  // Vector 
	constexpr uint32_t m_vInterpOutput1 = 0x63C;  // Vector 
	constexpr uint32_t m_Gradient = 0x648;  // CColorGradient 
	constexpr uint32_t m_vRandomMin = 0x660;  // Vector 
	constexpr uint32_t m_vRandomMax = 0x66C;  // Vector 
}

// Offset: 0x7ffe1dfffb58 
// N. Class: 50 
// Fields: 1 
namespace PARTICLE_EHANDLE__
{
	constexpr uint32_t unused = 0x0;  // int32 
}

// Offset: 0x7ffe1dfffbf0 
// N. Class: 51 
// Fields: 1 
namespace PARTICLE_WORLD_HANDLE__
{
	constexpr uint32_t unused = 0x0;  // int32 
}

// Offset: 0x0 
// N. Class: 52 
// Fields: 0 
namespace IParticleEffect
{
}

// Offset: 0x0 
// N. Class: 53 
// Fields: 0 
namespace CParticleCollectionBindingInstance
{
}

// Offset: 0x0 
// N. Class: 54 
// Fields: 0 
namespace CParticleBindingRealPulse
{
}

// Offset: 0x7ffe1dfff460 
// N. Class: 55 
// Fields: 6 
namespace ParticleNamedValueConfiguration_t
{
	constexpr uint32_t m_ConfigName = 0x0;  // CUtlString 
	constexpr uint32_t m_ConfigValue = 0x8;  // KeyValues3 
	constexpr uint32_t m_iAttachType = 0x18;  // ParticleAttachment_t 
	constexpr uint32_t m_BoundEntityPath = 0x20;  // CUtlString 
	constexpr uint32_t m_strEntityScope = 0x28;  // CUtlString 
	constexpr uint32_t m_strAttachmentName = 0x30;  // CUtlString 
}

// Offset: 0x7ffe1dfff9e0 
// N. Class: 56 
// Fields: 2 
namespace CParticleVariableRef
{
	constexpr uint32_t m_variableName = 0x0;  // CKV3MemberNameWithStorage 
	constexpr uint32_t m_variableType = 0x38;  // PulseValueType_t 
}

// Offset: 0x0 
// N. Class: 57 
// Fields: 0 
namespace CParticleProperty
{
}

// Offset: 0x7ffe1dffff50 
// N. Class: 58 
// Fields: 32 
namespace CNewParticleEffect
{
	constexpr uint32_t m_pNext = 0x10;  // CNewParticleEffect* 
	constexpr uint32_t m_pPrev = 0x18;  // CNewParticleEffect* 
	constexpr uint32_t m_pParticles = 0x20;  // IParticleCollection* 
	constexpr uint32_t m_pDebugName = 0x28;  // char* 
	constexpr uint32_t m_bDontRemove = 0x0;  // bitfield:1 
	constexpr uint32_t m_bRemove = 0x0;  // bitfield:1 
	constexpr uint32_t m_bNeedsBBoxUpdate = 0x0;  // bitfield:1 
	constexpr uint32_t m_bIsFirstFrame = 0x0;  // bitfield:1 
	constexpr uint32_t m_bAutoUpdateBBox = 0x0;  // bitfield:1 
	constexpr uint32_t m_bAllocated = 0x0;  // bitfield:1 
	constexpr uint32_t m_bSimulate = 0x0;  // bitfield:1 
	constexpr uint32_t m_bShouldPerformCullCheck = 0x0;  // bitfield:1 
	constexpr uint32_t m_bForceNoDraw = 0x0;  // bitfield:1 
	constexpr uint32_t m_bShouldSave = 0x0;  // bitfield:1 
	constexpr uint32_t m_bDisableAggregation = 0x0;  // bitfield:1 
	constexpr uint32_t m_bShouldSimulateDuringGamePaused = 0x0;  // bitfield:1 
	constexpr uint32_t m_bShouldCheckFoW = 0x0;  // bitfield:1 
	constexpr uint32_t m_vSortOrigin = 0x40;  // Vector 
	constexpr uint32_t m_flScale = 0x4C;  // float32 
	constexpr uint32_t m_hOwner = 0x50;  // PARTICLE_EHANDLE__* 
	constexpr uint32_t m_pOwningParticleProperty = 0x58;  // CParticleProperty* 
	constexpr uint32_t m_flFreezeTransitionStart = 0x70;  // float32 
	constexpr uint32_t m_flFreezeTransitionDuration = 0x74;  // float32 
	constexpr uint32_t m_flFreezeTransitionOverride = 0x78;  // float32 
	constexpr uint32_t m_bFreezeTransitionActive = 0x7C;  // bool 
	constexpr uint32_t m_bFreezeTargetState = 0x7D;  // bool 
	constexpr uint32_t m_bCanFreeze = 0x7E;  // bool 
	constexpr uint32_t m_LastMin = 0x80;  // Vector 
	constexpr uint32_t m_LastMax = 0x8C;  // Vector 
	constexpr uint32_t m_nSplitScreenUser = 0x98;  // CSplitScreenSlot 
	constexpr uint32_t m_vecAggregationCenter = 0x9C;  // Vector 
	constexpr uint32_t m_RefCount = 0xC0;  // int32 
}

// Offset: 0x7ffe1e015de0 
// N. Class: 59 
// Fields: 5 
namespace C_OP_ConstrainDistance
{
	constexpr uint32_t m_fMinDistance = 0x1C0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_fMaxDistance = 0x320;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nControlPointNumber = 0x480;  // int32 
	constexpr uint32_t m_CenterOffset = 0x484;  // Vector 
	constexpr uint32_t m_bGlobalCenter = 0x490;  // bool 
}

// Offset: 0x7ffe1e015d70 
// N. Class: 60 
// Fields: 2 
namespace C_OP_CollideWithSelf
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMinimumSpeed = 0x320;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e015ce0 
// N. Class: 61 
// Fields: 2 
namespace C_OP_CollideWithParentParticles
{
	constexpr uint32_t m_flParentRadiusScale = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRadiusScale = 0x320;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e016380 
// N. Class: 62 
// Fields: 8 
namespace C_OP_ConstrainDistanceToPath
{
	constexpr uint32_t m_fMinDistance = 0x1C0;  // float32 
	constexpr uint32_t m_flMaxDistance0 = 0x1C4;  // float32 
	constexpr uint32_t m_flMaxDistanceMid = 0x1C8;  // float32 
	constexpr uint32_t m_flMaxDistance1 = 0x1CC;  // float32 
	constexpr uint32_t m_PathParameters = 0x1D0;  // CPathParameters 
	constexpr uint32_t m_flTravelTime = 0x210;  // float32 
	constexpr uint32_t m_nFieldScale = 0x214;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nManualTField = 0x218;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e015f20 
// N. Class: 63 
// Fields: 5 
namespace C_OP_ConstrainDistanceToUserSpecifiedPath
{
	constexpr uint32_t m_fMinDistance = 0x1C0;  // float32 
	constexpr uint32_t m_flMaxDistance = 0x1C4;  // float32 
	constexpr uint32_t m_flTimeScale = 0x1C8;  // float32 
	constexpr uint32_t m_bLoopedPath = 0x1CC;  // bool 
	constexpr uint32_t m_pointList = 0x1D0;  // CUtlVector< PointDefinitionWithTimeValues_t > 
}

// Offset: 0x7ffe1e015bc0 
// N. Class: 64 
// Fields: 8 
namespace C_OP_PlanarConstraint
{
	constexpr uint32_t m_PointOnPlane = 0x1C0;  // Vector 
	constexpr uint32_t m_PlaneNormal = 0x1CC;  // Vector 
	constexpr uint32_t m_nControlPointNumber = 0x1D8;  // int32 
	constexpr uint32_t m_bGlobalOrigin = 0x1DC;  // bool 
	constexpr uint32_t m_bGlobalNormal = 0x1DD;  // bool 
	constexpr uint32_t m_flRadiusScale = 0x1E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMaximumDistanceToCP = 0x340;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bUseOldCode = 0x4A0;  // bool 
}

// Offset: 0x0 
// N. Class: 65 
// Fields: 0 
namespace C_OP_WorldCollideConstraint
{
}

// Offset: 0x7ffe1e016480 
// N. Class: 66 
// Fields: 27 
namespace C_OP_WorldTraceConstraint
{
	constexpr uint32_t m_nCP = 0x1C0;  // int32 
	constexpr uint32_t m_vecCpOffset = 0x1C4;  // Vector 
	constexpr uint32_t m_nCollisionMode = 0x1D0;  // ParticleCollisionMode_t 
	constexpr uint32_t m_nCollisionModeMin = 0x1D4;  // ParticleCollisionMode_t 
	constexpr uint32_t m_nTraceSet = 0x1D8;  // ParticleTraceSet_t 
	constexpr uint32_t m_CollisionGroupName = 0x1DC;  // char[128] 
	constexpr uint32_t m_bWorldOnly = 0x25C;  // bool 
	constexpr uint32_t m_bBrushOnly = 0x25D;  // bool 
	constexpr uint32_t m_bIncludeWater = 0x25E;  // bool 
	constexpr uint32_t m_nIgnoreCP = 0x260;  // int32 
	constexpr uint32_t m_flCpMovementTolerance = 0x264;  // float32 
	constexpr uint32_t m_flRetestRate = 0x268;  // float32 
	constexpr uint32_t m_flTraceTolerance = 0x26C;  // float32 
	constexpr uint32_t m_flCollisionConfirmationSpeed = 0x270;  // float32 
	constexpr uint32_t m_nMaxTracesPerFrame = 0x274;  // float32 
	constexpr uint32_t m_flRadiusScale = 0x278;  // CPerParticleFloatInput 
	constexpr uint32_t m_flBounceAmount = 0x3D8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flSlideAmount = 0x538;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRandomDirScale = 0x698;  // CPerParticleFloatInput 
	constexpr uint32_t m_bDecayBounce = 0x7F8;  // bool 
	constexpr uint32_t m_bKillonContact = 0x7F9;  // bool 
	constexpr uint32_t m_flMinSpeed = 0x7FC;  // float32 
	constexpr uint32_t m_bSetNormal = 0x800;  // bool 
	constexpr uint32_t m_nStickOnCollisionField = 0x804;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flStopSpeed = 0x808;  // CPerParticleFloatInput 
	constexpr uint32_t m_nEntityStickDataField = 0x968;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nEntityStickNormalField = 0x96C;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e0162b0 
// N. Class: 67 
// Fields: 5 
namespace C_OP_BoxConstraint
{
	constexpr uint32_t m_vecMin = 0x1C0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vecMax = 0x838;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nCP = 0xEB0;  // int32 
	constexpr uint32_t m_bLocalSpace = 0xEB4;  // bool 
	constexpr uint32_t m_bAccountForRadius = 0xEB5;  // bool 
}

// Offset: 0x7ffe1e015d28 
// N. Class: 68 
// Fields: 1 
namespace C_OP_ShapeMatchingConstraint
{
	constexpr uint32_t m_flShapeRestorationTime = 0x1C0;  // float32 
}

// Offset: 0x7ffe1e015ad0 
// N. Class: 69 
// Fields: 5 
namespace C_OP_RopeSpringConstraint
{
	constexpr uint32_t m_flRestLength = 0x1C0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flMinDistance = 0x320;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flMaxDistance = 0x480;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flAdjustmentScale = 0x5E0;  // float32 
	constexpr uint32_t m_flInitialRestingLength = 0x5E8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e0160f0 
// N. Class: 70 
// Fields: 5 
namespace C_OP_SpringToVectorConstraint
{
	constexpr uint32_t m_flRestLength = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMinDistance = 0x320;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMaxDistance = 0x480;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRestingLength = 0x5E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecAnchorVector = 0x740;  // CPerParticleVecInput 
}

// Offset: 0x7ffe1e016050 
// N. Class: 71 
// Fields: 2 
namespace C_OP_ConstrainLineLength
{
	constexpr uint32_t m_flMinDistance = 0x1C0;  // float32 
	constexpr uint32_t m_flMaxDistance = 0x1C4;  // float32 
}

// Offset: 0x7ffe1e0195e0 
// N. Class: 72 
// Fields: 11 
namespace C_INIT_RingWave
{
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_flParticlesPerOrbit = 0x230;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInitialRadius = 0x390;  // CPerParticleFloatInput 
	constexpr uint32_t m_flThickness = 0x4F0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInitialSpeedMin = 0x650;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInitialSpeedMax = 0x7B0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRoll = 0x910;  // CPerParticleFloatInput 
	constexpr uint32_t m_flPitch = 0xA70;  // CPerParticleFloatInput 
	constexpr uint32_t m_flYaw = 0xBD0;  // CPerParticleFloatInput 
	constexpr uint32_t m_bEvenDistribution = 0xD30;  // bool 
	constexpr uint32_t m_bXYVelocityOnly = 0xD31;  // bool 
}

// Offset: 0x7ffe1e01df20 
// N. Class: 73 
// Fields: 7 
namespace C_INIT_CreateSpiralSphere
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nOverrideCP = 0x1CC;  // int32 
	constexpr uint32_t m_nDensity = 0x1D0;  // int32 
	constexpr uint32_t m_flInitialRadius = 0x1D4;  // float32 
	constexpr uint32_t m_flInitialSpeedMin = 0x1D8;  // float32 
	constexpr uint32_t m_flInitialSpeedMax = 0x1DC;  // float32 
	constexpr uint32_t m_bUseParticleCount = 0x1E0;  // bool 
}

// Offset: 0x7ffe1e01cda0 
// N. Class: 74 
// Fields: 10 
namespace C_INIT_CreateInEpitrochoid
{
	constexpr uint32_t m_nComponent1 = 0x1C8;  // int32 
	constexpr uint32_t m_nComponent2 = 0x1CC;  // int32 
	constexpr uint32_t m_TransformInput = 0x1D0;  // CParticleTransformInput 
	constexpr uint32_t m_flParticleDensity = 0x238;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOffset = 0x398;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRadius1 = 0x4F8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRadius2 = 0x658;  // CPerParticleFloatInput 
	constexpr uint32_t m_bUseCount = 0x7B8;  // bool 
	constexpr uint32_t m_bUseLocalCoords = 0x7B9;  // bool 
	constexpr uint32_t m_bOffsetExistingPos = 0x7BA;  // bool 
}

// Offset: 0x7ffe1e01d490 
// N. Class: 75 
// Fields: 14 
namespace C_INIT_CreatePhyllotaxis
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nScaleCP = 0x1CC;  // int32 
	constexpr uint32_t m_nComponent = 0x1D0;  // int32 
	constexpr uint32_t m_fRadCentCore = 0x1D4;  // float32 
	constexpr uint32_t m_fRadPerPoint = 0x1D8;  // float32 
	constexpr uint32_t m_fRadPerPointTo = 0x1DC;  // float32 
	constexpr uint32_t m_fpointAngle = 0x1E0;  // float32 
	constexpr uint32_t m_fsizeOverall = 0x1E4;  // float32 
	constexpr uint32_t m_fRadBias = 0x1E8;  // float32 
	constexpr uint32_t m_fMinRad = 0x1EC;  // float32 
	constexpr uint32_t m_fDistBias = 0x1F0;  // float32 
	constexpr uint32_t m_bUseLocalCoords = 0x1F4;  // bool 
	constexpr uint32_t m_bUseWithContEmit = 0x1F5;  // bool 
	constexpr uint32_t m_bUseOrigRadius = 0x1F6;  // bool 
}

// Offset: 0x7ffe1e01c390 
// N. Class: 76 
// Fields: 16 
namespace C_INIT_CreateOnModel
{
	constexpr uint32_t m_modelInput = 0x1C8;  // CParticleModelInput 
	constexpr uint32_t m_transformInput = 0x228;  // CParticleTransformInput 
	constexpr uint32_t m_nForceInModel = 0x290;  // int32 
	constexpr uint32_t m_bScaleToVolume = 0x294;  // bool 
	constexpr uint32_t m_bEvenDistribution = 0x295;  // bool 
	constexpr uint32_t m_nDesiredHitbox = 0x298;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nHitboxValueFromControlPointIndex = 0x3F8;  // int32 
	constexpr uint32_t m_vecHitBoxScale = 0x400;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flBoneVelocity = 0xA78;  // float32 
	constexpr uint32_t m_flMaxBoneVelocity = 0xA7C;  // float32 
	constexpr uint32_t m_vecDirectionBias = 0xA80;  // CParticleCollectionVecInput 
	constexpr uint32_t m_HitboxSetName = 0x10F8;  // char[128] 
	constexpr uint32_t m_bLocalCoords = 0x1178;  // bool 
	constexpr uint32_t m_bUseBones = 0x1179;  // bool 
	constexpr uint32_t m_bUseMesh = 0x117A;  // bool 
	constexpr uint32_t m_flShellSize = 0x1180;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e019a70 
// N. Class: 77 
// Fields: 14 
namespace C_INIT_CreateOnModelAtHeight
{
	constexpr uint32_t m_bUseBones = 0x1C8;  // bool 
	constexpr uint32_t m_bForceZ = 0x1C9;  // bool 
	constexpr uint32_t m_nControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_nHeightCP = 0x1D0;  // int32 
	constexpr uint32_t m_bUseWaterHeight = 0x1D4;  // bool 
	constexpr uint32_t m_flDesiredHeight = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vecHitBoxScale = 0x338;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vecDirectionBias = 0x9B0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nBiasType = 0x1028;  // ParticleHitboxBiasType_t 
	constexpr uint32_t m_bLocalCoords = 0x102C;  // bool 
	constexpr uint32_t m_bPreferMovingBoxes = 0x102D;  // bool 
	constexpr uint32_t m_HitboxSetName = 0x102E;  // char[128] 
	constexpr uint32_t m_flHitboxVelocityScale = 0x10B0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flMaxBoneVelocity = 0x1210;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e01d030 
// N. Class: 78 
// Fields: 9 
namespace C_INIT_SetHitboxToClosest
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nDesiredHitbox = 0x1CC;  // int32 
	constexpr uint32_t m_vecHitBoxScale = 0x1D0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_HitboxSetName = 0x848;  // char[128] 
	constexpr uint32_t m_bUseBones = 0x8C8;  // bool 
	constexpr uint32_t m_bUseClosestPointOnHitbox = 0x8C9;  // bool 
	constexpr uint32_t m_nTestType = 0x8CC;  // ClosestPointTestType_t 
	constexpr uint32_t m_flHybridRatio = 0x8D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bUpdatePosition = 0xA30;  // bool 
}

// Offset: 0x7ffe1e01c790 
// N. Class: 79 
// Fields: 10 
namespace C_INIT_SetHitboxToModel
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nForceInModel = 0x1CC;  // int32 
	constexpr uint32_t m_bEvenDistribution = 0x1D0;  // bool 
	constexpr uint32_t m_nDesiredHitbox = 0x1D4;  // int32 
	constexpr uint32_t m_vecHitBoxScale = 0x1D8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vecDirectionBias = 0x850;  // Vector 
	constexpr uint32_t m_bMaintainHitbox = 0x85C;  // bool 
	constexpr uint32_t m_bUseBones = 0x85D;  // bool 
	constexpr uint32_t m_HitboxSetName = 0x85E;  // char[128] 
	constexpr uint32_t m_flShellSize = 0x8E0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e01e570 
// N. Class: 80 
// Fields: 14 
namespace C_INIT_CreateWithinSphereTransform
{
	constexpr uint32_t m_fRadiusMin = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_fRadiusMax = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecDistanceBias = 0x488;  // CPerParticleVecInput 
	constexpr uint32_t m_vecDistanceBiasAbs = 0xB00;  // Vector 
	constexpr uint32_t m_TransformInput = 0xB10;  // CParticleTransformInput 
	constexpr uint32_t m_fSpeedMin = 0xB78;  // CPerParticleFloatInput 
	constexpr uint32_t m_fSpeedMax = 0xCD8;  // CPerParticleFloatInput 
	constexpr uint32_t m_fSpeedRandExp = 0xE38;  // float32 
	constexpr uint32_t m_bLocalCoords = 0xE3C;  // bool 
	constexpr uint32_t m_flEndCPGrowthTime = 0xE40;  // float32 
	constexpr uint32_t m_LocalCoordinateSystemSpeedMin = 0xE48;  // CPerParticleVecInput 
	constexpr uint32_t m_LocalCoordinateSystemSpeedMax = 0x14C0;  // CPerParticleVecInput 
	constexpr uint32_t m_nFieldOutput = 0x1B38;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldVelocity = 0x1B3C;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e01b710 
// N. Class: 81 
// Fields: 5 
namespace C_INIT_CreateWithinBox
{
	constexpr uint32_t m_vecMin = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecMax = 0x840;  // CPerParticleVecInput 
	constexpr uint32_t m_nControlPointNumber = 0xEB8;  // int32 
	constexpr uint32_t m_bLocalSpace = 0xEBC;  // bool 
	constexpr uint32_t m_randomnessParameters = 0xEC0;  // CRandomNumberGeneratorParameters 
}

// Offset: 0x7ffe1e01ede0 
// N. Class: 82 
// Fields: 10 
namespace C_INIT_CreateOnGrid
{
	constexpr uint32_t m_nXCount = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nYCount = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nZCount = 0x488;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nXSpacing = 0x5E8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nYSpacing = 0x748;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nZSpacing = 0x8A8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nControlPointNumber = 0xA08;  // int32 
	constexpr uint32_t m_bLocalSpace = 0xA0C;  // bool 
	constexpr uint32_t m_bCenter = 0xA0D;  // bool 
	constexpr uint32_t m_bHollow = 0xA0E;  // bool 
}

// Offset: 0x7ffe1e01e7c0 
// N. Class: 83 
// Fields: 6 
namespace C_INIT_PositionOffset
{
	constexpr uint32_t m_OffsetMin = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_OffsetMax = 0x840;  // CPerParticleVecInput 
	constexpr uint32_t m_TransformInput = 0xEB8;  // CParticleTransformInput 
	constexpr uint32_t m_bLocalCoords = 0xF20;  // bool 
	constexpr uint32_t m_bProportional = 0xF21;  // bool 
	constexpr uint32_t m_randomnessParameters = 0xF24;  // CRandomNumberGeneratorParameters 
}

// Offset: 0x7ffe1e01d380 
// N. Class: 84 
// Fields: 3 
namespace C_INIT_PositionOffsetToCP
{
	constexpr uint32_t m_nControlPointNumberStart = 0x1C8;  // int32 
	constexpr uint32_t m_nControlPointNumberEnd = 0x1CC;  // int32 
	constexpr uint32_t m_bLocalCoords = 0x1D0;  // bool 
}

// Offset: 0x7ffe1e01a470 
// N. Class: 85 
// Fields: 13 
namespace C_INIT_PositionPlaceOnGround
{
	constexpr uint32_t m_flOffset = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMaxTraceLength = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_CollisionGroupName = 0x488;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x508;  // ParticleTraceSet_t 
	constexpr uint32_t m_nTraceMissBehavior = 0x518;  // ParticleTraceMissBehavior_t 
	constexpr uint32_t m_bIncludeWater = 0x51C;  // bool 
	constexpr uint32_t m_bSetNormal = 0x51D;  // bool 
	constexpr uint32_t m_bSetPXYZOnly = 0x51E;  // bool 
	constexpr uint32_t m_bTraceAlongNormal = 0x51F;  // bool 
	constexpr uint32_t m_bOffsetonColOnly = 0x520;  // bool 
	constexpr uint32_t m_flOffsetByRadiusFactor = 0x524;  // float32 
	constexpr uint32_t m_nPreserveOffsetCP = 0x528;  // int32 
	constexpr uint32_t m_nIgnoreCP = 0x52C;  // int32 
}

// Offset: 0x7ffe1e01f6c0 
// N. Class: 86 
// Fields: 3 
namespace C_INIT_VelocityFromNormal
{
	constexpr uint32_t m_fSpeedMin = 0x1C8;  // float32 
	constexpr uint32_t m_fSpeedMax = 0x1CC;  // float32 
	constexpr uint32_t m_bIgnoreDt = 0x1D0;  // bool 
}

// Offset: 0x7ffe1e01b3c0 
// N. Class: 87 
// Fields: 7 
namespace C_INIT_VelocityRandom
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_fSpeedMin = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_fSpeedMax = 0x330;  // CPerParticleFloatInput 
	constexpr uint32_t m_LocalCoordinateSystemSpeedMin = 0x490;  // CPerParticleVecInput 
	constexpr uint32_t m_LocalCoordinateSystemSpeedMax = 0xB08;  // CPerParticleVecInput 
	constexpr uint32_t m_bIgnoreDT = 0x1180;  // bool 
	constexpr uint32_t m_randomnessParameters = 0x1184;  // CRandomNumberGeneratorParameters 
}

// Offset: 0x7ffe1e019790 
// N. Class: 88 
// Fields: 10 
namespace C_INIT_InitialVelocityNoise
{
	constexpr uint32_t m_vecAbsVal = 0x1C8;  // Vector 
	constexpr uint32_t m_vecAbsValInv = 0x1D4;  // Vector 
	constexpr uint32_t m_vecOffsetLoc = 0x1E0;  // CPerParticleVecInput 
	constexpr uint32_t m_flOffset = 0x858;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecOutputMin = 0x9B8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecOutputMax = 0x1030;  // CPerParticleVecInput 
	constexpr uint32_t m_flNoiseScale = 0x16A8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flNoiseScaleLoc = 0x1808;  // CPerParticleFloatInput 
	constexpr uint32_t m_TransformInput = 0x1968;  // CParticleTransformInput 
	constexpr uint32_t m_bIgnoreDt = 0x19D0;  // bool 
}

// Offset: 0x7ffe1e01bdd0 
// N. Class: 89 
// Fields: 5 
namespace C_INIT_InitialVelocityFromHitbox
{
	constexpr uint32_t m_flVelocityMin = 0x1C8;  // float32 
	constexpr uint32_t m_flVelocityMax = 0x1CC;  // float32 
	constexpr uint32_t m_nControlPointNumber = 0x1D0;  // int32 
	constexpr uint32_t m_HitboxSetName = 0x1D4;  // char[128] 
	constexpr uint32_t m_bUseBones = 0x254;  // bool 
}

// Offset: 0x7ffe1e01f090 
// N. Class: 90 
// Fields: 5 
namespace C_INIT_VelocityRadialRandom
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_fSpeedMin = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_fSpeedMax = 0x330;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecLocalCoordinateSystemSpeedScale = 0x490;  // Vector 
	constexpr uint32_t m_bIgnoreDelta = 0x49D;  // bool 
}

// Offset: 0x7ffe1e018f10 
// N. Class: 91 
// Fields: 3 
namespace C_INIT_RandomLifeTime
{
	constexpr uint32_t m_fLifetimeMin = 0x1C8;  // float32 
	constexpr uint32_t m_fLifetimeMax = 0x1CC;  // float32 
	constexpr uint32_t m_fLifetimeRandExponent = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e018bd0 
// N. Class: 92 
// Fields: 4 
namespace C_INIT_RandomScalar
{
	constexpr uint32_t m_flMin = 0x1C8;  // float32 
	constexpr uint32_t m_flMax = 0x1CC;  // float32 
	constexpr uint32_t m_flExponent = 0x1D0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1D4;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e01d400 
// N. Class: 93 
// Fields: 4 
namespace C_INIT_RandomVector
{
	constexpr uint32_t m_vecMin = 0x1C8;  // Vector 
	constexpr uint32_t m_vecMax = 0x1D4;  // Vector 
	constexpr uint32_t m_nFieldOutput = 0x1E0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_randomnessParameters = 0x1E4;  // CRandomNumberGeneratorParameters 
}

// Offset: 0x7ffe1e01aab0 
// N. Class: 94 
// Fields: 4 
namespace C_INIT_RandomVectorComponent
{
	constexpr uint32_t m_flMin = 0x1C8;  // float32 
	constexpr uint32_t m_flMax = 0x1CC;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nComponent = 0x1D4;  // int32 
}

// Offset: 0x7ffe1e019380 
// N. Class: 95 
// Fields: 6 
namespace C_INIT_AddVectorToVector
{
	constexpr uint32_t m_vecScale = 0x1C8;  // Vector 
	constexpr uint32_t m_nFieldOutput = 0x1D4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldInput = 0x1D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vOffsetMin = 0x1DC;  // Vector 
	constexpr uint32_t m_vOffsetMax = 0x1E8;  // Vector 
	constexpr uint32_t m_randomnessParameters = 0x1F4;  // CRandomNumberGeneratorParameters 
}

// Offset: 0x7ffe1e01bd50 
// N. Class: 96 
// Fields: 3 
namespace C_INIT_RandomAlphaWindowThreshold
{
	constexpr uint32_t m_flMin = 0x1C8;  // float32 
	constexpr uint32_t m_flMax = 0x1CC;  // float32 
	constexpr uint32_t m_flExponent = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e01d680 
// N. Class: 97 
// Fields: 3 
namespace C_INIT_RandomRadius
{
	constexpr uint32_t m_flRadiusMin = 0x1C8;  // float32 
	constexpr uint32_t m_flRadiusMax = 0x1CC;  // float32 
	constexpr uint32_t m_flRadiusRandExponent = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e01b280 
// N. Class: 98 
// Fields: 4 
namespace C_INIT_RandomAlpha
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAlphaMin = 0x1CC;  // int32 
	constexpr uint32_t m_nAlphaMax = 0x1D0;  // int32 
	constexpr uint32_t m_flAlphaRandExponent = 0x1DC;  // float32 
}

// Offset: 0x7ffe1e019450 
// N. Class: 99 
// Fields: 6 
namespace CGeneralRandomRotation
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flDegrees = 0x1CC;  // float32 
	constexpr uint32_t m_flDegreesMin = 0x1D0;  // float32 
	constexpr uint32_t m_flDegreesMax = 0x1D4;  // float32 
	constexpr uint32_t m_flRotationRandExponent = 0x1D8;  // float32 
	constexpr uint32_t m_bRandomlyFlipDirection = 0x1DC;  // bool 
}

// Offset: 0x0 
// N. Class: 100 
// Fields: 0 
namespace C_INIT_RandomRotation
{
}

// Offset: 0x7ffe1e01f1c0 
// N. Class: 101 
// Fields: 3 
namespace C_INIT_Orient2DRelToCP
{
	constexpr uint32_t m_nCP = 0x1C8;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flRotOffset = 0x1D0;  // float32 
}

// Offset: 0x0 
// N. Class: 102 
// Fields: 0 
namespace C_INIT_RandomRotationSpeed
{
}

// Offset: 0x0 
// N. Class: 103 
// Fields: 0 
namespace C_INIT_RandomYaw
{
}

// Offset: 0x7ffe1e01e9e0 
// N. Class: 104 
// Fields: 10 
namespace C_INIT_RandomColor
{
	constexpr uint32_t m_ColorMin = 0x1E4;  // Color 
	constexpr uint32_t m_ColorMax = 0x1E8;  // Color 
	constexpr uint32_t m_TintMin = 0x1EC;  // Color 
	constexpr uint32_t m_TintMax = 0x1F0;  // Color 
	constexpr uint32_t m_flTintPerc = 0x1F4;  // float32 
	constexpr uint32_t m_flUpdateThreshold = 0x1F8;  // float32 
	constexpr uint32_t m_nTintCP = 0x1FC;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x200;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nTintBlendMode = 0x204;  // ParticleColorBlendMode_t 
	constexpr uint32_t m_flLightAmplification = 0x208;  // float32 
}

// Offset: 0x7ffe1e01c6b0 
// N. Class: 105 
// Fields: 7 
namespace C_INIT_ColorLitPerParticle
{
	constexpr uint32_t m_ColorMin = 0x1E0;  // Color 
	constexpr uint32_t m_ColorMax = 0x1E4;  // Color 
	constexpr uint32_t m_TintMin = 0x1E8;  // Color 
	constexpr uint32_t m_TintMax = 0x1EC;  // Color 
	constexpr uint32_t m_flTintPerc = 0x1F0;  // float32 
	constexpr uint32_t m_nTintBlendMode = 0x1F4;  // ParticleColorBlendMode_t 
	constexpr uint32_t m_flLightAmplification = 0x1F8;  // float32 
}

// Offset: 0x7ffe1e01eb60 
// N. Class: 106 
// Fields: 3 
namespace C_INIT_RandomTrailLength
{
	constexpr uint32_t m_flMinLength = 0x1C8;  // float32 
	constexpr uint32_t m_flMaxLength = 0x1CC;  // float32 
	constexpr uint32_t m_flLengthRandExponent = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e01ed00 
// N. Class: 107 
// Fields: 5 
namespace C_INIT_RandomSequence
{
	constexpr uint32_t m_nSequenceMin = 0x1C8;  // int32 
	constexpr uint32_t m_nSequenceMax = 0x1CC;  // int32 
	constexpr uint32_t m_bShuffle = 0x1D0;  // bool 
	constexpr uint32_t m_bLinear = 0x1D1;  // bool 
	constexpr uint32_t m_WeightedList = 0x1D8;  // CUtlVector< SequenceWeightedList_t > 
}

// Offset: 0x7ffe1e01ab90 
// N. Class: 108 
// Fields: 4 
namespace C_INIT_SequenceFromCP
{
	constexpr uint32_t m_bKillUnused = 0x1C8;  // bool 
	constexpr uint32_t m_bRadiusScale = 0x1C9;  // bool 
	constexpr uint32_t m_nCP = 0x1CC;  // int32 
	constexpr uint32_t m_vecOffset = 0x1D0;  // Vector 
}

// Offset: 0x7ffe1e01f2b0 
// N. Class: 109 
// Fields: 3 
namespace C_INIT_RandomModelSequence
{
	constexpr uint32_t m_ActivityName = 0x1C8;  // char[256] 
	constexpr uint32_t m_SequenceName = 0x2C8;  // char[256] 
	constexpr uint32_t m_hModel = 0x3C8;  // CStrongHandle< InfoForResourceTypeCModel > 
}

// Offset: 0x7ffe1e019ed8 
// N. Class: 110 
// Fields: 1 
namespace C_INIT_ScaleVelocity
{
	constexpr uint32_t m_vecScale = 0x1C8;  // CParticleCollectionVecInput 
}

// Offset: 0x7ffe1e01e3c0 
// N. Class: 111 
// Fields: 10 
namespace C_INIT_PositionWarp
{
	constexpr uint32_t m_vecWarpMin = 0x1C8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vecWarpMax = 0x840;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nScaleControlPointNumber = 0xEB8;  // int32 
	constexpr uint32_t m_nControlPointNumber = 0xEBC;  // int32 
	constexpr uint32_t m_nRadiusComponent = 0xEC0;  // int32 
	constexpr uint32_t m_flWarpTime = 0xEC4;  // float32 
	constexpr uint32_t m_flWarpStartTime = 0xEC8;  // float32 
	constexpr uint32_t m_flPrevPosScale = 0xECC;  // float32 
	constexpr uint32_t m_bInvertWarp = 0xED0;  // bool 
	constexpr uint32_t m_bUseCount = 0xED1;  // bool 
}

// Offset: 0x7ffe1e01d7b0 
// N. Class: 112 
// Fields: 6 
namespace C_INIT_PositionWarpScalar
{
	constexpr uint32_t m_vecWarpMin = 0x1C8;  // Vector 
	constexpr uint32_t m_vecWarpMax = 0x1D4;  // Vector 
	constexpr uint32_t m_InputValue = 0x1E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flPrevPosScale = 0x340;  // float32 
	constexpr uint32_t m_nScaleControlPointNumber = 0x344;  // int32 
	constexpr uint32_t m_nControlPointNumber = 0x348;  // int32 
}

// Offset: 0x7ffe1e019f50 
// N. Class: 113 
// Fields: 10 
namespace C_INIT_CreationNoise
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bAbsVal = 0x1CC;  // bool 
	constexpr uint32_t m_bAbsValInv = 0x1CD;  // bool 
	constexpr uint32_t m_flOffset = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flNoiseScale = 0x1DC;  // float32 
	constexpr uint32_t m_flNoiseScaleLoc = 0x1E0;  // float32 
	constexpr uint32_t m_vecOffsetLoc = 0x1E4;  // Vector 
	constexpr uint32_t m_flWorldTimeScale = 0x1F0;  // float32 
}

// Offset: 0x7ffe1e01cae0 
// N. Class: 114 
// Fields: 5 
namespace C_INIT_CreateAlongPath
{
	constexpr uint32_t m_fMaxDistance = 0x1C8;  // float32 
	constexpr uint32_t m_PathParams = 0x1D0;  // CPathParameters 
	constexpr uint32_t m_bUseRandomCPs = 0x210;  // bool 
	constexpr uint32_t m_vEndOffset = 0x214;  // Vector 
	constexpr uint32_t m_bSaveOffset = 0x220;  // bool 
}

// Offset: 0x7ffe1e01acf0 
// N. Class: 115 
// Fields: 7 
namespace C_INIT_MoveBetweenPoints
{
	constexpr uint32_t m_flSpeedMin = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flSpeedMax = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_flEndSpread = 0x488;  // CPerParticleFloatInput 
	constexpr uint32_t m_flStartOffset = 0x5E8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flEndOffset = 0x748;  // CPerParticleFloatInput 
	constexpr uint32_t m_nEndControlPointNumber = 0x8A8;  // int32 
	constexpr uint32_t m_bTrailBias = 0x8AC;  // bool 
}

// Offset: 0x7ffe1e01e120 
// N. Class: 116 
// Fields: 11 
namespace C_INIT_RemapScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1DC;  // float32 
	constexpr uint32_t m_flStartTime = 0x1E0;  // float32 
	constexpr uint32_t m_flEndTime = 0x1E4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1E8;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x1EC;  // bool 
	constexpr uint32_t m_flRemapBias = 0x1F0;  // float32 
}

// Offset: 0x7ffe1e01dd90 
// N. Class: 117 
// Fields: 12 
namespace C_INIT_RemapParticleCountToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nInputMin = 0x1CC;  // int32 
	constexpr uint32_t m_nInputMax = 0x1D0;  // int32 
	constexpr uint32_t m_nScaleControlPoint = 0x1D4;  // int32 
	constexpr uint32_t m_nScaleControlPointField = 0x1D8;  // int32 
	constexpr uint32_t m_flOutputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E0;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1E4;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x1E8;  // bool 
	constexpr uint32_t m_bInvert = 0x1E9;  // bool 
	constexpr uint32_t m_bWrap = 0x1EA;  // bool 
	constexpr uint32_t m_flRemapBias = 0x1EC;  // float32 
}

// Offset: 0x7ffe1e01c2d0 
// N. Class: 118 
// Fields: 4 
namespace C_INIT_RemapParticleCountToNamedModelElementScalar
{
	constexpr uint32_t m_hModel = 0x1F8;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_outputMinName = 0x200;  // CUtlString 
	constexpr uint32_t m_outputMaxName = 0x208;  // CUtlString 
	constexpr uint32_t m_bModelFromRenderer = 0x210;  // bool 
}

// Offset: 0x0 
// N. Class: 119 
// Fields: 0 
namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar
{
}

// Offset: 0x0 
// N. Class: 120 
// Fields: 0 
namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar
{
}

// Offset: 0x0 
// N. Class: 121 
// Fields: 0 
namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar
{
}

// Offset: 0x7ffe1e01f160 
// N. Class: 122 
// Fields: 2 
namespace C_INIT_InheritVelocity
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_flVelocityScale = 0x1CC;  // float32 
}

// Offset: 0x7ffe1e01f370 
// N. Class: 123 
// Fields: 4 
namespace C_INIT_VelocityFromCP
{
	constexpr uint32_t m_velocityInput = 0x1C8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_transformInput = 0x840;  // CParticleTransformInput 
	constexpr uint32_t m_flVelocityScale = 0x8A8;  // float32 
	constexpr uint32_t m_bDirectionOnly = 0x8AC;  // bool 
}

// Offset: 0x7ffe1e01c5a0 
// N. Class: 124 
// Fields: 8 
namespace C_INIT_AgeNoise
{
	constexpr uint32_t m_bAbsVal = 0x1C8;  // bool 
	constexpr uint32_t m_bAbsValInv = 0x1C9;  // bool 
	constexpr uint32_t m_flOffset = 0x1CC;  // float32 
	constexpr uint32_t m_flAgeMin = 0x1D0;  // float32 
	constexpr uint32_t m_flAgeMax = 0x1D4;  // float32 
	constexpr uint32_t m_flNoiseScale = 0x1D8;  // float32 
	constexpr uint32_t m_flNoiseScaleLoc = 0x1DC;  // float32 
	constexpr uint32_t m_vecOffsetLoc = 0x1E0;  // Vector 
}

// Offset: 0x7ffe1e019198 
// N. Class: 125 
// Fields: 1 
namespace C_INIT_SequenceLifeTime
{
	constexpr uint32_t m_flFramerate = 0x1C8;  // float32 
}

// Offset: 0x7ffe1e018cd0 
// N. Class: 126 
// Fields: 12 
namespace C_INIT_RemapScalarToVector
{
	constexpr uint32_t m_nFieldInput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D4;  // float32 
	constexpr uint32_t m_vecOutputMin = 0x1D8;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x1E4;  // Vector 
	constexpr uint32_t m_flStartTime = 0x1F0;  // float32 
	constexpr uint32_t m_flEndTime = 0x1F4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1F8;  // ParticleSetMethod_t 
	constexpr uint32_t m_nControlPointNumber = 0x1FC;  // int32 
	constexpr uint32_t m_bLocalCoords = 0x200;  // bool 
	constexpr uint32_t m_flRemapBias = 0x204;  // float32 
}

// Offset: 0x7ffe1e019250 
// N. Class: 127 
// Fields: 5 
namespace C_INIT_OffsetVectorToVector
{
	constexpr uint32_t m_nFieldInput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecOutputMin = 0x1D0;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x1DC;  // Vector 
	constexpr uint32_t m_randomnessParameters = 0x1E8;  // CRandomNumberGeneratorParameters 
}

// Offset: 0x7ffe1e01a730 
// N. Class: 128 
// Fields: 6 
namespace C_INIT_CreateSequentialPathV2
{
	constexpr uint32_t m_fMaxDistance = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flNumToAssign = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bLoop = 0x488;  // bool 
	constexpr uint32_t m_bCPPairs = 0x489;  // bool 
	constexpr uint32_t m_bSaveOffset = 0x48A;  // bool 
	constexpr uint32_t m_PathParams = 0x490;  // CPathParameters 
}

// Offset: 0x7ffe1e01f9d0 
// N. Class: 129 
// Fields: 6 
namespace C_INIT_CreateSequentialPath
{
	constexpr uint32_t m_fMaxDistance = 0x1C8;  // float32 
	constexpr uint32_t m_flNumToAssign = 0x1CC;  // float32 
	constexpr uint32_t m_bLoop = 0x1D0;  // bool 
	constexpr uint32_t m_bCPPairs = 0x1D1;  // bool 
	constexpr uint32_t m_bSaveOffset = 0x1D2;  // bool 
	constexpr uint32_t m_PathParams = 0x1E0;  // CPathParameters 
}

// Offset: 0x7ffe1e01bb90 
// N. Class: 130 
// Fields: 13 
namespace C_INIT_InitialRepulsionVelocity
{
	constexpr uint32_t m_CollisionGroupName = 0x1C8;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x248;  // ParticleTraceSet_t 
	constexpr uint32_t m_vecOutputMin = 0x24C;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x258;  // Vector 
	constexpr uint32_t m_nControlPointNumber = 0x264;  // int32 
	constexpr uint32_t m_bPerParticle = 0x268;  // bool 
	constexpr uint32_t m_bTranslate = 0x269;  // bool 
	constexpr uint32_t m_bProportional = 0x26A;  // bool 
	constexpr uint32_t m_flTraceLength = 0x26C;  // float32 
	constexpr uint32_t m_bPerParticleTR = 0x270;  // bool 
	constexpr uint32_t m_bInherit = 0x271;  // bool 
	constexpr uint32_t m_nChildCP = 0x274;  // int32 
	constexpr uint32_t m_nChildGroupID = 0x278;  // int32 
}

// Offset: 0x7ffe1e01ba58 
// N. Class: 131 
// Fields: 1 
namespace C_INIT_RandomYawFlip
{
	constexpr uint32_t m_flPercent = 0x1C8;  // float32 
}

// Offset: 0x7ffe1e01f750 
// N. Class: 132 
// Fields: 2 
namespace C_INIT_RandomSecondSequence
{
	constexpr uint32_t m_nSequenceMin = 0x1C8;  // int32 
	constexpr uint32_t m_nSequenceMax = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e01d8f0 
// N. Class: 133 
// Fields: 11 
namespace C_INIT_RemapCPtoScalar
{
	constexpr uint32_t m_nCPInput = 0x1C8;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nField = 0x1D0;  // int32 
	constexpr uint32_t m_flInputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E0;  // float32 
	constexpr uint32_t m_flStartTime = 0x1E4;  // float32 
	constexpr uint32_t m_flEndTime = 0x1E8;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1EC;  // ParticleSetMethod_t 
	constexpr uint32_t m_flRemapBias = 0x1F0;  // float32 
}

// Offset: 0x7ffe1e01bf90 
// N. Class: 134 
// Fields: 13 
namespace C_INIT_RemapTransformToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vInputMin = 0x1CC;  // Vector 
	constexpr uint32_t m_vInputMax = 0x1D8;  // Vector 
	constexpr uint32_t m_vOutputMin = 0x1E4;  // Vector 
	constexpr uint32_t m_vOutputMax = 0x1F0;  // Vector 
	constexpr uint32_t m_TransformInput = 0x200;  // CParticleTransformInput 
	constexpr uint32_t m_LocalSpaceTransform = 0x268;  // CParticleTransformInput 
	constexpr uint32_t m_flStartTime = 0x2D0;  // float32 
	constexpr uint32_t m_flEndTime = 0x2D4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x2D8;  // ParticleSetMethod_t 
	constexpr uint32_t m_bOffset = 0x2DC;  // bool 
	constexpr uint32_t m_bAccelerate = 0x2DD;  // bool 
	constexpr uint32_t m_flRemapBias = 0x2E0;  // float32 
}

// Offset: 0x7ffe1e01c9b0 
// N. Class: 135 
// Fields: 9 
namespace C_INIT_ChaoticAttractor
{
	constexpr uint32_t m_flAParm = 0x1C8;  // float32 
	constexpr uint32_t m_flBParm = 0x1CC;  // float32 
	constexpr uint32_t m_flCParm = 0x1D0;  // float32 
	constexpr uint32_t m_flDParm = 0x1D4;  // float32 
	constexpr uint32_t m_flScale = 0x1D8;  // float32 
	constexpr uint32_t m_flSpeedMin = 0x1DC;  // float32 
	constexpr uint32_t m_flSpeedMax = 0x1E0;  // float32 
	constexpr uint32_t m_nBaseCP = 0x1E4;  // int32 
	constexpr uint32_t m_bUniformSpeed = 0x1E8;  // bool 
}

// Offset: 0x7ffe1e01b8f0 
// N. Class: 136 
// Fields: 5 
namespace C_INIT_CreateFromParentParticles
{
	constexpr uint32_t m_flVelocityScale = 0x1C8;  // float32 
	constexpr uint32_t m_flIncrement = 0x1CC;  // float32 
	constexpr uint32_t m_bRandomDistribution = 0x1D0;  // bool 
	constexpr uint32_t m_nRandomSeed = 0x1D4;  // int32 
	constexpr uint32_t m_bSubFrame = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e019960 
// N. Class: 137 
// Fields: 5 
namespace C_INIT_InheritFromParentParticles
{
	constexpr uint32_t m_flScale = 0x1C8;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nIncrement = 0x1D0;  // int32 
	constexpr uint32_t m_bRandomDistribution = 0x1D4;  // bool 
	constexpr uint32_t m_nRandomSeed = 0x1D8;  // int32 
}

// Offset: 0x7ffe1e01c8f0 
// N. Class: 138 
// Fields: 4 
namespace C_INIT_CreateFromCPs
{
	constexpr uint32_t m_nIncrement = 0x1C8;  // int32 
	constexpr uint32_t m_nMinCP = 0x1CC;  // int32 
	constexpr uint32_t m_nMaxCP = 0x1D0;  // int32 
	constexpr uint32_t m_nDynamicCPCount = 0x1D8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e01ae40 
// N. Class: 139 
// Fields: 15 
namespace C_INIT_DistanceToCPInit
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInputMax = 0x330;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMin = 0x490;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5F0;  // CPerParticleFloatInput 
	constexpr uint32_t m_nStartCP = 0x750;  // int32 
	constexpr uint32_t m_bLOS = 0x754;  // bool 
	constexpr uint32_t m_CollisionGroupName = 0x755;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x7D8;  // ParticleTraceSet_t 
	constexpr uint32_t m_flMaxTraceLength = 0x7E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flLOSScale = 0x940;  // float32 
	constexpr uint32_t m_nSetMethod = 0x944;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x948;  // bool 
	constexpr uint32_t m_vecDistanceScale = 0x94C;  // Vector 
	constexpr uint32_t m_flRemapBias = 0x958;  // float32 
}

// Offset: 0x7ffe1e01d170 
// N. Class: 140 
// Fields: 8 
namespace C_INIT_LifespanFromVelocity
{
	constexpr uint32_t m_vecComponentScale = 0x1C8;  // Vector 
	constexpr uint32_t m_flTraceOffset = 0x1D4;  // float32 
	constexpr uint32_t m_flMaxTraceLength = 0x1D8;  // float32 
	constexpr uint32_t m_flTraceTolerance = 0x1DC;  // float32 
	constexpr uint32_t m_nMaxPlanes = 0x1E0;  // int32 
	constexpr uint32_t m_CollisionGroupName = 0x1E8;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x268;  // ParticleTraceSet_t 
	constexpr uint32_t m_bIncludeWater = 0x278;  // bool 
}

// Offset: 0x7ffe1e01e2c0 
// N. Class: 141 
// Fields: 3 
namespace C_INIT_CreateFromPlaneCache
{
	constexpr uint32_t m_vecOffsetMin = 0x1C8;  // Vector 
	constexpr uint32_t m_vecOffsetMax = 0x1D4;  // Vector 
	constexpr uint32_t m_bUseNormal = 0x1E1;  // bool 
}

// Offset: 0x7ffe1e01e020 
// N. Class: 142 
// Fields: 5 
namespace C_INIT_ModelCull
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_bBoundBox = 0x1CC;  // bool 
	constexpr uint32_t m_bCullOutside = 0x1CD;  // bool 
	constexpr uint32_t m_bUseBones = 0x1CE;  // bool 
	constexpr uint32_t m_HitboxSetName = 0x1CF;  // char[128] 
}

// Offset: 0x7ffe1e01efe0 
// N. Class: 143 
// Fields: 3 
namespace C_INIT_DistanceCull
{
	constexpr uint32_t m_nControlPoint = 0x1C8;  // int32 
	constexpr uint32_t m_flDistance = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bCullInside = 0x330;  // bool 
}

// Offset: 0x7ffe1e01d740 
// N. Class: 144 
// Fields: 3 
namespace C_INIT_PlaneCull
{
	constexpr uint32_t m_nControlPoint = 0x1C8;  // int32 
	constexpr uint32_t m_flDistance = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bCullInside = 0x330;  // bool 
}

// Offset: 0x7ffe1e01b1c0 
// N. Class: 145 
// Fields: 2 
namespace C_INIT_DistanceToNeighborCull
{
	constexpr uint32_t m_flDistance = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_bIncludeRadii = 0x328;  // bool 
}

// Offset: 0x7ffe1e01e8a0 
// N. Class: 146 
// Fields: 8 
namespace C_INIT_RtEnvCull
{
	constexpr uint32_t m_vecTestDir = 0x1C8;  // Vector 
	constexpr uint32_t m_vecTestNormal = 0x1D4;  // Vector 
	constexpr uint32_t m_bUseVelocity = 0x1E0;  // bool 
	constexpr uint32_t m_bCullOnMiss = 0x1E1;  // bool 
	constexpr uint32_t m_bLifeAdjust = 0x1E2;  // bool 
	constexpr uint32_t m_RtEnvName = 0x1E3;  // char[128] 
	constexpr uint32_t m_nRTEnvCP = 0x264;  // int32 
	constexpr uint32_t m_nComponent = 0x268;  // int32 
}

// Offset: 0x7ffe1e01bf40 
// N. Class: 147 
// Fields: 2 
namespace C_INIT_NormalAlignToCP
{
	constexpr uint32_t m_transformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_nControlPointAxis = 0x230;  // ParticleControlPointAxis_t 
}

// Offset: 0x7ffe1e01b840 
// N. Class: 148 
// Fields: 5 
namespace C_INIT_NormalOffset
{
	constexpr uint32_t m_OffsetMin = 0x1C8;  // Vector 
	constexpr uint32_t m_OffsetMax = 0x1D4;  // Vector 
	constexpr uint32_t m_nControlPointNumber = 0x1E0;  // int32 
	constexpr uint32_t m_bLocalCoords = 0x1E4;  // bool 
	constexpr uint32_t m_bNormalize = 0x1E5;  // bool 
}

// Offset: 0x7ffe1e01b510 
// N. Class: 149 
// Fields: 10 
namespace C_INIT_RemapSpeedToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_flStartTime = 0x1D0;  // float32 
	constexpr uint32_t m_flEndTime = 0x1D4;  // float32 
	constexpr uint32_t m_flInputMin = 0x1D8;  // float32 
	constexpr uint32_t m_flInputMax = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1E0;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1E8;  // ParticleSetMethod_t 
	constexpr uint32_t m_bPerParticle = 0x1EC;  // bool 
}

// Offset: 0x7ffe1e01a820 
// N. Class: 150 
// Fields: 10 
namespace C_INIT_InitFromCPSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nAttributeToRead = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAttributeToWrite = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nLocalSpaceCP = 0x1D4;  // int32 
	constexpr uint32_t m_bRandom = 0x1D8;  // bool 
	constexpr uint32_t m_bReverse = 0x1D9;  // bool 
	constexpr uint32_t m_nSnapShotIncrement = 0x1E0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nManualSnapshotIndex = 0x340;  // CPerParticleFloatInput 
	constexpr uint32_t m_nRandomSeed = 0x4A0;  // int32 
	constexpr uint32_t m_bLocalSpaceAngles = 0x4A4;  // bool 
}

// Offset: 0x7ffe1e01da70 
// N. Class: 151 
// Fields: 19 
namespace C_INIT_InitSkinnedPositionFromCPSnapshot
{
	constexpr uint32_t m_nSnapshotControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_bRandom = 0x1D0;  // bool 
	constexpr uint32_t m_nRandomSeed = 0x1D4;  // int32 
	constexpr uint32_t m_bRigid = 0x1D8;  // bool 
	constexpr uint32_t m_bSetNormal = 0x1D9;  // bool 
	constexpr uint32_t m_bIgnoreDt = 0x1DA;  // bool 
	constexpr uint32_t m_flMinNormalVelocity = 0x1DC;  // float32 
	constexpr uint32_t m_flMaxNormalVelocity = 0x1E0;  // float32 
	constexpr uint32_t m_nIndexType = 0x1E4;  // SnapshotIndexType_t 
	constexpr uint32_t m_flReadIndex = 0x1E8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flIncrement = 0x348;  // float32 
	constexpr uint32_t m_nFullLoopIncrement = 0x34C;  // int32 
	constexpr uint32_t m_nSnapShotStartPoint = 0x350;  // int32 
	constexpr uint32_t m_flBoneVelocity = 0x354;  // float32 
	constexpr uint32_t m_flBoneVelocityMax = 0x358;  // float32 
	constexpr uint32_t m_bCopyColor = 0x35C;  // bool 
	constexpr uint32_t m_bCopyAlpha = 0x35D;  // bool 
	constexpr uint32_t m_bSetRadius = 0x35E;  // bool 
}

// Offset: 0x7ffe1e018fa0 
// N. Class: 152 
// Fields: 2 
namespace C_INIT_InitFromParentKilled
{
	constexpr uint32_t m_nAttributeToCopy = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nEventType = 0x1CC;  // EventTypeSelection_t 
}

// Offset: 0x7ffe1e01b310 
// N. Class: 153 
// Fields: 5 
namespace C_INIT_InitFromVectorFieldSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nLocalSpaceCP = 0x1CC;  // int32 
	constexpr uint32_t m_nWeightUpdateCP = 0x1D0;  // int32 
	constexpr uint32_t m_bUseVerticalVelocity = 0x1D4;  // bool 
	constexpr uint32_t m_vecScale = 0x1D8;  // CPerParticleVecInput 
}

// Offset: 0x7ffe1e0190c0 
// N. Class: 154 
// Fields: 6 
namespace C_INIT_RemapInitialDirectionToTransformToVector
{
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_nFieldOutput = 0x230;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x234;  // float32 
	constexpr uint32_t m_flOffsetRot = 0x238;  // float32 
	constexpr uint32_t m_vecOffsetAxis = 0x23C;  // Vector 
	constexpr uint32_t m_bNormalize = 0x248;  // bool 
}

// Offset: 0x7ffe1e01fa90 
// N. Class: 155 
// Fields: 4 
namespace C_INIT_RemapInitialTransformDirectionToRotation
{
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_nFieldOutput = 0x230;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOffsetRot = 0x234;  // float32 
	constexpr uint32_t m_nComponent = 0x238;  // int32 
}

// Offset: 0x7ffe1e01cf88 
// N. Class: 156 
// Fields: 1 
namespace C_INIT_RemapQAnglesToRotation
{
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
}

// Offset: 0x7ffe1e01f820 
// N. Class: 157 
// Fields: 4 
namespace C_INIT_RemapTransformOrientationToRotations
{
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_vecRotation = 0x230;  // Vector 
	constexpr uint32_t m_bUseQuat = 0x23C;  // bool 
	constexpr uint32_t m_bWriteNormal = 0x23D;  // bool 
}

// Offset: 0x7ffe1e01ba90 
// N. Class: 158 
// Fields: 4 
namespace C_INIT_SetRigidAttachment
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nFieldInput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bLocalSpace = 0x1D4;  // bool 
}

// Offset: 0x7ffe1e01c140 
// N. Class: 159 
// Fields: 5 
namespace C_INIT_RemapInitialVisibilityScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1DC;  // float32 
}

// Offset: 0x7ffe1e019e78 
// N. Class: 160 
// Fields: 1 
namespace C_INIT_RadiusFromCPObject
{
	constexpr uint32_t m_nControlPoint = 0x1C8;  // int32 
}

// Offset: 0x7ffe1e019c50 
// N. Class: 161 
// Fields: 8 
namespace C_INIT_InitialSequenceFromModel
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutputAnim = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E0;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1E4;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e01cca0 
// N. Class: 162 
// Fields: 6 
namespace C_INIT_GlobalScale
{
	constexpr uint32_t m_flScale = 0x1C8;  // float32 
	constexpr uint32_t m_nScaleControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_nControlPointNumber = 0x1D0;  // int32 
	constexpr uint32_t m_bScaleRadius = 0x1D4;  // bool 
	constexpr uint32_t m_bScalePosition = 0x1D5;  // bool 
	constexpr uint32_t m_bScaleVelocity = 0x1D6;  // bool 
}

// Offset: 0x7ffe1e01fe00 
// N. Class: 163 
// Fields: 5 
namespace C_INIT_PointList
{
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_pointList = 0x1D0;  // CUtlVector< PointDefinition_t > 
	constexpr uint32_t m_bPlaceAlongPath = 0x1E8;  // bool 
	constexpr uint32_t m_bClosedLoop = 0x1E9;  // bool 
	constexpr uint32_t m_nNumPointsAlongPath = 0x1EC;  // int32 
}

// Offset: 0x7ffe1e01b650 
// N. Class: 164 
// Fields: 6 
namespace C_INIT_RandomNamedModelElement
{
	constexpr uint32_t m_hModel = 0x1C8;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_names = 0x1D0;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_bShuffle = 0x1E8;  // bool 
	constexpr uint32_t m_bLinear = 0x1E9;  // bool 
	constexpr uint32_t m_bModelFromRenderer = 0x1EA;  // bool 
	constexpr uint32_t m_nFieldOutput = 0x1EC;  // ParticleAttributeIndex_t 
}

// Offset: 0x0 
// N. Class: 165 
// Fields: 0 
namespace C_INIT_RandomNamedModelSequence
{
}

// Offset: 0x0 
// N. Class: 166 
// Fields: 0 
namespace C_INIT_RandomNamedModelBodyPart
{
}

// Offset: 0x0 
// N. Class: 167 
// Fields: 0 
namespace C_INIT_RandomNamedModelMeshGroup
{
}

// Offset: 0x7ffe1e01a200 
// N. Class: 168 
// Fields: 7 
namespace C_INIT_RemapNamedModelElementToScalar
{
	constexpr uint32_t m_hModel = 0x1C8;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_names = 0x1D0;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_values = 0x1E8;  // CUtlVector< float32 > 
	constexpr uint32_t m_nFieldInput = 0x200;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x204;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x208;  // ParticleSetMethod_t 
	constexpr uint32_t m_bModelFromRenderer = 0x20C;  // bool 
}

// Offset: 0x0 
// N. Class: 169 
// Fields: 0 
namespace C_INIT_RemapNamedModelSequenceToScalar
{
}

// Offset: 0x0 
// N. Class: 170 
// Fields: 0 
namespace C_INIT_RemapNamedModelBodyPartToScalar
{
}

// Offset: 0x0 
// N. Class: 171 
// Fields: 0 
namespace C_INIT_RemapNamedModelMeshGroupToScalar
{
}

// Offset: 0x7ffe1e01f460 
// N. Class: 172 
// Fields: 18 
namespace C_INIT_StatusEffect
{
	constexpr uint32_t m_nDetail2Combo = 0x1C8;  // Detail2Combo_t 
	constexpr uint32_t m_flDetail2Rotation = 0x1CC;  // float32 
	constexpr uint32_t m_flDetail2Scale = 0x1D0;  // float32 
	constexpr uint32_t m_flDetail2BlendFactor = 0x1D4;  // float32 
	constexpr uint32_t m_flColorWarpIntensity = 0x1D8;  // float32 
	constexpr uint32_t m_flDiffuseWarpBlendToFull = 0x1DC;  // float32 
	constexpr uint32_t m_flEnvMapIntensity = 0x1E0;  // float32 
	constexpr uint32_t m_flAmbientScale = 0x1E4;  // float32 
	constexpr uint32_t m_specularColor = 0x1E8;  // Color 
	constexpr uint32_t m_flSpecularScale = 0x1EC;  // float32 
	constexpr uint32_t m_flSpecularExponent = 0x1F0;  // float32 
	constexpr uint32_t m_flSpecularExponentBlendToFull = 0x1F4;  // float32 
	constexpr uint32_t m_flSpecularBlendToFull = 0x1F8;  // float32 
	constexpr uint32_t m_rimLightColor = 0x1FC;  // Color 
	constexpr uint32_t m_flRimLightScale = 0x200;  // float32 
	constexpr uint32_t m_flReflectionsTintByBaseBlendToNone = 0x204;  // float32 
	constexpr uint32_t m_flMetalnessBlendToFull = 0x208;  // float32 
	constexpr uint32_t m_flSelfIllumBlendToFull = 0x20C;  // float32 
}

// Offset: 0x7ffe1e01fb90 
// N. Class: 173 
// Fields: 19 
namespace C_INIT_StatusEffectCitadel
{
	constexpr uint32_t m_flSFXColorWarpAmount = 0x1C8;  // float32 
	constexpr uint32_t m_flSFXNormalAmount = 0x1CC;  // float32 
	constexpr uint32_t m_flSFXMetalnessAmount = 0x1D0;  // float32 
	constexpr uint32_t m_flSFXRoughnessAmount = 0x1D4;  // float32 
	constexpr uint32_t m_flSFXSelfIllumAmount = 0x1D8;  // float32 
	constexpr uint32_t m_flSFXSScale = 0x1DC;  // float32 
	constexpr uint32_t m_flSFXSScrollX = 0x1E0;  // float32 
	constexpr uint32_t m_flSFXSScrollY = 0x1E4;  // float32 
	constexpr uint32_t m_flSFXSScrollZ = 0x1E8;  // float32 
	constexpr uint32_t m_flSFXSOffsetX = 0x1EC;  // float32 
	constexpr uint32_t m_flSFXSOffsetY = 0x1F0;  // float32 
	constexpr uint32_t m_flSFXSOffsetZ = 0x1F4;  // float32 
	constexpr uint32_t m_nDetailCombo = 0x1F8;  // DetailCombo_t 
	constexpr uint32_t m_flSFXSDetailAmount = 0x1FC;  // float32 
	constexpr uint32_t m_flSFXSDetailScale = 0x200;  // float32 
	constexpr uint32_t m_flSFXSDetailScrollX = 0x204;  // float32 
	constexpr uint32_t m_flSFXSDetailScrollY = 0x208;  // float32 
	constexpr uint32_t m_flSFXSDetailScrollZ = 0x20C;  // float32 
	constexpr uint32_t m_flSFXSUseModelUVs = 0x210;  // float32 
}

// Offset: 0x7ffe1e01ef30 
// N. Class: 174 
// Fields: 5 
namespace C_INIT_CreateParticleImpulse
{
	constexpr uint32_t m_InputRadius = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_InputMagnitude = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_nFalloffFunction = 0x488;  // ParticleFalloffFunction_t 
	constexpr uint32_t m_InputFalloffExp = 0x490;  // CPerParticleFloatInput 
	constexpr uint32_t m_nImpulseType = 0x5F0;  // ParticleImpulseType_t 
}

// Offset: 0x7ffe1e01bb40 
// N. Class: 175 
// Fields: 2 
namespace C_INIT_QuantizeFloat
{
	constexpr uint32_t m_InputValue = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_nOutputField = 0x328;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e01a320 
// N. Class: 176 
// Fields: 6 
namespace C_INIT_SetAttributeToScalarExpression
{
	constexpr uint32_t m_nExpression = 0x1C8;  // ScalarExpressionType_t 
	constexpr uint32_t m_flInput1 = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInput2 = 0x330;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputRemap = 0x490;  // CParticleRemapFloatInput 
	constexpr uint32_t m_nOutputField = 0x5F0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x5F4;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e01a0c0 
// N. Class: 177 
// Fields: 6 
namespace C_INIT_SetVectorAttributeToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C8;  // VectorExpressionType_t 
	constexpr uint32_t m_vInput1 = 0x1D0;  // CPerParticleVecInput 
	constexpr uint32_t m_vInput2 = 0x848;  // CPerParticleVecInput 
	constexpr uint32_t m_nOutputField = 0xEC0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0xEC4;  // ParticleSetMethod_t 
	constexpr uint32_t m_bNormalizedOutput = 0xEC8;  // bool 
}

// Offset: 0x7ffe1e019dc0 
// N. Class: 178 
// Fields: 2 
namespace C_INIT_InitFloatCollection
{
	constexpr uint32_t m_InputValue = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nOutputField = 0x328;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e01b9c0 
// N. Class: 179 
// Fields: 4 
namespace C_INIT_InitFloat
{
	constexpr uint32_t m_InputValue = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_nOutputField = 0x328;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x32C;  // ParticleSetMethod_t 
	constexpr uint32_t m_InputStrength = 0x330;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e01f7d0 
// N. Class: 180 
// Fields: 2 
namespace C_INIT_InitVecCollection
{
	constexpr uint32_t m_InputValue = 0x1C8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nOutputField = 0x840;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e01f8d0 
// N. Class: 181 
// Fields: 5 
namespace C_INIT_InitVec
{
	constexpr uint32_t m_InputValue = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_nOutputField = 0x840;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x844;  // ParticleSetMethod_t 
	constexpr uint32_t m_bNormalizedOutput = 0x848;  // bool 
	constexpr uint32_t m_bWritePreviousPosition = 0x849;  // bool 
}

// Offset: 0x7ffe1e016f60 
// N. Class: 182 
// Fields: 7 
namespace C_OP_InstantaneousEmitter
{
	constexpr uint32_t m_nParticlesToEmit = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flStartTime = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInitFromKilledParentParticles = 0x488;  // float32 
	constexpr uint32_t m_nEventType = 0x48C;  // EventTypeSelection_t 
	constexpr uint32_t m_flParentParticleScale = 0x490;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nMaxEmittedPerFrame = 0x5F0;  // int32 
	constexpr uint32_t m_nSnapshotControlPoint = 0x5F4;  // int32 
}

// Offset: 0x7ffe1e017260 
// N. Class: 183 
// Fields: 11 
namespace C_OP_ContinuousEmitter
{
	constexpr uint32_t m_flEmissionDuration = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flStartTime = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flEmitRate = 0x488;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flEmissionScale = 0x5E8;  // float32 
	constexpr uint32_t m_flScalePerParentParticle = 0x5EC;  // float32 
	constexpr uint32_t m_bInitFromKilledParentParticles = 0x5F0;  // bool 
	constexpr uint32_t m_nEventType = 0x5F4;  // EventTypeSelection_t 
	constexpr uint32_t m_nSnapshotControlPoint = 0x5F8;  // int32 
	constexpr uint32_t m_nLimitPerUpdate = 0x5FC;  // int32 
	constexpr uint32_t m_bForceEmitOnFirstUpdate = 0x600;  // bool 
	constexpr uint32_t m_bForceEmitOnLastUpdate = 0x601;  // bool 
}

// Offset: 0x7ffe1e017070 
// N. Class: 184 
// Fields: 15 
namespace C_OP_NoiseEmitter
{
	constexpr uint32_t m_flEmissionDuration = 0x1C8;  // float32 
	constexpr uint32_t m_flStartTime = 0x1CC;  // float32 
	constexpr uint32_t m_flEmissionScale = 0x1D0;  // float32 
	constexpr uint32_t m_nScaleControlPoint = 0x1D4;  // int32 
	constexpr uint32_t m_nScaleControlPointField = 0x1D8;  // int32 
	constexpr uint32_t m_nWorldNoisePoint = 0x1DC;  // int32 
	constexpr uint32_t m_bAbsVal = 0x1E0;  // bool 
	constexpr uint32_t m_bAbsValInv = 0x1E1;  // bool 
	constexpr uint32_t m_flOffset = 0x1E4;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1E8;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1EC;  // float32 
	constexpr uint32_t m_flNoiseScale = 0x1F0;  // float32 
	constexpr uint32_t m_flWorldNoiseScale = 0x1F4;  // float32 
	constexpr uint32_t m_vecOffsetLoc = 0x1F8;  // Vector 
	constexpr uint32_t m_flWorldTimeScale = 0x204;  // float32 
}

// Offset: 0x7ffe1e0173c0 
// N. Class: 185 
// Fields: 8 
namespace C_OP_MaintainEmitter
{
	constexpr uint32_t m_nParticlesToMaintain = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flStartTime = 0x328;  // float32 
	constexpr uint32_t m_flEmissionDuration = 0x330;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flEmissionRate = 0x490;  // float32 
	constexpr uint32_t m_nSnapshotControlPoint = 0x494;  // int32 
	constexpr uint32_t m_bEmitInstantaneously = 0x498;  // bool 
	constexpr uint32_t m_bFinalEmitOnStop = 0x499;  // bool 
	constexpr uint32_t m_flScale = 0x4A0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e017ef0 
// N. Class: 186 
// Fields: 2 
namespace C_OP_RandomForce
{
	constexpr uint32_t m_MinForce = 0x1D0;  // Vector 
	constexpr uint32_t m_MaxForce = 0x1DC;  // Vector 
}

// Offset: 0x7ffe1e0178f0 
// N. Class: 187 
// Fields: 2 
namespace C_OP_CPVelocityForce
{
	constexpr uint32_t m_nControlPointNumber = 0x1D0;  // int32 
	constexpr uint32_t m_flScale = 0x1D8;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e018370 
// N. Class: 188 
// Fields: 3 
namespace C_OP_ParentVortices
{
	constexpr uint32_t m_flForceScale = 0x1D0;  // float32 
	constexpr uint32_t m_vecTwistAxis = 0x1D4;  // Vector 
	constexpr uint32_t m_bFlipBasedOnYaw = 0x1E0;  // bool 
}

// Offset: 0x7ffe1e017850 
// N. Class: 189 
// Fields: 4 
namespace C_OP_TwistAroundAxis
{
	constexpr uint32_t m_fForceAmount = 0x1D0;  // float32 
	constexpr uint32_t m_TwistAxis = 0x1D4;  // Vector 
	constexpr uint32_t m_bLocalSpace = 0x1E0;  // bool 
	constexpr uint32_t m_nControlPointNumber = 0x1E4;  // int32 
}

// Offset: 0x7ffe1e018100 
// N. Class: 190 
// Fields: 6 
namespace C_OP_AttractToControlPoint
{
	constexpr uint32_t m_vecComponentScale = 0x1D0;  // Vector 
	constexpr uint32_t m_fForceAmount = 0x1E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_fFalloffPower = 0x340;  // float32 
	constexpr uint32_t m_TransformInput = 0x348;  // CParticleTransformInput 
	constexpr uint32_t m_fForceAmountMin = 0x3B0;  // CPerParticleFloatInput 
	constexpr uint32_t m_bApplyMinForce = 0x510;  // bool 
}

// Offset: 0x7ffe1e018010 
// N. Class: 191 
// Fields: 7 
namespace C_OP_ForceBasedOnDistanceToPlane
{
	constexpr uint32_t m_flMinDist = 0x1D0;  // float32 
	constexpr uint32_t m_vecForceAtMinDist = 0x1D4;  // Vector 
	constexpr uint32_t m_flMaxDist = 0x1E0;  // float32 
	constexpr uint32_t m_vecForceAtMaxDist = 0x1E4;  // Vector 
	constexpr uint32_t m_vecPlaneNormal = 0x1F0;  // Vector 
	constexpr uint32_t m_nControlPointNumber = 0x1FC;  // int32 
	constexpr uint32_t m_flExponent = 0x200;  // float32 
}

// Offset: 0x7ffe1e017ce0 
// N. Class: 192 
// Fields: 4 
namespace C_OP_TimeVaryingForce
{
	constexpr uint32_t m_flStartLerpTime = 0x1D0;  // float32 
	constexpr uint32_t m_StartingForce = 0x1D4;  // Vector 
	constexpr uint32_t m_flEndLerpTime = 0x1E0;  // float32 
	constexpr uint32_t m_EndingForce = 0x1E4;  // Vector 
}

// Offset: 0x7ffe1e017960 
// N. Class: 193 
// Fields: 8 
namespace C_OP_TurbulenceForce
{
	constexpr uint32_t m_flNoiseCoordScale0 = 0x1D0;  // float32 
	constexpr uint32_t m_flNoiseCoordScale1 = 0x1D4;  // float32 
	constexpr uint32_t m_flNoiseCoordScale2 = 0x1D8;  // float32 
	constexpr uint32_t m_flNoiseCoordScale3 = 0x1DC;  // float32 
	constexpr uint32_t m_vecNoiseAmount0 = 0x1E0;  // Vector 
	constexpr uint32_t m_vecNoiseAmount1 = 0x1EC;  // Vector 
	constexpr uint32_t m_vecNoiseAmount2 = 0x1F8;  // Vector 
	constexpr uint32_t m_vecNoiseAmount3 = 0x204;  // Vector 
}

// Offset: 0x7ffe1e018210 
// N. Class: 194 
// Fields: 7 
namespace C_OP_CurlNoiseForce
{
	constexpr uint32_t m_vecNoiseFreq = 0x1D8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecNoiseScale = 0x850;  // CPerParticleVecInput 
	constexpr uint32_t m_vecOffset = 0xEC8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecOffsetRate = 0x1540;  // CPerParticleVecInput 
	constexpr uint32_t m_flWorleySeed = 0x1BB8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flWorleyJitter = 0x1D18;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e017d90 
// N. Class: 195 
// Fields: 3 
namespace C_OP_PerParticleForce
{
	constexpr uint32_t m_flForceScale = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_vForce = 0x330;  // CPerParticleVecInput 
	constexpr uint32_t m_nCP = 0x9A8;  // int32 
}

// Offset: 0x7ffe1e017b38 
// N. Class: 196 
// Fields: 1 
namespace C_OP_WindForce
{
	constexpr uint32_t m_vForce = 0x1D0;  // Vector 
}

// Offset: 0x7ffe1e017b60 
// N. Class: 197 
// Fields: 11 
namespace C_OP_ExternalWindForce
{
	constexpr uint32_t m_vecSamplePosition = 0x1D0;  // CPerParticleVecInput 
	constexpr uint32_t m_vecScale = 0x848;  // CPerParticleVecInput 
	constexpr uint32_t m_bSampleWind = 0xEC0;  // bool 
	constexpr uint32_t m_bSampleWater = 0xEC1;  // bool 
	constexpr uint32_t m_bDampenNearWaterPlane = 0xEC2;  // bool 
	constexpr uint32_t m_bSampleGravity = 0xEC3;  // bool 
	constexpr uint32_t m_vecGravityForce = 0xEC8;  // CPerParticleVecInput 
	constexpr uint32_t m_bUseBasicMovementGravity = 0x1540;  // bool 
	constexpr uint32_t m_flLocalGravityScale = 0x1548;  // CPerParticleFloatInput 
	constexpr uint32_t m_flLocalBuoyancyScale = 0x16A8;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecBuoyancyForce = 0x1808;  // CPerParticleVecInput 
}

// Offset: 0x7ffe1e017e40 
// N. Class: 198 
// Fields: 5 
namespace C_OP_ExternalGameImpulseForce
{
	constexpr uint32_t m_flForceScale = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_bRopes = 0x330;  // bool 
	constexpr uint32_t m_bRopesZOnly = 0x331;  // bool 
	constexpr uint32_t m_bExplosions = 0x332;  // bool 
	constexpr uint32_t m_bParticles = 0x333;  // bool 
}

// Offset: 0x7ffe1e018400 
// N. Class: 199 
// Fields: 3 
namespace C_OP_LocalAccelerationForce
{
	constexpr uint32_t m_nCP = 0x1D0;  // int32 
	constexpr uint32_t m_nScaleCP = 0x1D4;  // int32 
	constexpr uint32_t m_vecAccel = 0x1D8;  // CParticleCollectionVecInput 
}

// Offset: 0x7ffe1e017a80 
// N. Class: 200 
// Fields: 3 
namespace C_OP_DensityForce
{
	constexpr uint32_t m_flRadiusScale = 0x1D0;  // float32 
	constexpr uint32_t m_flForceScale = 0x1D4;  // float32 
	constexpr uint32_t m_flTargetDensity = 0x1D8;  // float32 
}

// Offset: 0x7ffe1e017740 
// N. Class: 201 
// Fields: 8 
namespace C_OP_IntraParticleForce
{
	constexpr uint32_t m_flAttractionMinDistance = 0x1D0;  // float32 
	constexpr uint32_t m_flAttractionMaxDistance = 0x1D4;  // float32 
	constexpr uint32_t m_flAttractionMaxStrength = 0x1D8;  // float32 
	constexpr uint32_t m_flRepulsionMinDistance = 0x1DC;  // float32 
	constexpr uint32_t m_flRepulsionMaxDistance = 0x1E0;  // float32 
	constexpr uint32_t m_flRepulsionMaxStrength = 0x1E4;  // float32 
	constexpr uint32_t m_bUseAABB = 0x1E8;  // bool 
	constexpr uint32_t m_bThreadIt = 0x1E9;  // bool 
}

// Offset: 0x7ffe1e0270f0 
// N. Class: 202 
// Fields: 5 
namespace C_OP_BasicMovement
{
	constexpr uint32_t m_Gravity = 0x1C0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_fDrag = 0x838;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_massControls = 0x998;  // CParticleMassCalculationParameters 
	constexpr uint32_t m_nMaxConstraintPasses = 0xDC0;  // int32 
	constexpr uint32_t m_bUseNewCode = 0xDC4;  // bool 
}

// Offset: 0x7ffe1e02b7b0 
// N. Class: 203 
// Fields: 7 
namespace C_OP_FadeAndKill
{
	constexpr uint32_t m_flStartFadeInTime = 0x1C0;  // float32 
	constexpr uint32_t m_flEndFadeInTime = 0x1C4;  // float32 
	constexpr uint32_t m_flStartFadeOutTime = 0x1C8;  // float32 
	constexpr uint32_t m_flEndFadeOutTime = 0x1CC;  // float32 
	constexpr uint32_t m_flStartAlpha = 0x1D0;  // float32 
	constexpr uint32_t m_flEndAlpha = 0x1D4;  // float32 
	constexpr uint32_t m_bForcePreserveParticleOrder = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e029830 
// N. Class: 204 
// Fields: 6 
namespace C_OP_FadeAndKillForTracers
{
	constexpr uint32_t m_flStartFadeInTime = 0x1C0;  // float32 
	constexpr uint32_t m_flEndFadeInTime = 0x1C4;  // float32 
	constexpr uint32_t m_flStartFadeOutTime = 0x1C8;  // float32 
	constexpr uint32_t m_flEndFadeOutTime = 0x1CC;  // float32 
	constexpr uint32_t m_flStartAlpha = 0x1D0;  // float32 
	constexpr uint32_t m_flEndAlpha = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e025b60 
// N. Class: 205 
// Fields: 4 
namespace C_OP_FadeIn
{
	constexpr uint32_t m_flFadeInTimeMin = 0x1C0;  // float32 
	constexpr uint32_t m_flFadeInTimeMax = 0x1C4;  // float32 
	constexpr uint32_t m_flFadeInTimeExp = 0x1C8;  // float32 
	constexpr uint32_t m_bProportional = 0x1CC;  // bool 
}

// Offset: 0x7ffe1e025190 
// N. Class: 206 
// Fields: 6 
namespace C_OP_FadeOut
{
	constexpr uint32_t m_flFadeOutTimeMin = 0x1C0;  // float32 
	constexpr uint32_t m_flFadeOutTimeMax = 0x1C4;  // float32 
	constexpr uint32_t m_flFadeOutTimeExp = 0x1C8;  // float32 
	constexpr uint32_t m_flFadeBias = 0x1CC;  // float32 
	constexpr uint32_t m_bProportional = 0x200;  // bool 
	constexpr uint32_t m_bEaseInAndOut = 0x201;  // bool 
}

// Offset: 0x7ffe1e026530 
// N. Class: 207 
// Fields: 2 
namespace C_OP_FadeInSimple
{
	constexpr uint32_t m_flFadeInTime = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e023e80 
// N. Class: 208 
// Fields: 2 
namespace C_OP_FadeOutSimple
{
	constexpr uint32_t m_flFadeOutTime = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e02c530 
// N. Class: 209 
// Fields: 3 
namespace C_OP_ClampScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOutputMin = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x328;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e0266e0 
// N. Class: 210 
// Fields: 3 
namespace C_OP_ClampVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecOutputMin = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecOutputMax = 0x840;  // CPerParticleVecInput 
}

// Offset: 0x7ffe1e02a180 
// N. Class: 211 
// Fields: 13 
namespace C_OP_OscillateScalar
{
	constexpr uint32_t m_RateMin = 0x1C0;  // float32 
	constexpr uint32_t m_RateMax = 0x1C4;  // float32 
	constexpr uint32_t m_FrequencyMin = 0x1C8;  // float32 
	constexpr uint32_t m_FrequencyMax = 0x1CC;  // float32 
	constexpr uint32_t m_nField = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bProportional = 0x1D4;  // bool 
	constexpr uint32_t m_bProportionalOp = 0x1D5;  // bool 
	constexpr uint32_t m_flStartTime_min = 0x1D8;  // float32 
	constexpr uint32_t m_flStartTime_max = 0x1DC;  // float32 
	constexpr uint32_t m_flEndTime_min = 0x1E0;  // float32 
	constexpr uint32_t m_flEndTime_max = 0x1E4;  // float32 
	constexpr uint32_t m_flOscMult = 0x1E8;  // float32 
	constexpr uint32_t m_flOscAdd = 0x1EC;  // float32 
}

// Offset: 0x7ffe1e0289b0 
// N. Class: 212 
// Fields: 5 
namespace C_OP_OscillateScalarSimple
{
	constexpr uint32_t m_Rate = 0x1C0;  // float32 
	constexpr uint32_t m_Frequency = 0x1C4;  // float32 
	constexpr uint32_t m_nField = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOscMult = 0x1CC;  // float32 
	constexpr uint32_t m_flOscAdd = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e02c5c0 
// N. Class: 213 
// Fields: 15 
namespace C_OP_OscillateVector
{
	constexpr uint32_t m_RateMin = 0x1C0;  // Vector 
	constexpr uint32_t m_RateMax = 0x1CC;  // Vector 
	constexpr uint32_t m_FrequencyMin = 0x1D8;  // Vector 
	constexpr uint32_t m_FrequencyMax = 0x1E4;  // Vector 
	constexpr uint32_t m_nField = 0x1F0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bProportional = 0x1F4;  // bool 
	constexpr uint32_t m_bProportionalOp = 0x1F5;  // bool 
	constexpr uint32_t m_bOffset = 0x1F6;  // bool 
	constexpr uint32_t m_flStartTime_min = 0x1F8;  // float32 
	constexpr uint32_t m_flStartTime_max = 0x1FC;  // float32 
	constexpr uint32_t m_flEndTime_min = 0x200;  // float32 
	constexpr uint32_t m_flEndTime_max = 0x204;  // float32 
	constexpr uint32_t m_flOscMult = 0x208;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOscAdd = 0x368;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRateScale = 0x4C8;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e027e20 
// N. Class: 214 
// Fields: 6 
namespace C_OP_OscillateVectorSimple
{
	constexpr uint32_t m_Rate = 0x1C0;  // Vector 
	constexpr uint32_t m_Frequency = 0x1CC;  // Vector 
	constexpr uint32_t m_nField = 0x1D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOscMult = 0x1DC;  // float32 
	constexpr uint32_t m_flOscAdd = 0x1E0;  // float32 
	constexpr uint32_t m_bOffset = 0x1E4;  // bool 
}

// Offset: 0x7ffe1e029450 
// N. Class: 215 
// Fields: 9 
namespace C_OP_DifferencePreviousParticle
{
	constexpr uint32_t m_nFieldInput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // float32 
	constexpr uint32_t m_flInputMax = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1D8;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x1DC;  // bool 
	constexpr uint32_t m_bSetPreviousParticle = 0x1DD;  // bool 
}

// Offset: 0x7ffe1e028d80 
// N. Class: 216 
// Fields: 2 
namespace C_OP_PointVectorAtNextParticle
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInterpolation = 0x1C8;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e024b90 
// N. Class: 217 
// Fields: 7 
namespace C_OP_RemapScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // float32 
	constexpr uint32_t m_flInputMax = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D4;  // float32 
	constexpr uint32_t m_bOldCode = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e023990 
// N. Class: 218 
// Fields: 8 
namespace C_OP_RemapDensityToVector
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flDensityMin = 0x1C8;  // float32 
	constexpr uint32_t m_flDensityMax = 0x1CC;  // float32 
	constexpr uint32_t m_vecOutputMin = 0x1D0;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x1DC;  // Vector 
	constexpr uint32_t m_bUseParentDensity = 0x1E8;  // bool 
	constexpr uint32_t m_nVoxelGridResolution = 0x1EC;  // int32 
}

// Offset: 0x7ffe1e026670 
// N. Class: 219 
// Fields: 3 
namespace C_OP_Diffusion
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVoxelGridResolution = 0x1C8;  // int32 
}

// Offset: 0x7ffe1e0281f0 
// N. Class: 220 
// Fields: 6 
namespace C_OP_RemapScalarEndCap
{
	constexpr uint32_t m_nFieldInput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // float32 
	constexpr uint32_t m_flInputMax = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e028640 
// N. Class: 221 
// Fields: 3 
namespace C_OP_ReinitializeScalarEndCap
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOutputMin = 0x1C4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1C8;  // float32 
}

// Offset: 0x7ffe1e026fb0 
// N. Class: 222 
// Fields: 8 
namespace C_OP_RemapScalarOnceTimed
{
	constexpr uint32_t m_bProportional = 0x1C0;  // bool 
	constexpr uint32_t m_nFieldInput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flRemapTime = 0x1DC;  // float32 
}

// Offset: 0x7ffe1e02bf60 
// N. Class: 223 
// Fields: 7 
namespace C_OP_RemapParticleCountOnScalarEndCap
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nInputMin = 0x1C4;  // int32 
	constexpr uint32_t m_nInputMax = 0x1C8;  // int32 
	constexpr uint32_t m_flOutputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D0;  // float32 
	constexpr uint32_t m_bBackwards = 0x1D4;  // bool 
	constexpr uint32_t m_nSetMethod = 0x1D8;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e0252d0 
// N. Class: 224 
// Fields: 7 
namespace C_OP_RemapParticleCountToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nInputMin = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nInputMax = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputMin = 0x488;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5E8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bActiveRange = 0x748;  // bool 
	constexpr uint32_t m_nSetMethod = 0x74C;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e02bd10 
// N. Class: 225 
// Fields: 7 
namespace C_OP_RemapVisibilityScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // float32 
	constexpr uint32_t m_flInputMax = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D4;  // float32 
	constexpr uint32_t m_flRadiusScale = 0x1D8;  // float32 
}

// Offset: 0x7ffe1e023ab0 
// N. Class: 226 
// Fields: 8 
namespace C_OP_RemapTransformVisibilityToScalar
{
	constexpr uint32_t m_nSetMethod = 0x1C0;  // ParticleSetMethod_t 
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_nFieldOutput = 0x230;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x234;  // float32 
	constexpr uint32_t m_flInputMax = 0x238;  // float32 
	constexpr uint32_t m_flOutputMin = 0x23C;  // float32 
	constexpr uint32_t m_flOutputMax = 0x240;  // float32 
	constexpr uint32_t m_flRadius = 0x244;  // float32 
}

// Offset: 0x7ffe1e0267b0 
// N. Class: 227 
// Fields: 8 
namespace C_OP_RemapTransformVisibilityToVector
{
	constexpr uint32_t m_nSetMethod = 0x1C0;  // ParticleSetMethod_t 
	constexpr uint32_t m_TransformInput = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_nFieldOutput = 0x230;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x234;  // float32 
	constexpr uint32_t m_flInputMax = 0x238;  // float32 
	constexpr uint32_t m_vecOutputMin = 0x23C;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x248;  // Vector 
	constexpr uint32_t m_flRadius = 0x254;  // float32 
}

// Offset: 0x7ffe1e024160 
// N. Class: 228 
// Fields: 4 
namespace C_OP_LerpScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOutput = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flStartTime = 0x328;  // float32 
	constexpr uint32_t m_flEndTime = 0x32C;  // float32 
}

// Offset: 0x7ffe1e02a380 
// N. Class: 229 
// Fields: 3 
namespace C_OP_LerpEndCapScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOutput = 0x1C4;  // float32 
	constexpr uint32_t m_flLerpTime = 0x1C8;  // float32 
}

// Offset: 0x7ffe1e023250 
// N. Class: 230 
// Fields: 3 
namespace C_OP_LerpEndCapVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecOutput = 0x1C4;  // Vector 
	constexpr uint32_t m_flLerpTime = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e02a880 
// N. Class: 231 
// Fields: 5 
namespace C_OP_LerpVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecOutput = 0x1C4;  // Vector 
	constexpr uint32_t m_flStartTime = 0x1D0;  // float32 
	constexpr uint32_t m_flEndTime = 0x1D4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1D8;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e02a9a0 
// N. Class: 232 
// Fields: 4 
namespace C_OP_LerpToOtherAttribute
{
	constexpr uint32_t m_flInterpolation = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_nFieldInputFrom = 0x320;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldInput = 0x324;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x328;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e028810 
// N. Class: 233 
// Fields: 7 
namespace C_OP_RemapSpeed
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1C8;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D0;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1D4;  // ParticleSetMethod_t 
	constexpr uint32_t m_bIgnoreDelta = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e025920 
// N. Class: 234 
// Fields: 3 
namespace C_OP_RemapVectortoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldInput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nParticleNumber = 0x1C8;  // int32 
}

// Offset: 0x7ffe1e025630 
// N. Class: 235 
// Fields: 8 
namespace C_OP_RampScalarLinear
{
	constexpr uint32_t m_RateMin = 0x1C0;  // float32 
	constexpr uint32_t m_RateMax = 0x1C4;  // float32 
	constexpr uint32_t m_flStartTime_min = 0x1C8;  // float32 
	constexpr uint32_t m_flStartTime_max = 0x1CC;  // float32 
	constexpr uint32_t m_flEndTime_min = 0x1D0;  // float32 
	constexpr uint32_t m_flEndTime_max = 0x1D4;  // float32 
	constexpr uint32_t m_nField = 0x200;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bProportionalOp = 0x204;  // bool 
}

// Offset: 0x7ffe1e027a10 
// N. Class: 236 
// Fields: 10 
namespace C_OP_RampScalarSpline
{
	constexpr uint32_t m_RateMin = 0x1C0;  // float32 
	constexpr uint32_t m_RateMax = 0x1C4;  // float32 
	constexpr uint32_t m_flStartTime_min = 0x1C8;  // float32 
	constexpr uint32_t m_flStartTime_max = 0x1CC;  // float32 
	constexpr uint32_t m_flEndTime_min = 0x1D0;  // float32 
	constexpr uint32_t m_flEndTime_max = 0x1D4;  // float32 
	constexpr uint32_t m_flBias = 0x1D8;  // float32 
	constexpr uint32_t m_nField = 0x200;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bProportionalOp = 0x204;  // bool 
	constexpr uint32_t m_bEaseOut = 0x205;  // bool 
}

// Offset: 0x7ffe1e029760 
// N. Class: 237 
// Fields: 4 
namespace C_OP_RampScalarLinearSimple
{
	constexpr uint32_t m_Rate = 0x1C0;  // float32 
	constexpr uint32_t m_flStartTime = 0x1C4;  // float32 
	constexpr uint32_t m_flEndTime = 0x1C8;  // float32 
	constexpr uint32_t m_nField = 0x1F0;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e02c050 
// N. Class: 238 
// Fields: 5 
namespace C_OP_RampScalarSplineSimple
{
	constexpr uint32_t m_Rate = 0x1C0;  // float32 
	constexpr uint32_t m_flStartTime = 0x1C4;  // float32 
	constexpr uint32_t m_flEndTime = 0x1C8;  // float32 
	constexpr uint32_t m_nField = 0x1F0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bEaseOut = 0x1F4;  // bool 
}

// Offset: 0x7ffe1e0269a0 
// N. Class: 239 
// Fields: 10 
namespace C_OP_ChladniWave
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInputMax = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMin = 0x488;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5E8;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecWaveLength = 0x748;  // CPerParticleVecInput 
	constexpr uint32_t m_vecHarmonics = 0xDC0;  // CPerParticleVecInput 
	constexpr uint32_t m_nSetMethod = 0x1438;  // ParticleSetMethod_t 
	constexpr uint32_t m_nLocalSpaceControlPoint = 0x143C;  // int32 
	constexpr uint32_t m_b3D = 0x1440;  // bool 
}

// Offset: 0x7ffe1e02c0f0 
// N. Class: 240 
// Fields: 6 
namespace C_OP_Noise
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOutputMin = 0x1C4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1C8;  // float32 
	constexpr uint32_t m_fl4NoiseScale = 0x1CC;  // float32 
	constexpr uint32_t m_bAdditive = 0x1D0;  // bool 
	constexpr uint32_t m_flNoiseAnimationTimeScale = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e02a090 
// N. Class: 241 
// Fields: 7 
namespace C_OP_VectorNoise
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecOutputMin = 0x1C4;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x1D0;  // Vector 
	constexpr uint32_t m_fl4NoiseScale = 0x1DC;  // float32 
	constexpr uint32_t m_bAdditive = 0x1E0;  // bool 
	constexpr uint32_t m_bOffset = 0x1E1;  // bool 
	constexpr uint32_t m_flNoiseAnimationTimeScale = 0x1E4;  // float32 
}

// Offset: 0x7ffe1e026240 
// N. Class: 242 
// Fields: 2 
namespace C_OP_Decay
{
	constexpr uint32_t m_bRopeDecay = 0x1C0;  // bool 
	constexpr uint32_t m_bForcePreserveParticleOrder = 0x1C1;  // bool 
}

// Offset: 0x7ffe1e02b8a8 
// N. Class: 243 
// Fields: 1 
namespace C_OP_DecayOffscreen
{
	constexpr uint32_t m_flOffscreenTime = 0x1C0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e0232b8 
// N. Class: 244 
// Fields: 1 
namespace C_OP_EndCapTimedFreeze
{
	constexpr uint32_t m_flFreezeTime = 0x1C0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e0257d8 
// N. Class: 245 
// Fields: 1 
namespace C_OP_EndCapTimedDecay
{
	constexpr uint32_t m_flDecayTime = 0x1C0;  // float32 
}

// Offset: 0x0 
// N. Class: 246 
// Fields: 0 
namespace C_OP_EndCapDecay
{
}

// Offset: 0x7ffe1e0262b0 
// N. Class: 247 
// Fields: 1 
namespace C_OP_VelocityDecay
{
	constexpr uint32_t m_flMinVelocity = 0x1C0;  // float32 
}

// Offset: 0x7ffe1e02ad58 
// N. Class: 248 
// Fields: 1 
namespace C_OP_AlphaDecay
{
	constexpr uint32_t m_flMinAlpha = 0x1C0;  // float32 
}

// Offset: 0x7ffe1e02bb38 
// N. Class: 249 
// Fields: 1 
namespace C_OP_RadiusDecay
{
	constexpr uint32_t m_flMinRadius = 0x1C0;  // float32 
}

// Offset: 0x7ffe1e029bb0 
// N. Class: 250 
// Fields: 6 
namespace C_OP_DecayMaintainCount
{
	constexpr uint32_t m_nParticlesToMaintain = 0x1C0;  // int32 
	constexpr uint32_t m_flDecayDelay = 0x1C4;  // float32 
	constexpr uint32_t m_nSnapshotControlPoint = 0x1C8;  // int32 
	constexpr uint32_t m_bLifespanDecay = 0x1CC;  // bool 
	constexpr uint32_t m_flScale = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bKillNewest = 0x330;  // bool 
}

// Offset: 0x7ffe1e023c70 
// N. Class: 251 
// Fields: 1 
namespace C_OP_DecayClampCount
{
	constexpr uint32_t m_nCount = 0x1C0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e026c00 
// N. Class: 252 
// Fields: 4 
namespace C_OP_Cull
{
	constexpr uint32_t m_flCullPerc = 0x1C0;  // float32 
	constexpr uint32_t m_flCullStart = 0x1C4;  // float32 
	constexpr uint32_t m_flCullEnd = 0x1C8;  // float32 
	constexpr uint32_t m_flCullExp = 0x1CC;  // float32 
}

// Offset: 0x7ffe1e02b3b0 
// N. Class: 253 
// Fields: 3 
namespace CGeneralSpin
{
	constexpr uint32_t m_nSpinRateDegrees = 0x1C0;  // int32 
	constexpr uint32_t m_nSpinRateMinDegrees = 0x1C4;  // int32 
	constexpr uint32_t m_fSpinRateStopTime = 0x1CC;  // float32 
}

// Offset: 0x0 
// N. Class: 254 
// Fields: 0 
namespace CSpinUpdateBase
{
}

// Offset: 0x0 
// N. Class: 255 
// Fields: 0 
namespace C_OP_Spin
{
}

// Offset: 0x0 
// N. Class: 256 
// Fields: 0 
namespace C_OP_SpinUpdate
{
}

// Offset: 0x0 
// N. Class: 257 
// Fields: 0 
namespace C_OP_SpinYaw
{
}

// Offset: 0x7ffe1e02b150 
// N. Class: 258 
// Fields: 6 
namespace C_OP_InterpolateRadius
{
	constexpr uint32_t m_flStartTime = 0x1C0;  // float32 
	constexpr uint32_t m_flEndTime = 0x1C4;  // float32 
	constexpr uint32_t m_flStartScale = 0x1C8;  // float32 
	constexpr uint32_t m_flEndScale = 0x1CC;  // float32 
	constexpr uint32_t m_bEaseInAndOut = 0x1D0;  // bool 
	constexpr uint32_t m_flBias = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e028480 
// N. Class: 259 
// Fields: 5 
namespace C_OP_ColorInterpolate
{
	constexpr uint32_t m_ColorFade = 0x1C0;  // Color 
	constexpr uint32_t m_flFadeStartTime = 0x1D0;  // float32 
	constexpr uint32_t m_flFadeEndTime = 0x1D4;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bEaseInOut = 0x1DC;  // bool 
}

// Offset: 0x7ffe1e0243e0 
// N. Class: 260 
// Fields: 6 
namespace C_OP_ColorInterpolateRandom
{
	constexpr uint32_t m_ColorFadeMin = 0x1C0;  // Color 
	constexpr uint32_t m_ColorFadeMax = 0x1DC;  // Color 
	constexpr uint32_t m_flFadeStartTime = 0x1EC;  // float32 
	constexpr uint32_t m_flFadeEndTime = 0x1F0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1F4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bEaseInOut = 0x1F8;  // bool 
}

// Offset: 0x7ffe1e026060 
// N. Class: 261 
// Fields: 15 
namespace C_OP_PositionLock
{
	constexpr uint32_t m_TransformInput = 0x1C0;  // CParticleTransformInput 
	constexpr uint32_t m_flStartTime_min = 0x228;  // float32 
	constexpr uint32_t m_flStartTime_max = 0x22C;  // float32 
	constexpr uint32_t m_flStartTime_exp = 0x230;  // float32 
	constexpr uint32_t m_flEndTime_min = 0x234;  // float32 
	constexpr uint32_t m_flEndTime_max = 0x238;  // float32 
	constexpr uint32_t m_flEndTime_exp = 0x23C;  // float32 
	constexpr uint32_t m_flRange = 0x240;  // float32 
	constexpr uint32_t m_flRangeBias = 0x248;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flJumpThreshold = 0x3A8;  // float32 
	constexpr uint32_t m_flPrevPosScale = 0x3AC;  // float32 
	constexpr uint32_t m_bLockRot = 0x3B0;  // bool 
	constexpr uint32_t m_vecScale = 0x3B8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nFieldOutput = 0xA30;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutputPrev = 0xA34;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e0271f0 
// N. Class: 262 
// Fields: 33 
namespace C_OP_ControlpointLight
{
	constexpr uint32_t m_flScale = 0x1C0;  // float32 
	constexpr uint32_t m_nControlPoint1 = 0x650;  // int32 
	constexpr uint32_t m_nControlPoint2 = 0x654;  // int32 
	constexpr uint32_t m_nControlPoint3 = 0x658;  // int32 
	constexpr uint32_t m_nControlPoint4 = 0x65C;  // int32 
	constexpr uint32_t m_vecCPOffset1 = 0x660;  // Vector 
	constexpr uint32_t m_vecCPOffset2 = 0x66C;  // Vector 
	constexpr uint32_t m_vecCPOffset3 = 0x678;  // Vector 
	constexpr uint32_t m_vecCPOffset4 = 0x684;  // Vector 
	constexpr uint32_t m_LightFiftyDist1 = 0x690;  // float32 
	constexpr uint32_t m_LightZeroDist1 = 0x694;  // float32 
	constexpr uint32_t m_LightFiftyDist2 = 0x698;  // float32 
	constexpr uint32_t m_LightZeroDist2 = 0x69C;  // float32 
	constexpr uint32_t m_LightFiftyDist3 = 0x6A0;  // float32 
	constexpr uint32_t m_LightZeroDist3 = 0x6A4;  // float32 
	constexpr uint32_t m_LightFiftyDist4 = 0x6A8;  // float32 
	constexpr uint32_t m_LightZeroDist4 = 0x6AC;  // float32 
	constexpr uint32_t m_LightColor1 = 0x6B0;  // Color 
	constexpr uint32_t m_LightColor2 = 0x6B4;  // Color 
	constexpr uint32_t m_LightColor3 = 0x6B8;  // Color 
	constexpr uint32_t m_LightColor4 = 0x6BC;  // Color 
	constexpr uint32_t m_bLightType1 = 0x6C0;  // bool 
	constexpr uint32_t m_bLightType2 = 0x6C1;  // bool 
	constexpr uint32_t m_bLightType3 = 0x6C2;  // bool 
	constexpr uint32_t m_bLightType4 = 0x6C3;  // bool 
	constexpr uint32_t m_bLightDynamic1 = 0x6C4;  // bool 
	constexpr uint32_t m_bLightDynamic2 = 0x6C5;  // bool 
	constexpr uint32_t m_bLightDynamic3 = 0x6C6;  // bool 
	constexpr uint32_t m_bLightDynamic4 = 0x6C7;  // bool 
	constexpr uint32_t m_bUseNormal = 0x6C8;  // bool 
	constexpr uint32_t m_bUseHLambert = 0x6C9;  // bool 
	constexpr uint32_t m_bClampLowerRange = 0x6CE;  // bool 
	constexpr uint32_t m_bClampUpperRange = 0x6CF;  // bool 
}

// Offset: 0x7ffe1e026920 
// N. Class: 263 
// Fields: 3 
namespace C_OP_GlobalLight
{
	constexpr uint32_t m_flScale = 0x1C0;  // float32 
	constexpr uint32_t m_bClampLowerRange = 0x1C4;  // bool 
	constexpr uint32_t m_bClampUpperRange = 0x1C5;  // bool 
}

// Offset: 0x7ffe1e028cc0 
// N. Class: 264 
// Fields: 6 
namespace C_OP_SetChildControlPoints
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;  // int32 
	constexpr uint32_t m_nFirstControlPoint = 0x1C4;  // int32 
	constexpr uint32_t m_nNumControlPoints = 0x1C8;  // int32 
	constexpr uint32_t m_nFirstSourcePoint = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bReverse = 0x330;  // bool 
	constexpr uint32_t m_bSetOrientation = 0x331;  // bool 
}

// Offset: 0x7ffe1e025e60 
// N. Class: 265 
// Fields: 7 
namespace C_OP_SetControlPointsToParticle
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;  // int32 
	constexpr uint32_t m_nFirstControlPoint = 0x1C4;  // int32 
	constexpr uint32_t m_nNumControlPoints = 0x1C8;  // int32 
	constexpr uint32_t m_nFirstSourcePoint = 0x1CC;  // int32 
	constexpr uint32_t m_bSetOrientation = 0x1D0;  // bool 
	constexpr uint32_t m_nOrientationMode = 0x1D4;  // ParticleOrientationSetMode_t 
	constexpr uint32_t m_nSetParent = 0x1D8;  // ParticleParentSetMode_t 
}

// Offset: 0x7ffe1e0250a0 
// N. Class: 266 
// Fields: 7 
namespace C_OP_SetControlPointsToModelParticles
{
	constexpr uint32_t m_HitboxSetName = 0x1C0;  // char[128] 
	constexpr uint32_t m_AttachmentName = 0x240;  // char[128] 
	constexpr uint32_t m_nFirstControlPoint = 0x2C0;  // int32 
	constexpr uint32_t m_nNumControlPoints = 0x2C4;  // int32 
	constexpr uint32_t m_nFirstSourcePoint = 0x2C8;  // int32 
	constexpr uint32_t m_bSkin = 0x2CC;  // bool 
	constexpr uint32_t m_bAttachment = 0x2CD;  // bool 
}

// Offset: 0x7ffe1e02ac20 
// N. Class: 267 
// Fields: 8 
namespace C_OP_SetPerChildControlPoint
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;  // int32 
	constexpr uint32_t m_nFirstControlPoint = 0x1C4;  // int32 
	constexpr uint32_t m_nNumControlPoints = 0x1C8;  // int32 
	constexpr uint32_t m_nParticleIncrement = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nFirstSourcePoint = 0x330;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bSetOrientation = 0x490;  // bool 
	constexpr uint32_t m_nOrientationField = 0x494;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bNumBasedOnParticleCount = 0x498;  // bool 
}

// Offset: 0x7ffe1e02ba30 
// N. Class: 268 
// Fields: 8 
namespace C_OP_SetPerChildControlPointFromAttribute
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;  // int32 
	constexpr uint32_t m_nFirstControlPoint = 0x1C4;  // int32 
	constexpr uint32_t m_nNumControlPoints = 0x1C8;  // int32 
	constexpr uint32_t m_nParticleIncrement = 0x1CC;  // int32 
	constexpr uint32_t m_nFirstSourcePoint = 0x1D0;  // int32 
	constexpr uint32_t m_bNumBasedOnParticleCount = 0x1D4;  // bool 
	constexpr uint32_t m_nAttributeToRead = 0x1D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nCPField = 0x1DC;  // int32 
}

// Offset: 0x7ffe1e0232e0 
// N. Class: 269 
// Fields: 4 
namespace C_OP_RemapTransformOrientationToYaw
{
	constexpr uint32_t m_TransformInput = 0x1C0;  // CParticleTransformInput 
	constexpr uint32_t m_nFieldOutput = 0x228;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flRotOffset = 0x22C;  // float32 
	constexpr uint32_t m_flSpinStrength = 0x230;  // float32 
}

// Offset: 0x7ffe1e02bbc0 
// N. Class: 270 
// Fields: 3 
namespace C_OP_DampenToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_flRange = 0x1C4;  // float32 
	constexpr uint32_t m_flScale = 0x1C8;  // float32 
}

// Offset: 0x7ffe1e02be00 
// N. Class: 271 
// Fields: 3 
namespace C_OP_SetToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_vecOffset = 0x1C4;  // Vector 
	constexpr uint32_t m_bOffsetLocal = 0x1D0;  // bool 
}

// Offset: 0x7ffe1e029210 
// N. Class: 272 
// Fields: 13 
namespace C_OP_PinParticleToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_vecOffset = 0x1C8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_bOffsetLocal = 0x840;  // bool 
	constexpr uint32_t m_nParticleSelection = 0x844;  // ParticleSelection_t 
	constexpr uint32_t m_nParticleNumber = 0x848;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nPinBreakType = 0x9A8;  // ParticlePinDistance_t 
	constexpr uint32_t m_flBreakDistance = 0x9B0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flBreakSpeed = 0xB10;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flAge = 0xC70;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nBreakControlPointNumber = 0xDD0;  // int32 
	constexpr uint32_t m_nBreakControlPointNumber2 = 0xDD4;  // int32 
	constexpr uint32_t m_flBreakValue = 0xDD8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInterpolation = 0xF38;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e02a600 
// N. Class: 273 
// Fields: 6 
namespace C_OP_MovementRigidAttachToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nScaleControlPoint = 0x1C4;  // int32 
	constexpr uint32_t m_nScaleCPField = 0x1C8;  // int32 
	constexpr uint32_t m_nFieldInput = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bOffsetLocal = 0x1D4;  // bool 
}

// Offset: 0x7ffe1e025f60 
// N. Class: 274 
// Fields: 5 
namespace C_OP_LerpToInitialPosition
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_flInterpolation = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_nCacheField = 0x328;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x330;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vecScale = 0x490;  // CParticleCollectionVecInput 
}

// Offset: 0x7ffe1e0236a0 
// N. Class: 275 
// Fields: 13 
namespace C_OP_DistanceBetweenTransforms
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_TransformStart = 0x1C8;  // CParticleTransformInput 
	constexpr uint32_t m_TransformEnd = 0x230;  // CParticleTransformInput 
	constexpr uint32_t m_flInputMin = 0x298;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInputMax = 0x3F8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMin = 0x558;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x6B8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMaxTraceLength = 0x818;  // float32 
	constexpr uint32_t m_flLOSScale = 0x81C;  // float32 
	constexpr uint32_t m_CollisionGroupName = 0x820;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x8A0;  // ParticleTraceSet_t 
	constexpr uint32_t m_bLOS = 0x8A4;  // bool 
	constexpr uint32_t m_nSetMethod = 0x8A8;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e02ae10 
// N. Class: 276 
// Fields: 10 
namespace C_OP_PercentageBetweenTransforms
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1C8;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D0;  // float32 
	constexpr uint32_t m_TransformStart = 0x1D8;  // CParticleTransformInput 
	constexpr uint32_t m_TransformEnd = 0x240;  // CParticleTransformInput 
	constexpr uint32_t m_nSetMethod = 0x2A8;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x2AC;  // bool 
	constexpr uint32_t m_bRadialCheck = 0x2AD;  // bool 
}

// Offset: 0x7ffe1e02a700 
// N. Class: 277 
// Fields: 10 
namespace C_OP_PercentageBetweenTransformsVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1C8;  // float32 
	constexpr uint32_t m_vecOutputMin = 0x1CC;  // Vector 
	constexpr uint32_t m_vecOutputMax = 0x1D8;  // Vector 
	constexpr uint32_t m_TransformStart = 0x1E8;  // CParticleTransformInput 
	constexpr uint32_t m_TransformEnd = 0x250;  // CParticleTransformInput 
	constexpr uint32_t m_nSetMethod = 0x2B8;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x2BC;  // bool 
	constexpr uint32_t m_bRadialCheck = 0x2BD;  // bool 
}

// Offset: 0x7ffe1e023410 
// N. Class: 278 
// Fields: 12 
namespace C_OP_PercentageBetweenTransformLerpCPs
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1C8;  // float32 
	constexpr uint32_t m_TransformStart = 0x1D0;  // CParticleTransformInput 
	constexpr uint32_t m_TransformEnd = 0x238;  // CParticleTransformInput 
	constexpr uint32_t m_nOutputStartCP = 0x2A0;  // int32 
	constexpr uint32_t m_nOutputStartField = 0x2A4;  // int32 
	constexpr uint32_t m_nOutputEndCP = 0x2A8;  // int32 
	constexpr uint32_t m_nOutputEndField = 0x2AC;  // int32 
	constexpr uint32_t m_nSetMethod = 0x2B0;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x2B4;  // bool 
	constexpr uint32_t m_bRadialCheck = 0x2B5;  // bool 
}

// Offset: 0x7ffe1e024520 
// N. Class: 279 
// Fields: 9 
namespace C_OP_DistanceBetweenVecs
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecPoint1 = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecPoint2 = 0x840;  // CPerParticleVecInput 
	constexpr uint32_t m_flInputMin = 0xEB8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInputMax = 0x1018;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMin = 0x1178;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x12D8;  // CPerParticleFloatInput 
	constexpr uint32_t m_nSetMethod = 0x1438;  // ParticleSetMethod_t 
	constexpr uint32_t m_bDeltaTime = 0x143C;  // bool 
}

// Offset: 0x7ffe1e026450 
// N. Class: 280 
// Fields: 3 
namespace C_OP_DirectionBetweenVecsToVec
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecPoint1 = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_vecPoint2 = 0x840;  // CPerParticleVecInput 
}

// Offset: 0x7ffe1e028ad0 
// N. Class: 281 
// Fields: 15 
namespace C_OP_DistanceToTransform
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInputMax = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMin = 0x488;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5E8;  // CPerParticleFloatInput 
	constexpr uint32_t m_TransformStart = 0x748;  // CParticleTransformInput 
	constexpr uint32_t m_bLOS = 0x7B0;  // bool 
	constexpr uint32_t m_CollisionGroupName = 0x7B1;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x834;  // ParticleTraceSet_t 
	constexpr uint32_t m_flMaxTraceLength = 0x838;  // float32 
	constexpr uint32_t m_flLOSScale = 0x83C;  // float32 
	constexpr uint32_t m_nSetMethod = 0x840;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x844;  // bool 
	constexpr uint32_t m_bAdditive = 0x845;  // bool 
	constexpr uint32_t m_vecComponentScale = 0x848;  // CPerParticleVecInput 
}

// Offset: 0x7ffe1e02c310 
// N. Class: 282 
// Fields: 11 
namespace C_OP_CylindricalDistanceToTransform
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInputMax = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMin = 0x488;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5E8;  // CPerParticleFloatInput 
	constexpr uint32_t m_TransformStart = 0x748;  // CParticleTransformInput 
	constexpr uint32_t m_TransformEnd = 0x7B0;  // CParticleTransformInput 
	constexpr uint32_t m_nSetMethod = 0x818;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x81C;  // bool 
	constexpr uint32_t m_bAdditive = 0x81D;  // bool 
	constexpr uint32_t m_bCapsule = 0x81E;  // bool 
}

// Offset: 0x7ffe1e023850 
// N. Class: 283 
// Fields: 7 
namespace C_OP_RtEnvCull
{
	constexpr uint32_t m_vecTestDir = 0x1C0;  // Vector 
	constexpr uint32_t m_vecTestNormal = 0x1CC;  // Vector 
	constexpr uint32_t m_bCullOnMiss = 0x1D8;  // bool 
	constexpr uint32_t m_bStickInsteadOfCull = 0x1D9;  // bool 
	constexpr uint32_t m_RtEnvName = 0x1DA;  // char[128] 
	constexpr uint32_t m_nRTEnvCP = 0x25C;  // int32 
	constexpr uint32_t m_nComponent = 0x260;  // int32 
}

// Offset: 0x7ffe1e027fe0 
// N. Class: 284 
// Fields: 4 
namespace C_OP_MovementLoopInsideSphere
{
	constexpr uint32_t m_nCP = 0x1C0;  // int32 
	constexpr uint32_t m_flDistance = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vecScale = 0x328;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nDistSqrAttr = 0x9A0;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e02c1f0 
// N. Class: 285 
// Fields: 9 
namespace C_OP_MoveToHitbox
{
	constexpr uint32_t m_modelInput = 0x1C0;  // CParticleModelInput 
	constexpr uint32_t m_transformInput = 0x220;  // CParticleTransformInput 
	constexpr uint32_t m_flLifeTimeLerpStart = 0x28C;  // float32 
	constexpr uint32_t m_flLifeTimeLerpEnd = 0x290;  // float32 
	constexpr uint32_t m_flPrevPosScale = 0x294;  // float32 
	constexpr uint32_t m_HitboxSetName = 0x298;  // char[128] 
	constexpr uint32_t m_bUseBones = 0x318;  // bool 
	constexpr uint32_t m_nLerpType = 0x31C;  // HitboxLerpType_t 
	constexpr uint32_t m_flInterpolation = 0x320;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e029e40 
// N. Class: 286 
// Fields: 15 
namespace C_OP_LockToBone
{
	constexpr uint32_t m_modelInput = 0x1C0;  // CParticleModelInput 
	constexpr uint32_t m_transformInput = 0x220;  // CParticleTransformInput 
	constexpr uint32_t m_flLifeTimeFadeStart = 0x288;  // float32 
	constexpr uint32_t m_flLifeTimeFadeEnd = 0x28C;  // float32 
	constexpr uint32_t m_flJumpThreshold = 0x290;  // float32 
	constexpr uint32_t m_flPrevPosScale = 0x294;  // float32 
	constexpr uint32_t m_HitboxSetName = 0x298;  // char[128] 
	constexpr uint32_t m_bRigid = 0x318;  // bool 
	constexpr uint32_t m_bUseBones = 0x319;  // bool 
	constexpr uint32_t m_nFieldOutput = 0x31C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutputPrev = 0x320;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bRigidRotationLock = 0x328;  // bool 
	constexpr uint32_t m_vecRotation = 0x330;  // CPerParticleVecInput 
	constexpr uint32_t m_flRotLerp = 0x9A8;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e02a920 
// N. Class: 287 
// Fields: 3 
namespace C_OP_SnapshotRigidSkinToBones
{
	constexpr uint32_t m_bTransformNormals = 0x1C0;  // bool 
	constexpr uint32_t m_bTransformRadii = 0x1C1;  // bool 
	constexpr uint32_t m_nControlPointNumber = 0x1C4;  // int32 
}

// Offset: 0x7ffe1e029620 
// N. Class: 288 
// Fields: 7 
namespace C_OP_SnapshotSkinToBones
{
	constexpr uint32_t m_bTransformNormals = 0x1C0;  // bool 
	constexpr uint32_t m_bTransformRadii = 0x1C1;  // bool 
	constexpr uint32_t m_nControlPointNumber = 0x1C4;  // int32 
	constexpr uint32_t m_flLifeTimeFadeStart = 0x1C8;  // float32 
	constexpr uint32_t m_flLifeTimeFadeEnd = 0x1CC;  // float32 
	constexpr uint32_t m_flJumpThreshold = 0x1D0;  // float32 
	constexpr uint32_t m_flPrevPosScale = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e024250 
// N. Class: 289 
// Fields: 11 
namespace C_OP_CPOffsetToPercentageBetweenCPs
{
	constexpr uint32_t m_flInputMin = 0x1C0;  // float32 
	constexpr uint32_t m_flInputMax = 0x1C4;  // float32 
	constexpr uint32_t m_flInputBias = 0x1C8;  // float32 
	constexpr uint32_t m_nStartCP = 0x1CC;  // int32 
	constexpr uint32_t m_nEndCP = 0x1D0;  // int32 
	constexpr uint32_t m_nOffsetCP = 0x1D4;  // int32 
	constexpr uint32_t m_nOuputCP = 0x1D8;  // int32 
	constexpr uint32_t m_nInputCP = 0x1DC;  // int32 
	constexpr uint32_t m_bRadialCheck = 0x1E0;  // bool 
	constexpr uint32_t m_bScaleOffset = 0x1E1;  // bool 
	constexpr uint32_t m_vecOffset = 0x1E4;  // Vector 
}

// Offset: 0x7ffe1e0254d0 
// N. Class: 290 
// Fields: 4 
namespace C_OP_PlaneCull
{
	constexpr uint32_t m_nPlaneControlPoint = 0x1C0;  // int32 
	constexpr uint32_t m_vecPlaneDirection = 0x1C4;  // Vector 
	constexpr uint32_t m_bLocalSpace = 0x1D0;  // bool 
	constexpr uint32_t m_flPlaneOffset = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e027870 
// N. Class: 291 
// Fields: 4 
namespace C_OP_DistanceCull
{
	constexpr uint32_t m_nControlPoint = 0x1C0;  // int32 
	constexpr uint32_t m_vecPointOffset = 0x1C4;  // Vector 
	constexpr uint32_t m_flDistance = 0x1D0;  // float32 
	constexpr uint32_t m_bCullInside = 0x1D4;  // bool 
}

// Offset: 0x7ffe1e023110 
// N. Class: 292 
// Fields: 5 
namespace C_OP_ModelCull
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_bBoundBox = 0x1C4;  // bool 
	constexpr uint32_t m_bCullOutside = 0x1C5;  // bool 
	constexpr uint32_t m_bUseBones = 0x1C6;  // bool 
	constexpr uint32_t m_HitboxSetName = 0x1C7;  // char[128] 
}

// Offset: 0x7ffe1e023d50 
// N. Class: 293 
// Fields: 7 
namespace C_OP_ModelDampenMovement
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_bBoundBox = 0x1C4;  // bool 
	constexpr uint32_t m_bOutside = 0x1C5;  // bool 
	constexpr uint32_t m_bUseBones = 0x1C6;  // bool 
	constexpr uint32_t m_HitboxSetName = 0x1C7;  // char[128] 
	constexpr uint32_t m_vecPosOffset = 0x248;  // CPerParticleVecInput 
	constexpr uint32_t m_fDrag = 0x8C0;  // float32 
}

// Offset: 0x7ffe1e02b000 
// N. Class: 294 
// Fields: 8 
namespace C_OP_SequenceFromModel
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutputAnim = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D8;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1DC;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e026da0 
// N. Class: 295 
// Fields: 6 
namespace C_OP_VelocityMatchingForce
{
	constexpr uint32_t m_flDirScale = 0x1C0;  // float32 
	constexpr uint32_t m_flSpdScale = 0x1C4;  // float32 
	constexpr uint32_t m_flNeighborDistance = 0x1C8;  // float32 
	constexpr uint32_t m_flFacingStrength = 0x1CC;  // float32 
	constexpr uint32_t m_bUseAABB = 0x1D0;  // bool 
	constexpr uint32_t m_nCPBroadcast = 0x1D4;  // int32 
}

// Offset: 0x7ffe1e02b340 
// N. Class: 296 
// Fields: 3 
namespace C_OP_MovementMaintainOffset
{
	constexpr uint32_t m_vecOffset = 0x1C0;  // Vector 
	constexpr uint32_t m_nCP = 0x1CC;  // int32 
	constexpr uint32_t m_bRadiusScale = 0x1D0;  // bool 
}

// Offset: 0x7ffe1e029920 
// N. Class: 297 
// Fields: 17 
namespace C_OP_MovementPlaceOnGround
{
	constexpr uint32_t m_flOffset = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMaxTraceLength = 0x320;  // float32 
	constexpr uint32_t m_flTolerance = 0x324;  // float32 
	constexpr uint32_t m_flTraceOffset = 0x328;  // float32 
	constexpr uint32_t m_flLerpRate = 0x32C;  // float32 
	constexpr uint32_t m_CollisionGroupName = 0x330;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x3B0;  // ParticleTraceSet_t 
	constexpr uint32_t m_nRefCP1 = 0x3B4;  // int32 
	constexpr uint32_t m_nRefCP2 = 0x3B8;  // int32 
	constexpr uint32_t m_nLerpCP = 0x3BC;  // int32 
	constexpr uint32_t m_nTraceMissBehavior = 0x3C8;  // ParticleTraceMissBehavior_t 
	constexpr uint32_t m_bIncludeShotHull = 0x3CC;  // bool 
	constexpr uint32_t m_bIncludeWater = 0x3CD;  // bool 
	constexpr uint32_t m_bSetNormal = 0x3D0;  // bool 
	constexpr uint32_t m_bScaleOffset = 0x3D1;  // bool 
	constexpr uint32_t m_nPreserveOffsetCP = 0x3D4;  // int32 
	constexpr uint32_t m_nIgnoreCP = 0x3D8;  // int32 
}

// Offset: 0x7ffe1e02b530 
// N. Class: 298 
// Fields: 4 
namespace C_OP_InheritFromParentParticles
{
	constexpr uint32_t m_flScale = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nIncrement = 0x1C8;  // int32 
	constexpr uint32_t m_bRandomDistribution = 0x1CC;  // bool 
}

// Offset: 0x7ffe1e02b640 
// N. Class: 299 
// Fields: 5 
namespace C_OP_InheritFromParentParticlesV2
{
	constexpr uint32_t m_flScale = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nIncrement = 0x1C8;  // int32 
	constexpr uint32_t m_bRandomDistribution = 0x1CC;  // bool 
	constexpr uint32_t m_nMissingParentBehavior = 0x1D0;  // MissingParentInheritBehavior_t 
}

// Offset: 0x7ffe1e028580 
// N. Class: 300 
// Fields: 5 
namespace C_OP_ReadFromNeighboringParticle
{
	constexpr uint32_t m_nFieldInput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nIncrement = 0x1C8;  // int32 
	constexpr uint32_t m_DistanceCheck = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInterpolation = 0x330;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e023cb0 
// N. Class: 301 
// Fields: 4 
namespace C_OP_InheritFromPeerSystem
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldInput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nIncrement = 0x1C8;  // int32 
	constexpr uint32_t m_nGroupID = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e02b250 
// N. Class: 302 
// Fields: 3 
namespace C_OP_RemapVectorComponentToScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nComponent = 0x1C8;  // int32 
}

// Offset: 0x7ffe1e028310 
// N. Class: 303 
// Fields: 3 
namespace C_OP_OrientTo2dDirection
{
	constexpr uint32_t m_flRotOffset = 0x1C0;  // float32 
	constexpr uint32_t m_flSpinStrength = 0x1C4;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e024880 
// N. Class: 304 
// Fields: 6 
namespace C_OP_RestartAfterDuration
{
	constexpr uint32_t m_flDurationMin = 0x1C0;  // float32 
	constexpr uint32_t m_flDurationMax = 0x1C4;  // float32 
	constexpr uint32_t m_nCP = 0x1C8;  // int32 
	constexpr uint32_t m_nCPField = 0x1CC;  // int32 
	constexpr uint32_t m_nChildGroupID = 0x1D0;  // int32 
	constexpr uint32_t m_bOnlyChildren = 0x1D4;  // bool 
}

// Offset: 0x7ffe1e026d00 
// N. Class: 305 
// Fields: 4 
namespace C_OP_Orient2DRelToCP
{
	constexpr uint32_t m_flRotOffset = 0x1C0;  // float32 
	constexpr uint32_t m_flSpinStrength = 0x1C4;  // float32 
	constexpr uint32_t m_nCP = 0x1C8;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1CC;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e02ad80 
// N. Class: 306 
// Fields: 4 
namespace C_OP_MovementRotateParticleAroundAxis
{
	constexpr uint32_t m_vecRotAxis = 0x1C0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flRotRate = 0x838;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_TransformInput = 0x998;  // CParticleTransformInput 
	constexpr uint32_t m_bLocalSpace = 0xA00;  // bool 
}

// Offset: 0x7ffe1e0276c0 
// N. Class: 307 
// Fields: 7 
namespace C_OP_RotateVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecRotAxisMin = 0x1C4;  // Vector 
	constexpr uint32_t m_vecRotAxisMax = 0x1D0;  // Vector 
	constexpr uint32_t m_flRotRateMin = 0x1DC;  // float32 
	constexpr uint32_t m_flRotRateMax = 0x1E0;  // float32 
	constexpr uint32_t m_bNormalize = 0x1E4;  // bool 
	constexpr uint32_t m_flScale = 0x1E8;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e0290e0 
// N. Class: 308 
// Fields: 4 
namespace C_OP_MaxVelocity
{
	constexpr uint32_t m_flMaxVelocity = 0x1C0;  // float32 
	constexpr uint32_t m_flMinVelocity = 0x1C4;  // float32 
	constexpr uint32_t m_nOverrideCP = 0x1C8;  // int32 
	constexpr uint32_t m_nOverrideCPField = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e023f40 
// N. Class: 309 
// Fields: 4 
namespace C_OP_LagCompensation
{
	constexpr uint32_t m_nDesiredVelocityCP = 0x1C0;  // int32 
	constexpr uint32_t m_nLatencyCP = 0x1C4;  // int32 
	constexpr uint32_t m_nLatencyCPField = 0x1C8;  // int32 
	constexpr uint32_t m_nDesiredVelocityCPField = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e026e60 
// N. Class: 310 
// Fields: 7 
namespace C_OP_MaintainSequentialPath
{
	constexpr uint32_t m_fMaxDistance = 0x1C0;  // float32 
	constexpr uint32_t m_flNumToAssign = 0x1C4;  // float32 
	constexpr uint32_t m_flCohesionStrength = 0x1C8;  // float32 
	constexpr uint32_t m_flTolerance = 0x1CC;  // float32 
	constexpr uint32_t m_bLoop = 0x1D0;  // bool 
	constexpr uint32_t m_bUseParticleCount = 0x1D1;  // bool 
	constexpr uint32_t m_PathParams = 0x1E0;  // CPathParameters 
}

// Offset: 0x7ffe1e027f60 
// N. Class: 311 
// Fields: 4 
namespace C_OP_LockToSavedSequentialPathV2
{
	constexpr uint32_t m_flFadeStart = 0x1C0;  // float32 
	constexpr uint32_t m_flFadeEnd = 0x1C4;  // float32 
	constexpr uint32_t m_bCPPairs = 0x1C8;  // bool 
	constexpr uint32_t m_PathParams = 0x1D0;  // CPathParameters 
}

// Offset: 0x7ffe1e024d70 
// N. Class: 312 
// Fields: 4 
namespace C_OP_LockToSavedSequentialPath
{
	constexpr uint32_t m_flFadeStart = 0x1C4;  // float32 
	constexpr uint32_t m_flFadeEnd = 0x1C8;  // float32 
	constexpr uint32_t m_bCPPairs = 0x1CC;  // bool 
	constexpr uint32_t m_PathParams = 0x1D0;  // CPathParameters 
}

// Offset: 0x7ffe1e02aa50 
// N. Class: 313 
// Fields: 11 
namespace C_OP_RemapDotProductToScalar
{
	constexpr uint32_t m_nInputCP1 = 0x1C0;  // int32 
	constexpr uint32_t m_nInputCP2 = 0x1C4;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D8;  // float32 
	constexpr uint32_t m_bUseParticleVelocity = 0x1DC;  // bool 
	constexpr uint32_t m_nSetMethod = 0x1E0;  // ParticleSetMethod_t 
	constexpr uint32_t m_bActiveRange = 0x1E4;  // bool 
	constexpr uint32_t m_bUseParticleNormal = 0x1E5;  // bool 
}

// Offset: 0x7ffe1e025cc0 
// N. Class: 314 
// Fields: 11 
namespace C_OP_RemapCPtoScalar
{
	constexpr uint32_t m_nCPInput = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nField = 0x1C8;  // int32 
	constexpr uint32_t m_flInputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flStartTime = 0x1DC;  // float32 
	constexpr uint32_t m_flEndTime = 0x1E0;  // float32 
	constexpr uint32_t m_flInterpRate = 0x1E4;  // float32 
	constexpr uint32_t m_nSetMethod = 0x1E8;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e023970 
// N. Class: 315 
// Fields: 1 
namespace C_OP_NormalLock
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
}

// Offset: 0x7ffe1e02a450 
// N. Class: 316 
// Fields: 13 
namespace C_OP_RemapCPtoVector
{
	constexpr uint32_t m_nCPInput = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nLocalSpaceCP = 0x1C8;  // int32 
	constexpr uint32_t m_vInputMin = 0x1CC;  // Vector 
	constexpr uint32_t m_vInputMax = 0x1D8;  // Vector 
	constexpr uint32_t m_vOutputMin = 0x1E4;  // Vector 
	constexpr uint32_t m_vOutputMax = 0x1F0;  // Vector 
	constexpr uint32_t m_flStartTime = 0x1FC;  // float32 
	constexpr uint32_t m_flEndTime = 0x200;  // float32 
	constexpr uint32_t m_flInterpRate = 0x204;  // float32 
	constexpr uint32_t m_nSetMethod = 0x208;  // ParticleSetMethod_t 
	constexpr uint32_t m_bOffset = 0x20C;  // bool 
	constexpr uint32_t m_bAccelerate = 0x20D;  // bool 
}

// Offset: 0x7ffe1e025730 
// N. Class: 317 
// Fields: 2 
namespace C_OP_SetCPtoVector
{
	constexpr uint32_t m_nCPInput = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e023e50 
// N. Class: 318 
// Fields: 1 
namespace C_OP_RemapTransformToVelocity
{
	constexpr uint32_t m_TransformInput = 0x1C0;  // CParticleTransformInput 
}

// Offset: 0x7ffe1e025ad0 
// N. Class: 319 
// Fields: 3 
namespace C_OP_RemapVelocityToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x1C4;  // float32 
	constexpr uint32_t m_bNormalize = 0x1C8;  // bool 
}

// Offset: 0x7ffe1e027930 
// N. Class: 320 
// Fields: 4 
namespace C_OP_RemapCPVelocityToVector
{
	constexpr uint32_t m_nControlPoint = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x1C8;  // float32 
	constexpr uint32_t m_bNormalize = 0x1CC;  // bool 
}

// Offset: 0x7ffe1e0259a0 
// N. Class: 321 
// Fields: 2 
namespace C_OP_SetCPOrientationToDirection
{
	constexpr uint32_t m_nInputControlPoint = 0x1C0;  // int32 
	constexpr uint32_t m_nOutputControlPoint = 0x1C4;  // int32 
}

// Offset: 0x7ffe1e025810 
// N. Class: 322 
// Fields: 7 
namespace C_OP_RemapDirectionToCPToVector
{
	constexpr uint32_t m_nCP = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x1C8;  // float32 
	constexpr uint32_t m_flOffsetRot = 0x1CC;  // float32 
	constexpr uint32_t m_vecOffsetAxis = 0x1D0;  // Vector 
	constexpr uint32_t m_bNormalize = 0x1DC;  // bool 
	constexpr uint32_t m_nFieldStrength = 0x1E0;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e025c00 
// N. Class: 323 
// Fields: 4 
namespace C_OP_RemapCrossProductOfTwoVectorsToVector
{
	constexpr uint32_t m_InputVec1 = 0x1C0;  // CPerParticleVecInput 
	constexpr uint32_t m_InputVec2 = 0x838;  // CPerParticleVecInput 
	constexpr uint32_t m_nFieldOutput = 0xEB0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bNormalize = 0xEB4;  // bool 
}

// Offset: 0x7ffe1e027800 
// N. Class: 324 
// Fields: 2 
namespace C_OP_NormalizeVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x1C4;  // float32 
}

// Offset: 0x7ffe1e027c70 
// N. Class: 325 
// Fields: 3 
namespace C_OP_RemapControlPointDirectionToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScale = 0x1C4;  // float32 
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
}

// Offset: 0x7ffe1e024df0 
// N. Class: 326 
// Fields: 9 
namespace C_OP_SetCPOrientationToGroundNormal
{
	constexpr uint32_t m_flInterpRate = 0x1C0;  // float32 
	constexpr uint32_t m_flMaxTraceLength = 0x1C4;  // float32 
	constexpr uint32_t m_flTolerance = 0x1C8;  // float32 
	constexpr uint32_t m_flTraceOffset = 0x1CC;  // float32 
	constexpr uint32_t m_CollisionGroupName = 0x1D0;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x250;  // ParticleTraceSet_t 
	constexpr uint32_t m_nInputCP = 0x254;  // int32 
	constexpr uint32_t m_nOutputCP = 0x258;  // int32 
	constexpr uint32_t m_bIncludeWater = 0x268;  // bool 
}

// Offset: 0x7ffe1e028140 
// N. Class: 327 
// Fields: 4 
namespace C_OP_RemapTransformOrientationToRotations
{
	constexpr uint32_t m_TransformInput = 0x1C0;  // CParticleTransformInput 
	constexpr uint32_t m_vecRotation = 0x228;  // Vector 
	constexpr uint32_t m_bUseQuat = 0x234;  // bool 
	constexpr uint32_t m_bWriteNormal = 0x235;  // bool 
}

// Offset: 0x7ffe1e027d10 
// N. Class: 328 
// Fields: 4 
namespace C_OP_RemapControlPointOrientationToRotation
{
	constexpr uint32_t m_nCP = 0x1C0;  // int32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flOffsetRot = 0x1C8;  // float32 
	constexpr uint32_t m_nComponent = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e026330 
// N. Class: 329 
// Fields: 5 
namespace C_OP_LockToPointList
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_pointList = 0x1C8;  // CUtlVector< PointDefinition_t > 
	constexpr uint32_t m_bPlaceAlongPath = 0x1E0;  // bool 
	constexpr uint32_t m_bClosedLoop = 0x1E1;  // bool 
	constexpr uint32_t m_nNumPointsAlongPath = 0x1E4;  // int32 
}

// Offset: 0x7ffe1e024740 
// N. Class: 330 
// Fields: 9 
namespace C_OP_RemapNamedModelElementOnceTimed
{
	constexpr uint32_t m_hModel = 0x1C0;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_inNames = 0x1C8;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_outNames = 0x1E0;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_fallbackNames = 0x1F8;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_bModelFromRenderer = 0x210;  // bool 
	constexpr uint32_t m_bProportional = 0x211;  // bool 
	constexpr uint32_t m_nFieldInput = 0x214;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x218;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flRemapTime = 0x21C;  // float32 
}

// Offset: 0x0 
// N. Class: 331 
// Fields: 0 
namespace C_OP_RemapNamedModelSequenceOnceTimed
{
}

// Offset: 0x0 
// N. Class: 332 
// Fields: 0 
namespace C_OP_RemapNamedModelBodyPartOnceTimed
{
}

// Offset: 0x0 
// N. Class: 333 
// Fields: 0 
namespace C_OP_RemapNamedModelMeshGroupOnceTimed
{
}

// Offset: 0x7ffe1e0253e0 
// N. Class: 334 
// Fields: 7 
namespace C_OP_RemapNamedModelElementEndCap
{
	constexpr uint32_t m_hModel = 0x1C0;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_inNames = 0x1C8;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_outNames = 0x1E0;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_fallbackNames = 0x1F8;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_bModelFromRenderer = 0x210;  // bool 
	constexpr uint32_t m_nFieldInput = 0x214;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFieldOutput = 0x218;  // ParticleAttributeIndex_t 
}

// Offset: 0x0 
// N. Class: 335 
// Fields: 0 
namespace C_OP_RemapNamedModelSequenceEndCap
{
}

// Offset: 0x0 
// N. Class: 336 
// Fields: 0 
namespace C_OP_RemapNamedModelBodyPartEndCap
{
}

// Offset: 0x0 
// N. Class: 337 
// Fields: 0 
namespace C_OP_RemapNamedModelMeshGroupEndCap
{
}

// Offset: 0x7ffe1e0249b0 
// N. Class: 338 
// Fields: 12 
namespace C_OP_SetFromCPSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nAttributeToRead = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAttributeToWrite = 0x1C8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nLocalSpaceCP = 0x1CC;  // int32 
	constexpr uint32_t m_bRandom = 0x1D0;  // bool 
	constexpr uint32_t m_bReverse = 0x1D1;  // bool 
	constexpr uint32_t m_nRandomSeed = 0x1D4;  // int32 
	constexpr uint32_t m_nSnapShotStartPoint = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nSnapShotIncrement = 0x338;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInterpolation = 0x498;  // CPerParticleFloatInput 
	constexpr uint32_t m_bSubSample = 0x5F8;  // bool 
	constexpr uint32_t m_bPrev = 0x5F9;  // bool 
}

// Offset: 0x7ffe1e0286d0 
// N. Class: 339 
// Fields: 9 
namespace C_OP_VectorFieldSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nAttributeToWrite = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nLocalSpaceCP = 0x1C8;  // int32 
	constexpr uint32_t m_flInterpolation = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecScale = 0x330;  // CPerParticleVecInput 
	constexpr uint32_t m_flBoundaryDampening = 0x9A8;  // float32 
	constexpr uint32_t m_bSetVelocity = 0x9AC;  // bool 
	constexpr uint32_t m_bLockToSurface = 0x9AD;  // bool 
	constexpr uint32_t m_flGridSpacing = 0x9B0;  // float32 
}

// Offset: 0x7ffe1e0235a0 
// N. Class: 340 
// Fields: 6 
namespace C_OP_SetAttributeToScalarExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;  // ScalarExpressionType_t 
	constexpr uint32_t m_flInput1 = 0x1C8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInput2 = 0x328;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOutputRemap = 0x488;  // CParticleRemapFloatInput 
	constexpr uint32_t m_nOutputField = 0x5E8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x5EC;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e023020 
// N. Class: 341 
// Fields: 6 
namespace C_OP_SetVectorAttributeToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;  // VectorExpressionType_t 
	constexpr uint32_t m_vInput1 = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_vInput2 = 0x840;  // CPerParticleVecInput 
	constexpr uint32_t m_nOutputField = 0xEB8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0xEBC;  // ParticleSetMethod_t 
	constexpr uint32_t m_bNormalizedOutput = 0xEC0;  // bool 
}

// Offset: 0x7ffe1e02b940 
// N. Class: 342 
// Fields: 6 
namespace C_OP_SetFloatAttributeToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;  // VectorFloatExpressionType_t 
	constexpr uint32_t m_vInput1 = 0x1C8;  // CPerParticleVecInput 
	constexpr uint32_t m_vInput2 = 0x840;  // CPerParticleVecInput 
	constexpr uint32_t m_flOutputRemap = 0xEB8;  // CParticleRemapFloatInput 
	constexpr uint32_t m_nOutputField = 0x1018;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x101C;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e02c490 
// N. Class: 343 
// Fields: 4 
namespace C_OP_RemapGravityToVector
{
	constexpr uint32_t m_vInput1 = 0x1C0;  // CPerParticleVecInput 
	constexpr uint32_t m_nOutputField = 0x838;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x83C;  // ParticleSetMethod_t 
	constexpr uint32_t m_bNormalizedOutput = 0x840;  // bool 
}

// Offset: 0x7ffe1e029c80 
// N. Class: 344 
// Fields: 12 
namespace C_OP_MovementSkinnedPositionFromCPSnapshot
{
	constexpr uint32_t m_nSnapshotControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nControlPointNumber = 0x1C4;  // int32 
	constexpr uint32_t m_bRandom = 0x1C8;  // bool 
	constexpr uint32_t m_nRandomSeed = 0x1CC;  // int32 
	constexpr uint32_t m_bSetNormal = 0x1D0;  // bool 
	constexpr uint32_t m_bSetRadius = 0x1D1;  // bool 
	constexpr uint32_t m_nIndexType = 0x1D4;  // SnapshotIndexType_t 
	constexpr uint32_t m_flReadIndex = 0x1D8;  // CPerParticleFloatInput 
	constexpr uint32_t m_flIncrement = 0x338;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nFullLoopIncrement = 0x498;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nSnapShotStartPoint = 0x5F8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInterpolation = 0x758;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e02be80 
// N. Class: 345 
// Fields: 6 
namespace C_OP_MovementMoveAlongSkinnedCPSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;  // int32 
	constexpr uint32_t m_nSnapshotControlPointNumber = 0x1C4;  // int32 
	constexpr uint32_t m_bSetNormal = 0x1C8;  // bool 
	constexpr uint32_t m_bSetRadius = 0x1C9;  // bool 
	constexpr uint32_t m_flInterpolation = 0x1D0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flTValue = 0x330;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e024cf0 
// N. Class: 346 
// Fields: 2 
namespace C_OP_QuantizeFloat
{
	constexpr uint32_t m_InputValue = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_nOutputField = 0x320;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e028dc0 
// N. Class: 347 
// Fields: 5 
namespace C_OP_SetUserEvent
{
	constexpr uint32_t m_flInput = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRisingEdge = 0x320;  // CPerParticleFloatInput 
	constexpr uint32_t m_nRisingEventType = 0x480;  // EventTypeSelection_t 
	constexpr uint32_t m_flFallingEdge = 0x488;  // CPerParticleFloatInput 
	constexpr uint32_t m_nFallingEventType = 0x5E8;  // EventTypeSelection_t 
}

// Offset: 0x7ffe1e028f10 
// N. Class: 348 
// Fields: 4 
namespace C_OP_SetFloatCollection
{
	constexpr uint32_t m_InputValue = 0x1C0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nOutputField = 0x320;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x324;  // ParticleSetMethod_t 
	constexpr uint32_t m_Lerp = 0x328;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e0295a0 
// N. Class: 349 
// Fields: 4 
namespace C_OP_SetFloat
{
	constexpr uint32_t m_InputValue = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_nOutputField = 0x320;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x324;  // ParticleSetMethod_t 
	constexpr uint32_t m_Lerp = 0x328;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e028390 
// N. Class: 350 
// Fields: 5 
namespace C_OP_SetVec
{
	constexpr uint32_t m_InputValue = 0x1C0;  // CPerParticleVecInput 
	constexpr uint32_t m_nOutputField = 0x838;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSetMethod = 0x83C;  // ParticleSetMethod_t 
	constexpr uint32_t m_Lerp = 0x840;  // CPerParticleFloatInput 
	constexpr uint32_t m_bNormalizedOutput = 0x9A0;  // bool 
}

// Offset: 0x7ffe1e023bb0 
// N. Class: 351 
// Fields: 5 
namespace C_OP_DragRelativeToPlane
{
	constexpr uint32_t m_flDragAtPlane = 0x1C0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flFalloff = 0x320;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bDirectional = 0x480;  // bool 
	constexpr uint32_t m_vecPlaneNormal = 0x488;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nControlPointNumber = 0xB00;  // int32 
}

// Offset: 0x7ffe1e031540 
// N. Class: 352 
// Fields: 2 
namespace C_OP_RemapDensityGradientToVectorAttribute
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x1C4;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e030b70 
// N. Class: 353 
// Fields: 6 
namespace C_OP_LockPoints
{
	constexpr uint32_t m_nMinCol = 0x1C0;  // int32 
	constexpr uint32_t m_nMaxCol = 0x1C4;  // int32 
	constexpr uint32_t m_nMinRow = 0x1C8;  // int32 
	constexpr uint32_t m_nMaxRow = 0x1CC;  // int32 
	constexpr uint32_t m_nControlPoint = 0x1D0;  // int32 
	constexpr uint32_t m_flBlendValue = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e031440 
// N. Class: 354 
// Fields: 5 
namespace C_OP_RemapDistanceToLineSegmentBase
{
	constexpr uint32_t m_nCP0 = 0x1C0;  // int32 
	constexpr uint32_t m_nCP1 = 0x1C4;  // int32 
	constexpr uint32_t m_flMinInputValue = 0x1C8;  // float32 
	constexpr uint32_t m_flMaxInputValue = 0x1CC;  // float32 
	constexpr uint32_t m_bInfiniteLine = 0x1D0;  // bool 
}

// Offset: 0x7ffe1e0310b0 
// N. Class: 355 
// Fields: 3 
namespace C_OP_RemapDistanceToLineSegmentToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flMinOutputValue = 0x1DC;  // float32 
	constexpr uint32_t m_flMaxOutputValue = 0x1E0;  // float32 
}

// Offset: 0x7ffe1e030c40 
// N. Class: 356 
// Fields: 3 
namespace C_OP_RemapDistanceToLineSegmentToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vMinOutputValue = 0x1DC;  // Vector 
	constexpr uint32_t m_vMaxOutputValue = 0x1E8;  // Vector 
}

// Offset: 0x7ffe1e030d20 
// N. Class: 357 
// Fields: 11 
namespace C_OP_TeleportBeam
{
	constexpr uint32_t m_nCPPosition = 0x1C0;  // int32 
	constexpr uint32_t m_nCPVelocity = 0x1C4;  // int32 
	constexpr uint32_t m_nCPMisc = 0x1C8;  // int32 
	constexpr uint32_t m_nCPColor = 0x1CC;  // int32 
	constexpr uint32_t m_nCPInvalidColor = 0x1D0;  // int32 
	constexpr uint32_t m_nCPExtraArcData = 0x1D4;  // int32 
	constexpr uint32_t m_vGravity = 0x1D8;  // Vector 
	constexpr uint32_t m_flArcMaxDuration = 0x1E4;  // float32 
	constexpr uint32_t m_flSegmentBreak = 0x1E8;  // float32 
	constexpr uint32_t m_flArcSpeed = 0x1EC;  // float32 
	constexpr uint32_t m_flAlpha = 0x1F0;  // float32 
}

// Offset: 0x7ffe1e030ed0 
// N. Class: 358 
// Fields: 10 
namespace C_OP_CycleScalar
{
	constexpr uint32_t m_nDestField = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flStartValue = 0x1C4;  // float32 
	constexpr uint32_t m_flEndValue = 0x1C8;  // float32 
	constexpr uint32_t m_flCycleTime = 0x1CC;  // float32 
	constexpr uint32_t m_bDoNotRepeatCycle = 0x1D0;  // bool 
	constexpr uint32_t m_bSynchronizeParticles = 0x1D1;  // bool 
	constexpr uint32_t m_nCPScale = 0x1D4;  // int32 
	constexpr uint32_t m_nCPFieldMin = 0x1D8;  // int32 
	constexpr uint32_t m_nCPFieldMax = 0x1DC;  // int32 
	constexpr uint32_t m_nSetMethod = 0x1E0;  // ParticleSetMethod_t 
}

// Offset: 0x7ffe1e0312c0 
// N. Class: 359 
// Fields: 11 
namespace C_OP_CalculateVectorAttribute
{
	constexpr uint32_t m_vStartValue = 0x1C0;  // Vector 
	constexpr uint32_t m_nFieldInput1 = 0x1CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputScale1 = 0x1D0;  // float32 
	constexpr uint32_t m_nFieldInput2 = 0x1D4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputScale2 = 0x1D8;  // float32 
	constexpr uint32_t m_nControlPointInput1 = 0x1DC;  // ControlPointReference_t 
	constexpr uint32_t m_flControlPointScale1 = 0x1F0;  // float32 
	constexpr uint32_t m_nControlPointInput2 = 0x1F4;  // ControlPointReference_t 
	constexpr uint32_t m_flControlPointScale2 = 0x208;  // float32 
	constexpr uint32_t m_nFieldOutput = 0x20C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vFinalOutputScale = 0x210;  // Vector 
}

// Offset: 0x7ffe1e031160 
// N. Class: 360 
// Fields: 3 
namespace C_OP_ColorAdjustHSL
{
	constexpr uint32_t m_flHueAdjust = 0x1C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flSaturationAdjust = 0x320;  // CPerParticleFloatInput 
	constexpr uint32_t m_flLightnessAdjust = 0x480;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e031200 
// N. Class: 361 
// Fields: 5 
namespace C_OP_ConnectParentParticleToNearest
{
	constexpr uint32_t m_nFirstControlPoint = 0x1C0;  // int32 
	constexpr uint32_t m_nSecondControlPoint = 0x1C4;  // int32 
	constexpr uint32_t m_bUseRadius = 0x1C8;  // bool 
	constexpr uint32_t m_flRadiusScale = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flParentRadiusScale = 0x330;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e031a60 
// N. Class: 362 
// Fields: 6 
namespace C_OP_UpdateLightSource
{
	constexpr uint32_t m_vColorTint = 0x1C0;  // Color 
	constexpr uint32_t m_flBrightnessScale = 0x1C4;  // float32 
	constexpr uint32_t m_flRadiusScale = 0x1C8;  // float32 
	constexpr uint32_t m_flMinimumLightingRadius = 0x1CC;  // float32 
	constexpr uint32_t m_flMaximumLightingRadius = 0x1D0;  // float32 
	constexpr uint32_t m_flPositionDampingConstant = 0x1D4;  // float32 
}

// Offset: 0x7ffe1e032af0 
// N. Class: 363 
// Fields: 8 
namespace C_OP_RemapSpeedtoCP
{
	constexpr uint32_t m_nInControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nOutControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_nField = 0x1D0;  // int32 
	constexpr uint32_t m_flInputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E0;  // float32 
	constexpr uint32_t m_bUseDeltaV = 0x1E4;  // bool 
}

// Offset: 0x7ffe1e033940 
// N. Class: 364 
// Fields: 11 
namespace C_OP_RemapAverageHitboxSpeedtoCP
{
	constexpr uint32_t m_nInControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nOutControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_nField = 0x1D0;  // int32 
	constexpr uint32_t m_nHitboxDataType = 0x1D4;  // ParticleHitboxDataSelection_t 
	constexpr uint32_t m_flInputMin = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInputMax = 0x338;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputMin = 0x498;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5F8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nHeightControlPointNumber = 0x758;  // int32 
	constexpr uint32_t m_vecComparisonVelocity = 0x760;  // CParticleCollectionVecInput 
	constexpr uint32_t m_HitboxSetName = 0xDD8;  // char[128] 
}

// Offset: 0x7ffe1e0335c0 
// N. Class: 365 
// Fields: 8 
namespace C_OP_RemapDotProductToCP
{
	constexpr uint32_t m_nInputCP1 = 0x1C8;  // int32 
	constexpr uint32_t m_nInputCP2 = 0x1CC;  // int32 
	constexpr uint32_t m_nOutputCP = 0x1D0;  // int32 
	constexpr uint32_t m_nOutVectorField = 0x1D4;  // int32 
	constexpr uint32_t m_flInputMin = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInputMax = 0x338;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputMin = 0x498;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputMax = 0x5F8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e033030 
// N. Class: 366 
// Fields: 6 
namespace C_OP_SetControlPointFieldToScalarExpression
{
	constexpr uint32_t m_nExpression = 0x1C8;  // ScalarExpressionType_t 
	constexpr uint32_t m_flInput1 = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flInput2 = 0x330;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOutputRemap = 0x490;  // CParticleRemapFloatInput 
	constexpr uint32_t m_nOutputCP = 0x5F0;  // int32 
	constexpr uint32_t m_nOutVectorField = 0x5F4;  // int32 
}

// Offset: 0x7ffe1e0340f0 
// N. Class: 367 
// Fields: 6 
namespace C_OP_SetControlPointFieldFromVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C8;  // VectorFloatExpressionType_t 
	constexpr uint32_t m_vecInput1 = 0x1D0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vecInput2 = 0x848;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flOutputRemap = 0xEC0;  // CParticleRemapFloatInput 
	constexpr uint32_t m_nOutputCP = 0x1020;  // int32 
	constexpr uint32_t m_nOutVectorField = 0x1024;  // int32 
}

// Offset: 0x7ffe1e033ab0 
// N. Class: 368 
// Fields: 5 
namespace C_OP_SetControlPointToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C8;  // VectorExpressionType_t 
	constexpr uint32_t m_nOutputCP = 0x1CC;  // int32 
	constexpr uint32_t m_vInput1 = 0x1D0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_vInput2 = 0x848;  // CParticleCollectionVecInput 
	constexpr uint32_t m_bNormalizedOutput = 0xEC0;  // bool 
}

// Offset: 0x7ffe1e035190 
// N. Class: 369 
// Fields: 11 
namespace C_OP_RemapModelVolumetoCP
{
	constexpr uint32_t m_nBBoxType = 0x1C8;  // BBoxVolumeType_t 
	constexpr uint32_t m_nInControlPointNumber = 0x1CC;  // int32 
	constexpr uint32_t m_nOutControlPointNumber = 0x1D0;  // int32 
	constexpr uint32_t m_nOutControlPointMaxNumber = 0x1D4;  // int32 
	constexpr uint32_t m_nField = 0x1D8;  // int32 
	constexpr uint32_t m_flInputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1E0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1E4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E8;  // float32 
	constexpr uint32_t m_bBBoxOnly = 0x1EC;  // bool 
	constexpr uint32_t m_bCubeRoot = 0x1ED;  // bool 
}

// Offset: 0x7ffe1e032820 
// N. Class: 370 
// Fields: 5 
namespace C_OP_RemapBoundingVolumetoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_flInputMin = 0x1CC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1D8;  // float32 
}

// Offset: 0x7ffe1e034260 
// N. Class: 371 
// Fields: 7 
namespace C_OP_RemapAverageScalarValuetoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_nOutVectorField = 0x1CC;  // int32 
	constexpr uint32_t m_nField = 0x1D0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flInputMin = 0x1D4;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E0;  // float32 
}

// Offset: 0x7ffe1e0349f0 
// N. Class: 372 
// Fields: 3 
namespace C_OP_RampCPLinearRandom
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_vecRateMin = 0x1CC;  // Vector 
	constexpr uint32_t m_vecRateMax = 0x1D8;  // Vector 
}

// Offset: 0x7ffe1e033740 
// N. Class: 373 
// Fields: 5 
namespace C_OP_SetParentControlPointsToChildCP
{
	constexpr uint32_t m_nChildGroupID = 0x1C8;  // int32 
	constexpr uint32_t m_nChildControlPoint = 0x1CC;  // int32 
	constexpr uint32_t m_nNumControlPoints = 0x1D0;  // int32 
	constexpr uint32_t m_nFirstSourcePoint = 0x1D4;  // int32 
	constexpr uint32_t m_bSetOrientation = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e032980 
// N. Class: 374 
// Fields: 6 
namespace C_OP_SetVariable
{
	constexpr uint32_t m_variableReference = 0x1C8;  // CParticleVariableRef 
	constexpr uint32_t m_transformInput = 0x208;  // CParticleTransformInput 
	constexpr uint32_t m_positionOffset = 0x270;  // Vector 
	constexpr uint32_t m_rotationOffset = 0x27C;  // QAngle 
	constexpr uint32_t m_vecInput = 0x288;  // CParticleCollectionVecInput 
	constexpr uint32_t m_floatInput = 0x900;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e033b90 
// N. Class: 375 
// Fields: 12 
namespace C_OP_SetControlPointPositions
{
	constexpr uint32_t m_bUseWorldLocation = 0x1C8;  // bool 
	constexpr uint32_t m_bOrient = 0x1C9;  // bool 
	constexpr uint32_t m_bSetOnce = 0x1CA;  // bool 
	constexpr uint32_t m_nCP1 = 0x1CC;  // int32 
	constexpr uint32_t m_nCP2 = 0x1D0;  // int32 
	constexpr uint32_t m_nCP3 = 0x1D4;  // int32 
	constexpr uint32_t m_nCP4 = 0x1D8;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1DC;  // Vector 
	constexpr uint32_t m_vecCP2Pos = 0x1E8;  // Vector 
	constexpr uint32_t m_vecCP3Pos = 0x1F4;  // Vector 
	constexpr uint32_t m_vecCP4Pos = 0x200;  // Vector 
	constexpr uint32_t m_nHeadLocation = 0x20C;  // int32 
}

// Offset: 0x7ffe1e032cf0 
// N. Class: 376 
// Fields: 4 
namespace C_OP_SetSingleControlPointPosition
{
	constexpr uint32_t m_bSetOnce = 0x1C8;  // bool 
	constexpr uint32_t m_nCP1 = 0x1CC;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1D0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_transformInput = 0x848;  // CParticleTransformInput 
}

// Offset: 0x7ffe1e033ff0 
// N. Class: 377 
// Fields: 4 
namespace C_OP_SetControlPointPositionToRandomActiveCP
{
	constexpr uint32_t m_nCP1 = 0x1C8;  // int32 
	constexpr uint32_t m_nHeadLocationMin = 0x1CC;  // int32 
	constexpr uint32_t m_nHeadLocationMax = 0x1D0;  // int32 
	constexpr uint32_t m_flResetRate = 0x1D8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e033120 
// N. Class: 378 
// Fields: 8 
namespace C_OP_SetRandomControlPointPosition
{
	constexpr uint32_t m_bUseWorldLocation = 0x1C8;  // bool 
	constexpr uint32_t m_bOrient = 0x1C9;  // bool 
	constexpr uint32_t m_nCP1 = 0x1CC;  // int32 
	constexpr uint32_t m_nHeadLocation = 0x1D0;  // int32 
	constexpr uint32_t m_flReRandomRate = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vecCPMinPos = 0x338;  // Vector 
	constexpr uint32_t m_vecCPMaxPos = 0x344;  // Vector 
	constexpr uint32_t m_flInterpolation = 0x350;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e033d30 
// N. Class: 379 
// Fields: 8 
namespace C_OP_SetControlPointOrientation
{
	constexpr uint32_t m_bUseWorldLocation = 0x1C8;  // bool 
	constexpr uint32_t m_bRandomize = 0x1CA;  // bool 
	constexpr uint32_t m_bSetOnce = 0x1CB;  // bool 
	constexpr uint32_t m_nCP = 0x1CC;  // int32 
	constexpr uint32_t m_nHeadLocation = 0x1D0;  // int32 
	constexpr uint32_t m_vecRotation = 0x1D4;  // QAngle 
	constexpr uint32_t m_vecRotationB = 0x1E0;  // QAngle 
	constexpr uint32_t m_flInterpolation = 0x1F0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e032d80 
// N. Class: 380 
// Fields: 2 
namespace C_OP_SetControlPointFromObjectScale
{
	constexpr uint32_t m_nCPInput = 0x1C8;  // int32 
	constexpr uint32_t m_nCPOutput = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e0347e0 
// N. Class: 381 
// Fields: 15 
namespace C_OP_DistanceBetweenCPsToCP
{
	constexpr uint32_t m_nStartCP = 0x1C8;  // int32 
	constexpr uint32_t m_nEndCP = 0x1CC;  // int32 
	constexpr uint32_t m_nOutputCP = 0x1D0;  // int32 
	constexpr uint32_t m_nOutputCPField = 0x1D4;  // int32 
	constexpr uint32_t m_bSetOnce = 0x1D8;  // bool 
	constexpr uint32_t m_flInputMin = 0x1DC;  // float32 
	constexpr uint32_t m_flInputMax = 0x1E0;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1E4;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E8;  // float32 
	constexpr uint32_t m_flMaxTraceLength = 0x1EC;  // float32 
	constexpr uint32_t m_flLOSScale = 0x1F0;  // float32 
	constexpr uint32_t m_bLOS = 0x1F4;  // bool 
	constexpr uint32_t m_CollisionGroupName = 0x1F5;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x278;  // ParticleTraceSet_t 
	constexpr uint32_t m_nSetParent = 0x27C;  // ParticleParentSetMode_t 
}

// Offset: 0x7ffe1e033510 
// N. Class: 382 
// Fields: 3 
namespace C_OP_SetControlPointToPlayer
{
	constexpr uint32_t m_nCP1 = 0x1C8;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1CC;  // Vector 
	constexpr uint32_t m_bOrientToEyes = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e033ed0 
// N. Class: 383 
// Fields: 4 
namespace C_OP_SetControlPointToHand
{
	constexpr uint32_t m_nCP1 = 0x1C8;  // int32 
	constexpr uint32_t m_nHand = 0x1CC;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1D0;  // Vector 
	constexpr uint32_t m_bOrientToHand = 0x1DC;  // bool 
}

// Offset: 0x7ffe1e0327b0 
// N. Class: 384 
// Fields: 3 
namespace C_OP_SetControlPointToHMD
{
	constexpr uint32_t m_nCP1 = 0x1C8;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1CC;  // Vector 
	constexpr uint32_t m_bOrientToHMD = 0x1D8;  // bool 
}

// Offset: 0x7ffe1e032fc0 
// N. Class: 385 
// Fields: 3 
namespace C_OP_SetControlPointPositionToTimeOfDayValue
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;  // int32 
	constexpr uint32_t m_pszTimeOfDayParameter = 0x1CC;  // char[128] 
	constexpr uint32_t m_vecDefaultValue = 0x24C;  // Vector 
}

// Offset: 0x7ffe1e0338b0 
// N. Class: 386 
// Fields: 4 
namespace C_OP_SetControlPointToCenter
{
	constexpr uint32_t m_nCP1 = 0x1C8;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1CC;  // Vector 
	constexpr uint32_t m_bUseAvgParticlePos = 0x1D8;  // bool 
	constexpr uint32_t m_nSetParent = 0x1DC;  // ParticleParentSetMode_t 
}

// Offset: 0x7ffe1e034390 
// N. Class: 387 
// Fields: 6 
namespace C_OP_SetControlPointToCPVelocity
{
	constexpr uint32_t m_nCPInput = 0x1C8;  // int32 
	constexpr uint32_t m_nCPOutputVel = 0x1CC;  // int32 
	constexpr uint32_t m_bNormalize = 0x1D0;  // bool 
	constexpr uint32_t m_nCPOutputMag = 0x1D4;  // int32 
	constexpr uint32_t m_nCPField = 0x1D8;  // int32 
	constexpr uint32_t m_vecComparisonVelocity = 0x1E0;  // CParticleCollectionVecInput 
}

// Offset: 0x7ffe1e032720 
// N. Class: 388 
// Fields: 2 
namespace C_OP_SetControlPointOrientationToCPVelocity
{
	constexpr uint32_t m_nCPInput = 0x1C8;  // int32 
	constexpr uint32_t m_nCPOutput = 0x1CC;  // int32 
}

// Offset: 0x7ffe1e034550 
// N. Class: 389 
// Fields: 3 
namespace C_OP_StopAfterCPDuration
{
	constexpr uint32_t m_flDuration = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bDestroyImmediately = 0x328;  // bool 
	constexpr uint32_t m_bPlayEndCap = 0x329;  // bool 
}

// Offset: 0x7ffe1e032e90 
// N. Class: 390 
// Fields: 4 
namespace C_OP_SetControlPointRotation
{
	constexpr uint32_t m_vecRotAxis = 0x1C8;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flRotRate = 0x840;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nCP = 0x9A0;  // int32 
	constexpr uint32_t m_nLocalCP = 0x9A4;  // int32 
}

// Offset: 0x7ffe1e034650 
// N. Class: 391 
// Fields: 10 
namespace C_OP_RemapCPtoCP
{
	constexpr uint32_t m_nInputControlPoint = 0x1C8;  // int32 
	constexpr uint32_t m_nOutputControlPoint = 0x1CC;  // int32 
	constexpr uint32_t m_nInputField = 0x1D0;  // int32 
	constexpr uint32_t m_nOutputField = 0x1D4;  // int32 
	constexpr uint32_t m_flInputMin = 0x1D8;  // float32 
	constexpr uint32_t m_flInputMax = 0x1DC;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1E0;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1E4;  // float32 
	constexpr uint32_t m_bDerivative = 0x1E8;  // bool 
	constexpr uint32_t m_flInterpRate = 0x1EC;  // float32 
}

// Offset: 0x7ffe1e035100 
// N. Class: 392 
// Fields: 4 
namespace C_OP_HSVShiftToCP
{
	constexpr uint32_t m_nColorCP = 0x1C8;  // int32 
	constexpr uint32_t m_nColorGemEnableCP = 0x1CC;  // int32 
	constexpr uint32_t m_nOutputCP = 0x1D0;  // int32 
	constexpr uint32_t m_DefaultHSVColor = 0x1D4;  // Color 
}

// Offset: 0x7ffe1e032590 
// N. Class: 393 
// Fields: 12 
namespace C_OP_SetControlPointToImpactPoint
{
	constexpr uint32_t m_nCPOut = 0x1C8;  // int32 
	constexpr uint32_t m_nCPIn = 0x1CC;  // int32 
	constexpr uint32_t m_flUpdateRate = 0x1D0;  // float32 
	constexpr uint32_t m_flTraceLength = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flStartOffset = 0x338;  // float32 
	constexpr uint32_t m_flOffset = 0x33C;  // float32 
	constexpr uint32_t m_vecTraceDir = 0x340;  // Vector 
	constexpr uint32_t m_CollisionGroupName = 0x34C;  // char[128] 
	constexpr uint32_t m_nTraceSet = 0x3CC;  // ParticleTraceSet_t 
	constexpr uint32_t m_bSetToEndpoint = 0x3D0;  // bool 
	constexpr uint32_t m_bTraceToClosestSurface = 0x3D1;  // bool 
	constexpr uint32_t m_bIncludeWater = 0x3D2;  // bool 
}

// Offset: 0x7ffe1e032390 
// N. Class: 394 
// Fields: 6 
namespace C_OP_SetCPOrientationToPointAtCP
{
	constexpr uint32_t m_nInputCP = 0x1C8;  // int32 
	constexpr uint32_t m_nOutputCP = 0x1CC;  // int32 
	constexpr uint32_t m_flInterpolation = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_b2DOrientation = 0x330;  // bool 
	constexpr uint32_t m_bAvoidSingularity = 0x331;  // bool 
	constexpr uint32_t m_bPointAway = 0x332;  // bool 
}

// Offset: 0x7ffe1e034ec0 
// N. Class: 395 
// Fields: 6 
namespace C_OP_EnableChildrenFromParentParticleCount
{
	constexpr uint32_t m_nChildGroupID = 0x1C8;  // int32 
	constexpr uint32_t m_nFirstChild = 0x1CC;  // int32 
	constexpr uint32_t m_nNumChildrenToEnable = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bDisableChildren = 0x330;  // bool 
	constexpr uint32_t m_bPlayEndcapOnStop = 0x331;  // bool 
	constexpr uint32_t m_bDestroyImmediately = 0x332;  // bool 
}

// Offset: 0x7ffe1e034fc0 
// N. Class: 396 
// Fields: 5 
namespace C_OP_SelectivelyEnableChildren
{
	constexpr uint32_t m_nChildGroupID = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nFirstChild = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nNumChildrenToEnable = 0x488;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bPlayEndcapOnStop = 0x5E8;  // bool 
	constexpr uint32_t m_bDestroyImmediately = 0x5E9;  // bool 
}

// Offset: 0x7ffe1e033290 
// N. Class: 397 
// Fields: 2 
namespace C_OP_PlayEndCapWhenFinished
{
	constexpr uint32_t m_bFireOnEmissionEnd = 0x1C8;  // bool 
	constexpr uint32_t m_bIncludeChildren = 0x1C9;  // bool 
}

// Offset: 0x7ffe1e032aa8 
// N. Class: 398 
// Fields: 1 
namespace C_OP_ForceControlPointStub
{
	constexpr uint32_t m_ControlPoint = 0x1C8;  // int32 
}

// Offset: 0x7ffe1e034bb0 
// N. Class: 399 
// Fields: 9 
namespace C_OP_DriveCPFromGlobalSoundFloat
{
	constexpr uint32_t m_nOutputControlPoint = 0x1C8;  // int32 
	constexpr uint32_t m_nOutputField = 0x1CC;  // int32 
	constexpr uint32_t m_flInputMin = 0x1D0;  // float32 
	constexpr uint32_t m_flInputMax = 0x1D4;  // float32 
	constexpr uint32_t m_flOutputMin = 0x1D8;  // float32 
	constexpr uint32_t m_flOutputMax = 0x1DC;  // float32 
	constexpr uint32_t m_StackName = 0x1E0;  // CUtlString 
	constexpr uint32_t m_OperatorName = 0x1E8;  // CUtlString 
	constexpr uint32_t m_FieldName = 0x1F0;  // CUtlString 
}

// Offset: 0x7ffe1e034aa0 
// N. Class: 400 
// Fields: 3 
namespace C_OP_SetControlPointFieldToWater
{
	constexpr uint32_t m_nSourceCP = 0x1C8;  // int32 
	constexpr uint32_t m_nDestCP = 0x1CC;  // int32 
	constexpr uint32_t m_nCPField = 0x1D0;  // int32 
}

// Offset: 0x7ffe1e0332e0 
// N. Class: 401 
// Fields: 7 
namespace C_OP_SetControlPointToWaterSurface
{
	constexpr uint32_t m_nSourceCP = 0x1C8;  // int32 
	constexpr uint32_t m_nDestCP = 0x1CC;  // int32 
	constexpr uint32_t m_nFlowCP = 0x1D0;  // int32 
	constexpr uint32_t m_nActiveCP = 0x1D4;  // int32 
	constexpr uint32_t m_nActiveCPField = 0x1D8;  // int32 
	constexpr uint32_t m_flRetestRate = 0x1E0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bAdaptiveThreshold = 0x340;  // bool 
}

// Offset: 0x7ffe1e032df0 
// N. Class: 402 
// Fields: 5 
namespace C_OP_RepeatedTriggerChildGroup
{
	constexpr uint32_t m_nChildGroupID = 0x1C8;  // int32 
	constexpr uint32_t m_flClusterRefireTime = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flClusterSize = 0x330;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flClusterCooldown = 0x490;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bLimitChildCount = 0x5F0;  // bool 
}

// Offset: 0x7ffe1e033e60 
// N. Class: 403 
// Fields: 2 
namespace C_OP_ChooseRandomChildrenInGroup
{
	constexpr uint32_t m_nChildGroupID = 0x1C8;  // int32 
	constexpr uint32_t m_flNumberOfChildren = 0x1D0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e0350d8 
// N. Class: 404 
// Fields: 1 
namespace C_OP_SetSimulationRate
{
	constexpr uint32_t m_flSimulationScale = 0x1C8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e034470 
// N. Class: 405 
// Fields: 5 
namespace C_OP_ControlPointToRadialScreenSpace
{
	constexpr uint32_t m_nCPIn = 0x1C8;  // int32 
	constexpr uint32_t m_vecCP1Pos = 0x1CC;  // Vector 
	constexpr uint32_t m_nCPOut = 0x1D8;  // int32 
	constexpr uint32_t m_nCPOutField = 0x1DC;  // int32 
	constexpr uint32_t m_nCPSSPosOut = 0x1E0;  // int32 
}

// Offset: 0x7ffe1e034ce0 
// N. Class: 406 
// Fields: 15 
namespace C_OP_LightningSnapshotGenerator
{
	constexpr uint32_t m_nCPSnapshot = 0x1C8;  // int32 
	constexpr uint32_t m_nCPStartPnt = 0x1CC;  // int32 
	constexpr uint32_t m_nCPEndPnt = 0x1D0;  // int32 
	constexpr uint32_t m_flSegments = 0x1D8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOffset = 0x338;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flOffsetDecay = 0x498;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flRecalcRate = 0x5F8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flUVScale = 0x758;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flUVOffset = 0x8B8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flSplitRate = 0xA18;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flBranchTwist = 0xB78;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nBranchBehavior = 0xCD8;  // ParticleLightnintBranchBehavior_t 
	constexpr uint32_t m_flRadiusStart = 0xCE0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flRadiusEnd = 0xE40;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flDedicatedPool = 0xFA0;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e035300 
// N. Class: 407 
// Fields: 5 
namespace C_OP_RemapExternalWindToCP
{
	constexpr uint32_t m_nCP = 0x1C8;  // int32 
	constexpr uint32_t m_nCPOutput = 0x1CC;  // int32 
	constexpr uint32_t m_vecScale = 0x1D0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_bSetMagnitude = 0x848;  // bool 
	constexpr uint32_t m_nOutVectorField = 0x84C;  // int32 
}

// Offset: 0x7ffe1e0322e0 
// N. Class: 408 
// Fields: 5 
namespace C_OP_SetGravityToCP
{
	constexpr uint32_t m_nCPInput = 0x1C8;  // int32 
	constexpr uint32_t m_nCPOutput = 0x1CC;  // int32 
	constexpr uint32_t m_flScale = 0x1D0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bSetOrientation = 0x330;  // bool 
	constexpr uint32_t m_bSetZDown = 0x331;  // bool 
}

// Offset: 0x7ffe1e0324d0 
// N. Class: 409 
// Fields: 4 
namespace C_OP_QuantizeCPComponent
{
	constexpr uint32_t m_flInputValue = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nCPOutput = 0x328;  // int32 
	constexpr uint32_t m_nOutVectorField = 0x32C;  // int32 
	constexpr uint32_t m_flQuantizeValue = 0x330;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e038ba0 
// N. Class: 410 
// Fields: 1 
namespace C_OP_RenderPoints
{
	constexpr uint32_t m_hMaterial = 0x210;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
}

// Offset: 0x7ffe1e0379e0 
// N. Class: 411 
// Fields: 7 
namespace CBaseTrailRenderer
{
	constexpr uint32_t m_nOrientationType = 0x2AA8;  // ParticleOrientationChoiceList_t 
	constexpr uint32_t m_nOrientationControlPoint = 0x2AAC;  // int32 
	constexpr uint32_t m_flMinSize = 0x2AB0;  // float32 
	constexpr uint32_t m_flMaxSize = 0x2AB4;  // float32 
	constexpr uint32_t m_flStartFadeSize = 0x2AB8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flEndFadeSize = 0x2C18;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_bClampV = 0x2D78;  // bool 
}

// Offset: 0x7ffe1e03b0a0 
// N. Class: 412 
// Fields: 20 
namespace C_OP_RenderTrails
{
	constexpr uint32_t m_bEnableFadingAndClamping = 0x2D80;  // bool 
	constexpr uint32_t m_flStartFadeDot = 0x2D84;  // float32 
	constexpr uint32_t m_flEndFadeDot = 0x2D88;  // float32 
	constexpr uint32_t m_nPrevPntSource = 0x2D8C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flMaxLength = 0x2D90;  // float32 
	constexpr uint32_t m_flMinLength = 0x2D94;  // float32 
	constexpr uint32_t m_bIgnoreDT = 0x2D98;  // bool 
	constexpr uint32_t m_flConstrainRadiusToLengthRatio = 0x2D9C;  // float32 
	constexpr uint32_t m_flLengthScale = 0x2DA0;  // float32 
	constexpr uint32_t m_flLengthFadeInTime = 0x2DA4;  // float32 
	constexpr uint32_t m_flRadiusHeadTaper = 0x2DA8;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecHeadColorScale = 0x2F08;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flHeadAlphaScale = 0x3580;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRadiusTaper = 0x36E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_vecTailColorScale = 0x3840;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flTailAlphaScale = 0x3EB8;  // CPerParticleFloatInput 
	constexpr uint32_t m_nHorizCropField = 0x4018;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVertCropField = 0x401C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flForwardShift = 0x4020;  // float32 
	constexpr uint32_t m_bFlipUVBasedOnPitchYaw = 0x4024;  // bool 
}

// Offset: 0x7ffe1e038250 
// N. Class: 413 
// Fields: 30 
namespace C_OP_RenderRopes
{
	constexpr uint32_t m_bEnableFadingAndClamping = 0x2AA8;  // bool 
	constexpr uint32_t m_flMinSize = 0x2AAC;  // float32 
	constexpr uint32_t m_flMaxSize = 0x2AB0;  // float32 
	constexpr uint32_t m_flStartFadeSize = 0x2AB4;  // float32 
	constexpr uint32_t m_flEndFadeSize = 0x2AB8;  // float32 
	constexpr uint32_t m_flStartFadeDot = 0x2ABC;  // float32 
	constexpr uint32_t m_flEndFadeDot = 0x2AC0;  // float32 
	constexpr uint32_t m_flRadiusTaper = 0x2AC4;  // float32 
	constexpr uint32_t m_nMinTesselation = 0x2AC8;  // int32 
	constexpr uint32_t m_nMaxTesselation = 0x2ACC;  // int32 
	constexpr uint32_t m_flTessScale = 0x2AD0;  // float32 
	constexpr uint32_t m_flTextureVWorldSize = 0x2AD8;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flTextureVScrollRate = 0x2C38;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_flTextureVOffset = 0x2D98;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nTextureVParamsCP = 0x2EF8;  // int32 
	constexpr uint32_t m_bClampV = 0x2EFC;  // bool 
	constexpr uint32_t m_nScaleCP1 = 0x2F00;  // int32 
	constexpr uint32_t m_nScaleCP2 = 0x2F04;  // int32 
	constexpr uint32_t m_flScaleVSizeByControlPointDistance = 0x2F08;  // float32 
	constexpr uint32_t m_flScaleVScrollByControlPointDistance = 0x2F0C;  // float32 
	constexpr uint32_t m_flScaleVOffsetByControlPointDistance = 0x2F10;  // float32 
	constexpr uint32_t m_bUseScalarForTextureCoordinate = 0x2F15;  // bool 
	constexpr uint32_t m_nScalarFieldForTextureCoordinate = 0x2F18;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flScalarAttributeTextureCoordScale = 0x2F1C;  // float32 
	constexpr uint32_t m_bReverseOrder = 0x2F20;  // bool 
	constexpr uint32_t m_bClosedLoop = 0x2F21;  // bool 
	constexpr uint32_t m_nOrientationType = 0x2F24;  // ParticleOrientationChoiceList_t 
	constexpr uint32_t m_nVectorFieldForOrientation = 0x2F28;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bDrawAsOpaque = 0x2F2C;  // bool 
	constexpr uint32_t m_bGenerateNormals = 0x2F2D;  // bool 
}

// Offset: 0x7ffe1e039f00 
// N. Class: 414 
// Fields: 8 
namespace C_OP_RenderAsModels
{
	constexpr uint32_t m_ModelList = 0x210;  // CUtlVector< ModelReference_t > 
	constexpr uint32_t m_flModelScale = 0x22C;  // float32 
	constexpr uint32_t m_bFitToModelSize = 0x230;  // bool 
	constexpr uint32_t m_bNonUniformScaling = 0x231;  // bool 
	constexpr uint32_t m_nXAxisScalingAttribute = 0x234;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nYAxisScalingAttribute = 0x238;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nZAxisScalingAttribute = 0x23C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSizeCullBloat = 0x240;  // int32 
}

// Offset: 0x7ffe1e0389c0 
// N. Class: 415 
// Fields: 7 
namespace C_OP_RenderLights
{
	constexpr uint32_t m_flAnimationRate = 0x218;  // float32 
	constexpr uint32_t m_nAnimationType = 0x21C;  // AnimationType_t 
	constexpr uint32_t m_bAnimateInFPS = 0x220;  // bool 
	constexpr uint32_t m_flMinSize = 0x224;  // float32 
	constexpr uint32_t m_flMaxSize = 0x228;  // float32 
	constexpr uint32_t m_flStartFadeSize = 0x22C;  // float32 
	constexpr uint32_t m_flEndFadeSize = 0x230;  // float32 
}

// Offset: 0x7ffe1e03b320 
// N. Class: 416 
// Fields: 8 
namespace C_OP_RenderBlobs
{
	constexpr uint32_t m_cubeWidth = 0x210;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_cutoffRadius = 0x370;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_renderRadius = 0x4D0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nVertexCountKb = 0x630;  // uint32 
	constexpr uint32_t m_nIndexCountKb = 0x634;  // uint32 
	constexpr uint32_t m_nScaleCP = 0x638;  // int32 
	constexpr uint32_t m_MaterialVars = 0x640;  // CUtlVector< MaterialVariable_t > 
	constexpr uint32_t m_hMaterial = 0x670;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
}

// Offset: 0x7ffe1e0399f0 
// N. Class: 417 
// Fields: 8 
namespace C_OP_RenderGpuImplicit
{
	constexpr uint32_t m_bUsePerParticleRadius = 0x210;  // bool 
	constexpr uint32_t m_nVertexCountKb = 0x214;  // uint32 
	constexpr uint32_t m_nIndexCountKb = 0x218;  // uint32 
	constexpr uint32_t m_fGridSize = 0x220;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_fRadiusScale = 0x380;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_fIsosurfaceThreshold = 0x4E0;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nScaleCP = 0x640;  // int32 
	constexpr uint32_t m_hMaterial = 0x648;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
}

// Offset: 0x7ffe1e03b430 
// N. Class: 418 
// Fields: 2 
namespace C_OP_RenderScreenVelocityRotate
{
	constexpr uint32_t m_flRotateRateDegrees = 0x210;  // float32 
	constexpr uint32_t m_flForwardDegrees = 0x214;  // float32 
}

// Offset: 0x7ffe1e039250 
// N. Class: 419 
// Fields: 54 
namespace C_OP_RenderModels
{
	constexpr uint32_t m_bOnlyRenderInEffectsBloomPass = 0x210;  // bool 
	constexpr uint32_t m_bOnlyRenderInEffectsWaterPass = 0x211;  // bool 
	constexpr uint32_t m_bUseMixedResolutionRendering = 0x212;  // bool 
	constexpr uint32_t m_bOnlyRenderInEffecsGameOverlay = 0x213;  // bool 
	constexpr uint32_t m_ModelList = 0x218;  // CUtlVector< ModelReference_t > 
	constexpr uint32_t m_nBodyGroupField = 0x230;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nSubModelField = 0x234;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_bIgnoreNormal = 0x238;  // bool 
	constexpr uint32_t m_bOrientZ = 0x239;  // bool 
	constexpr uint32_t m_bCenterOffset = 0x23A;  // bool 
	constexpr uint32_t m_vecLocalOffset = 0x240;  // CPerParticleVecInput 
	constexpr uint32_t m_vecLocalRotation = 0x8B8;  // CPerParticleVecInput 
	constexpr uint32_t m_bIgnoreRadius = 0xF30;  // bool 
	constexpr uint32_t m_nModelScaleCP = 0xF34;  // int32 
	constexpr uint32_t m_vecComponentScale = 0xF38;  // CPerParticleVecInput 
	constexpr uint32_t m_bLocalScale = 0x15B0;  // bool 
	constexpr uint32_t m_nSizeCullBloat = 0x15B4;  // int32 
	constexpr uint32_t m_bAnimated = 0x15B8;  // bool 
	constexpr uint32_t m_flAnimationRate = 0x15C0;  // CPerParticleFloatInput 
	constexpr uint32_t m_bScaleAnimationRate = 0x1720;  // bool 
	constexpr uint32_t m_bForceLoopingAnimation = 0x1721;  // bool 
	constexpr uint32_t m_bResetAnimOnStop = 0x1722;  // bool 
	constexpr uint32_t m_bManualAnimFrame = 0x1723;  // bool 
	constexpr uint32_t m_nAnimationScaleField = 0x1724;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAnimationField = 0x1728;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nManualFrameField = 0x172C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_ActivityName = 0x1730;  // char[256] 
	constexpr uint32_t m_SequenceName = 0x1830;  // char[256] 
	constexpr uint32_t m_bEnableClothSimulation = 0x1930;  // bool 
	constexpr uint32_t m_ClothEffectName = 0x1931;  // char[64] 
	constexpr uint32_t m_hOverrideMaterial = 0x1978;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_bOverrideTranslucentMaterials = 0x1980;  // bool 
	constexpr uint32_t m_nSkin = 0x1988;  // CPerParticleFloatInput 
	constexpr uint32_t m_MaterialVars = 0x1AE8;  // CUtlVector< MaterialVariable_t > 
	constexpr uint32_t m_flManualModelSelection = 0x1B00;  // CPerParticleFloatInput 
	constexpr uint32_t m_modelInput = 0x1C60;  // CParticleModelInput 
	constexpr uint32_t m_nLOD = 0x1CC0;  // int32 
	constexpr uint32_t m_EconSlotName = 0x1CC4;  // char[256] 
	constexpr uint32_t m_bOriginalModel = 0x1DC4;  // bool 
	constexpr uint32_t m_bSuppressTint = 0x1DC5;  // bool 
	constexpr uint32_t m_nSubModelFieldType = 0x1DC8;  // RenderModelSubModelFieldType_t 
	constexpr uint32_t m_bDisableShadows = 0x1DCC;  // bool 
	constexpr uint32_t m_bDisableDepthPrepass = 0x1DCD;  // bool 
	constexpr uint32_t m_bAcceptsDecals = 0x1DCE;  // bool 
	constexpr uint32_t m_bForceDrawInterlevedWithSiblings = 0x1DCF;  // bool 
	constexpr uint32_t m_bDoNotDrawInParticlePass = 0x1DD0;  // bool 
	constexpr uint32_t m_bAllowApproximateTransforms = 0x1DD1;  // bool 
	constexpr uint32_t m_szRenderAttribute = 0x1DD2;  // char[260] 
	constexpr uint32_t m_flRadiusScale = 0x1ED8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flAlphaScale = 0x2038;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flRollScale = 0x2198;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nAlpha2Field = 0x22F8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecColorScale = 0x2300;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0x2978;  // ParticleColorBlendType_t 
}

// Offset: 0x7ffe1e039120 
// N. Class: 420 
// Fields: 8 
namespace C_OP_RenderSimpleModelCollection
{
	constexpr uint32_t m_bCenterOffset = 0x210;  // bool 
	constexpr uint32_t m_hModel = 0x218;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_modelInput = 0x220;  // CParticleModelInput 
	constexpr uint32_t m_fSizeCullScale = 0x280;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bDisableShadows = 0x3E0;  // bool 
	constexpr uint32_t m_bDisableMotionBlur = 0x3E1;  // bool 
	constexpr uint32_t m_bAcceptsDecals = 0x3E2;  // bool 
	constexpr uint32_t m_nAngularVelocityField = 0x3E4;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e037f30 
// N. Class: 421 
// Fields: 8 
namespace C_OP_RenderMaterialProxy
{
	constexpr uint32_t m_nMaterialControlPoint = 0x210;  // int32 
	constexpr uint32_t m_nProxyType = 0x214;  // MaterialProxyType_t 
	constexpr uint32_t m_MaterialVars = 0x218;  // CUtlVector< MaterialVariable_t > 
	constexpr uint32_t m_hOverrideMaterial = 0x230;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_flMaterialOverrideEnabled = 0x238;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vecColorScale = 0x398;  // CParticleCollectionVecInput 
	constexpr uint32_t m_flAlpha = 0xA10;  // CPerParticleFloatInput 
	constexpr uint32_t m_nColorBlendType = 0xB70;  // ParticleColorBlendType_t 
}

// Offset: 0x7ffe1e037430 
// N. Class: 422 
// Fields: 18 
namespace C_OP_RenderProjected
{
	constexpr uint32_t m_bProjectCharacter = 0x210;  // bool 
	constexpr uint32_t m_bProjectWorld = 0x211;  // bool 
	constexpr uint32_t m_bProjectWater = 0x212;  // bool 
	constexpr uint32_t m_bFlipHorizontal = 0x213;  // bool 
	constexpr uint32_t m_bEnableProjectedDepthControls = 0x214;  // bool 
	constexpr uint32_t m_flMinProjectionDepth = 0x218;  // float32 
	constexpr uint32_t m_flMaxProjectionDepth = 0x21C;  // float32 
	constexpr uint32_t m_vecProjectedMaterials = 0x220;  // CUtlVector< RenderProjectedMaterial_t > 
	constexpr uint32_t m_flMaterialSelection = 0x238;  // CPerParticleFloatInput 
	constexpr uint32_t m_flAnimationTimeScale = 0x398;  // float32 
	constexpr uint32_t m_bOrientToNormal = 0x39C;  // bool 
	constexpr uint32_t m_MaterialVars = 0x3A0;  // CUtlVector< MaterialVariable_t > 
	constexpr uint32_t m_flRadiusScale = 0x3B8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flAlphaScale = 0x518;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flRollScale = 0x678;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nAlpha2Field = 0x7D8;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecColorScale = 0x7E0;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0xE58;  // ParticleColorBlendType_t 
}

// Offset: 0x7ffe1e037730 
// N. Class: 423 
// Fields: 16 
namespace C_OP_RenderDeferredLight
{
	constexpr uint32_t m_bUseAlphaTestWindow = 0x210;  // bool 
	constexpr uint32_t m_bUseTexture = 0x211;  // bool 
	constexpr uint32_t m_flRadiusScale = 0x214;  // float32 
	constexpr uint32_t m_flAlphaScale = 0x218;  // float32 
	constexpr uint32_t m_nAlpha2Field = 0x21C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_vecColorScale = 0x220;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0x898;  // ParticleColorBlendType_t 
	constexpr uint32_t m_flLightDistance = 0x89C;  // float32 
	constexpr uint32_t m_flStartFalloff = 0x8A0;  // float32 
	constexpr uint32_t m_flDistanceFalloff = 0x8A4;  // float32 
	constexpr uint32_t m_flSpotFoV = 0x8A8;  // float32 
	constexpr uint32_t m_nAlphaTestPointField = 0x8AC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAlphaTestRangeField = 0x8B0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAlphaTestSharpnessField = 0x8B4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_hTexture = 0x8B8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_nHSVShiftControlPoint = 0x8C0;  // int32 
}

// Offset: 0x7ffe1e039b10 
// N. Class: 424 
// Fields: 29 
namespace C_OP_RenderStandardLight
{
	constexpr uint32_t m_nLightType = 0x210;  // ParticleLightTypeChoiceList_t 
	constexpr uint32_t m_vecColorScale = 0x218;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0x890;  // ParticleColorBlendType_t 
	constexpr uint32_t m_flIntensity = 0x898;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bCastShadows = 0x9F8;  // bool 
	constexpr uint32_t m_flTheta = 0xA00;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flPhi = 0xB60;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flRadiusMultiplier = 0xCC0;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_nAttenuationStyle = 0xE20;  // StandardLightingAttenuationStyle_t 
	constexpr uint32_t m_flFalloffLinearity = 0xE28;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flFiftyPercentFalloff = 0xF88;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flZeroPercentFalloff = 0x10E8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bRenderDiffuse = 0x1248;  // bool 
	constexpr uint32_t m_bRenderSpecular = 0x1249;  // bool 
	constexpr uint32_t m_lightCookie = 0x1250;  // CUtlString 
	constexpr uint32_t m_nPriority = 0x1258;  // int32 
	constexpr uint32_t m_nFogLightingMode = 0x125C;  // ParticleLightFogLightingMode_t 
	constexpr uint32_t m_flFogContribution = 0x1260;  // CParticleCollectionRendererFloatInput 
	constexpr uint32_t m_nCapsuleLightBehavior = 0x13C0;  // ParticleLightBehaviorChoiceList_t 
	constexpr uint32_t m_flCapsuleLength = 0x13C4;  // float32 
	constexpr uint32_t m_bReverseOrder = 0x13C8;  // bool 
	constexpr uint32_t m_bClosedLoop = 0x13C9;  // bool 
	constexpr uint32_t m_nPrevPntSource = 0x13CC;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flMaxLength = 0x13D0;  // float32 
	constexpr uint32_t m_flMinLength = 0x13D4;  // float32 
	constexpr uint32_t m_bIgnoreDT = 0x13D8;  // bool 
	constexpr uint32_t m_flConstrainRadiusToLengthRatio = 0x13DC;  // float32 
	constexpr uint32_t m_flLengthScale = 0x13E0;  // float32 
	constexpr uint32_t m_flLengthFadeInTime = 0x13E4;  // float32 
}

// Offset: 0x7ffe1e038630 
// N. Class: 425 
// Fields: 16 
namespace C_OP_RenderOmni2Light
{
	constexpr uint32_t m_nLightType = 0x210;  // ParticleOmni2LightTypeChoiceList_t 
	constexpr uint32_t m_vColorBlend = 0x218;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0x890;  // ParticleColorBlendType_t 
	constexpr uint32_t m_nBrightnessUnit = 0x894;  // ParticleLightUnitChoiceList_t 
	constexpr uint32_t m_flBrightnessLumens = 0x898;  // CPerParticleFloatInput 
	constexpr uint32_t m_flBrightnessCandelas = 0x9F8;  // CPerParticleFloatInput 
	constexpr uint32_t m_bCastShadows = 0xB58;  // bool 
	constexpr uint32_t m_bFog = 0xB59;  // bool 
	constexpr uint32_t m_flFogScale = 0xB60;  // CPerParticleFloatInput 
	constexpr uint32_t m_flLuminaireRadius = 0xCC0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flSkirt = 0xE20;  // CPerParticleFloatInput 
	constexpr uint32_t m_flRange = 0xF80;  // CPerParticleFloatInput 
	constexpr uint32_t m_flInnerConeAngle = 0x10E0;  // CPerParticleFloatInput 
	constexpr uint32_t m_flOuterConeAngle = 0x1240;  // CPerParticleFloatInput 
	constexpr uint32_t m_hLightCookie = 0x13A0;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_bSphericalCookie = 0x13A8;  // bool 
}

// Offset: 0x7ffe1e0372f0 
// N. Class: 426 
// Fields: 7 
namespace C_OP_RenderLightBeam
{
	constexpr uint32_t m_vColorBlend = 0x210;  // CParticleCollectionVecInput 
	constexpr uint32_t m_nColorBlendType = 0x888;  // ParticleColorBlendType_t 
	constexpr uint32_t m_flBrightnessLumensPerMeter = 0x890;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bCastShadows = 0x9F0;  // bool 
	constexpr uint32_t m_flSkirt = 0x9F8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flRange = 0xB58;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flThickness = 0xCB8;  // CParticleCollectionFloatInput 
}

// Offset: 0x0 
// N. Class: 427 
// Fields: 0 
namespace C_OP_RenderClothForce
{
}

// Offset: 0x0 
// N. Class: 428 
// Fields: 0 
namespace C_OP_Callback
{
}

// Offset: 0x7ffe1e03aca0 
// N. Class: 429 
// Fields: 9 
namespace C_OP_RenderScreenShake
{
	constexpr uint32_t m_flDurationScale = 0x210;  // float32 
	constexpr uint32_t m_flRadiusScale = 0x214;  // float32 
	constexpr uint32_t m_flFrequencyScale = 0x218;  // float32 
	constexpr uint32_t m_flAmplitudeScale = 0x21C;  // float32 
	constexpr uint32_t m_nRadiusField = 0x220;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nDurationField = 0x224;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFrequencyField = 0x228;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nAmplitudeField = 0x22C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nFilterCP = 0x230;  // int32 
}

// Offset: 0x7ffe1e038880 
// N. Class: 430 
// Fields: 4 
namespace C_OP_RenderTonemapController
{
	constexpr uint32_t m_flTonemapLevel = 0x210;  // float32 
	constexpr uint32_t m_flTonemapWeight = 0x214;  // float32 
	constexpr uint32_t m_nTonemapLevelField = 0x218;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nTonemapWeightField = 0x21C;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e03bbf0 
// N. Class: 431 
// Fields: 3 
namespace C_OP_RenderPostProcessing
{
	constexpr uint32_t m_flPostProcessStrength = 0x210;  // CPerParticleFloatInput 
	constexpr uint32_t m_hPostTexture = 0x370;  // CStrongHandle< InfoForResourceTypeCPostProcessingResource > 
	constexpr uint32_t m_nPriority = 0x378;  // ParticlePostProcessPriorityGroup_t 
}

// Offset: 0x7ffe1e038d50 
// N. Class: 432 
// Fields: 12 
namespace C_OP_RenderSound
{
	constexpr uint32_t m_flDurationScale = 0x210;  // float32 
	constexpr uint32_t m_flSndLvlScale = 0x214;  // float32 
	constexpr uint32_t m_flPitchScale = 0x218;  // float32 
	constexpr uint32_t m_flVolumeScale = 0x21C;  // float32 
	constexpr uint32_t m_nSndLvlField = 0x220;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nDurationField = 0x224;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nPitchField = 0x228;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVolumeField = 0x22C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nChannel = 0x230;  // int32 
	constexpr uint32_t m_nCPReference = 0x234;  // int32 
	constexpr uint32_t m_pszSoundName = 0x238;  // char[256] 
	constexpr uint32_t m_bSuppressStopSoundEvent = 0x338;  // bool 
}

// Offset: 0x7ffe1e03ab40 
// N. Class: 433 
// Fields: 7 
namespace C_OP_RenderStatusEffect
{
	constexpr uint32_t m_pTextureColorWarp = 0x210;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureDetail2 = 0x218;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureDiffuseWarp = 0x220;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureFresnelColorWarp = 0x228;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureFresnelWarp = 0x230;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureSpecularWarp = 0x238;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureEnvMap = 0x240;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
}

// Offset: 0x7ffe1e03a1e0 
// N. Class: 434 
// Fields: 6 
namespace C_OP_RenderStatusEffectCitadel
{
	constexpr uint32_t m_pTextureColorWarp = 0x210;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureNormal = 0x218;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureMetalness = 0x220;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureRoughness = 0x228;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureSelfIllum = 0x230;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_pTextureDetail = 0x238;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
}

// Offset: 0x7ffe1e037680 
// N. Class: 435 
// Fields: 3 
namespace C_OP_RenderFlattenGrass
{
	constexpr uint32_t m_flFlattenStrength = 0x210;  // float32 
	constexpr uint32_t m_nStrengthFieldOverride = 0x214;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flRadiusScale = 0x218;  // float32 
}

// Offset: 0x7ffe1e038f20 
// N. Class: 436 
// Fields: 10 
namespace C_OP_RenderTreeShake
{
	constexpr uint32_t m_flPeakStrength = 0x210;  // float32 
	constexpr uint32_t m_nPeakStrengthFieldOverride = 0x214;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flRadius = 0x218;  // float32 
	constexpr uint32_t m_nRadiusFieldOverride = 0x21C;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flShakeDuration = 0x220;  // float32 
	constexpr uint32_t m_flTransitionTime = 0x224;  // float32 
	constexpr uint32_t m_flTwistAmount = 0x228;  // float32 
	constexpr uint32_t m_flRadialAmount = 0x22C;  // float32 
	constexpr uint32_t m_flControlPointOrientationAmount = 0x230;  // float32 
	constexpr uint32_t m_nControlPointForLinearDirection = 0x234;  // int32 
}

// Offset: 0x7ffe1e0390e0 
// N. Class: 437 
// Fields: 2 
namespace C_OP_RenderText
{
	constexpr uint32_t m_OutlineColor = 0x210;  // Color 
	constexpr uint32_t m_DefaultText = 0x218;  // CUtlString 
}

// Offset: 0x7ffe1e03bca0 
// N. Class: 438 
// Fields: 4 
namespace C_OP_RenderVRHapticEvent
{
	constexpr uint32_t m_nHand = 0x210;  // ParticleVRHandChoiceList_t 
	constexpr uint32_t m_nOutputHandCP = 0x214;  // int32 
	constexpr uint32_t m_nOutputField = 0x218;  // int32 
	constexpr uint32_t m_flAmplitude = 0x220;  // CPerParticleFloatInput 
}

// Offset: 0x7ffe1e037c40 
// N. Class: 439 
// Fields: 11 
namespace C_OP_ClientPhysics
{
	constexpr uint32_t m_strPhysicsType = 0x210;  // CUtlString 
	constexpr uint32_t m_bStartAsleep = 0x218;  // bool 
	constexpr uint32_t m_flPlayerWakeRadius = 0x220;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flVehicleWakeRadius = 0x380;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_bUseHighQualitySimulation = 0x4E0;  // bool 
	constexpr uint32_t m_nMaxParticleCount = 0x4E4;  // int32 
	constexpr uint32_t m_bRespectExclusionVolumes = 0x4E8;  // bool 
	constexpr uint32_t m_bKillParticles = 0x4E9;  // bool 
	constexpr uint32_t m_bDeleteSim = 0x4EA;  // bool 
	constexpr uint32_t m_nControlPoint = 0x4EC;  // int32 
	constexpr uint32_t m_nColorBlendType = 0x4F0;  // ParticleColorBlendType_t 
}

// Offset: 0x7ffe1e03aad0 
// N. Class: 440 
// Fields: 3 
namespace C_OP_RenderClientPhysicsImpulse
{
	constexpr uint32_t m_flRadius = 0x210;  // CPerParticleFloatInput 
	constexpr uint32_t m_flMagnitude = 0x370;  // CPerParticleFloatInput 
	constexpr uint32_t m_nSimIdFilter = 0x4D0;  // int32 
}

// Offset: 0x7ffe1e031ef0 
// N. Class: 441 
// Fields: 8 
namespace C_OP_RemapSDFDistanceToScalarAttribute
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVectorFieldInput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flMinDistance = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flMaxDistance = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flValueBelowMin = 0x488;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flValueAtMin = 0x5E8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flValueAtMax = 0x748;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flValueAboveMax = 0x8A8;  // CParticleCollectionFloatInput 
}

// Offset: 0x7ffe1e031bb0 
// N. Class: 442 
// Fields: 8 
namespace C_OP_RemapSDFDistanceToVectorAttribute
{
	constexpr uint32_t m_nVectorFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_nVectorFieldInput = 0x1C4;  // ParticleAttributeIndex_t 
	constexpr uint32_t m_flMinDistance = 0x1C8;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_flMaxDistance = 0x328;  // CParticleCollectionFloatInput 
	constexpr uint32_t m_vValueBelowMin = 0x488;  // Vector 
	constexpr uint32_t m_vValueAtMin = 0x494;  // Vector 
	constexpr uint32_t m_vValueAtMax = 0x4A0;  // Vector 
	constexpr uint32_t m_vValueAboveMax = 0x4AC;  // Vector 
}

// Offset: 0x7ffe1e031e90 
// N. Class: 443 
// Fields: 1 
namespace C_OP_SDFForce
{
	constexpr uint32_t m_flForceScale = 0x1D0;  // float32 
}

// Offset: 0x7ffe1e031e20 
// N. Class: 444 
// Fields: 1 
namespace C_OP_RemapSDFGradientToVectorAttribute
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;  // ParticleAttributeIndex_t 
}

// Offset: 0x7ffe1e031d50 
// N. Class: 445 
// Fields: 3 
namespace C_OP_SDFLighting
{
	constexpr uint32_t m_vLightingDir = 0x1C0;  // Vector 
	constexpr uint32_t m_vTint_0 = 0x1CC;  // Vector 
	constexpr uint32_t m_vTint_1 = 0x1D8;  // Vector 
}

