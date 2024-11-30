// Schema offset: 0x26fac6d0a40 
// Schema name: animationsystem.dll 
// Schema declared class: 505 

// Offset: 0x7ffe21f56730 
// N. Class: 0 
// Fields: 1 
namespace HSequence
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe21f49718 
// N. Class: 1 
// Fields: 1 
namespace AnimParamID
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f0b9a0 
// N. Class: 2 
// Fields: 2 
namespace CAnimInputDamping
{
	constexpr uint32_t m_speedFunction = 0x8;  // DampingSpeedFunction 
	constexpr uint32_t m_fSpeedScale = 0xC;  // float32 
}

// Offset: 0x7ffe21f0ba60 
// N. Class: 3 
// Fields: 2 
namespace CAnimParamHandle
{
	constexpr uint32_t m_type = 0x0;  // AnimParamType_t 
	constexpr uint32_t m_index = 0x1;  // uint8 
}

// Offset: 0x7ffe21f560e0 
// N. Class: 4 
// Fields: 2 
namespace MoodAnimation_t
{
	constexpr uint32_t m_sName = 0x0;  // CUtlString 
	constexpr uint32_t m_flWeight = 0x8;  // float32 
}

// Offset: 0x7ffe21f55e60 
// N. Class: 5 
// Fields: 12 
namespace MoodAnimationLayer_t
{
	constexpr uint32_t m_sName = 0x0;  // CUtlString 
	constexpr uint32_t m_bActiveListening = 0x8;  // bool 
	constexpr uint32_t m_bActiveTalking = 0x9;  // bool 
	constexpr uint32_t m_layerAnimations = 0x10;  // CUtlVector< MoodAnimation_t > 
	constexpr uint32_t m_flIntensity = 0x28;  // CRangeFloat 
	constexpr uint32_t m_flDurationScale = 0x30;  // CRangeFloat 
	constexpr uint32_t m_bScaleWithInts = 0x38;  // bool 
	constexpr uint32_t m_flNextStart = 0x3C;  // CRangeFloat 
	constexpr uint32_t m_flStartOffset = 0x44;  // CRangeFloat 
	constexpr uint32_t m_flEndOffset = 0x4C;  // CRangeFloat 
	constexpr uint32_t m_flFadeIn = 0x54;  // float32 
	constexpr uint32_t m_flFadeOut = 0x58;  // float32 
}

// Offset: 0x7ffe05942c48 
// N. Class: 6 
// Fields: 1 
namespace CRangeFloat
{
	constexpr uint32_t m_pValue = 0x0;  // float32[2] 
}

// Offset: 0x7ffe21f55d60 
// N. Class: 7 
// Fields: 3 
namespace CMoodVData
{
	constexpr uint32_t m_sModelName = 0x0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_nMoodType = 0xE0;  // MoodType_t 
	constexpr uint32_t m_animationLayers = 0xE8;  // CUtlVector< MoodAnimationLayer_t > 
}

// Offset: 0x7ffe21f56550 
// N. Class: 8 
// Fields: 6 
namespace AnimationDecodeDebugDumpElement_t
{
	constexpr uint32_t m_nEntityIndex = 0x0;  // int32 
	constexpr uint32_t m_modelName = 0x8;  // CUtlString 
	constexpr uint32_t m_poseParams = 0x10;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_decodeOps = 0x28;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_internalOps = 0x40;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_decodedAnims = 0x58;  // CUtlVector< CUtlString > 
}

// Offset: 0x7ffe21f56490 
// N. Class: 9 
// Fields: 2 
namespace AnimationDecodeDebugDump_t
{
	constexpr uint32_t m_processingType = 0x0;  // AnimationProcessingType_t 
	constexpr uint32_t m_elems = 0x8;  // CUtlVector< AnimationDecodeDebugDumpElement_t > 
}

// Offset: 0x7ffe21f562f0 
// N. Class: 10 
// Fields: 9 
namespace AnimationSnapshotBase_t
{
	constexpr uint32_t m_flRealTime = 0x0;  // float32 
	constexpr uint32_t m_rootToWorld = 0x10;  // matrix3x4a_t 
	constexpr uint32_t m_bBonesInWorldSpace = 0x40;  // bool 
	constexpr uint32_t m_boneSetupMask = 0x48;  // CUtlVector< uint32 > 
	constexpr uint32_t m_boneTransforms = 0x60;  // CUtlVector< matrix3x4a_t > 
	constexpr uint32_t m_flexControllers = 0x78;  // CUtlVector< float32 > 
	constexpr uint32_t m_SnapshotType = 0x90;  // AnimationSnapshotType_t 
	constexpr uint32_t m_bHasDecodeDump = 0x94;  // bool 
	constexpr uint32_t m_DecodeDump = 0x98;  // AnimationDecodeDebugDumpElement_t 
}

// Offset: 0x7ffe21f56230 
// N. Class: 11 
// Fields: 2 
namespace AnimationSnapshot_t
{
	constexpr uint32_t m_nEntIndex = 0x110;  // int32 
	constexpr uint32_t m_modelName = 0x118;  // CUtlString 
}

// Offset: 0x7ffe21f57bd0 
// N. Class: 12 
// Fields: 5 
namespace CAnimBoneDifference
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_parent = 0x10;  // CBufferString 
	constexpr uint32_t m_posError = 0x20;  // Vector 
	constexpr uint32_t m_bHasRotation = 0x2C;  // bool 
	constexpr uint32_t m_bHasMovement = 0x2D;  // bool 
}

// Offset: 0x7ffe21f57b30 
// N. Class: 13 
// Fields: 1 
namespace CAnimMorphDifference
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
}

// Offset: 0x7ffe21f57a70 
// N. Class: 14 
// Fields: 2 
namespace CAnimUserDifference
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_nType = 0x10;  // int32 
}

// Offset: 0x7ffe21f57910 
// N. Class: 15 
// Fields: 7 
namespace CAnimEncodeDifference
{
	constexpr uint32_t m_boneArray = 0x0;  // CUtlVector< CAnimBoneDifference > 
	constexpr uint32_t m_morphArray = 0x18;  // CUtlVector< CAnimMorphDifference > 
	constexpr uint32_t m_userArray = 0x30;  // CUtlVector< CAnimUserDifference > 
	constexpr uint32_t m_bHasRotationBitArray = 0x48;  // CUtlVector< uint8 > 
	constexpr uint32_t m_bHasMovementBitArray = 0x60;  // CUtlVector< uint8 > 
	constexpr uint32_t m_bHasMorphBitArray = 0x78;  // CUtlVector< uint8 > 
	constexpr uint32_t m_bHasUserBitArray = 0x90;  // CUtlVector< uint8 > 
}

// Offset: 0x7ffe21f577b0 
// N. Class: 16 
// Fields: 7 
namespace CAnimEventDefinition
{
	constexpr uint32_t m_nFrame = 0x8;  // int32 
	constexpr uint32_t m_nEndFrame = 0xC;  // int32 
	constexpr uint32_t m_flCycle = 0x10;  // float32 
	constexpr uint32_t m_flDuration = 0x14;  // float32 
	constexpr uint32_t m_EventData = 0x18;  // KeyValues3 
	constexpr uint32_t m_sLegacyOptions = 0x28;  // CBufferString 
	constexpr uint32_t m_sEventName = 0x38;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f57650 
// N. Class: 17 
// Fields: 7 
namespace CAnimMovement
{
	constexpr uint32_t endframe = 0x0;  // int32 
	constexpr uint32_t motionflags = 0x4;  // int32 
	constexpr uint32_t v0 = 0x8;  // float32 
	constexpr uint32_t v1 = 0xC;  // float32 
	constexpr uint32_t angle = 0x10;  // float32 
	constexpr uint32_t vector = 0x14;  // Vector 
	constexpr uint32_t position = 0x20;  // Vector 
}

// Offset: 0x7ffe21f57510 
// N. Class: 18 
// Fields: 6 
namespace CAnimLocalHierarchy
{
	constexpr uint32_t m_sBone = 0x0;  // CBufferString 
	constexpr uint32_t m_sNewParent = 0x10;  // CBufferString 
	constexpr uint32_t m_nStartFrame = 0x20;  // int32 
	constexpr uint32_t m_nPeakFrame = 0x24;  // int32 
	constexpr uint32_t m_nTailFrame = 0x28;  // int32 
	constexpr uint32_t m_nEndFrame = 0x2C;  // int32 
}

// Offset: 0x7ffe21f57430 
// N. Class: 19 
// Fields: 3 
namespace CAnimDecoder
{
	constexpr uint32_t m_szName = 0x0;  // CBufferString 
	constexpr uint32_t m_nVersion = 0x10;  // int32 
	constexpr uint32_t m_nType = 0x14;  // int32 
}

// Offset: 0x7ffe21f57330 
// N. Class: 20 
// Fields: 4 
namespace CAnimFrameSegment
{
	constexpr uint32_t m_nUniqueFrameIndex = 0x0;  // int32 
	constexpr uint32_t m_nLocalElementMasks = 0x4;  // uint32 
	constexpr uint32_t m_nLocalChannel = 0x8;  // int32 
	constexpr uint32_t m_container = 0x10;  // CUtlBinaryBlock 
}

// Offset: 0x7ffe21f57250 
// N. Class: 21 
// Fields: 3 
namespace CAnimFrameBlockAnim
{
	constexpr uint32_t m_nStartFrame = 0x0;  // int32 
	constexpr uint32_t m_nEndFrame = 0x4;  // int32 
	constexpr uint32_t m_segmentIndexArray = 0x8;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe21f57130 
// N. Class: 22 
// Fields: 5 
namespace CAnimEncodedFrames
{
	constexpr uint32_t m_fileName = 0x0;  // CBufferString 
	constexpr uint32_t m_nFrames = 0x10;  // int32 
	constexpr uint32_t m_nFramesPerBlock = 0x14;  // int32 
	constexpr uint32_t m_frameblockArray = 0x18;  // CUtlVector< CAnimFrameBlockAnim > 
	constexpr uint32_t m_usageDifferences = 0x30;  // CAnimEncodeDifference 
}

// Offset: 0x7ffe21f56fb0 
// N. Class: 23 
// Fields: 8 
namespace CAnimDesc_Flag
{
	constexpr uint32_t m_bLooping = 0x0;  // bool 
	constexpr uint32_t m_bAllZeros = 0x1;  // bool 
	constexpr uint32_t m_bHidden = 0x2;  // bool 
	constexpr uint32_t m_bDelta = 0x3;  // bool 
	constexpr uint32_t m_bLegacyWorldspace = 0x4;  // bool 
	constexpr uint32_t m_bModelDoc = 0x5;  // bool 
	constexpr uint32_t m_bImplicitSeqIgnoreDelta = 0x6;  // bool 
	constexpr uint32_t m_bAnimGraphAdditive = 0x7;  // bool 
}

// Offset: 0x7ffe21f56ef0 
// N. Class: 24 
// Fields: 2 
namespace CAnimSequenceParams
{
	constexpr uint32_t m_flFadeInTime = 0x0;  // float32 
	constexpr uint32_t m_flFadeOutTime = 0x4;  // float32 
}

// Offset: 0x7ffe21f56c90 
// N. Class: 25 
// Fields: 15 
namespace CAnimDesc
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_flags = 0x10;  // CAnimDesc_Flag 
	constexpr uint32_t fps = 0x18;  // float32 
	constexpr uint32_t m_Data = 0x20;  // CAnimEncodedFrames 
	constexpr uint32_t m_movementArray = 0xF8;  // CUtlVector< CAnimMovement > 
	constexpr uint32_t m_xInitialOffset = 0x110;  // CTransform 
	constexpr uint32_t m_eventArray = 0x130;  // CUtlVector< CAnimEventDefinition > 
	constexpr uint32_t m_activityArray = 0x148;  // CUtlVector< CAnimActivity > 
	constexpr uint32_t m_hierarchyArray = 0x160;  // CUtlVector< CAnimLocalHierarchy > 
	constexpr uint32_t framestalltime = 0x178;  // float32 
	constexpr uint32_t m_vecRootMin = 0x17C;  // Vector 
	constexpr uint32_t m_vecRootMax = 0x188;  // Vector 
	constexpr uint32_t m_vecBoneWorldMin = 0x198;  // CUtlVector< Vector > 
	constexpr uint32_t m_vecBoneWorldMax = 0x1B0;  // CUtlVector< Vector > 
	constexpr uint32_t m_sequenceParams = 0x1C8;  // CAnimSequenceParams 
}

// Offset: 0x7ffe21f56b90 
// N. Class: 26 
// Fields: 4 
namespace CAnimActivity
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_nActivity = 0x10;  // int32 
	constexpr uint32_t m_nFlags = 0x14;  // int32 
	constexpr uint32_t m_nWeight = 0x18;  // int32 
}

// Offset: 0x7ffe21f56a70 
// N. Class: 27 
// Fields: 5 
namespace CAnimData
{
	constexpr uint32_t m_name = 0x10;  // CBufferString 
	constexpr uint32_t m_animArray = 0x20;  // CUtlVector< CAnimDesc > 
	constexpr uint32_t m_decoderArray = 0x38;  // CUtlVector< CAnimDecoder > 
	constexpr uint32_t m_nMaxUniqueFrameIndex = 0x50;  // int32 
	constexpr uint32_t m_segmentArray = 0x58;  // CUtlVector< CAnimFrameSegment > 
}

// Offset: 0x7ffe21f58220 
// N. Class: 28 
// Fields: 7 
namespace CAnimBone
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_parent = 0x10;  // int32 
	constexpr uint32_t m_pos = 0x14;  // Vector 
	constexpr uint32_t m_quat = 0x20;  // QuaternionStorage 
	constexpr uint32_t m_scale = 0x30;  // float32 
	constexpr uint32_t m_qAlignment = 0x34;  // QuaternionStorage 
	constexpr uint32_t m_flags = 0x44;  // int32 
}

// Offset: 0x7ffe21f58160 
// N. Class: 29 
// Fields: 2 
namespace CAnimUser
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_nType = 0x10;  // int32 
}

// Offset: 0x7ffe21f57fc0 
// N. Class: 30 
// Fields: 9 
namespace CAnimDataChannelDesc
{
	constexpr uint32_t m_szChannelClass = 0x0;  // CBufferString 
	constexpr uint32_t m_szVariableName = 0x10;  // CBufferString 
	constexpr uint32_t m_nFlags = 0x20;  // int32 
	constexpr uint32_t m_nType = 0x24;  // int32 
	constexpr uint32_t m_szGrouping = 0x28;  // CBufferString 
	constexpr uint32_t m_szDescription = 0x38;  // CBufferString 
	constexpr uint32_t m_szElementNameArray = 0x48;  // CUtlVector< CBufferString > 
	constexpr uint32_t m_nElementIndexArray = 0x60;  // CUtlVector< int32 > 
	constexpr uint32_t m_nElementMaskArray = 0x78;  // CUtlVector< uint32 > 
}

// Offset: 0x7ffe21f57e80 
// N. Class: 31 
// Fields: 6 
namespace CAnimKeyData
{
	constexpr uint32_t m_name = 0x0;  // CBufferString 
	constexpr uint32_t m_boneArray = 0x10;  // CUtlVector< CAnimBone > 
	constexpr uint32_t m_userArray = 0x28;  // CUtlVector< CAnimUser > 
	constexpr uint32_t m_morphArray = 0x40;  // CUtlVector< CBufferString > 
	constexpr uint32_t m_nChannelElements = 0x58;  // int32 
	constexpr uint32_t m_dataChannelArray = 0x60;  // CUtlVector< CAnimDataChannelDesc > 
}

// Offset: 0x7ffe21f57cf0 
// N. Class: 32 
// Fields: 8 
namespace CAnimationGroup
{
	constexpr uint32_t m_nFlags = 0x10;  // uint32 
	constexpr uint32_t m_name = 0x18;  // CBufferString 
	constexpr uint32_t m_localHAnimArray_Handle = 0x60;  // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > 
	constexpr uint32_t m_includedGroupArray_Handle = 0x78;  // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > 
	constexpr uint32_t m_directHSeqGroup_Handle = 0x90;  // CStrongHandle< InfoForResourceTypeCSequenceGroupData > 
	constexpr uint32_t m_decodeKey = 0x98;  // CAnimKeyData 
	constexpr uint32_t m_szScripts = 0x110;  // CUtlVector< CBufferString > 
	constexpr uint32_t m_AdditionalExtRefs = 0x128;  // CUtlVector< CStrongHandleVoid > 
}

// Offset: 0x7ffe21f55af0 
// N. Class: 33 
// Fields: 8 
namespace CSeqAutoLayerFlag
{
	constexpr uint32_t m_bPost = 0x0;  // bool 
	constexpr uint32_t m_bSpline = 0x1;  // bool 
	constexpr uint32_t m_bXFade = 0x2;  // bool 
	constexpr uint32_t m_bNoBlend = 0x3;  // bool 
	constexpr uint32_t m_bLocal = 0x4;  // bool 
	constexpr uint32_t m_bPose = 0x5;  // bool 
	constexpr uint32_t m_bFetchFrame = 0x6;  // bool 
	constexpr uint32_t m_bSubtract = 0x7;  // bool 
}

// Offset: 0x7ffe21f55990 
// N. Class: 34 
// Fields: 7 
namespace CSeqAutoLayer
{
	constexpr uint32_t m_nLocalReference = 0x0;  // int16 
	constexpr uint32_t m_nLocalPose = 0x2;  // int16 
	constexpr uint32_t m_flags = 0x4;  // CSeqAutoLayerFlag 
	constexpr uint32_t m_start = 0xC;  // float32 
	constexpr uint32_t m_peak = 0x10;  // float32 
	constexpr uint32_t m_tail = 0x14;  // float32 
	constexpr uint32_t m_end = 0x18;  // float32 
}

// Offset: 0x7ffe21f55890 
// N. Class: 35 
// Fields: 4 
namespace CSeqIKLock
{
	constexpr uint32_t m_flPosWeight = 0x0;  // float32 
	constexpr uint32_t m_flAngleWeight = 0x4;  // float32 
	constexpr uint32_t m_nLocalBone = 0x8;  // int16 
	constexpr uint32_t m_bBonesOrientedAlongPositiveX = 0xA;  // bool 
}

// Offset: 0x7ffe21f55770 
// N. Class: 36 
// Fields: 5 
namespace CSeqBoneMaskList
{
	constexpr uint32_t m_sName = 0x0;  // CBufferString 
	constexpr uint32_t m_nLocalBoneArray = 0x10;  // CUtlVector< int16 > 
	constexpr uint32_t m_flBoneWeightArray = 0x28;  // CUtlVector< float32 > 
	constexpr uint32_t m_flDefaultMorphCtrlWeight = 0x40;  // float32 
	constexpr uint32_t m_morphCtrlWeightArray = 0x48;  // CUtlVector< CUtlPair< CBufferString, float32 > > 
}

// Offset: 0x7ffe21f55650 
// N. Class: 37 
// Fields: 5 
namespace CSeqScaleSet
{
	constexpr uint32_t m_sName = 0x0;  // CBufferString 
	constexpr uint32_t m_bRootOffset = 0x10;  // bool 
	constexpr uint32_t m_vRootOffset = 0x14;  // Vector 
	constexpr uint32_t m_nLocalBoneArray = 0x20;  // CUtlVector< int16 > 
	constexpr uint32_t m_flBoneScaleArray = 0x38;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f55510 
// N. Class: 38 
// Fields: 6 
namespace CSeqMultiFetchFlag
{
	constexpr uint32_t m_bRealtime = 0x0;  // bool 
	constexpr uint32_t m_bCylepose = 0x1;  // bool 
	constexpr uint32_t m_b0D = 0x2;  // bool 
	constexpr uint32_t m_b1D = 0x3;  // bool 
	constexpr uint32_t m_b2D = 0x4;  // bool 
	constexpr uint32_t m_b2D_TRI = 0x5;  // bool 
}

// Offset: 0x7ffe21f55350 
// N. Class: 39 
// Fields: 10 
namespace CSeqMultiFetch
{
	constexpr uint32_t m_flags = 0x0;  // CSeqMultiFetchFlag 
	constexpr uint32_t m_localReferenceArray = 0x8;  // CUtlVector< int16 > 
	constexpr uint32_t m_nGroupSize = 0x20;  // int32[2] 
	constexpr uint32_t m_nLocalPose = 0x28;  // int32[2] 
	constexpr uint32_t m_poseKeyArray0 = 0x30;  // CUtlVector< float32 > 
	constexpr uint32_t m_poseKeyArray1 = 0x48;  // CUtlVector< float32 > 
	constexpr uint32_t m_nLocalCyclePoseParameter = 0x60;  // int32 
	constexpr uint32_t m_bCalculatePoseParameters = 0x64;  // bool 
	constexpr uint32_t m_bFixedBlendWeight = 0x65;  // bool 
	constexpr uint32_t m_flFixedBlendWeightVals = 0x68;  // float32[2] 
}

// Offset: 0x7ffe21f55170 
// N. Class: 40 
// Fields: 11 
namespace CSeqSeqDescFlag
{
	constexpr uint32_t m_bLooping = 0x0;  // bool 
	constexpr uint32_t m_bSnap = 0x1;  // bool 
	constexpr uint32_t m_bAutoplay = 0x2;  // bool 
	constexpr uint32_t m_bPost = 0x3;  // bool 
	constexpr uint32_t m_bHidden = 0x4;  // bool 
	constexpr uint32_t m_bMulti = 0x5;  // bool 
	constexpr uint32_t m_bLegacyDelta = 0x6;  // bool 
	constexpr uint32_t m_bLegacyWorldspace = 0x7;  // bool 
	constexpr uint32_t m_bLegacyCyclepose = 0x8;  // bool 
	constexpr uint32_t m_bLegacyRealtime = 0x9;  // bool 
	constexpr uint32_t m_bModelDoc = 0xA;  // bool 
}

// Offset: 0x7ffe21f550b0 
// N. Class: 41 
// Fields: 2 
namespace CSeqTransition
{
	constexpr uint32_t m_flFadeInTime = 0x0;  // float32 
	constexpr uint32_t m_flFadeOutTime = 0x4;  // float32 
}

// Offset: 0x7ffe21f54ed0 
// N. Class: 42 
// Fields: 11 
namespace CSeqS1SeqDesc
{
	constexpr uint32_t m_sName = 0x0;  // CBufferString 
	constexpr uint32_t m_flags = 0x10;  // CSeqSeqDescFlag 
	constexpr uint32_t m_fetch = 0x20;  // CSeqMultiFetch 
	constexpr uint32_t m_nLocalWeightlist = 0x90;  // int32 
	constexpr uint32_t m_autoLayerArray = 0x98;  // CUtlVector< CSeqAutoLayer > 
	constexpr uint32_t m_IKLockArray = 0xB0;  // CUtlVector< CSeqIKLock > 
	constexpr uint32_t m_transition = 0xC8;  // CSeqTransition 
	constexpr uint32_t m_SequenceKeys = 0xD0;  // KeyValues3 
	constexpr uint32_t m_LegacyKeyValueText = 0xE0;  // CBufferString 
	constexpr uint32_t m_activityArray = 0xF0;  // CUtlVector< CAnimActivity > 
	constexpr uint32_t m_footMotion = 0x108;  // CUtlVector< CFootMotion > 
}

// Offset: 0x7ffe21f49030 
// N. Class: 43 
// Fields: 3 
namespace CFootMotion
{
	constexpr uint32_t m_strides = 0x0;  // CUtlVector< CFootStride > 
	constexpr uint32_t m_name = 0x18;  // CUtlString 
	constexpr uint32_t m_bAdditive = 0x20;  // bool 
}

// Offset: 0x7ffe21f54d90 
// N. Class: 44 
// Fields: 6 
namespace CSeqSynthAnimDesc
{
	constexpr uint32_t m_sName = 0x0;  // CBufferString 
	constexpr uint32_t m_flags = 0x10;  // CSeqSeqDescFlag 
	constexpr uint32_t m_transition = 0x1C;  // CSeqTransition 
	constexpr uint32_t m_nLocalBaseReference = 0x24;  // int16 
	constexpr uint32_t m_nLocalBoneMask = 0x26;  // int16 
	constexpr uint32_t m_activityArray = 0x28;  // CUtlVector< CAnimActivity > 
}

// Offset: 0x7ffe21f54bf0 
// N. Class: 45 
// Fields: 9 
namespace CSeqCmdLayer
{
	constexpr uint32_t m_cmd = 0x0;  // int16 
	constexpr uint32_t m_nLocalReference = 0x2;  // int16 
	constexpr uint32_t m_nLocalBonemask = 0x4;  // int16 
	constexpr uint32_t m_nDstResult = 0x6;  // int16 
	constexpr uint32_t m_nSrcResult = 0x8;  // int16 
	constexpr uint32_t m_bSpline = 0xA;  // bool 
	constexpr uint32_t m_flVar1 = 0xC;  // float32 
	constexpr uint32_t m_flVar2 = 0x10;  // float32 
	constexpr uint32_t m_nLineNumber = 0x14;  // int16 
}

// Offset: 0x7ffe21f54a70 
// N. Class: 46 
// Fields: 8 
namespace CSeqPoseSetting
{
	constexpr uint32_t m_sPoseParameter = 0x0;  // CBufferString 
	constexpr uint32_t m_sAttachment = 0x10;  // CBufferString 
	constexpr uint32_t m_sReferenceSequence = 0x20;  // CBufferString 
	constexpr uint32_t m_flValue = 0x30;  // float32 
	constexpr uint32_t m_bX = 0x34;  // bool 
	constexpr uint32_t m_bY = 0x35;  // bool 
	constexpr uint32_t m_bZ = 0x36;  // bool 
	constexpr uint32_t m_eType = 0x38;  // int32 
}

// Offset: 0x7ffe21f54870 
// N. Class: 47 
// Fields: 12 
namespace CSeqCmdSeqDesc
{
	constexpr uint32_t m_sName = 0x0;  // CBufferString 
	constexpr uint32_t m_flags = 0x10;  // CSeqSeqDescFlag 
	constexpr uint32_t m_transition = 0x1C;  // CSeqTransition 
	constexpr uint32_t m_nFrameRangeSequence = 0x24;  // int16 
	constexpr uint32_t m_nFrameCount = 0x26;  // int16 
	constexpr uint32_t m_flFPS = 0x28;  // float32 
	constexpr uint32_t m_nSubCycles = 0x2C;  // int16 
	constexpr uint32_t m_numLocalResults = 0x2E;  // int16 
	constexpr uint32_t m_cmdLayerArray = 0x30;  // CUtlVector< CSeqCmdLayer > 
	constexpr uint32_t m_eventArray = 0x48;  // CUtlVector< CAnimEventDefinition > 
	constexpr uint32_t m_activityArray = 0x60;  // CUtlVector< CAnimActivity > 
	constexpr uint32_t m_poseSettingArray = 0x78;  // CUtlVector< CSeqPoseSetting > 
}

// Offset: 0x7ffe21f54750 
// N. Class: 48 
// Fields: 5 
namespace CSeqPoseParamDesc
{
	constexpr uint32_t m_sName = 0x0;  // CBufferString 
	constexpr uint32_t m_flStart = 0x10;  // float32 
	constexpr uint32_t m_flEnd = 0x14;  // float32 
	constexpr uint32_t m_flLoop = 0x18;  // float32 
	constexpr uint32_t m_bLooping = 0x1C;  // bool 
}

// Offset: 0x7ffe21f54510 
// N. Class: 49 
// Fields: 14 
namespace CSequenceGroupData
{
	constexpr uint32_t m_sName = 0x10;  // CBufferString 
	constexpr uint32_t m_nFlags = 0x20;  // uint32 
	constexpr uint32_t m_localSequenceNameArray = 0x28;  // CUtlVector< CBufferString > 
	constexpr uint32_t m_localS1SeqDescArray = 0x40;  // CUtlVector< CSeqS1SeqDesc > 
	constexpr uint32_t m_localMultiSeqDescArray = 0x58;  // CUtlVector< CSeqS1SeqDesc > 
	constexpr uint32_t m_localSynthAnimDescArray = 0x70;  // CUtlVector< CSeqSynthAnimDesc > 
	constexpr uint32_t m_localCmdSeqDescArray = 0x88;  // CUtlVector< CSeqCmdSeqDesc > 
	constexpr uint32_t m_localBoneMaskArray = 0xA0;  // CUtlVector< CSeqBoneMaskList > 
	constexpr uint32_t m_localScaleSetArray = 0xB8;  // CUtlVector< CSeqScaleSet > 
	constexpr uint32_t m_localBoneNameArray = 0xD0;  // CUtlVector< CBufferString > 
	constexpr uint32_t m_localNodeName = 0xE8;  // CBufferString 
	constexpr uint32_t m_localPoseParamArray = 0xF8;  // CUtlVector< CSeqPoseParamDesc > 
	constexpr uint32_t m_keyValues = 0x110;  // KeyValues3 
	constexpr uint32_t m_localIKAutoplayLockArray = 0x120;  // CUtlVector< CSeqIKLock > 
}

// Offset: 0x7ffe21f567c0 
// N. Class: 50 
// Fields: 17 
namespace CCompressorGroup
{
	constexpr uint32_t m_nTotalElementCount = 0x0;  // int32 
	constexpr uint32_t m_szChannelClass = 0x8;  // CUtlVector< char* > 
	constexpr uint32_t m_szVariableName = 0x20;  // CUtlVector< char* > 
	constexpr uint32_t m_nType = 0x38;  // CUtlVector< fieldtype_t > 
	constexpr uint32_t m_nFlags = 0x50;  // CUtlVector< int32 > 
	constexpr uint32_t m_szGrouping = 0x68;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_nCompressorIndex = 0x80;  // CUtlVector< int32 > 
	constexpr uint32_t m_szElementNames = 0x98;  // CUtlVector< CUtlVector< char* > > 
	constexpr uint32_t m_nElementUniqueID = 0xB0;  // CUtlVector< CUtlVector< int32 > > 
	constexpr uint32_t m_nElementMask = 0xC8;  // CUtlVector< uint32 > 
	constexpr uint32_t m_vectorCompressor = 0xF8;  // CUtlVector< CCompressor< Vector >* > 
	constexpr uint32_t m_quaternionCompressor = 0x110;  // CUtlVector< CCompressor< QuaternionStorage >* > 
	constexpr uint32_t m_intCompressor = 0x128;  // CUtlVector< CCompressor< int32 >* > 
	constexpr uint32_t m_boolCompressor = 0x140;  // CUtlVector< CCompressor< bool >* > 
	constexpr uint32_t m_colorCompressor = 0x158;  // CUtlVector< CCompressor< Color >* > 
	constexpr uint32_t m_vector2DCompressor = 0x170;  // CUtlVector< CCompressor< Vector2D >* > 
	constexpr uint32_t m_vector4DCompressor = 0x188;  // CUtlVector< CCompressor< Vector4D >* > 
}

// Offset: 0x7ffe21f58670 
// N. Class: 51 
// Fields: 1 
namespace CAnimEnum
{
	constexpr uint32_t m_value = 0x0;  // uint8 
}

// Offset: 0x7ffe21f49538 
// N. Class: 52 
// Fields: 1 
namespace AnimNodeID
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f495d8 
// N. Class: 53 
// Fields: 1 
namespace AnimNodeOutputID
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f49678 
// N. Class: 54 
// Fields: 1 
namespace AnimStateID
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f497b8 
// N. Class: 55 
// Fields: 1 
namespace AnimTagID
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f49858 
// N. Class: 56 
// Fields: 1 
namespace AnimComponentID
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f498f8 
// N. Class: 57 
// Fields: 1 
namespace AnimScriptHandle
{
	constexpr uint32_t m_id = 0x0;  // uint32 
}

// Offset: 0x7ffe21f49280 
// N. Class: 58 
// Fields: 5 
namespace CAnimAttachment
{
	constexpr uint32_t m_influenceRotations = 0x0;  // Quaternion[3] 
	constexpr uint32_t m_influenceOffsets = 0x30;  // VectorAligned[3] 
	constexpr uint32_t m_influenceIndices = 0x60;  // int32[3] 
	constexpr uint32_t m_influenceWeights = 0x6C;  // float32[3] 
	constexpr uint32_t m_numInfluences = 0x78;  // uint8 
}

// Offset: 0x7ffe21f4b2c0 
// N. Class: 59 
// Fields: 5 
namespace VPhysics2ShapeDef_t
{
	constexpr uint32_t m_spheres = 0x0;  // CUtlVector< RnSphereDesc_t > 
	constexpr uint32_t m_capsules = 0x18;  // CUtlVector< RnCapsuleDesc_t > 
	constexpr uint32_t m_hulls = 0x30;  // CUtlVector< RnHullDesc_t > 
	constexpr uint32_t m_meshes = 0x48;  // CUtlVector< RnMeshDesc_t > 
	constexpr uint32_t m_CollisionAttributeIndices = 0x60;  // CUtlVector< uint16 > 
}

// Offset: 0x7ffe26e505a8 
// N. Class: 60 
// Fields: 1 
namespace RnSphereDesc_t
{
	constexpr uint32_t m_Sphere = 0x18;  // SphereBase_t< float32 > 
}

// Offset: 0x7ffe26e50658 
// N. Class: 61 
// Fields: 1 
namespace RnCapsuleDesc_t
{
	constexpr uint32_t m_Capsule = 0x18;  // RnCapsule_t 
}

// Offset: 0x7ffe26e50708 
// N. Class: 62 
// Fields: 1 
namespace RnHullDesc_t
{
	constexpr uint32_t m_Hull = 0x18;  // RnHull_t 
}

// Offset: 0x7ffe26e507b8 
// N. Class: 63 
// Fields: 1 
namespace RnMeshDesc_t
{
	constexpr uint32_t m_Mesh = 0x18;  // RnMesh_t 
}

// Offset: 0x7ffe21f49eb0 
// N. Class: 64 
// Fields: 10 
namespace VPhysXBodyPart_t
{
	constexpr uint32_t m_nFlags = 0x0;  // uint32 
	constexpr uint32_t m_flMass = 0x4;  // float32 
	constexpr uint32_t m_rnShape = 0x8;  // VPhysics2ShapeDef_t 
	constexpr uint32_t m_nCollisionAttributeIndex = 0x80;  // uint16 
	constexpr uint32_t m_nReserved = 0x82;  // uint16 
	constexpr uint32_t m_flInertiaScale = 0x84;  // float32 
	constexpr uint32_t m_flLinearDamping = 0x88;  // float32 
	constexpr uint32_t m_flAngularDamping = 0x8C;  // float32 
	constexpr uint32_t m_bOverrideMassCenter = 0x90;  // bool 
	constexpr uint32_t m_vMassCenterOverride = 0x94;  // Vector 
}

// Offset: 0x7ffe21f4a070 
// N. Class: 65 
// Fields: 8 
namespace VPhysXCollisionAttributes_t
{
	constexpr uint32_t m_CollisionGroup = 0x0;  // uint32 
	constexpr uint32_t m_InteractAs = 0x8;  // CUtlVector< uint32 > 
	constexpr uint32_t m_InteractWith = 0x20;  // CUtlVector< uint32 > 
	constexpr uint32_t m_InteractExclude = 0x38;  // CUtlVector< uint32 > 
	constexpr uint32_t m_CollisionGroupString = 0x50;  // CUtlString 
	constexpr uint32_t m_InteractAsStrings = 0x58;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_InteractWithStrings = 0x70;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_InteractExcludeStrings = 0x88;  // CUtlVector< CUtlString > 
}

// Offset: 0x7ffe21f4a1f0 
// N. Class: 66 
// Fields: 2 
namespace VPhysXRange_t
{
	constexpr uint32_t m_flMin = 0x0;  // float32 
	constexpr uint32_t m_flMax = 0x4;  // float32 
}

// Offset: 0x7ffe21f4a2b0 
// N. Class: 67 
// Fields: 46 
namespace VPhysXConstraintParams_t
{
	constexpr uint32_t m_nType = 0x0;  // int8 
	constexpr uint32_t m_nTranslateMotion = 0x1;  // int8 
	constexpr uint32_t m_nRotateMotion = 0x2;  // int8 
	constexpr uint32_t m_nFlags = 0x3;  // int8 
	constexpr uint32_t m_anchor = 0x4;  // Vector[2] 
	constexpr uint32_t m_axes = 0x1C;  // QuaternionStorage[2] 
	constexpr uint32_t m_maxForce = 0x3C;  // float32 
	constexpr uint32_t m_maxTorque = 0x40;  // float32 
	constexpr uint32_t m_linearLimitValue = 0x44;  // float32 
	constexpr uint32_t m_linearLimitRestitution = 0x48;  // float32 
	constexpr uint32_t m_linearLimitSpring = 0x4C;  // float32 
	constexpr uint32_t m_linearLimitDamping = 0x50;  // float32 
	constexpr uint32_t m_twistLowLimitValue = 0x54;  // float32 
	constexpr uint32_t m_twistLowLimitRestitution = 0x58;  // float32 
	constexpr uint32_t m_twistLowLimitSpring = 0x5C;  // float32 
	constexpr uint32_t m_twistLowLimitDamping = 0x60;  // float32 
	constexpr uint32_t m_twistHighLimitValue = 0x64;  // float32 
	constexpr uint32_t m_twistHighLimitRestitution = 0x68;  // float32 
	constexpr uint32_t m_twistHighLimitSpring = 0x6C;  // float32 
	constexpr uint32_t m_twistHighLimitDamping = 0x70;  // float32 
	constexpr uint32_t m_swing1LimitValue = 0x74;  // float32 
	constexpr uint32_t m_swing1LimitRestitution = 0x78;  // float32 
	constexpr uint32_t m_swing1LimitSpring = 0x7C;  // float32 
	constexpr uint32_t m_swing1LimitDamping = 0x80;  // float32 
	constexpr uint32_t m_swing2LimitValue = 0x84;  // float32 
	constexpr uint32_t m_swing2LimitRestitution = 0x88;  // float32 
	constexpr uint32_t m_swing2LimitSpring = 0x8C;  // float32 
	constexpr uint32_t m_swing2LimitDamping = 0x90;  // float32 
	constexpr uint32_t m_goalPosition = 0x94;  // Vector 
	constexpr uint32_t m_goalOrientation = 0xA0;  // QuaternionStorage 
	constexpr uint32_t m_goalAngularVelocity = 0xB0;  // Vector 
	constexpr uint32_t m_driveSpringX = 0xBC;  // float32 
	constexpr uint32_t m_driveSpringY = 0xC0;  // float32 
	constexpr uint32_t m_driveSpringZ = 0xC4;  // float32 
	constexpr uint32_t m_driveDampingX = 0xC8;  // float32 
	constexpr uint32_t m_driveDampingY = 0xCC;  // float32 
	constexpr uint32_t m_driveDampingZ = 0xD0;  // float32 
	constexpr uint32_t m_driveSpringTwist = 0xD4;  // float32 
	constexpr uint32_t m_driveSpringSwing = 0xD8;  // float32 
	constexpr uint32_t m_driveSpringSlerp = 0xDC;  // float32 
	constexpr uint32_t m_driveDampingTwist = 0xE0;  // float32 
	constexpr uint32_t m_driveDampingSwing = 0xE4;  // float32 
	constexpr uint32_t m_driveDampingSlerp = 0xE8;  // float32 
	constexpr uint32_t m_solverIterationCount = 0xEC;  // int32 
	constexpr uint32_t m_projectionLinearTolerance = 0xF0;  // float32 
	constexpr uint32_t m_projectionAngularTolerance = 0xF4;  // float32 
}

// Offset: 0x7ffe21f4a8f0 
// N. Class: 68 
// Fields: 4 
namespace VPhysXConstraint2_t
{
	constexpr uint32_t m_nFlags = 0x0;  // uint32 
	constexpr uint32_t m_nParent = 0x4;  // uint16 
	constexpr uint32_t m_nChild = 0x6;  // uint16 
	constexpr uint32_t m_params = 0x8;  // VPhysXConstraintParams_t 
}

// Offset: 0x7ffe21f4a9f0 
// N. Class: 69 
// Fields: 27 
namespace VPhysXJoint_t
{
	constexpr uint32_t m_nType = 0x0;  // uint16 
	constexpr uint32_t m_nBody1 = 0x2;  // uint16 
	constexpr uint32_t m_nBody2 = 0x4;  // uint16 
	constexpr uint32_t m_nFlags = 0x6;  // uint16 
	constexpr uint32_t m_Frame1 = 0x10;  // CTransform 
	constexpr uint32_t m_Frame2 = 0x30;  // CTransform 
	constexpr uint32_t m_bEnableCollision = 0x50;  // bool 
	constexpr uint32_t m_bEnableLinearLimit = 0x51;  // bool 
	constexpr uint32_t m_LinearLimit = 0x54;  // VPhysXRange_t 
	constexpr uint32_t m_bEnableLinearMotor = 0x5C;  // bool 
	constexpr uint32_t m_vLinearTargetVelocity = 0x60;  // Vector 
	constexpr uint32_t m_flMaxForce = 0x6C;  // float32 
	constexpr uint32_t m_bEnableSwingLimit = 0x70;  // bool 
	constexpr uint32_t m_SwingLimit = 0x74;  // VPhysXRange_t 
	constexpr uint32_t m_bEnableTwistLimit = 0x7C;  // bool 
	constexpr uint32_t m_TwistLimit = 0x80;  // VPhysXRange_t 
	constexpr uint32_t m_bEnableAngularMotor = 0x88;  // bool 
	constexpr uint32_t m_vAngularTargetVelocity = 0x8C;  // Vector 
	constexpr uint32_t m_flMaxTorque = 0x98;  // float32 
	constexpr uint32_t m_flLinearFrequency = 0x9C;  // float32 
	constexpr uint32_t m_flLinearDampingRatio = 0xA0;  // float32 
	constexpr uint32_t m_flAngularFrequency = 0xA4;  // float32 
	constexpr uint32_t m_flAngularDampingRatio = 0xA8;  // float32 
	constexpr uint32_t m_flFriction = 0xAC;  // float32 
	constexpr uint32_t m_flElasticity = 0xB0;  // float32 
	constexpr uint32_t m_flElasticDamping = 0xB4;  // float32 
	constexpr uint32_t m_flPlasticity = 0xB8;  // float32 
}

// Offset: 0x7ffe21f4add0 
// N. Class: 70 
// Fields: 6 
namespace PhysSoftbodyDesc_t
{
	constexpr uint32_t m_ParticleBoneHash = 0x0;  // CUtlVector< uint32 > 
	constexpr uint32_t m_Particles = 0x18;  // CUtlVector< RnSoftbodyParticle_t > 
	constexpr uint32_t m_Springs = 0x30;  // CUtlVector< RnSoftbodySpring_t > 
	constexpr uint32_t m_Capsules = 0x48;  // CUtlVector< RnSoftbodyCapsule_t > 
	constexpr uint32_t m_InitPose = 0x60;  // CUtlVector< CTransform > 
	constexpr uint32_t m_ParticleBoneName = 0x78;  // CUtlVector< CUtlString > 
}

// Offset: 0x7ffe26e50868 
// N. Class: 71 
// Fields: 1 
namespace RnSoftbodyParticle_t
{
	constexpr uint32_t m_flMassInv = 0x0;  // float32 
}

// Offset: 0x7ffe26e50910 
// N. Class: 72 
// Fields: 2 
namespace RnSoftbodySpring_t
{
	constexpr uint32_t m_nParticle = 0x0;  // uint16[2] 
	constexpr uint32_t m_flLength = 0x4;  // float32 
}

// Offset: 0x7ffe26e509d0 
// N. Class: 73 
// Fields: 3 
namespace RnSoftbodyCapsule_t
{
	constexpr uint32_t m_vCenter = 0x0;  // Vector[2] 
	constexpr uint32_t m_flRadius = 0x18;  // float32 
	constexpr uint32_t m_nParticle = 0x1C;  // uint16[2] 
}

// Offset: 0x7ffe21f4af10 
// N. Class: 74 
// Fields: 16 
namespace VPhysXAggregateData_t
{
	constexpr uint32_t m_nFlags = 0x0;  // uint16 
	constexpr uint32_t m_nRefCounter = 0x2;  // uint16 
	constexpr uint32_t m_bonesHash = 0x8;  // CUtlVector< uint32 > 
	constexpr uint32_t m_boneNames = 0x20;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_indexNames = 0x38;  // CUtlVector< uint16 > 
	constexpr uint32_t m_indexHash = 0x50;  // CUtlVector< uint16 > 
	constexpr uint32_t m_bindPose = 0x68;  // CUtlVector< matrix3x4a_t > 
	constexpr uint32_t m_parts = 0x80;  // CUtlVector< VPhysXBodyPart_t > 
	constexpr uint32_t m_constraints2 = 0x98;  // CUtlVector< VPhysXConstraint2_t > 
	constexpr uint32_t m_joints = 0xB0;  // CUtlVector< VPhysXJoint_t > 
	constexpr uint32_t m_pFeModel = 0xC8;  // PhysFeModelDesc_t* 
	constexpr uint32_t m_boneParents = 0xD0;  // CUtlVector< uint16 > 
	constexpr uint32_t m_surfacePropertyHashes = 0xE8;  // CUtlVector< uint32 > 
	constexpr uint32_t m_collisionAttributes = 0x100;  // CUtlVector< VPhysXCollisionAttributes_t > 
	constexpr uint32_t m_debugPartNames = 0x118;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_embeddedKeyvalues = 0x130;  // CUtlString 
}

// Offset: 0x7ffe26e513c0 
// N. Class: 75 
// Fields: 106 
namespace PhysFeModelDesc_t
{
	constexpr uint32_t m_CtrlHash = 0x0;  // CUtlVector< uint32 > 
	constexpr uint32_t m_CtrlName = 0x18;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_nStaticNodeFlags = 0x30;  // uint32 
	constexpr uint32_t m_nDynamicNodeFlags = 0x34;  // uint32 
	constexpr uint32_t m_flLocalForce = 0x38;  // float32 
	constexpr uint32_t m_flLocalRotation = 0x3C;  // float32 
	constexpr uint32_t m_nNodeCount = 0x40;  // uint16 
	constexpr uint32_t m_nStaticNodes = 0x42;  // uint16 
	constexpr uint32_t m_nRotLockStaticNodes = 0x44;  // uint16 
	constexpr uint32_t m_nFirstPositionDrivenNode = 0x46;  // uint16 
	constexpr uint32_t m_nSimdTriCount1 = 0x48;  // uint16 
	constexpr uint32_t m_nSimdTriCount2 = 0x4A;  // uint16 
	constexpr uint32_t m_nSimdQuadCount1 = 0x4C;  // uint16 
	constexpr uint32_t m_nSimdQuadCount2 = 0x4E;  // uint16 
	constexpr uint32_t m_nQuadCount1 = 0x50;  // uint16 
	constexpr uint32_t m_nQuadCount2 = 0x52;  // uint16 
	constexpr uint32_t m_nTreeDepth = 0x54;  // uint16 
	constexpr uint32_t m_nNodeBaseJiggleboneDependsCount = 0x56;  // uint16 
	constexpr uint32_t m_nRopeCount = 0x58;  // uint16 
	constexpr uint32_t m_Ropes = 0x60;  // CUtlVector< uint16 > 
	constexpr uint32_t m_NodeBases = 0x78;  // CUtlVector< FeNodeBase_t > 
	constexpr uint32_t m_SimdNodeBases = 0x90;  // CUtlVector< FeSimdNodeBase_t > 
	constexpr uint32_t m_Quads = 0xA8;  // CUtlVector< FeQuad_t > 
	constexpr uint32_t m_SimdQuads = 0xC0;  // CUtlVector< FeSimdQuad_t > 
	constexpr uint32_t m_SimdTris = 0xD8;  // CUtlVector< FeSimdTri_t > 
	constexpr uint32_t m_SimdRods = 0xF0;  // CUtlVector< FeSimdRodConstraint_t > 
	constexpr uint32_t m_SimdRodsAnim = 0x108;  // CUtlVector< FeSimdRodConstraintAnim_t > 
	constexpr uint32_t m_InitPose = 0x120;  // CUtlVector< CTransform > 
	constexpr uint32_t m_Rods = 0x138;  // CUtlVector< FeRodConstraint_t > 
	constexpr uint32_t m_Twists = 0x150;  // CUtlVector< FeTwistConstraint_t > 
	constexpr uint32_t m_HingeLimits = 0x168;  // CUtlVector< FeHingeLimit_t > 
	constexpr uint32_t m_AntiTunnelProbes = 0x180;  // CUtlVector< FeAntiTunnelProbe_t > 
	constexpr uint32_t m_AntiTunnelTargetNodes = 0x198;  // CUtlVector< uint16 > 
	constexpr uint32_t m_AxialEdges = 0x1B0;  // CUtlVector< FeAxialEdgeBend_t > 
	constexpr uint32_t m_NodeInvMasses = 0x1C8;  // CUtlVector< float32 > 
	constexpr uint32_t m_CtrlOffsets = 0x1E0;  // CUtlVector< FeCtrlOffset_t > 
	constexpr uint32_t m_CtrlOsOffsets = 0x1F8;  // CUtlVector< FeCtrlOsOffset_t > 
	constexpr uint32_t m_FollowNodes = 0x210;  // CUtlVector< FeFollowNode_t > 
	constexpr uint32_t m_CollisionPlanes = 0x228;  // CUtlVector< FeCollisionPlane_t > 
	constexpr uint32_t m_NodeIntegrator = 0x240;  // CUtlVector< FeNodeIntegrator_t > 
	constexpr uint32_t m_SpringIntegrator = 0x258;  // CUtlVector< FeSpringIntegrator_t > 
	constexpr uint32_t m_SimdSpringIntegrator = 0x270;  // CUtlVector< FeSimdSpringIntegrator_t > 
	constexpr uint32_t m_WorldCollisionParams = 0x288;  // CUtlVector< FeWorldCollisionParams_t > 
	constexpr uint32_t m_LegacyStretchForce = 0x2A0;  // CUtlVector< float32 > 
	constexpr uint32_t m_NodeCollisionRadii = 0x2B8;  // CUtlVector< float32 > 
	constexpr uint32_t m_DynNodeFriction = 0x2D0;  // CUtlVector< float32 > 
	constexpr uint32_t m_LocalRotation = 0x2E8;  // CUtlVector< float32 > 
	constexpr uint32_t m_LocalForce = 0x300;  // CUtlVector< float32 > 
	constexpr uint32_t m_TaperedCapsuleStretches = 0x318;  // CUtlVector< FeTaperedCapsuleStretch_t > 
	constexpr uint32_t m_TaperedCapsuleRigids = 0x330;  // CUtlVector< FeTaperedCapsuleRigid_t > 
	constexpr uint32_t m_SphereRigids = 0x348;  // CUtlVector< FeSphereRigid_t > 
	constexpr uint32_t m_WorldCollisionNodes = 0x360;  // CUtlVector< uint16 > 
	constexpr uint32_t m_TreeParents = 0x378;  // CUtlVector< uint16 > 
	constexpr uint32_t m_TreeCollisionMasks = 0x390;  // CUtlVector< uint16 > 
	constexpr uint32_t m_TreeChildren = 0x3A8;  // CUtlVector< FeTreeChildren_t > 
	constexpr uint32_t m_FreeNodes = 0x3C0;  // CUtlVector< uint16 > 
	constexpr uint32_t m_FitMatrices = 0x3D8;  // CUtlVector< FeFitMatrix_t > 
	constexpr uint32_t m_ReverseOffsets = 0x408;  // CUtlVector< FeNodeReverseOffset_t > 
	constexpr uint32_t m_AnimStrayRadii = 0x420;  // CUtlVector< FeAnimStrayRadius_t > 
	constexpr uint32_t m_SimdAnimStrayRadii = 0x438;  // CUtlVector< FeSimdAnimStrayRadius_t > 
	constexpr uint32_t m_KelagerBends = 0x450;  // CUtlVector< FeKelagerBend2_t > 
	constexpr uint32_t m_CtrlSoftOffsets = 0x468;  // CUtlVector< FeCtrlSoftOffset_t > 
	constexpr uint32_t m_JiggleBones = 0x480;  // CUtlVector< CFeIndexedJiggleBone > 
	constexpr uint32_t m_SourceElems = 0x498;  // CUtlVector< uint16 > 
	constexpr uint32_t m_GoalDampedSpringIntegrators = 0x4B0;  // CUtlVector< uint32 > 
	constexpr uint32_t m_Tris = 0x4C8;  // CUtlVector< FeTri_t > 
	constexpr uint32_t m_nTriCount1 = 0x4E0;  // uint16 
	constexpr uint32_t m_nTriCount2 = 0x4E2;  // uint16 
	constexpr uint32_t m_nReservedUint8 = 0x4E4;  // uint8 
	constexpr uint32_t m_nExtraPressureIterations = 0x4E5;  // uint8 
	constexpr uint32_t m_nExtraGoalIterations = 0x4E6;  // uint8 
	constexpr uint32_t m_nExtraIterations = 0x4E7;  // uint8 
	constexpr uint32_t m_SDFRigids = 0x4E8;  // CUtlVector< FeSDFRigid_t > 
	constexpr uint32_t m_BoxRigids = 0x500;  // CUtlVector< FeBoxRigid_t > 
	constexpr uint32_t m_DynNodeVertexSet = 0x518;  // CUtlVector< uint8 > 
	constexpr uint32_t m_VertexSetNames = 0x530;  // CUtlVector< uint32 > 
	constexpr uint32_t m_RigidColliderPriorities = 0x548;  // CUtlVector< FeRigidColliderIndices_t > 
	constexpr uint32_t m_MorphLayers = 0x560;  // CUtlVector< FeMorphLayerDepr_t > 
	constexpr uint32_t m_MorphSetData = 0x578;  // CUtlVector< uint8 > 
	constexpr uint32_t m_VertexMaps = 0x590;  // CUtlVector< FeVertexMapDesc_t > 
	constexpr uint32_t m_VertexMapValues = 0x5A8;  // CUtlVector< uint8 > 
	constexpr uint32_t m_Effects = 0x5C0;  // CUtlVector< FeEffectDesc_t > 
	constexpr uint32_t m_LockToParent = 0x5D8;  // CUtlVector< FeCtrlOffset_t > 
	constexpr uint32_t m_LockToGoal = 0x5F0;  // CUtlVector< uint16 > 
	constexpr uint32_t m_SkelParents = 0x608;  // CUtlVector< int16 > 
	constexpr uint32_t m_DynNodeWindBases = 0x620;  // CUtlVector< FeNodeWindBase_t > 
	constexpr uint32_t m_flInternalPressure = 0x638;  // float32 
	constexpr uint32_t m_flDefaultTimeDilation = 0x63C;  // float32 
	constexpr uint32_t m_flWindage = 0x640;  // float32 
	constexpr uint32_t m_flWindDrag = 0x644;  // float32 
	constexpr uint32_t m_flDefaultSurfaceStretch = 0x648;  // float32 
	constexpr uint32_t m_flDefaultThreadStretch = 0x64C;  // float32 
	constexpr uint32_t m_flDefaultGravityScale = 0x650;  // float32 
	constexpr uint32_t m_flDefaultVelAirDrag = 0x654;  // float32 
	constexpr uint32_t m_flDefaultExpAirDrag = 0x658;  // float32 
	constexpr uint32_t m_flDefaultVelQuadAirDrag = 0x65C;  // float32 
	constexpr uint32_t m_flDefaultExpQuadAirDrag = 0x660;  // float32 
	constexpr uint32_t m_flRodVelocitySmoothRate = 0x664;  // float32 
	constexpr uint32_t m_flQuadVelocitySmoothRate = 0x668;  // float32 
	constexpr uint32_t m_flAddWorldCollisionRadius = 0x66C;  // float32 
	constexpr uint32_t m_flDefaultVolumetricSolveAmount = 0x670;  // float32 
	constexpr uint32_t m_flMotionSmoothCDT = 0x674;  // float32 
	constexpr uint32_t m_flLocalDrag1 = 0x678;  // float32 
	constexpr uint32_t m_nRodVelocitySmoothIterations = 0x67C;  // uint16 
	constexpr uint32_t m_nQuadVelocitySmoothIterations = 0x67E;  // uint16 
}

// Offset: 0x7ffe21f4db20 
// N. Class: 76 
// Fields: 9 
namespace CPhysSurfacePropertiesPhysics
{
	constexpr uint32_t m_friction = 0x0;  // float32 
	constexpr uint32_t m_elasticity = 0x4;  // float32 
	constexpr uint32_t m_density = 0x8;  // float32 
	constexpr uint32_t m_thickness = 0xC;  // float32 
	constexpr uint32_t m_softContactFrequency = 0x10;  // float32 
	constexpr uint32_t m_softContactDampingRatio = 0x14;  // float32 
	constexpr uint32_t m_wheelDrag = 0x18;  // float32 
	constexpr uint32_t m_heatConductivity = 0x1C;  // float32 
	constexpr uint32_t m_flashpoint = 0x20;  // float32 
}

// Offset: 0x7ffe21f4d4e0 
// N. Class: 77 
// Fields: 8 
namespace CPhysSurfacePropertiesAudio
{
	constexpr uint32_t m_reflectivity = 0x0;  // float32 
	constexpr uint32_t m_hardnessFactor = 0x4;  // float32 
	constexpr uint32_t m_roughnessFactor = 0x8;  // float32 
	constexpr uint32_t m_roughThreshold = 0xC;  // float32 
	constexpr uint32_t m_hardThreshold = 0x10;  // float32 
	constexpr uint32_t m_hardVelocityThreshold = 0x14;  // float32 
	constexpr uint32_t m_flStaticImpactVolume = 0x18;  // float32 
	constexpr uint32_t m_flOcclusionFactor = 0x1C;  // float32 
}

// Offset: 0x7ffe21f4d6b0 
// N. Class: 78 
// Fields: 11 
namespace CPhysSurfacePropertiesSoundNames
{
	constexpr uint32_t m_impactSoft = 0x0;  // CUtlString 
	constexpr uint32_t m_impactHard = 0x8;  // CUtlString 
	constexpr uint32_t m_scrapeSmooth = 0x10;  // CUtlString 
	constexpr uint32_t m_scrapeRough = 0x18;  // CUtlString 
	constexpr uint32_t m_bulletImpact = 0x20;  // CUtlString 
	constexpr uint32_t m_rolling = 0x28;  // CUtlString 
	constexpr uint32_t m_break = 0x30;  // CUtlString 
	constexpr uint32_t m_strain = 0x38;  // CUtlString 
	constexpr uint32_t m_meleeImpact = 0x40;  // CUtlString 
	constexpr uint32_t m_pushOff = 0x48;  // CUtlString 
	constexpr uint32_t m_skidStop = 0x50;  // CUtlString 
}

// Offset: 0x7ffe21f4d8c0 
// N. Class: 79 
// Fields: 8 
namespace CPhysSurfaceProperties
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_nameHash = 0x8;  // uint32 
	constexpr uint32_t m_baseNameHash = 0xC;  // uint32 
	constexpr uint32_t m_bHidden = 0x18;  // bool 
	constexpr uint32_t m_description = 0x20;  // CUtlString 
	constexpr uint32_t m_physics = 0x28;  // CPhysSurfacePropertiesPhysics 
	constexpr uint32_t m_audioSounds = 0x50;  // CPhysSurfacePropertiesSoundNames 
	constexpr uint32_t m_audioParams = 0xA8;  // CPhysSurfacePropertiesAudio 
}

// Offset: 0x7ffe21f4da40 
// N. Class: 80 
// Fields: 1 
namespace CVPhysXSurfacePropertiesList
{
	constexpr uint32_t m_surfacePropertiesList = 0x0;  // CUtlVector< CPhysSurfaceProperties* > 
}

// Offset: 0x7ffe21f4b510 
// N. Class: 81 
// Fields: 2 
namespace MaterialGroup_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_materials = 0x8;  // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > 
}

// Offset: 0x7ffe21f4b5d0 
// N. Class: 82 
// Fields: 7 
namespace ModelSkeletonData_t
{
	constexpr uint32_t m_boneName = 0x0;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_nParent = 0x18;  // CUtlVector< int16 > 
	constexpr uint32_t m_boneSphere = 0x30;  // CUtlVector< float32 > 
	constexpr uint32_t m_nFlag = 0x48;  // CUtlVector< uint32 > 
	constexpr uint32_t m_bonePosParent = 0x60;  // CUtlVector< Vector > 
	constexpr uint32_t m_boneRotParent = 0x78;  // CUtlVector< QuaternionStorage > 
	constexpr uint32_t m_boneScaleParent = 0x90;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f4b730 
// N. Class: 83 
// Fields: 10 
namespace PermModelInfo_t
{
	constexpr uint32_t m_nFlags = 0x0;  // uint32 
	constexpr uint32_t m_vHullMin = 0x4;  // Vector 
	constexpr uint32_t m_vHullMax = 0x10;  // Vector 
	constexpr uint32_t m_vViewMin = 0x1C;  // Vector 
	constexpr uint32_t m_vViewMax = 0x28;  // Vector 
	constexpr uint32_t m_flMass = 0x34;  // float32 
	constexpr uint32_t m_vEyePosition = 0x38;  // Vector 
	constexpr uint32_t m_flMaxEyeDeflection = 0x44;  // float32 
	constexpr uint32_t m_sSurfaceProperty = 0x48;  // CUtlString 
	constexpr uint32_t m_keyValueText = 0x50;  // CUtlString 
}

// Offset: 0x7ffe21f4b8f0 
// N. Class: 84 
// Fields: 4 
namespace PermModelExtPart_t
{
	constexpr uint32_t m_Transform = 0x0;  // CTransform 
	constexpr uint32_t m_Name = 0x20;  // CUtlString 
	constexpr uint32_t m_nParent = 0x28;  // int32 
	constexpr uint32_t m_refModel = 0x30;  // CStrongHandle< InfoForResourceTypeCModel > 
}

// Offset: 0x7ffe21f4b9f0 
// N. Class: 85 
// Fields: 5 
namespace ModelBoneFlexDriverControl_t
{
	constexpr uint32_t m_nBoneComponent = 0x0;  // ModelBoneFlexComponent_t 
	constexpr uint32_t m_flexController = 0x8;  // CUtlString 
	constexpr uint32_t m_flexControllerToken = 0x10;  // uint32 
	constexpr uint32_t m_flMin = 0x14;  // float32 
	constexpr uint32_t m_flMax = 0x18;  // float32 
}

// Offset: 0x7ffe21f4bb10 
// N. Class: 86 
// Fields: 3 
namespace ModelBoneFlexDriver_t
{
	constexpr uint32_t m_boneName = 0x0;  // CUtlString 
	constexpr uint32_t m_boneNameToken = 0x8;  // uint32 
}

// Offset: 0x7ffe21f4bbf0 
// N. Class: 87 
// Fields: 2 
namespace PermModelDataAnimatedMaterialAttribute_t
{
	constexpr uint32_t m_AttributeName = 0x0;  // CUtlString 
	constexpr uint32_t m_nNumChannels = 0x8;  // int32 
}

// Offset: 0x7ffe21f4bcb0 
// N. Class: 88 
// Fields: 23 
namespace PermModelData_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_modelInfo = 0x8;  // PermModelInfo_t 
	constexpr uint32_t m_ExtParts = 0x60;  // CUtlVector< PermModelExtPart_t > 
	constexpr uint32_t m_refMeshes = 0x78;  // CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > 
	constexpr uint32_t m_refMeshGroupMasks = 0x90;  // CUtlVector< uint64 > 
	constexpr uint32_t m_refPhysGroupMasks = 0xA8;  // CUtlVector< uint64 > 
	constexpr uint32_t m_refLODGroupMasks = 0xC0;  // CUtlVector< uint8 > 
	constexpr uint32_t m_lodGroupSwitchDistances = 0xD8;  // CUtlVector< float32 > 
	constexpr uint32_t m_refPhysicsData = 0xF0;  // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > 
	constexpr uint32_t m_refPhysicsHitboxData = 0x108;  // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > 
	constexpr uint32_t m_refAnimGroups = 0x120;  // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > 
	constexpr uint32_t m_refSequenceGroups = 0x138;  // CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > 
	constexpr uint32_t m_meshGroups = 0x150;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_materialGroups = 0x168;  // CUtlVector< MaterialGroup_t > 
	constexpr uint32_t m_nDefaultMeshGroupMask = 0x180;  // uint64 
	constexpr uint32_t m_modelSkeleton = 0x188;  // ModelSkeletonData_t 
	constexpr uint32_t m_remappingTable = 0x230;  // CUtlVector< int16 > 
	constexpr uint32_t m_remappingTableStarts = 0x248;  // CUtlVector< uint16 > 
	constexpr uint32_t m_boneFlexDrivers = 0x260;  // CUtlVector< ModelBoneFlexDriver_t > 
	constexpr uint32_t m_pModelConfigList = 0x278;  // CModelConfigList* 
	constexpr uint32_t m_BodyGroupsHiddenInTools = 0x280;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_refAnimIncludeModels = 0x298;  // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > 
	constexpr uint32_t m_AnimatedMaterialAttributes = 0x2B0;  // CUtlVector< PermModelDataAnimatedMaterialAttribute_t > 
}

// Offset: 0x7ffe21f4caf0 
// N. Class: 89 
// Fields: 3 
namespace CModelConfigList
{
	constexpr uint32_t m_bHideMaterialGroupInTools = 0x0;  // bool 
	constexpr uint32_t m_bHideRenderColorInTools = 0x1;  // bool 
	constexpr uint32_t m_Configs = 0x8;  // CUtlVector< CModelConfig* > 
}

// Offset: 0x7ffe21f4dcb0 
// N. Class: 90 
// Fields: 1 
namespace AttachmentHandle_t
{
	constexpr uint32_t m_Value = 0x0;  // uint8 
}

// Offset: 0x7ffe21f4c050 
// N. Class: 91 
// Fields: 2 
namespace CModelConfigElement
{
	constexpr uint32_t m_ElementName = 0x8;  // CUtlString 
	constexpr uint32_t m_NestedElements = 0x10;  // CUtlVector< CModelConfigElement* > 
}

// Offset: 0x7ffe21f4c110 
// N. Class: 92 
// Fields: 14 
namespace CModelConfigElement_AttachedModel
{
	constexpr uint32_t m_InstanceName = 0x48;  // CUtlString 
	constexpr uint32_t m_EntityClass = 0x50;  // CUtlString 
	constexpr uint32_t m_hModel = 0x58;  // CStrongHandle< InfoForResourceTypeCModel > 
	constexpr uint32_t m_vOffset = 0x60;  // Vector 
	constexpr uint32_t m_aAngOffset = 0x6C;  // QAngle 
	constexpr uint32_t m_AttachmentName = 0x78;  // CUtlString 
	constexpr uint32_t m_LocalAttachmentOffsetName = 0x80;  // CUtlString 
	constexpr uint32_t m_AttachmentType = 0x88;  // ModelConfigAttachmentType_t 
	constexpr uint32_t m_bBoneMergeFlex = 0x8C;  // bool 
	constexpr uint32_t m_bUserSpecifiedColor = 0x8D;  // bool 
	constexpr uint32_t m_bUserSpecifiedMaterialGroup = 0x8E;  // bool 
	constexpr uint32_t m_bAcceptParentMaterialDrivenDecals = 0x8F;  // bool 
	constexpr uint32_t m_BodygroupOnOtherModels = 0x90;  // CUtlString 
	constexpr uint32_t m_MaterialGroupOnOtherModels = 0x98;  // CUtlString 
}

// Offset: 0x7ffe21f4c358 
// N. Class: 93 
// Fields: 1 
namespace CModelConfigElement_UserPick
{
	constexpr uint32_t m_Choices = 0x48;  // CUtlVector< CUtlString > 
}

// Offset: 0x7ffe21f4c410 
// N. Class: 94 
// Fields: 2 
namespace CModelConfigElement_RandomPick
{
	constexpr uint32_t m_Choices = 0x48;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_ChoiceWeights = 0x60;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f4c4d8 
// N. Class: 95 
// Fields: 1 
namespace CModelConfigElement_SetMaterialGroup
{
	constexpr uint32_t m_MaterialGroupName = 0x48;  // CUtlString 
}

// Offset: 0x7ffe21f4c588 
// N. Class: 96 
// Fields: 1 
namespace CModelConfigElement_SetMaterialGroupOnAttachedModels
{
	constexpr uint32_t m_MaterialGroupName = 0x48;  // CUtlString 
}

// Offset: 0x7ffe21f4c638 
// N. Class: 97 
// Fields: 1 
namespace CModelConfigElement_SetRenderColor
{
	constexpr uint32_t m_Color = 0x48;  // Color 
}

// Offset: 0x7ffe21f4c6e8 
// N. Class: 98 
// Fields: 1 
namespace CModelConfigElement_RandomColor
{
	constexpr uint32_t m_Gradient = 0x48;  // CColorGradient 
}

// Offset: 0x7ffe21f4c7a0 
// N. Class: 99 
// Fields: 2 
namespace CModelConfigElement_SetBodygroup
{
	constexpr uint32_t m_GroupName = 0x48;  // CUtlString 
	constexpr uint32_t m_nChoice = 0x50;  // int32 
}

// Offset: 0x7ffe21f4c870 
// N. Class: 100 
// Fields: 2 
namespace CModelConfigElement_SetBodygroupOnAttachedModels
{
	constexpr uint32_t m_GroupName = 0x48;  // CUtlString 
	constexpr uint32_t m_nChoice = 0x50;  // int32 
}

// Offset: 0x7ffe21f4c940 
// N. Class: 101 
// Fields: 2 
namespace CModelConfigElement_Command
{
	constexpr uint32_t m_Command = 0x48;  // CUtlString 
	constexpr uint32_t m_Args = 0x50;  // KeyValues3 
}

// Offset: 0x7ffe21f4ca10 
// N. Class: 102 
// Fields: 3 
namespace CModelConfig
{
	constexpr uint32_t m_ConfigName = 0x0;  // CUtlString 
	constexpr uint32_t m_Elements = 0x8;  // CUtlVector< CModelConfigElement* > 
	constexpr uint32_t m_bTopLevel = 0x20;  // bool 
}

// Offset: 0x7ffe21f4ee50 
// N. Class: 103 
// Fields: 2 
namespace CRenderBufferBinding
{
	constexpr uint32_t m_hBuffer = 0x0;  // uint64 
	constexpr uint32_t m_nBindOffsetBytes = 0x10;  // uint32 
}

// Offset: 0x7ffe21f4ef10 
// N. Class: 104 
// Fields: 2 
namespace SkeletonBoneBounds_t
{
	constexpr uint32_t m_vecCenter = 0x0;  // Vector 
	constexpr uint32_t m_vecSize = 0xC;  // Vector 
}

// Offset: 0x7ffe21f4efd0 
// N. Class: 105 
// Fields: 5 
namespace RenderSkeletonBone_t
{
	constexpr uint32_t m_boneName = 0x0;  // CUtlString 
	constexpr uint32_t m_parentName = 0x8;  // CUtlString 
	constexpr uint32_t m_invBindPose = 0x10;  // matrix3x4_t 
	constexpr uint32_t m_bbox = 0x40;  // SkeletonBoneBounds_t 
	constexpr uint32_t m_flSphereRadius = 0x58;  // float32 
}

// Offset: 0x7ffe21f4ddf0 
// N. Class: 106 
// Fields: 3 
namespace CRenderSkeleton
{
	constexpr uint32_t m_bones = 0x0;  // CUtlVector< RenderSkeletonBone_t > 
	constexpr uint32_t m_boneParents = 0x30;  // CUtlVector< int32 > 
	constexpr uint32_t m_nBoneWeightCount = 0x48;  // int32 
}

// Offset: 0x7ffe21f4ded0 
// N. Class: 107 
// Fields: 3 
namespace CDrawCullingData
{
	constexpr uint32_t m_vConeApex = 0x0;  // Vector 
	constexpr uint32_t m_ConeAxis = 0xC;  // int8[3] 
	constexpr uint32_t m_ConeCutoff = 0xF;  // int8 
}

// Offset: 0x7ffe21f4dfb0 
// N. Class: 108 
// Fields: 12 
namespace CMaterialDrawDescriptor
{
	constexpr uint32_t m_flUvDensity = 0x0;  // float32 
	constexpr uint32_t m_vTintColor = 0x4;  // Vector 
	constexpr uint32_t m_flAlpha = 0x10;  // float32 
	constexpr uint32_t m_nNumMeshlets = 0x16;  // uint16 
	constexpr uint32_t m_nFirstMeshlet = 0x1C;  // uint32 
	constexpr uint32_t m_nPrimitiveType = 0x20;  // RenderPrimitiveType_t 
	constexpr uint32_t m_nBaseVertex = 0x24;  // int32 
	constexpr uint32_t m_nVertexCount = 0x28;  // int32 
	constexpr uint32_t m_nStartIndex = 0x2C;  // int32 
	constexpr uint32_t m_nIndexCount = 0x30;  // int32 
	constexpr uint32_t m_indexBuffer = 0x98;  // CRenderBufferBinding 
	constexpr uint32_t m_material = 0xC8;  // CStrongHandle< InfoForResourceTypeIMaterial2 > 
}

// Offset: 0x7ffe21f4e1b0 
// N. Class: 109 
// Fields: 2 
namespace CMeshletDescriptor
{
	constexpr uint32_t m_PackedAABB = 0x0;  // PackedAABB_t 
	constexpr uint32_t m_CullingData = 0x8;  // CDrawCullingData 
}

// Offset: 0x7ffe21f4e270 
// N. Class: 110 
// Fields: 6 
namespace CSceneObjectData
{
	constexpr uint32_t m_vMinBounds = 0x0;  // Vector 
	constexpr uint32_t m_vMaxBounds = 0xC;  // Vector 
	constexpr uint32_t m_drawCalls = 0x18;  // CUtlLeanVector< CMaterialDrawDescriptor > 
	constexpr uint32_t m_drawBounds = 0x28;  // CUtlLeanVector< AABB_t > 
	constexpr uint32_t m_meshlets = 0x38;  // CUtlLeanVector< CMeshletDescriptor > 
	constexpr uint32_t m_vTintColor = 0x48;  // Vector4D 
}

// Offset: 0x7ffe21f4e3b0 
// N. Class: 111 
// Fields: 8 
namespace CAttachment
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_influenceNames = 0x8;  // CUtlString[3] 
	constexpr uint32_t m_vInfluenceRotations = 0x20;  // Quaternion[3] 
	constexpr uint32_t m_vInfluenceOffsets = 0x50;  // Vector[3] 
	constexpr uint32_t m_influenceWeights = 0x74;  // float32[3] 
	constexpr uint32_t m_bInfluenceRootTransform = 0x80;  // bool[3] 
	constexpr uint32_t m_nInfluences = 0x83;  // uint8 
	constexpr uint32_t m_bIgnoreRotation = 0x84;  // bool 
}

// Offset: 0x7ffe21f4e530 
// N. Class: 112 
// Fields: 13 
namespace CHitBox
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_sSurfaceProperty = 0x8;  // CUtlString 
	constexpr uint32_t m_sBoneName = 0x10;  // CUtlString 
	constexpr uint32_t m_vMinBounds = 0x18;  // Vector 
	constexpr uint32_t m_vMaxBounds = 0x24;  // Vector 
	constexpr uint32_t m_flShapeRadius = 0x30;  // float32 
	constexpr uint32_t m_nBoneNameHash = 0x34;  // uint32 
	constexpr uint32_t m_nGroupId = 0x38;  // int32 
	constexpr uint32_t m_nShapeType = 0x3C;  // uint8 
	constexpr uint32_t m_bTranslationOnly = 0x3D;  // bool 
	constexpr uint32_t m_CRC = 0x40;  // uint32 
	constexpr uint32_t m_cRenderColor = 0x44;  // Color 
	constexpr uint32_t m_nHitBoxIndex = 0x48;  // uint16 
}

// Offset: 0x7ffe21f4e750 
// N. Class: 113 
// Fields: 4 
namespace CHitBoxSet
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_nNameHash = 0x8;  // uint32 
	constexpr uint32_t m_HitBoxes = 0x10;  // CUtlVector< CHitBox > 
	constexpr uint32_t m_SourceFilename = 0x28;  // CUtlString 
}

// Offset: 0x7ffe21f4e848 
// N. Class: 114 
// Fields: 1 
namespace CHitBoxSetList
{
	constexpr uint32_t m_HitBoxSets = 0x0;  // CUtlVector< CHitBoxSet > 
}

// Offset: 0x7ffe21f4e8f0 
// N. Class: 115 
// Fields: 5 
namespace DynamicMeshDeformParams_t
{
	constexpr uint32_t m_flTensionCompressScale = 0x0;  // float32 
	constexpr uint32_t m_flTensionStretchScale = 0x4;  // float32 
	constexpr uint32_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8;  // bool 
	constexpr uint32_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9;  // bool 
	constexpr uint32_t m_bSmoothNormalsAcrossUvSeams = 0xA;  // bool 
}

// Offset: 0x7ffe21f4ea10 
// N. Class: 116 
// Fields: 6 
namespace RenderHairStrandInfo_t
{
	constexpr uint32_t m_nGuideHairIndices_nSurfaceTriIndex = 0x0;  // uint32[2] 
	constexpr uint32_t m_vGuideBary_vBaseBary = 0x8;  // uint16[4] 
	constexpr uint32_t m_vRootOffset_flLengthScale = 0x10;  // uint16[4] 
	constexpr uint32_t m_nPackedBaseUv = 0x18;  // uint16[2] 
	constexpr uint32_t m_nPackedSurfaceNormalOs = 0x1C;  // uint32 
	constexpr uint32_t m_nPackedSurfaceTangentOs = 0x20;  // uint32 
}

// Offset: 0x7ffe21f4eb50 
// N. Class: 117 
// Fields: 11 
namespace CRenderGroom
{
	constexpr uint32_t m_hairs = 0x0;  // CUtlVector< RenderHairStrandInfo_t > 
	constexpr uint32_t m_hairPositionOffsets = 0x18;  // CUtlVector< uint32 > 
	constexpr uint32_t m_hSimParamsMat = 0x40;  // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > 
	constexpr uint32_t m_nSegmentsPerHairStrand = 0x48;  // int32 
	constexpr uint32_t m_nGuideHairCount = 0x4C;  // int32 
	constexpr uint32_t m_nHairCount = 0x50;  // int32 
	constexpr uint32_t m_nGroomGroupID = 0x54;  // int32 
	constexpr uint32_t m_nAttachBoneIdx = 0x58;  // int32 
	constexpr uint32_t m_nAttachMeshIdx = 0x5C;  // int32 
	constexpr uint32_t m_nAttachMeshDrawCallIdx = 0x60;  // int32 
	constexpr uint32_t m_bEnableSimulation = 0x64;  // bool 
}

// Offset: 0x7ffe21f4ed30 
// N. Class: 118 
// Fields: 5 
namespace CRenderMesh
{
	constexpr uint32_t m_sceneObjects = 0x10;  // CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > 
	constexpr uint32_t m_constraints = 0x78;  // CUtlLeanVector< CBaseConstraint* > 
	constexpr uint32_t m_skeleton = 0x88;  // CRenderSkeleton 
	constexpr uint32_t m_meshDeformParams = 0x1A8;  // DynamicMeshDeformParams_t 
	constexpr uint32_t m_pGroomData = 0x1B8;  // CRenderGroom* 
}

// Offset: 0x7ffe21f4f360 
// N. Class: 119 
// Fields: 4 
namespace CBaseConstraint
{
	constexpr uint32_t m_name = 0x28;  // CUtlString 
	constexpr uint32_t m_vUpVector = 0x30;  // Vector 
	constexpr uint32_t m_slaves = 0x40;  // CUtlLeanVector< CConstraintSlave > 
	constexpr uint32_t m_targets = 0x50;  // CUtlVector< CConstraintTarget > 
}

// Offset: 0x7ffe21f4f080 
// N. Class: 120 
// Fields: 6 
namespace CConstraintTarget
{
	constexpr uint32_t m_qOffset = 0x20;  // Quaternion 
	constexpr uint32_t m_vOffset = 0x30;  // Vector 
	constexpr uint32_t m_nBoneHash = 0x3C;  // uint32 
	constexpr uint32_t m_sName = 0x40;  // CUtlString 
	constexpr uint32_t m_flWeight = 0x48;  // float32 
	constexpr uint32_t m_bIsAttachment = 0x59;  // bool 
}

// Offset: 0x7ffe21f4f1c0 
// N. Class: 121 
// Fields: 5 
namespace CConstraintSlave
{
	constexpr uint32_t m_qBaseOrientation = 0x0;  // Quaternion 
	constexpr uint32_t m_vBasePosition = 0x10;  // Vector 
	constexpr uint32_t m_nBoneHash = 0x1C;  // uint32 
	constexpr uint32_t m_flWeight = 0x20;  // float32 
	constexpr uint32_t m_sName = 0x28;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 122 
// Fields: 0 
namespace CBoneConstraintBase
{
}

// Offset: 0x0 
// N. Class: 123 
// Fields: 0 
namespace CPointConstraint
{
}

// Offset: 0x0 
// N. Class: 124 
// Fields: 0 
namespace COrientConstraint
{
}

// Offset: 0x7ffe21f4f590 
// N. Class: 125 
// Fields: 2 
namespace CAimConstraint
{
	constexpr uint32_t m_qAimOffset = 0x70;  // Quaternion 
	constexpr uint32_t m_nUpType = 0x80;  // uint32 
}

// Offset: 0x7ffe21f4f660 
// N. Class: 126 
// Fields: 3 
namespace CTwistConstraint
{
	constexpr uint32_t m_bInverse = 0x68;  // bool 
	constexpr uint32_t m_qParentBindRotation = 0x70;  // Quaternion 
	constexpr uint32_t m_qChildBindRotation = 0x80;  // Quaternion 
}

// Offset: 0x7ffe21f4f750 
// N. Class: 127 
// Fields: 2 
namespace CTiltTwistConstraint
{
	constexpr uint32_t m_nTargetAxis = 0x68;  // int32 
	constexpr uint32_t m_nSlaveAxis = 0x6C;  // int32 
}

// Offset: 0x7ffe21f4f820 
// N. Class: 128 
// Fields: 4 
namespace CMorphConstraint
{
	constexpr uint32_t m_sTargetMorph = 0x68;  // CUtlString 
	constexpr uint32_t m_nSlaveChannel = 0x70;  // int32 
	constexpr uint32_t m_flMin = 0x74;  // float32 
	constexpr uint32_t m_flMax = 0x78;  // float32 
}

// Offset: 0x0 
// N. Class: 129 
// Fields: 0 
namespace CParentConstraint
{
}

// Offset: 0x7ffe21f4f9c0 
// N. Class: 130 
// Fields: 5 
namespace CBoneConstraintPoseSpaceMorph
{
	constexpr uint32_t m_sBoneName = 0x28;  // CUtlString 
	constexpr uint32_t m_sAttachmentName = 0x30;  // CUtlString 
	constexpr uint32_t m_outputMorph = 0x38;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_inputList = 0x50;  // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > 
	constexpr uint32_t m_bClamp = 0x68;  // bool 
}

// Offset: 0x7ffe21f4fae0 
// N. Class: 131 
// Fields: 2 
namespace CBoneConstraintPoseSpaceMorph::Input_t
{
	constexpr uint32_t m_inputValue = 0x0;  // Vector 
	constexpr uint32_t m_outputWeightList = 0x10;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f4fb98 
// N. Class: 132 
// Fields: 1 
namespace CBoneConstraintPoseSpaceBone
{
	constexpr uint32_t m_inputList = 0x68;  // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > 
}

// Offset: 0x7ffe21f4fc40 
// N. Class: 133 
// Fields: 2 
namespace CBoneConstraintPoseSpaceBone::Input_t
{
	constexpr uint32_t m_inputValue = 0x0;  // Vector 
	constexpr uint32_t m_outputTransformList = 0x10;  // CUtlVector< CTransform > 
}

// Offset: 0x7ffe21f4fd00 
// N. Class: 134 
// Fields: 4 
namespace CBoneConstraintDotToMorph
{
	constexpr uint32_t m_sBoneName = 0x28;  // CUtlString 
	constexpr uint32_t m_sTargetBoneName = 0x30;  // CUtlString 
	constexpr uint32_t m_sMorphChannelName = 0x38;  // CUtlString 
	constexpr uint32_t m_flRemap = 0x40;  // float32[4] 
}

// Offset: 0x7ffe21f4d370 
// N. Class: 135 
// Fields: 2 
namespace CFlexOp
{
	constexpr uint32_t m_OpCode = 0x0;  // FlexOpCode_t 
	constexpr uint32_t m_Data = 0x4;  // int32 
}

// Offset: 0x7ffe21f4cbd0 
// N. Class: 136 
// Fields: 2 
namespace CFlexRule
{
	constexpr uint32_t m_nFlex = 0x0;  // int32 
	constexpr uint32_t m_FlexOps = 0x8;  // CUtlVector< CFlexOp > 
}

// Offset: 0x7ffe21f4cc88 
// N. Class: 137 
// Fields: 1 
namespace CFlexDesc
{
	constexpr uint32_t m_szFacs = 0x0;  // CUtlString 
}

// Offset: 0x7ffe21f4cd30 
// N. Class: 138 
// Fields: 4 
namespace CFlexController
{
	constexpr uint32_t m_szName = 0x0;  // CUtlString 
	constexpr uint32_t m_szType = 0x8;  // CUtlString 
	constexpr uint32_t min = 0x10;  // float32 
	constexpr uint32_t max = 0x14;  // float32 
}

// Offset: 0x7ffe21f4ce30 
// N. Class: 139 
// Fields: 4 
namespace CMorphBundleData
{
	constexpr uint32_t m_flULeftSrc = 0x0;  // float32 
	constexpr uint32_t m_flVTopSrc = 0x4;  // float32 
	constexpr uint32_t m_offsets = 0x8;  // CUtlVector< float32 > 
	constexpr uint32_t m_ranges = 0x20;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f4cf30 
// N. Class: 140 
// Fields: 5 
namespace CMorphRectData
{
	constexpr uint32_t m_nXLeftDst = 0x0;  // int16 
	constexpr uint32_t m_nYTopDst = 0x2;  // int16 
	constexpr uint32_t m_flUWidthSrc = 0x4;  // float32 
	constexpr uint32_t m_flVHeightSrc = 0x8;  // float32 
	constexpr uint32_t m_bundleDatas = 0x10;  // CUtlVector< CMorphBundleData > 
}

// Offset: 0x7ffe21f4d050 
// N. Class: 141 
// Fields: 2 
namespace CMorphData
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
}

// Offset: 0x7ffe21f4d110 
// N. Class: 142 
// Fields: 8 
namespace CMorphSetData
{
	constexpr uint32_t m_nWidth = 0x10;  // int32 
	constexpr uint32_t m_nHeight = 0x14;  // int32 
	constexpr uint32_t m_pTextureAtlas = 0x48;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
	constexpr uint32_t m_FlexDesc = 0x50;  // CUtlVector< CFlexDesc > 
	constexpr uint32_t m_FlexControllers = 0x68;  // CUtlVector< CFlexController > 
	constexpr uint32_t m_FlexRules = 0x80;  // CUtlVector< CFlexRule > 
}

// Offset: 0x7ffe21f49a10 
// N. Class: 143 
// Fields: 5 
namespace CAnimFoot
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_vBallOffset = 0x8;  // Vector 
	constexpr uint32_t m_vHeelOffset = 0x14;  // Vector 
	constexpr uint32_t m_ankleBoneIndex = 0x20;  // int32 
	constexpr uint32_t m_toeBoneIndex = 0x24;  // int32 
}

// Offset: 0x7ffe21f49b30 
// N. Class: 144 
// Fields: 8 
namespace CAnimSkeleton
{
	constexpr uint32_t m_localSpaceTransforms = 0x10;  // CUtlVector< CTransform > 
	constexpr uint32_t m_modelSpaceTransforms = 0x28;  // CUtlVector< CTransform > 
	constexpr uint32_t m_boneNames = 0x40;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_children = 0x58;  // CUtlVector< CUtlVector< int32 > > 
	constexpr uint32_t m_parents = 0x70;  // CUtlVector< int32 > 
	constexpr uint32_t m_feet = 0x88;  // CUtlVector< CAnimFoot > 
	constexpr uint32_t m_morphNames = 0xA0;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_lodBoneCounts = 0xB8;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe21f49d10 
// N. Class: 145 
// Fields: 9 
namespace CFootDefinition
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_ankleBoneName = 0x8;  // CUtlString 
	constexpr uint32_t m_toeBoneName = 0x10;  // CUtlString 
	constexpr uint32_t m_vBallOffset = 0x18;  // Vector 
	constexpr uint32_t m_vHeelOffset = 0x24;  // Vector 
	constexpr uint32_t m_flFootLength = 0x30;  // float32 
	constexpr uint32_t m_flBindPoseDirectionMS = 0x34;  // float32 
	constexpr uint32_t m_flTraceHeight = 0x38;  // float32 
	constexpr uint32_t m_flTraceRadius = 0x3C;  // float32 
}

// Offset: 0x7ffe21f48a88 
// N. Class: 146 
// Fields: 1 
namespace CCycleBase
{
	constexpr uint32_t m_flCycle = 0x0;  // float32 
}

// Offset: 0x0 
// N. Class: 147 
// Fields: 0 
namespace CAnimCycle
{
}

// Offset: 0x0 
// N. Class: 148 
// Fields: 0 
namespace CFootCycle
{
}

// Offset: 0x7ffe21f48c50 
// N. Class: 149 
// Fields: 9 
namespace CFootCycleDefinition
{
	constexpr uint32_t m_vStancePositionMS = 0x0;  // Vector 
	constexpr uint32_t m_vMidpointPositionMS = 0xC;  // Vector 
	constexpr uint32_t m_flStanceDirectionMS = 0x18;  // float32 
	constexpr uint32_t m_vToStrideStartPos = 0x1C;  // Vector 
	constexpr uint32_t m_stanceCycle = 0x28;  // CAnimCycle 
	constexpr uint32_t m_footLiftCycle = 0x2C;  // CFootCycle 
	constexpr uint32_t m_footOffCycle = 0x30;  // CFootCycle 
	constexpr uint32_t m_footStrikeCycle = 0x34;  // CFootCycle 
	constexpr uint32_t m_footLandCycle = 0x38;  // CFootCycle 
}

// Offset: 0x7ffe21f48df0 
// N. Class: 150 
// Fields: 3 
namespace CFootTrajectory
{
	constexpr uint32_t m_vOffset = 0x0;  // Vector 
	constexpr uint32_t m_flRotationOffset = 0xC;  // float32 
	constexpr uint32_t m_flProgression = 0x10;  // float32 
}

// Offset: 0x7ffe21f48ec8 
// N. Class: 151 
// Fields: 1 
namespace CFootTrajectories
{
	constexpr uint32_t m_trajectories = 0x0;  // CUtlVector< CFootTrajectory > 
}

// Offset: 0x7ffe21f48f70 
// N. Class: 152 
// Fields: 2 
namespace CFootStride
{
	constexpr uint32_t m_definition = 0x0;  // CFootCycleDefinition 
	constexpr uint32_t m_trajectories = 0x40;  // CFootTrajectories 
}

// Offset: 0x7ffe21f50150 
// N. Class: 153 
// Fields: 10 
namespace SkeletonAnimCapture_t
{
	constexpr uint32_t m_nEntIndex = 0x0;  // CEntityIndex 
	constexpr uint32_t m_nEntParent = 0x4;  // CEntityIndex 
	constexpr uint32_t m_ImportedCollision = 0x8;  // CUtlVector< CEntityIndex > 
	constexpr uint32_t m_ModelName = 0x20;  // CUtlString 
	constexpr uint32_t m_CaptureName = 0x28;  // CUtlString 
	constexpr uint32_t m_ModelBindPose = 0x30;  // CUtlVector< SkeletonAnimCapture_t::Bone_t > 
	constexpr uint32_t m_FeModelInitPose = 0x48;  // CUtlVector< SkeletonAnimCapture_t::Bone_t > 
	constexpr uint32_t m_nFlexControllers = 0x60;  // int32 
	constexpr uint32_t m_bPredicted = 0x64;  // bool 
	constexpr uint32_t m_Frames = 0xA8;  // CUtlVector< SkeletonAnimCapture_t::Frame_t > 
}

// Offset: 0x7ffe21f50310 
// N. Class: 154 
// Fields: 3 
namespace SkeletonAnimCapture_t::Bone_t
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
	constexpr uint32_t m_BindPose = 0x10;  // CTransform 
	constexpr uint32_t m_nParent = 0x30;  // int32 
}

// Offset: 0x7ffe21f4fe10 
// N. Class: 155 
// Fields: 9 
namespace SkeletonAnimCapture_t::Frame_t
{
	constexpr uint32_t m_flTime = 0x0;  // float32 
	constexpr uint32_t m_Stamp = 0x4;  // SkeletonAnimCapture_t::FrameStamp_t 
	constexpr uint32_t m_Transform = 0x20;  // CTransform 
	constexpr uint32_t m_bTeleport = 0x40;  // bool 
	constexpr uint32_t m_CompositeBones = 0x48;  // CUtlVector< CTransform > 
	constexpr uint32_t m_SimStateBones = 0x60;  // CUtlVector< CTransform > 
	constexpr uint32_t m_FeModelAnims = 0x78;  // CUtlVector< CTransform > 
	constexpr uint32_t m_FeModelPos = 0x90;  // CUtlVector< VectorAligned > 
	constexpr uint32_t m_FlexControllerWeights = 0xA8;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f503f0 
// N. Class: 156 
// Fields: 8 
namespace SkeletonAnimCapture_t::FrameStamp_t
{
	constexpr uint32_t m_flTime = 0x0;  // float32 
	constexpr uint32_t m_flEntitySimTime = 0x4;  // float32 
	constexpr uint32_t m_bTeleportTick = 0x8;  // bool 
	constexpr uint32_t m_bPredicted = 0x9;  // bool 
	constexpr uint32_t m_flCurTime = 0xC;  // float32 
	constexpr uint32_t m_flRealTime = 0x10;  // float32 
	constexpr uint32_t m_nFrameCount = 0x14;  // int32 
	constexpr uint32_t m_nTickCount = 0x18;  // int32 
}

// Offset: 0x7ffe21f4ffb0 
// N. Class: 157 
// Fields: 2 
namespace SkeletonAnimCapture_t::Camera_t
{
	constexpr uint32_t m_tmCamera = 0x0;  // CTransform 
	constexpr uint32_t m_flTime = 0x20;  // float32 
}

// Offset: 0x7ffe21f50070 
// N. Class: 158 
// Fields: 3 
namespace SkeletonDemoDb_t
{
	constexpr uint32_t m_AnimCaptures = 0x0;  // CUtlVector< SkeletonAnimCapture_t* > 
	constexpr uint32_t m_CameraTrack = 0x18;  // CUtlVector< SkeletonAnimCapture_t::Camera_t > 
	constexpr uint32_t m_flRecordingTime = 0x30;  // float32 
}

// Offset: 0x7ffe21f3e040 
// N. Class: 159 
// Fields: 3 
namespace CNmBoneMask
{
	constexpr uint32_t m_ID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_weightInfo = 0x8;  // CNmBoneMask::WeightInfo_t 
	constexpr uint32_t m_weights = 0x18;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f41ab0 
// N. Class: 160 
// Fields: 9 
namespace CNmClip
{
	constexpr uint32_t m_skeleton = 0x0;  // CStrongHandle< InfoForResourceTypeCNmSkeleton > 
	constexpr uint32_t m_nNumFrames = 0x8;  // uint32 
	constexpr uint32_t m_flDuration = 0xC;  // float32 
	constexpr uint32_t m_compressedPoseData = 0x10;  // CUtlBinaryBlock 
	constexpr uint32_t m_trackCompressionSettings = 0x28;  // CUtlVector< NmCompressionSettings_t > 
	constexpr uint32_t m_compressedPoseOffsets = 0x40;  // CUtlVector< uint32 > 
	constexpr uint32_t m_syncTrack = 0xA0;  // CNmSyncTrack 
	constexpr uint32_t m_rootMotion = 0x150;  // CNmRootMotionData 
	constexpr uint32_t m_bIsAdditive = 0x1A0;  // bool 
}

// Offset: 0x7ffe21f41cc0 
// N. Class: 161 
// Fields: 8 
namespace NmCompressionSettings_t
{
	constexpr uint32_t m_translationRangeX = 0x0;  // NmCompressionSettings_t::QuantizationRange_t 
	constexpr uint32_t m_translationRangeY = 0x8;  // NmCompressionSettings_t::QuantizationRange_t 
	constexpr uint32_t m_translationRangeZ = 0x10;  // NmCompressionSettings_t::QuantizationRange_t 
	constexpr uint32_t m_scaleRange = 0x18;  // NmCompressionSettings_t::QuantizationRange_t 
	constexpr uint32_t m_constantRotation = 0x20;  // Quaternion 
	constexpr uint32_t m_bIsRotationStatic = 0x30;  // bool 
	constexpr uint32_t m_bIsTranslationStatic = 0x31;  // bool 
	constexpr uint32_t m_bIsScaleStatic = 0x32;  // bool 
}

// Offset: 0x7ffe21f422c0 
// N. Class: 162 
// Fields: 2 
namespace CNmSyncTrack
{
	constexpr uint32_t m_syncEvents = 0x0;  // CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > 
	constexpr uint32_t m_nStartEventOffset = 0xA8;  // int32 
}

// Offset: 0x7ffe21f3e2c0 
// N. Class: 163 
// Fields: 5 
namespace CNmRootMotionData
{
	constexpr uint32_t m_transforms = 0x0;  // CUtlVector< CTransform > 
	constexpr uint32_t m_nNumFrames = 0x18;  // int32 
	constexpr uint32_t m_flAverageLinearVelocity = 0x1C;  // float32 
	constexpr uint32_t m_flAverageAngularVelocityRadians = 0x20;  // float32 
	constexpr uint32_t m_totalDelta = 0x30;  // CTransform 
}

// Offset: 0x7ffe21f41e40 
// N. Class: 164 
// Fields: 2 
namespace NmCompressionSettings_t::QuantizationRange_t
{
	constexpr uint32_t m_flRangeStart = 0x0;  // float32 
	constexpr uint32_t m_flRangeLength = 0x4;  // float32 
}

// Offset: 0x7ffe21f41f00 
// N. Class: 165 
// Fields: 3 
namespace CNmEvent
{
	constexpr uint32_t m_flStartTimeSeconds = 0x8;  // float32 
	constexpr uint32_t m_flDurationSeconds = 0xC;  // float32 
	constexpr uint32_t m_syncID = 0x10;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f42048 
// N. Class: 166 
// Fields: 1 
namespace CNmBitFlags
{
	constexpr uint32_t m_flags = 0x0;  // uint32 
}

// Offset: 0x7ffe21f420a0 
// N. Class: 167 
// Fields: 7 
namespace CNmSkeleton
{
	constexpr uint32_t m_ID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_boneIDs = 0x8;  // CUtlLeanVector< CGlobalSymbol > 
	constexpr uint32_t m_parentIndices = 0x18;  // CUtlVector< int32 > 
	constexpr uint32_t m_parentSpaceReferencePose = 0x30;  // CUtlVector< CTransform > 
	constexpr uint32_t m_modelSpaceReferencePose = 0x48;  // CUtlVector< CTransform > 
	constexpr uint32_t m_numBonesToSampleAtLowLOD = 0x60;  // int32 
	constexpr uint32_t m_boneMasks = 0x68;  // CUtlLeanVector< CNmBoneMask > 
}

// Offset: 0x7ffe21f42520 
// N. Class: 168 
// Fields: 2 
namespace NmSyncTrackTime_t
{
	constexpr uint32_t m_nEventIdx = 0x0;  // int32 
	constexpr uint32_t m_percentageThrough = 0x4;  // NmPercent_t 
}

// Offset: 0x7ffe21f42738 
// N. Class: 169 
// Fields: 1 
namespace NmPercent_t
{
	constexpr uint32_t m_flValue = 0x0;  // float32 
}

// Offset: 0x7ffe21f42200 
// N. Class: 170 
// Fields: 2 
namespace NmSyncTrackTimeRange_t
{
	constexpr uint32_t m_startTime = 0x0;  // NmSyncTrackTime_t 
	constexpr uint32_t m_endTime = 0x8;  // NmSyncTrackTime_t 
}

// Offset: 0x7ffe21f42440 
// N. Class: 171 
// Fields: 3 
namespace CNmSyncTrack::Event_t
{
	constexpr uint32_t m_ID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_startTime = 0x8;  // NmPercent_t 
	constexpr uint32_t m_duration = 0xC;  // NmPercent_t 
}

// Offset: 0x7ffe21f42380 
// N. Class: 172 
// Fields: 2 
namespace CNmSyncTrack::EventMarker_t
{
	constexpr uint32_t m_startTime = 0x0;  // NmPercent_t 
	constexpr uint32_t m_ID = 0x8;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f42600 
// N. Class: 173 
// Fields: 6 
namespace CNmTarget
{
	constexpr uint32_t m_transform = 0x0;  // CTransform 
	constexpr uint32_t m_boneID = 0x20;  // CGlobalSymbol 
	constexpr uint32_t m_bIsBoneTarget = 0x28;  // bool 
	constexpr uint32_t m_bIsUsingBoneSpaceOffsets = 0x29;  // bool 
	constexpr uint32_t m_bHasOffsets = 0x2A;  // bool 
	constexpr uint32_t m_bIsSet = 0x2B;  // bool 
}

// Offset: 0x0 
// N. Class: 174 
// Fields: 0 
namespace CNmTask
{
}

// Offset: 0x7ffe21f3e4f0 
// N. Class: 175 
// Fields: 1 
namespace CNmFootEvent
{
	constexpr uint32_t m_phase = 0x18;  // NmFootPhase_t 
}

// Offset: 0x7ffe21f3e5e0 
// N. Class: 176 
// Fields: 1 
namespace CNmFrameSnapEvent
{
	constexpr uint32_t m_frameSnapMode = 0x18;  // NmFrameSnapEventMode_t 
}

// Offset: 0x7ffe21f42fc0 
// N. Class: 177 
// Fields: 1 
namespace CNmIDEvent
{
	constexpr uint32_t m_ID = 0x18;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f43070 
// N. Class: 178 
// Fields: 2 
namespace CNmLegacyEvent
{
	constexpr uint32_t m_animEventClassName = 0x18;  // CUtlString 
	constexpr uint32_t m_KV = 0x20;  // KeyValues3 
}

// Offset: 0x7ffe21f43138 
// N. Class: 179 
// Fields: 1 
namespace CNmRootMotionEvent
{
	constexpr uint32_t m_flBlendTimeSeconds = 0x18;  // float32 
}

// Offset: 0x7ffe21f3e760 
// N. Class: 180 
// Fields: 2 
namespace CNmTransitionEvent
{
	constexpr uint32_t m_rule = 0x18;  // NmTransitionRule_t 
	constexpr uint32_t m_ID = 0x20;  // CGlobalSymbol 
}

// Offset: 0x0 
// N. Class: 181 
// Fields: 0 
namespace CNmOrientationWarpEvent
{
}

// Offset: 0x7ffe21f3e950 
// N. Class: 182 
// Fields: 2 
namespace CNmTargetWarpEvent
{
	constexpr uint32_t m_rule = 0x18;  // NmTargetWarpRule_t 
	constexpr uint32_t m_algorithm = 0x19;  // NmTargetWarpAlgorithm_t 
}

// Offset: 0x7ffe21f432e0 
// N. Class: 183 
// Fields: 3 
namespace CNmParameterizedBlendNode::BlendRange_t
{
	constexpr uint32_t m_nInputIdx0 = 0x0;  // int16 
	constexpr uint32_t m_nInputIdx1 = 0x2;  // int16 
	constexpr uint32_t m_parameterValueRange = 0x4;  // Range_t 
}

// Offset: 0x7ffe21f433c0 
// N. Class: 184 
// Fields: 2 
namespace CNmParameterizedBlendNode::Parameterization_t
{
	constexpr uint32_t m_blendRanges = 0x0;  // CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > 
	constexpr uint32_t m_parameterRange = 0x48;  // Range_t 
}

// Offset: 0x7ffe21f3f1d0 
// N. Class: 185 
// Fields: 2 
namespace CNmStateEventConditionNode::Condition_t
{
	constexpr uint32_t m_eventID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_eventTypeCondition = 0x8;  // NmStateEventTypeCondition_t 
}

// Offset: 0x7ffe21f401d0 
// N. Class: 186 
// Fields: 2 
namespace CNmFloatRemapNode::RemapRange_t
{
	constexpr uint32_t m_flBegin = 0x0;  // float32 
	constexpr uint32_t m_flEnd = 0x4;  // float32 
}

// Offset: 0x7ffe21f40910 
// N. Class: 187 
// Fields: 8 
namespace CNmLayerBlendNode::LayerDefinition_t
{
	constexpr uint32_t m_nInputNodeIdx = 0x0;  // int16 
	constexpr uint32_t m_nWeightValueNodeIdx = 0x2;  // int16 
	constexpr uint32_t m_nBoneMaskValueNodeIdx = 0x4;  // int16 
	constexpr uint32_t m_nRootMotionWeightValueNodeIdx = 0x6;  // int16 
	constexpr uint32_t m_bIsSynchronized = 0x8;  // bool 
	constexpr uint32_t m_bIgnoreEvents = 0x9;  // bool 
	constexpr uint32_t m_bIsStateMachineLayer = 0xA;  // bool 
	constexpr uint32_t m_blendMode = 0xB;  // NmPoseBlendMode_t 
}

// Offset: 0x7ffe21f45550 
// N. Class: 188 
// Fields: 2 
namespace CNmStateNode::TimedEvent_t
{
	constexpr uint32_t m_ID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_flTimeValueSeconds = 0x8;  // float32 
}

// Offset: 0x7ffe21f457e0 
// N. Class: 189 
// Fields: 4 
namespace CNmStateMachineNode::TransitionDefinition_t
{
	constexpr uint32_t m_nTargetStateIdx = 0x0;  // int16 
	constexpr uint32_t m_nConditionNodeIdx = 0x2;  // int16 
	constexpr uint32_t m_nTransitionNodeIdx = 0x4;  // int16 
	constexpr uint32_t m_bCanBeForced = 0x6;  // bool 
}

// Offset: 0x7ffe21f458e0 
// N. Class: 190 
// Fields: 3 
namespace CNmStateMachineNode::StateDefinition_t
{
	constexpr uint32_t m_nStateNodeIdx = 0x0;  // int16 
	constexpr uint32_t m_nEntryConditionNodeIdx = 0x2;  // int16 
	constexpr uint32_t m_transitionDefinitions = 0x8;  // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::TransitionDefinition_t, 5 > 
}

// Offset: 0x7ffe21f45cb0 
// N. Class: 191 
// Fields: 1 
namespace CNmGraphNode::CDefinition
{
	constexpr uint32_t m_nNodeIdx = 0x8;  // int16 
}

// Offset: 0x0 
// N. Class: 192 
// Fields: 0 
namespace CNmPoseNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 193 
// Fields: 0 
namespace CNmValueNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 194 
// Fields: 0 
namespace CNmBoolValueNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 195 
// Fields: 0 
namespace CNmIDValueNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 196 
// Fields: 0 
namespace CNmFloatValueNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 197 
// Fields: 0 
namespace CNmVectorValueNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 198 
// Fields: 0 
namespace CNmTargetValueNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 199 
// Fields: 0 
namespace CNmBoneMaskValueNode::CDefinition
{
}

// Offset: 0x7ffe21f46150 
// N. Class: 200 
// Fields: 3 
namespace CNmGraphDataSet
{
	constexpr uint32_t m_variationID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_skeleton = 0x8;  // CStrongHandle< InfoForResourceTypeCNmSkeleton > 
	constexpr uint32_t m_resources = 0x10;  // CUtlVector< CStrongHandleVoid > 
}

// Offset: 0x7ffe21f46230 
// N. Class: 201 
// Fields: 9 
namespace CNmGraphDefinition
{
	constexpr uint32_t m_persistentNodeIndices = 0x0;  // CUtlVector< int16 > 
	constexpr uint32_t m_nRootNodeIdx = 0x18;  // int16 
	constexpr uint32_t m_controlParameterIDs = 0x20;  // CUtlVector< CGlobalSymbol > 
	constexpr uint32_t m_virtualParameterIDs = 0x38;  // CUtlVector< CGlobalSymbol > 
	constexpr uint32_t m_virtualParameterNodeIndices = 0x50;  // CUtlVector< int16 > 
	constexpr uint32_t m_childGraphSlots = 0x68;  // CUtlVector< CNmGraphDefinition::ChildGraphSlot_t > 
	constexpr uint32_t m_externalGraphSlots = 0x80;  // CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > 
	constexpr uint32_t m_nodePaths = 0x108;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_runtimeVersionID = 0x120;  // V_uuid_t 
}

// Offset: 0x7ffe21f46490 
// N. Class: 202 
// Fields: 2 
namespace CNmGraphDefinition::ChildGraphSlot_t
{
	constexpr uint32_t m_nNodeIdx = 0x0;  // int16 
	constexpr uint32_t m_dataSlotIdx = 0x2;  // int16 
}

// Offset: 0x7ffe21f463d0 
// N. Class: 203 
// Fields: 2 
namespace CNmGraphDefinition::ExternalGraphSlot_t
{
	constexpr uint32_t m_nNodeIdx = 0x0;  // int16 
	constexpr uint32_t m_slotID = 0x8;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f46550 
// N. Class: 204 
// Fields: 2 
namespace CNmGraphVariation
{
	constexpr uint32_t m_graphDefinition = 0x0;  // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > 
	constexpr uint32_t m_dataSet = 0x8;  // CNmGraphDataSet 
}

// Offset: 0x7ffe21f46608 
// N. Class: 205 
// Fields: 1 
namespace CNmIKRig
{
	constexpr uint32_t m_skeleton = 0x0;  // CStrongHandle< InfoForResourceTypeCNmSkeleton > 
}

// Offset: 0x7ffe21f04c40 
// N. Class: 206 
// Fields: 7 
namespace BoneDemoCaptureSettings_t
{
	constexpr uint32_t m_boneName = 0x0;  // CUtlString 
	constexpr uint32_t m_flErrorSplineRotationMax = 0x8;  // float32 
	constexpr uint32_t m_flErrorSplineTranslationMax = 0xC;  // float32 
	constexpr uint32_t m_flErrorSplineScaleMax = 0x10;  // float32 
	constexpr uint32_t m_flErrorQuantizationRotationMax = 0x14;  // float32 
	constexpr uint32_t m_flErrorQuantizationTranslationMax = 0x18;  // float32 
	constexpr uint32_t m_flErrorQuantizationScaleMax = 0x1C;  // float32 
}

// Offset: 0x7ffe21f04e00 
// N. Class: 207 
// Fields: 5 
namespace IKDemoCaptureSettings_t
{
	constexpr uint32_t m_parentBoneName = 0x0;  // CUtlString 
	constexpr uint32_t m_eMode = 0x8;  // IKChannelMode 
	constexpr uint32_t m_ikChainName = 0x10;  // CUtlString 
	constexpr uint32_t m_oneBoneStart = 0x18;  // CUtlString 
	constexpr uint32_t m_oneBoneEnd = 0x20;  // CUtlString 
}

// Offset: 0x7ffe21f05020 
// N. Class: 208 
// Fields: 15 
namespace CAnimDemoCaptureSettings
{
	constexpr uint32_t m_vecErrorRangeSplineRotation = 0x0;  // Vector2D 
	constexpr uint32_t m_vecErrorRangeSplineTranslation = 0x8;  // Vector2D 
	constexpr uint32_t m_vecErrorRangeSplineScale = 0x10;  // Vector2D 
	constexpr uint32_t m_flIkRotation_MaxSplineError = 0x18;  // float32 
	constexpr uint32_t m_flIkTranslation_MaxSplineError = 0x1C;  // float32 
	constexpr uint32_t m_vecErrorRangeQuantizationRotation = 0x20;  // Vector2D 
	constexpr uint32_t m_vecErrorRangeQuantizationTranslation = 0x28;  // Vector2D 
	constexpr uint32_t m_vecErrorRangeQuantizationScale = 0x30;  // Vector2D 
	constexpr uint32_t m_flIkRotation_MaxQuantizationError = 0x38;  // float32 
	constexpr uint32_t m_flIkTranslation_MaxQuantizationError = 0x3C;  // float32 
	constexpr uint32_t m_baseSequence = 0x40;  // CUtlString 
	constexpr uint32_t m_nBaseSequenceFrame = 0x48;  // int32 
	constexpr uint32_t m_boneSelectionMode = 0x4C;  // EDemoBoneSelectionMode 
	constexpr uint32_t m_bones = 0x50;  // CUtlVector< BoneDemoCaptureSettings_t > 
	constexpr uint32_t m_ikChains = 0x68;  // CUtlVector< IKDemoCaptureSettings_t > 
}

// Offset: 0x7ffe21f01fc0 
// N. Class: 209 
// Fields: 5 
namespace CAnimReplayFrame
{
	constexpr uint32_t m_inputDataBlocks = 0x10;  // CUtlVector< CUtlBinaryBlock > 
	constexpr uint32_t m_instanceData = 0x28;  // CUtlBinaryBlock 
	constexpr uint32_t m_startingLocalToWorldTransform = 0x40;  // CTransform 
	constexpr uint32_t m_localToWorldTransform = 0x60;  // CTransform 
	constexpr uint32_t m_timeStamp = 0x80;  // float32 
}

// Offset: 0x7ffe21f020e0 
// N. Class: 210 
// Fields: 5 
namespace CAnimGraphDebugReplay
{
	constexpr uint32_t m_animGraphFileName = 0x40;  // CUtlString 
	constexpr uint32_t m_frameList = 0x48;  // CUtlVector< CSmartPtr< CAnimReplayFrame > > 
	constexpr uint32_t m_startIndex = 0x60;  // int32 
	constexpr uint32_t m_writeIndex = 0x64;  // int32 
	constexpr uint32_t m_frameCount = 0x68;  // int32 
}

// Offset: 0x7ffe21f01f00 
// N. Class: 211 
// Fields: 2 
namespace CAnimGraphModelBinding
{
	constexpr uint32_t m_modelName = 0x8;  // CUtlString 
	constexpr uint32_t m_pSharedData = 0x10;  // CSmartPtr< CAnimUpdateSharedData > 
}

// Offset: 0x7ffe21f0bd00 
// N. Class: 212 
// Fields: 10 
namespace CAnimUpdateSharedData
{
	constexpr uint32_t m_nodes = 0x10;  // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > 
	constexpr uint32_t m_nodeIndexMap = 0x28;  // CUtlHashtable< CAnimNodePath, int32 > 
	constexpr uint32_t m_components = 0x48;  // CUtlVector< CSmartPtr< CAnimComponentUpdater > > 
	constexpr uint32_t m_pParamListUpdater = 0x60;  // CSmartPtr< CAnimParameterManagerUpdater > 
	constexpr uint32_t m_pTagManagerUpdater = 0x68;  // CSmartPtr< CAnimTagManagerUpdater > 
	constexpr uint32_t m_scriptManager = 0x70;  // CSmartPtr< CAnimScriptManager > 
	constexpr uint32_t m_settings = 0x78;  // CAnimGraphSettingsManager 
	constexpr uint32_t m_pStaticPoseCache = 0xA8;  // CSmartPtr< CStaticPoseCacheBuilder > 
	constexpr uint32_t m_pSkeleton = 0xB0;  // CSmartPtr< CAnimSkeleton > 
	constexpr uint32_t m_rootNodePath = 0xB8;  // CAnimNodePath 
}

// Offset: 0x7ffe21f0bb18 
// N. Class: 213 
// Fields: 1 
namespace CAnimParamHandleMap
{
	constexpr uint32_t m_list = 0x0;  // CUtlHashtable< uint16, int16 > 
}

// Offset: 0x7ffe21f0bbc0 
// N. Class: 214 
// Fields: 6 
namespace CAnimParameterManagerUpdater
{
	constexpr uint32_t m_parameters = 0x18;  // CUtlVector< CSmartPtr< CAnimParameterBase > > 
	constexpr uint32_t m_idToIndexMap = 0x30;  // CUtlHashtable< AnimParamID, int32 > 
	constexpr uint32_t m_nameToIndexMap = 0x50;  // CUtlHashtable< CUtlString, int32 > 
	constexpr uint32_t m_indexToHandle = 0x70;  // CUtlVector< CAnimParamHandle > 
	constexpr uint32_t m_autoResetParams = 0x88;  // CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > 
	constexpr uint32_t m_autoResetMap = 0xA0;  // CUtlHashtable< CAnimParamHandle, int16 > 
}

// Offset: 0x7ffe21f158e0 
// N. Class: 215 
// Fields: 7 
namespace CAnimParameterBase
{
	constexpr uint32_t m_name = 0x18;  // CGlobalSymbol 
	constexpr uint32_t m_sComment = 0x20;  // CUtlString 
	constexpr uint32_t m_group = 0x28;  // CUtlString 
	constexpr uint32_t m_id = 0x30;  // AnimParamID 
	constexpr uint32_t m_componentName = 0x48;  // CUtlString 
	constexpr uint32_t m_bNetworkingRequested = 0x68;  // bool 
	constexpr uint32_t m_bIsReferenced = 0x69;  // bool 
}

// Offset: 0x7ffe21f16a00 
// N. Class: 216 
// Fields: 3 
namespace CAnimUpdateNodeBase
{
	constexpr uint32_t m_nodePath = 0x18;  // CAnimNodePath 
	constexpr uint32_t m_networkMode = 0x48;  // AnimNodeNetworkMode 
	constexpr uint32_t m_name = 0x50;  // CUtlString 
}

// Offset: 0x7ffe21f1ec10 
// N. Class: 217 
// Fields: 2 
namespace CAnimNodePath
{
	constexpr uint32_t m_path = 0x0;  // AnimNodeID[11] 
	constexpr uint32_t m_nCount = 0x2C;  // int32 
}

// Offset: 0x7ffe21f0e920 
// N. Class: 218 
// Fields: 4 
namespace CAnimComponentUpdater
{
	constexpr uint32_t m_name = 0x18;  // CUtlString 
	constexpr uint32_t m_networkMode = 0x24;  // AnimNodeNetworkMode 
	constexpr uint32_t m_bStartEnabled = 0x28;  // bool 
}

// Offset: 0x7ffe21f0d168 
// N. Class: 219 
// Fields: 1 
namespace CAnimTagManagerUpdater
{
	constexpr uint32_t m_tags = 0x38;  // CUtlVector< CSmartPtr< CAnimTagBase > > 
}

// Offset: 0x7ffe21f06e88 
// N. Class: 220 
// Fields: 1 
namespace CAnimScriptManager
{
	constexpr uint32_t m_scriptInfo = 0x10;  // CUtlVector< ScriptInfo_t > 
}

// Offset: 0x7ffe21f0c278 
// N. Class: 221 
// Fields: 1 
namespace CAnimGraphSettingsManager
{
	constexpr uint32_t m_settingsGroups = 0x18;  // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > 
}

// Offset: 0x0 
// N. Class: 222 
// Fields: 0 
namespace CStaticPoseCacheBuilder
{
}

// Offset: 0x7ffe21f0bec0 
// N. Class: 223 
// Fields: 2 
namespace CBlendCurve
{
	constexpr uint32_t m_flControlPoint1 = 0x0;  // float32 
	constexpr uint32_t m_flControlPoint2 = 0x4;  // float32 
}

// Offset: 0x7ffe21f0bf80 
// N. Class: 224 
// Fields: 2 
namespace ParamSpanSample_t
{
	constexpr uint32_t m_value = 0x0;  // CAnimVariant 
	constexpr uint32_t m_flCycle = 0x14;  // float32 
}

// Offset: 0x7ffe21f0c040 
// N. Class: 225 
// Fields: 5 
namespace ParamSpan_t
{
	constexpr uint32_t m_samples = 0x0;  // CUtlVector< ParamSpanSample_t > 
	constexpr uint32_t m_hParam = 0x18;  // CAnimParamHandle 
	constexpr uint32_t m_eParamType = 0x1A;  // AnimParamType_t 
	constexpr uint32_t m_flStartCycle = 0x1C;  // float32 
	constexpr uint32_t m_flEndCycle = 0x20;  // float32 
}

// Offset: 0x7ffe21f0c158 
// N. Class: 226 
// Fields: 1 
namespace CParamSpanUpdater
{
	constexpr uint32_t m_spans = 0x0;  // CUtlVector< ParamSpan_t > 
}

// Offset: 0x0 
// N. Class: 227 
// Fields: 0 
namespace CAnimGraphSettingsGroup
{
}

// Offset: 0x7ffe21f0c320 
// N. Class: 228 
// Fields: 4 
namespace CCachedPose
{
	constexpr uint32_t m_transforms = 0x8;  // CUtlVector< CTransform > 
	constexpr uint32_t m_morphWeights = 0x20;  // CUtlVector< float32 > 
	constexpr uint32_t m_hSequence = 0x38;  // HSequence 
	constexpr uint32_t m_flCycle = 0x3C;  // float32 
}

// Offset: 0x7ffe21f0c420 
// N. Class: 229 
// Fields: 3 
namespace CStaticPoseCache
{
	constexpr uint32_t m_poses = 0x10;  // CUtlVector< CCachedPose > 
	constexpr uint32_t m_nBoneCount = 0x28;  // int32 
	constexpr uint32_t m_nMorphCount = 0x2C;  // int32 
}

// Offset: 0x0 
// N. Class: 230 
// Fields: 0 
namespace CAnimActionUpdater
{
}

// Offset: 0x7ffe21f0c610 
// N. Class: 231 
// Fields: 2 
namespace CEmitTagActionUpdater
{
	constexpr uint32_t m_nTagIndex = 0x18;  // int32 
	constexpr uint32_t m_bIsZeroDuration = 0x1C;  // bool 
}

// Offset: 0x7ffe21f0c6e0 
// N. Class: 232 
// Fields: 2 
namespace CSetParameterActionUpdater
{
	constexpr uint32_t m_hParam = 0x18;  // CAnimParamHandle 
	constexpr uint32_t m_value = 0x1A;  // CAnimVariant 
}

// Offset: 0x7ffe21f0cbb0 
// N. Class: 233 
// Fields: 2 
namespace CToggleComponentActionUpdater
{
	constexpr uint32_t m_bSetEnabled = 0x1C;  // bool 
}

// Offset: 0x7ffe21f0cc80 
// N. Class: 234 
// Fields: 3 
namespace CExpressionActionUpdater
{
	constexpr uint32_t m_hParam = 0x18;  // CAnimParamHandle 
	constexpr uint32_t m_eParamType = 0x1A;  // AnimParamType_t 
}

// Offset: 0x7ffe21f0cf90 
// N. Class: 235 
// Fields: 5 
namespace CAnimTagBase
{
	constexpr uint32_t m_name = 0x18;  // CGlobalSymbol 
	constexpr uint32_t m_sComment = 0x20;  // CUtlString 
	constexpr uint32_t m_group = 0x28;  // CGlobalSymbol 
	constexpr uint32_t m_bIsReferenced = 0x48;  // bool 
}

// Offset: 0x7ffe21f0d0b0 
// N. Class: 236 
// Fields: 2 
namespace CSequenceTagSpans
{
	constexpr uint32_t m_sSequenceName = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_tags = 0x8;  // CUtlVector< TagSpan_t > 
}

// Offset: 0x7ffe21f0aca0 
// N. Class: 237 
// Fields: 3 
namespace TagSpan_t
{
	constexpr uint32_t m_tagIndex = 0x0;  // int32 
	constexpr uint32_t m_startCycle = 0x4;  // float32 
	constexpr uint32_t m_endCycle = 0x8;  // float32 
}

// Offset: 0x7ffe21f0d2d0 
// N. Class: 238 
// Fields: 7 
namespace CAudioAnimTag
{
	constexpr uint32_t m_clipName = 0x58;  // CUtlString 
	constexpr uint32_t m_attachmentName = 0x60;  // CUtlString 
	constexpr uint32_t m_flVolume = 0x68;  // float32 
	constexpr uint32_t m_bStopWhenTagEnds = 0x6C;  // bool 
	constexpr uint32_t m_bStopWhenGraphEnds = 0x6D;  // bool 
	constexpr uint32_t m_bPlayOnServer = 0x6E;  // bool 
	constexpr uint32_t m_bPlayOnClient = 0x6F;  // bool 
}

// Offset: 0x7ffe21f0d400 
// N. Class: 239 
// Fields: 2 
namespace CBodyGroupSetting
{
	constexpr uint32_t m_BodyGroupName = 0x0;  // CUtlString 
	constexpr uint32_t m_nBodyGroupOption = 0x8;  // int32 
}

// Offset: 0x7ffe21f0d4d0 
// N. Class: 240 
// Fields: 2 
namespace CBodyGroupAnimTag
{
	constexpr uint32_t m_nPriority = 0x58;  // int32 
	constexpr uint32_t m_bodyGroupSettings = 0x60;  // CUtlVector< CBodyGroupSetting > 
}

// Offset: 0x7ffe21f0d9e0 
// N. Class: 241 
// Fields: 4 
namespace CClothSettingsAnimTag
{
	constexpr uint32_t m_flStiffness = 0x58;  // float32 
	constexpr uint32_t m_flEaseIn = 0x5C;  // float32 
	constexpr uint32_t m_flEaseOut = 0x60;  // float32 
	constexpr uint32_t m_nVertexSet = 0x68;  // CUtlString 
}

// Offset: 0x7ffe21f05750 
// N. Class: 242 
// Fields: 1 
namespace CFootFallAnimTag
{
	constexpr uint32_t m_foot = 0x58;  // FootFallTagFoot_t 
}

// Offset: 0x7ffe21f0db20 
// N. Class: 243 
// Fields: 4 
namespace CFootstepLandedAnimTag
{
	constexpr uint32_t m_FootstepType = 0x58;  // FootstepLandedFootSoundType_t 
	constexpr uint32_t m_OverrideSoundName = 0x60;  // CUtlString 
	constexpr uint32_t m_DebugAnimSourceString = 0x68;  // CUtlString 
	constexpr uint32_t m_BoneName = 0x70;  // CUtlString 
}

// Offset: 0x7ffe21f0dc28 
// N. Class: 244 
// Fields: 1 
namespace CHandshakeAnimTagBase
{
	constexpr uint32_t m_bIsDisableTag = 0x50;  // bool 
}

// Offset: 0x0 
// N. Class: 245 
// Fields: 0 
namespace CTaskHandshakeAnimTag
{
}

// Offset: 0x0 
// N. Class: 246 
// Fields: 0 
namespace CMovementHandshakeAnimTag
{
}

// Offset: 0x7ffe21f05890 
// N. Class: 247 
// Fields: 4 
namespace CMaterialAttributeAnimTag
{
	constexpr uint32_t m_AttributeName = 0x58;  // CUtlString 
	constexpr uint32_t m_AttributeType = 0x60;  // MatterialAttributeTagType_t 
	constexpr uint32_t m_flValue = 0x64;  // float32 
	constexpr uint32_t m_Color = 0x68;  // Color 
}

// Offset: 0x7ffe21f0dea0 
// N. Class: 248 
// Fields: 10 
namespace CParticleAnimTag
{
	constexpr uint32_t m_hParticleSystem = 0x58;  // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > 
	constexpr uint32_t m_particleSystemName = 0x60;  // CUtlString 
	constexpr uint32_t m_configName = 0x68;  // CUtlString 
	constexpr uint32_t m_bDetachFromOwner = 0x70;  // bool 
	constexpr uint32_t m_bStopWhenTagEnds = 0x71;  // bool 
	constexpr uint32_t m_bTagEndStopIsInstant = 0x72;  // bool 
	constexpr uint32_t m_attachmentName = 0x78;  // CUtlString 
	constexpr uint32_t m_attachmentType = 0x80;  // ParticleAttachment_t 
	constexpr uint32_t m_attachmentCP1Name = 0x88;  // CUtlString 
	constexpr uint32_t m_attachmentCP1Type = 0x90;  // ParticleAttachment_t 
}

// Offset: 0x7ffe21f0e0c0 
// N. Class: 249 
// Fields: 6 
namespace CRagdollAnimTag
{
	constexpr uint32_t m_nPoseControl = 0x58;  // AnimPoseControl 
	constexpr uint32_t m_flFrequency = 0x5C;  // float32 
	constexpr uint32_t m_flDampingRatio = 0x60;  // float32 
	constexpr uint32_t m_flDecayDuration = 0x64;  // float32 
	constexpr uint32_t m_flDecayBias = 0x68;  // float32 
	constexpr uint32_t m_bDestroy = 0x6C;  // bool 
}

// Offset: 0x7ffe21f0e220 
// N. Class: 250 
// Fields: 1 
namespace CSequenceFinishedAnimTag
{
	constexpr uint32_t m_sequenceName = 0x58;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 251 
// Fields: 0 
namespace CStringAnimTag
{
}

// Offset: 0x0 
// N. Class: 252 
// Fields: 0 
namespace CTaskStatusAnimTag
{
}

// Offset: 0x7ffe21f0ea18 
// N. Class: 253 
// Fields: 1 
namespace CAnimScriptComponentUpdater
{
}

// Offset: 0x7ffe21f0ed50 
// N. Class: 254 
// Fields: 1 
namespace CCPPScriptComponentUpdater
{
	constexpr uint32_t m_scriptsToRun = 0x30;  // CUtlVector< CGlobalSymbol > 
}

// Offset: 0x7ffe21f0f080 
// N. Class: 255 
// Fields: 3 
namespace CDampedValueUpdateItem
{
	constexpr uint32_t m_damping = 0x0;  // CAnimInputDamping 
	constexpr uint32_t m_hParamIn = 0x18;  // CAnimParamHandle 
	constexpr uint32_t m_hParamOut = 0x1A;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f0f158 
// N. Class: 256 
// Fields: 1 
namespace CDampedValueComponentUpdater
{
	constexpr uint32_t m_items = 0x30;  // CUtlVector< CDampedValueUpdateItem > 
}

// Offset: 0x7ffe21f0f488 
// N. Class: 257 
// Fields: 1 
namespace CDemoSettingsComponentUpdater
{
	constexpr uint32_t m_settings = 0x30;  // CAnimDemoCaptureSettings 
}

// Offset: 0x7ffe21f0f7b8 
// N. Class: 258 
// Fields: 1 
namespace CLODComponentUpdater
{
	constexpr uint32_t m_nServerLOD = 0x30;  // int32 
}

// Offset: 0x7ffe21f0faf0 
// N. Class: 259 
// Fields: 8 
namespace CLookComponentUpdater
{
	constexpr uint32_t m_hLookHeading = 0x34;  // CAnimParamHandle 
	constexpr uint32_t m_hLookHeadingVelocity = 0x36;  // CAnimParamHandle 
	constexpr uint32_t m_hLookPitch = 0x38;  // CAnimParamHandle 
	constexpr uint32_t m_hLookDistance = 0x3A;  // CAnimParamHandle 
	constexpr uint32_t m_hLookDirection = 0x3C;  // CAnimParamHandle 
	constexpr uint32_t m_hLookTarget = 0x3E;  // CAnimParamHandle 
	constexpr uint32_t m_hLookTargetWorldSpace = 0x40;  // CAnimParamHandle 
	constexpr uint32_t m_bNetworkLookTarget = 0x42;  // bool 
}

// Offset: 0x7ffe21f0fe80 
// N. Class: 260 
// Fields: 8 
namespace CMovementComponentUpdater
{
	constexpr uint32_t m_motors = 0x30;  // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > 
	constexpr uint32_t m_facingDamping = 0x48;  // CAnimInputDamping 
	constexpr uint32_t m_nDefaultMotorIndex = 0x60;  // int32 
	constexpr uint32_t m_flDefaultRunSpeed = 0x64;  // float32 
	constexpr uint32_t m_bMoveVarsDisabled = 0x68;  // bool 
	constexpr uint32_t m_bNetworkPath = 0x69;  // bool 
	constexpr uint32_t m_bNetworkFacing = 0x6A;  // bool 
	constexpr uint32_t m_paramHandles = 0x6B;  // CAnimParamHandle[30] 
}

// Offset: 0x7ffe21f14710 
// N. Class: 261 
// Fields: 2 
namespace CAnimMotorUpdaterBase
{
	constexpr uint32_t m_name = 0x10;  // CUtlString 
	constexpr uint32_t m_bDefault = 0x18;  // bool 
}

// Offset: 0x0 
// N. Class: 262 
// Fields: 0 
namespace CPairedSequenceComponentUpdater
{
}

// Offset: 0x7ffe21f104a0 
// N. Class: 263 
// Fields: 2 
namespace WeightList
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_weights = 0x8;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21f10560 
// N. Class: 264 
// Fields: 8 
namespace CRagdollComponentUpdater
{
	constexpr uint32_t m_ragdollNodePaths = 0x30;  // CUtlVector< CAnimNodePath > 
	constexpr uint32_t m_boneIndices = 0x48;  // CUtlVector< int32 > 
	constexpr uint32_t m_boneNames = 0x60;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_weightLists = 0x78;  // CUtlVector< WeightList > 
	constexpr uint32_t m_flSpringFrequencyMin = 0x90;  // float32 
	constexpr uint32_t m_flSpringFrequencyMax = 0x94;  // float32 
	constexpr uint32_t m_flMaxStretch = 0x98;  // float32 
	constexpr uint32_t m_bSolidCollisionAtZeroWeight = 0x9C;  // bool 
}

// Offset: 0x7ffe21f10970 
// N. Class: 265 
// Fields: 7 
namespace CSlopeComponentUpdater
{
	constexpr uint32_t m_flTraceDistance = 0x34;  // float32 
	constexpr uint32_t m_hSlopeAngle = 0x38;  // CAnimParamHandle 
	constexpr uint32_t m_hSlopeAngleFront = 0x3A;  // CAnimParamHandle 
	constexpr uint32_t m_hSlopeAngleSide = 0x3C;  // CAnimParamHandle 
	constexpr uint32_t m_hSlopeHeading = 0x3E;  // CAnimParamHandle 
	constexpr uint32_t m_hSlopeNormal = 0x40;  // CAnimParamHandle 
	constexpr uint32_t m_hSlopeNormal_WorldSpace = 0x42;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f10cd8 
// N. Class: 266 
// Fields: 1 
namespace CStateMachineComponentUpdater
{
	constexpr uint32_t m_stateMachine = 0x30;  // CAnimStateMachineUpdater 
}

// Offset: 0x7ffe21f16880 
// N. Class: 267 
// Fields: 3 
namespace CAnimStateMachineUpdater
{
	constexpr uint32_t m_states = 0x8;  // CUtlVector< CStateUpdateData > 
	constexpr uint32_t m_transitions = 0x20;  // CUtlVector< CTransitionUpdateData > 
	constexpr uint32_t m_startStateIndex = 0x50;  // int32 
}

// Offset: 0x7ffe21f10e00 
// N. Class: 268 
// Fields: 2 
namespace CMotionDataSet
{
	constexpr uint32_t m_groups = 0x0;  // CUtlVector< CMotionGraphGroup > 
	constexpr uint32_t m_nDimensionCount = 0x18;  // int32 
}

// Offset: 0x7ffe21f10ec0 
// N. Class: 269 
// Fields: 5 
namespace CMotionGraphGroup
{
	constexpr uint32_t m_searchDB = 0x0;  // CMotionSearchDB 
	constexpr uint32_t m_motionGraphConfigs = 0xD0;  // CUtlVector< CMotionGraphConfig > 
	constexpr uint32_t m_sampleToConfig = 0xE8;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe21f10fe0 
// N. Class: 270 
// Fields: 3 
namespace CMotionSearchDB
{
	constexpr uint32_t m_rootNode = 0x0;  // CMotionSearchNode 
	constexpr uint32_t m_residualQuantizer = 0x80;  // CProductQuantizer 
	constexpr uint32_t m_codeIndices = 0xA0;  // CUtlVector< MotionDBIndex > 
}

// Offset: 0x7ffe21f11550 
// N. Class: 271 
// Fields: 7 
namespace CMotionGraph
{
	constexpr uint32_t m_paramSpans = 0x10;  // CParamSpanUpdater 
	constexpr uint32_t m_tags = 0x28;  // CUtlVector< TagSpan_t > 
	constexpr uint32_t m_pRootNode = 0x40;  // CSmartPtr< CMotionNode > 
	constexpr uint32_t m_nParameterCount = 0x48;  // int32 
	constexpr uint32_t m_nConfigStartIndex = 0x4C;  // int32 
	constexpr uint32_t m_nConfigCount = 0x50;  // int32 
	constexpr uint32_t m_bLoop = 0x54;  // bool 
}

// Offset: 0x7ffe21f1ee50 
// N. Class: 272 
// Fields: 5 
namespace CMotionGraphConfig
{
	constexpr uint32_t m_paramValues = 0x0;  // float32[4] 
	constexpr uint32_t m_flDuration = 0x10;  // float32 
	constexpr uint32_t m_nMotionIndex = 0x14;  // MotionIndex 
	constexpr uint32_t m_nSampleStart = 0x18;  // int32 
	constexpr uint32_t m_nSampleCount = 0x1C;  // int32 
}

// Offset: 0x7ffe21f110b8 
// N. Class: 273 
// Fields: 1 
namespace SampleCode
{
	constexpr uint32_t m_subCode = 0x0;  // uint8[8] 
}

// Offset: 0x7ffe21f11158 
// N. Class: 274 
// Fields: 1 
namespace MotionDBIndex
{
	constexpr uint32_t m_nIndex = 0x0;  // uint32 
}

// Offset: 0x7ffe21f11200 
// N. Class: 275 
// Fields: 3 
namespace CVectorQuantizer
{
	constexpr uint32_t m_centroidVectors = 0x0;  // CUtlVector< float32 > 
	constexpr uint32_t m_nCentroids = 0x18;  // int32 
	constexpr uint32_t m_nDimensions = 0x1C;  // int32 
}

// Offset: 0x7ffe21f112e0 
// N. Class: 276 
// Fields: 2 
namespace CProductQuantizer
{
	constexpr uint32_t m_subQuantizers = 0x0;  // CUtlVector< CVectorQuantizer > 
	constexpr uint32_t m_nDimensions = 0x18;  // int32 
}

// Offset: 0x7ffe21f113a0 
// N. Class: 277 
// Fields: 5 
namespace CMotionSearchNode
{
	constexpr uint32_t m_children = 0x0;  // CUtlVector< CMotionSearchNode* > 
	constexpr uint32_t m_quantizer = 0x18;  // CVectorQuantizer 
	constexpr uint32_t m_sampleCodes = 0x38;  // CUtlVector< CUtlVector< SampleCode > > 
	constexpr uint32_t m_sampleIndices = 0x50;  // CUtlVector< CUtlVector< int32 > > 
	constexpr uint32_t m_selectableSamples = 0x68;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe21f116b0 
// N. Class: 278 
// Fields: 2 
namespace CMotionNode
{
	constexpr uint32_t m_name = 0x18;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 279 
// Fields: 0 
namespace CEditableMotionGraph
{
}

// Offset: 0x7ffe21f11770 
// N. Class: 280 
// Fields: 3 
namespace CMotionNodeSequence
{
	constexpr uint32_t m_tags = 0x28;  // CUtlVector< TagSpan_t > 
	constexpr uint32_t m_hSequence = 0x40;  // HSequence 
	constexpr uint32_t m_flPlaybackSpeed = 0x44;  // float32 
}

// Offset: 0x7ffe21f11c60 
// N. Class: 281 
// Fields: 2 
namespace MotionBlendItem
{
	constexpr uint32_t m_pChild = 0x0;  // CSmartPtr< CMotionNode > 
	constexpr uint32_t m_flKeyValue = 0x8;  // float32 
}

// Offset: 0x7ffe21f11d20 
// N. Class: 282 
// Fields: 2 
namespace CMotionNodeBlend1D
{
	constexpr uint32_t m_blendItems = 0x28;  // CUtlVector< MotionBlendItem > 
	constexpr uint32_t m_nParamIndex = 0x40;  // int32 
}

// Offset: 0x7ffe21f11ff0 
// N. Class: 283 
// Fields: 4 
namespace CMotionMetricEvaluator
{
	constexpr uint32_t m_means = 0x18;  // CUtlVector< float32 > 
	constexpr uint32_t m_standardDeviations = 0x30;  // CUtlVector< float32 > 
	constexpr uint32_t m_flWeight = 0x48;  // float32 
	constexpr uint32_t m_nDimensionStartIndex = 0x4C;  // int32 
}

// Offset: 0x0 
// N. Class: 284 
// Fields: 0 
namespace CBlockSelectionMetricEvaluator
{
}

// Offset: 0x7ffe21f12260 
// N. Class: 285 
// Fields: 1 
namespace CBonePositionMetricEvaluator
{
	constexpr uint32_t m_nBoneIndex = 0x50;  // int32 
}

// Offset: 0x7ffe21f12588 
// N. Class: 286 
// Fields: 1 
namespace CBoneVelocityMetricEvaluator
{
	constexpr uint32_t m_nBoneIndex = 0x50;  // int32 
}

// Offset: 0x0 
// N. Class: 287 
// Fields: 0 
namespace CCurrentRotationVelocityMetricEvaluator
{
}

// Offset: 0x0 
// N. Class: 288 
// Fields: 0 
namespace CCurrentVelocityMetricEvaluator
{
}

// Offset: 0x7ffe21f12ee0 
// N. Class: 289 
// Fields: 7 
namespace CDistanceRemainingMetricEvaluator
{
	constexpr uint32_t m_flMaxDistance = 0x50;  // float32 
	constexpr uint32_t m_flMinDistance = 0x54;  // float32 
	constexpr uint32_t m_flStartGoalFilterDistance = 0x58;  // float32 
	constexpr uint32_t m_flMaxGoalOvershootScale = 0x5C;  // float32 
	constexpr uint32_t m_bFilterFixedMinDistance = 0x60;  // bool 
	constexpr uint32_t m_bFilterGoalDistance = 0x61;  // bool 
	constexpr uint32_t m_bFilterGoalOvershoot = 0x62;  // bool 
}

// Offset: 0x7ffe21f132c8 
// N. Class: 290 
// Fields: 1 
namespace CFootCycleMetricEvaluator
{
	constexpr uint32_t m_footIndices = 0x50;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe21f13600 
// N. Class: 291 
// Fields: 2 
namespace CFootPositionMetricEvaluator
{
	constexpr uint32_t m_footIndices = 0x50;  // CUtlVector< int32 > 
	constexpr uint32_t m_bIgnoreSlope = 0x68;  // bool 
}

// Offset: 0x7ffe21f13950 
// N. Class: 292 
// Fields: 2 
namespace CFutureFacingMetricEvaluator
{
	constexpr uint32_t m_flDistance = 0x50;  // float32 
	constexpr uint32_t m_flTime = 0x54;  // float32 
}

// Offset: 0x7ffe21f05e00 
// N. Class: 293 
// Fields: 4 
namespace CFutureVelocityMetricEvaluator
{
	constexpr uint32_t m_flDistance = 0x50;  // float32 
	constexpr uint32_t m_flStoppingDistance = 0x54;  // float32 
	constexpr uint32_t m_flTargetSpeed = 0x58;  // float32 
	constexpr uint32_t m_eMode = 0x5C;  // VelocityMetricMode 
}

// Offset: 0x7ffe21f13ca0 
// N. Class: 294 
// Fields: 4 
namespace CPathMetricEvaluator
{
	constexpr uint32_t m_pathTimeSamples = 0x50;  // CUtlVector< float32 > 
	constexpr uint32_t m_flDistance = 0x68;  // float32 
	constexpr uint32_t m_bExtrapolateMovement = 0x6C;  // bool 
	constexpr uint32_t m_flMinExtrapolationSpeed = 0x70;  // float32 
}

// Offset: 0x7ffe21f14030 
// N. Class: 295 
// Fields: 2 
namespace CStepsRemainingMetricEvaluator
{
	constexpr uint32_t m_footIndices = 0x50;  // CUtlVector< int32 > 
	constexpr uint32_t m_flMinStepsRemaining = 0x68;  // float32 
}

// Offset: 0x7ffe21f14380 
// N. Class: 296 
// Fields: 4 
namespace CTimeRemainingMetricEvaluator
{
	constexpr uint32_t m_bMatchByTimeRemaining = 0x50;  // bool 
	constexpr uint32_t m_flMaxTimeRemaining = 0x54;  // float32 
	constexpr uint32_t m_bFilterByTimeRemaining = 0x58;  // bool 
	constexpr uint32_t m_flMinTimeRemaining = 0x5C;  // float32 
}

// Offset: 0x7ffe21f147c8 
// N. Class: 297 
// Fields: 1 
namespace CPathAnimMotorUpdaterBase
{
	constexpr uint32_t m_bLockToPath = 0x20;  // bool 
}

// Offset: 0x7ffe21f14880 
// N. Class: 298 
// Fields: 7 
namespace CDampedPathAnimMotorUpdater
{
	constexpr uint32_t m_flAnticipationTime = 0x2C;  // float32 
	constexpr uint32_t m_flMinSpeedScale = 0x30;  // float32 
	constexpr uint32_t m_hAnticipationPosParam = 0x34;  // CAnimParamHandle 
	constexpr uint32_t m_hAnticipationHeadingParam = 0x36;  // CAnimParamHandle 
	constexpr uint32_t m_flSpringConstant = 0x38;  // float32 
	constexpr uint32_t m_flMinSpringTension = 0x3C;  // float32 
	constexpr uint32_t m_flMaxSpringTension = 0x40;  // float32 
}

// Offset: 0x0 
// N. Class: 299 
// Fields: 0 
namespace CPathAnimMotorUpdater
{
}

// Offset: 0x7ffe21f14a80 
// N. Class: 300 
// Fields: 6 
namespace CPlayerInputAnimMotorUpdater
{
	constexpr uint32_t m_sampleTimes = 0x20;  // CUtlVector< float32 > 
	constexpr uint32_t m_flSpringConstant = 0x3C;  // float32 
	constexpr uint32_t m_flAnticipationDistance = 0x40;  // float32 
	constexpr uint32_t m_hAnticipationPosParam = 0x44;  // CAnimParamHandle 
	constexpr uint32_t m_hAnticipationHeadingParam = 0x46;  // CAnimParamHandle 
	constexpr uint32_t m_bUseAcceleration = 0x48;  // bool 
}

// Offset: 0x7ffe21f063f0 
// N. Class: 301 
// Fields: 13 
namespace AimMatrixOpFixedSettings_t
{
	constexpr uint32_t m_attachment = 0x0;  // CAnimAttachment 
	constexpr uint32_t m_damping = 0x80;  // CAnimInputDamping 
	constexpr uint32_t m_poseCacheHandles = 0x90;  // CPoseHandle[10] 
	constexpr uint32_t m_eBlendMode = 0xB8;  // AimMatrixBlendMode 
	constexpr uint32_t m_flMaxYawAngle = 0xBC;  // float32 
	constexpr uint32_t m_flMaxPitchAngle = 0xC0;  // float32 
	constexpr uint32_t m_nSequenceMaxFrame = 0xC4;  // int32 
	constexpr uint32_t m_nBoneMaskIndex = 0xC8;  // int32 
	constexpr uint32_t m_bTargetIsPosition = 0xCC;  // bool 
	constexpr uint32_t m_bUseBiasAndClamp = 0xCD;  // bool 
	constexpr uint32_t m_flBiasAndClampYawOffset = 0xD0;  // float32 
	constexpr uint32_t m_flBiasAndClampPitchOffset = 0xD4;  // float32 
	constexpr uint32_t m_biasAndClampBlendCurve = 0xD8;  // CBlendCurve 
}

// Offset: 0x7ffe21f0adc0 
// N. Class: 302 
// Fields: 2 
namespace CPoseHandle
{
	constexpr uint32_t m_nIndex = 0x0;  // uint16 
	constexpr uint32_t m_eType = 0x2;  // PoseType_t 
}

// Offset: 0x7ffe21f14bd0 
// N. Class: 303 
// Fields: 7 
namespace AimCameraOpFixedSettings_t
{
	constexpr uint32_t m_nChainIndex = 0x0;  // int32 
	constexpr uint32_t m_nCameraJointIndex = 0x4;  // int32 
	constexpr uint32_t m_nPelvisJointIndex = 0x8;  // int32 
	constexpr uint32_t m_nClavicleLeftJointIndex = 0xC;  // int32 
	constexpr uint32_t m_nClavicleRightJointIndex = 0x10;  // int32 
	constexpr uint32_t m_nDepenetrationJointIndex = 0x14;  // int32 
	constexpr uint32_t m_propJoints = 0x18;  // CUtlVector< int32 > 
}

// Offset: 0x7ffe21f14d30 
// N. Class: 304 
// Fields: 4 
namespace FollowAttachmentSettings_t
{
	constexpr uint32_t m_attachment = 0x0;  // CAnimAttachment 
	constexpr uint32_t m_boneIndex = 0x80;  // int32 
	constexpr uint32_t m_bMatchTranslation = 0x84;  // bool 
	constexpr uint32_t m_bMatchRotation = 0x85;  // bool 
}

// Offset: 0x7ffe21f14e30 
// N. Class: 305 
// Fields: 5 
namespace FollowTargetOpFixedSettings_t
{
	constexpr uint32_t m_boneIndex = 0x0;  // int32 
	constexpr uint32_t m_bBoneTarget = 0x4;  // bool 
	constexpr uint32_t m_boneTargetIndex = 0x8;  // int32 
	constexpr uint32_t m_bWorldCoodinateTarget = 0xC;  // bool 
	constexpr uint32_t m_bMatchTargetOrientation = 0xD;  // bool 
}

// Offset: 0x7ffe21f14f50 
// N. Class: 306 
// Fields: 18 
namespace FootLockPoseOpFixedSettings
{
	constexpr uint32_t m_footInfo = 0x0;  // CUtlVector< FootFixedData_t > 
	constexpr uint32_t m_hipDampingSettings = 0x18;  // CAnimInputDamping 
	constexpr uint32_t m_nHipBoneIndex = 0x28;  // int32 
	constexpr uint32_t m_ikSolverType = 0x2C;  // IKSolverType 
	constexpr uint32_t m_bApplyTilt = 0x30;  // bool 
	constexpr uint32_t m_bApplyHipDrop = 0x31;  // bool 
	constexpr uint32_t m_bAlwaysUseFallbackHinge = 0x32;  // bool 
	constexpr uint32_t m_bApplyFootRotationLimits = 0x33;  // bool 
	constexpr uint32_t m_bApplyLegTwistLimits = 0x34;  // bool 
	constexpr uint32_t m_flMaxFootHeight = 0x38;  // float32 
	constexpr uint32_t m_flExtensionScale = 0x3C;  // float32 
	constexpr uint32_t m_flMaxLegTwist = 0x40;  // float32 
	constexpr uint32_t m_bEnableLockBreaking = 0x44;  // bool 
	constexpr uint32_t m_flLockBreakTolerance = 0x48;  // float32 
	constexpr uint32_t m_flLockBlendTime = 0x4C;  // float32 
	constexpr uint32_t m_bEnableStretching = 0x50;  // bool 
	constexpr uint32_t m_flMaxStretchAmount = 0x54;  // float32 
	constexpr uint32_t m_flStretchExtensionScale = 0x58;  // float32 
}

// Offset: 0x7ffe21f19680 
// N. Class: 307 
// Fields: 11 
namespace FootFixedData_t
{
	constexpr uint32_t m_vToeOffset = 0x0;  // VectorAligned 
	constexpr uint32_t m_vHeelOffset = 0x10;  // VectorAligned 
	constexpr uint32_t m_nTargetBoneIndex = 0x20;  // int32 
	constexpr uint32_t m_nAnkleBoneIndex = 0x24;  // int32 
	constexpr uint32_t m_nIKAnchorBoneIndex = 0x28;  // int32 
	constexpr uint32_t m_ikChainIndex = 0x2C;  // int32 
	constexpr uint32_t m_flMaxIKLength = 0x30;  // float32 
	constexpr uint32_t m_nFootIndex = 0x34;  // int32 
	constexpr uint32_t m_nTagIndex = 0x38;  // int32 
	constexpr uint32_t m_flMaxRotationLeft = 0x3C;  // float32 
	constexpr uint32_t m_flMaxRotationRight = 0x40;  // float32 
}

// Offset: 0x7ffe21f15210 
// N. Class: 308 
// Fields: 7 
namespace FootPinningPoseOpFixedData_t
{
	constexpr uint32_t m_footInfo = 0x0;  // CUtlVector< FootFixedData_t > 
	constexpr uint32_t m_flBlendTime = 0x18;  // float32 
	constexpr uint32_t m_flLockBreakDistance = 0x1C;  // float32 
	constexpr uint32_t m_flMaxLegTwist = 0x20;  // float32 
	constexpr uint32_t m_nHipBoneIndex = 0x24;  // int32 
	constexpr uint32_t m_bApplyLegTwistLimits = 0x28;  // bool 
	constexpr uint32_t m_bApplyFootRotationLimits = 0x29;  // bool 
}

// Offset: 0x7ffe21f15370 
// N. Class: 309 
// Fields: 17 
namespace HitReactFixedSettings_t
{
	constexpr uint32_t m_nWeightListIndex = 0x0;  // int32 
	constexpr uint32_t m_nEffectedBoneCount = 0x4;  // int32 
	constexpr uint32_t m_flMaxImpactForce = 0x8;  // float32 
	constexpr uint32_t m_flMinImpactForce = 0xC;  // float32 
	constexpr uint32_t m_flWhipImpactScale = 0x10;  // float32 
	constexpr uint32_t m_flCounterRotationScale = 0x14;  // float32 
	constexpr uint32_t m_flDistanceFadeScale = 0x18;  // float32 
	constexpr uint32_t m_flPropagationScale = 0x1C;  // float32 
	constexpr uint32_t m_flWhipDelay = 0x20;  // float32 
	constexpr uint32_t m_flSpringStrength = 0x24;  // float32 
	constexpr uint32_t m_flWhipSpringStrength = 0x28;  // float32 
	constexpr uint32_t m_flMaxAngleRadians = 0x2C;  // float32 
	constexpr uint32_t m_nHipBoneIndex = 0x30;  // int32 
	constexpr uint32_t m_flHipBoneTranslationScale = 0x34;  // float32 
	constexpr uint32_t m_flHipDipSpringStrength = 0x38;  // float32 
	constexpr uint32_t m_flHipDipImpactScale = 0x3C;  // float32 
	constexpr uint32_t m_flHipDipDelay = 0x40;  // float32 
}

// Offset: 0x7ffe21f068d0 
// N. Class: 310 
// Fields: 7 
namespace JiggleBoneSettings_t
{
	constexpr uint32_t m_nBoneIndex = 0x0;  // int32 
	constexpr uint32_t m_flSpringStrength = 0x4;  // float32 
	constexpr uint32_t m_flMaxTimeStep = 0x8;  // float32 
	constexpr uint32_t m_flDamping = 0xC;  // float32 
	constexpr uint32_t m_vBoundsMaxLS = 0x10;  // Vector 
	constexpr uint32_t m_vBoundsMinLS = 0x1C;  // Vector 
	constexpr uint32_t m_eSimSpace = 0x28;  // JiggleBoneSimSpace 
}

// Offset: 0x7ffe21f06a28 
// N. Class: 311 
// Fields: 1 
namespace JiggleBoneSettingsList_t
{
	constexpr uint32_t m_boneSettings = 0x0;  // CUtlVector< JiggleBoneSettings_t > 
}

// Offset: 0x7ffe21f15610 
// N. Class: 312 
// Fields: 2 
namespace LookAtBone_t
{
	constexpr uint32_t m_index = 0x0;  // int32 
	constexpr uint32_t m_weight = 0x4;  // float32 
}

// Offset: 0x7ffe21f156d0 
// N. Class: 313 
// Fields: 11 
namespace LookAtOpFixedSettings_t
{
	constexpr uint32_t m_attachment = 0x0;  // CAnimAttachment 
	constexpr uint32_t m_damping = 0x80;  // CAnimInputDamping 
	constexpr uint32_t m_bones = 0x90;  // CUtlVector< LookAtBone_t > 
	constexpr uint32_t m_flYawLimit = 0xA8;  // float32 
	constexpr uint32_t m_flPitchLimit = 0xAC;  // float32 
	constexpr uint32_t m_flHysteresisInnerAngle = 0xB0;  // float32 
	constexpr uint32_t m_flHysteresisOuterAngle = 0xB4;  // float32 
	constexpr uint32_t m_bRotateYawForward = 0xB8;  // bool 
	constexpr uint32_t m_bMaintainUpDirection = 0xB9;  // bool 
	constexpr uint32_t m_bTargetIsPosition = 0xBA;  // bool 
	constexpr uint32_t m_bUseHysteresis = 0xBB;  // bool 
}

// Offset: 0x7ffe21f06b50 
// N. Class: 314 
// Fields: 6 
namespace ChainToSolveData_t
{
	constexpr uint32_t m_nChainIndex = 0x0;  // int32 
	constexpr uint32_t m_SolverSettings = 0x4;  // IKSolverSettings_t 
	constexpr uint32_t m_TargetSettings = 0x10;  // IKTargetSettings_t 
	constexpr uint32_t m_DebugSetting = 0x38;  // SolveIKChainAnimNodeDebugSetting 
	constexpr uint32_t m_flDebugNormalizedValue = 0x3C;  // float32 
	constexpr uint32_t m_vDebugOffset = 0x40;  // VectorAligned 
}

// Offset: 0x7ffe21f0b680 
// N. Class: 315 
// Fields: 3 
namespace IKSolverSettings_t
{
	constexpr uint32_t m_SolverType = 0x0;  // IKSolverType 
	constexpr uint32_t m_nNumIterations = 0x4;  // int32 
	constexpr uint32_t m_EndEffectorRotationFixUpMode = 0x8;  // EIKEndEffectorRotationFixUpMode 
}

// Offset: 0x7ffe21f0b870 
// N. Class: 316 
// Fields: 5 
namespace IKTargetSettings_t
{
	constexpr uint32_t m_TargetSource = 0x0;  // IKTargetSource 
	constexpr uint32_t m_AnimgraphParameterNamePosition = 0x18;  // AnimParamID 
	constexpr uint32_t m_AnimgraphParameterNameOrientation = 0x1C;  // AnimParamID 
	constexpr uint32_t m_TargetCoordSystem = 0x20;  // IKTargetCoordinateSystem 
}

// Offset: 0x7ffe21f06c88 
// N. Class: 317 
// Fields: 1 
namespace SolveIKChainPoseOpFixedSettings_t
{
	constexpr uint32_t m_ChainsToSolveData = 0x0;  // CUtlVector< ChainToSolveData_t > 
}

// Offset: 0x7ffe21f15a90 
// N. Class: 318 
// Fields: 6 
namespace CConcreteAnimParameter
{
	constexpr uint32_t m_previewButton = 0x70;  // AnimParamButton_t 
	constexpr uint32_t m_eNetworkSetting = 0x74;  // AnimParamNetworkSetting 
	constexpr uint32_t m_bUseMostRecentValue = 0x78;  // bool 
	constexpr uint32_t m_bAutoReset = 0x79;  // bool 
	constexpr uint32_t m_bGameWritable = 0x7A;  // bool 
	constexpr uint32_t m_bGraphWritable = 0x7B;  // bool 
}

// Offset: 0x7ffe21f15be0 
// N. Class: 319 
// Fields: 2 
namespace CVirtualAnimParameter
{
	constexpr uint32_t m_expressionString = 0x70;  // CUtlString 
	constexpr uint32_t m_eParamType = 0x78;  // AnimParamType_t 
}

// Offset: 0x7ffe21f15eb8 
// N. Class: 320 
// Fields: 1 
namespace CBoolAnimParameter
{
	constexpr uint32_t m_bDefaultValue = 0x80;  // bool 
}

// Offset: 0x7ffe21f15f90 
// N. Class: 321 
// Fields: 3 
namespace CEnumAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x88;  // uint8 
	constexpr uint32_t m_enumOptions = 0x90;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_vecEnumReferenced = 0xA8;  // CUtlVector< uint64 > 
}

// Offset: 0x7ffe21f160a0 
// N. Class: 322 
// Fields: 3 
namespace CIntAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x80;  // int32 
	constexpr uint32_t m_minValue = 0x84;  // int32 
	constexpr uint32_t m_maxValue = 0x88;  // int32 
}

// Offset: 0x7ffe21f161b0 
// N. Class: 323 
// Fields: 4 
namespace CFloatAnimParameter
{
	constexpr uint32_t m_fDefaultValue = 0x80;  // float32 
	constexpr uint32_t m_fMinValue = 0x84;  // float32 
	constexpr uint32_t m_fMaxValue = 0x88;  // float32 
	constexpr uint32_t m_bInterpolate = 0x8C;  // bool 
}

// Offset: 0x7ffe21f162d0 
// N. Class: 324 
// Fields: 2 
namespace CVectorAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x80;  // Vector 
	constexpr uint32_t m_bInterpolate = 0x8C;  // bool 
}

// Offset: 0x7ffe21f163b0 
// N. Class: 325 
// Fields: 2 
namespace CQuaternionAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x80;  // Quaternion 
	constexpr uint32_t m_bInterpolate = 0x90;  // bool 
}

// Offset: 0x7ffe21f16488 
// N. Class: 326 
// Fields: 1 
namespace CSymbolAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x80;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f06d70 
// N. Class: 327 
// Fields: 5 
namespace ScriptInfo_t
{
	constexpr uint32_t m_code = 0x0;  // CUtlString 
	constexpr uint32_t m_paramsModified = 0x8;  // CUtlVector< CAnimParamHandle > 
	constexpr uint32_t m_proxyReadParams = 0x20;  // CUtlVector< int32 > 
	constexpr uint32_t m_proxyWriteParams = 0x38;  // CUtlVector< int32 > 
	constexpr uint32_t m_eScriptType = 0x50;  // AnimScriptType 
}

// Offset: 0x7ffe21f16540 
// N. Class: 328 
// Fields: 2 
namespace CStateActionUpdater
{
	constexpr uint32_t m_pAction = 0x0;  // CSmartPtr< CAnimActionUpdater > 
	constexpr uint32_t m_eBehavior = 0x8;  // StateActionBehavior 
}

// Offset: 0x7ffe21f16600 
// N. Class: 329 
// Fields: 4 
namespace CTransitionUpdateData
{
	constexpr uint32_t m_srcStateIndex = 0x0;  // uint8 
	constexpr uint32_t m_destStateIndex = 0x1;  // uint8 
	constexpr uint32_t m_nHandshakeMaskToDisableFirst = 0x0;  // bitfield:7 
	constexpr uint32_t m_bDisabled = 0x0;  // bitfield:1 
}

// Offset: 0x7ffe21f16700 
// N. Class: 330 
// Fields: 8 
namespace CStateUpdateData
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_transitionIndices = 0x10;  // CUtlVector< int32 > 
	constexpr uint32_t m_actions = 0x28;  // CUtlVector< CStateActionUpdater > 
	constexpr uint32_t m_bIsStartState = 0x0;  // bitfield:1 
	constexpr uint32_t m_bIsEndState = 0x0;  // bitfield:1 
	constexpr uint32_t m_bIsPassthrough = 0x0;  // bitfield:1 
}

// Offset: 0x7ffe21f16958 
// N. Class: 331 
// Fields: 1 
namespace CAnimUpdateNodeRef
{
	constexpr uint32_t m_nodeIndex = 0x8;  // int32 
}

// Offset: 0x7ffe21f06ff0 
// N. Class: 332 
// Fields: 6 
namespace CBinaryUpdateNode
{
	constexpr uint32_t m_pChild1 = 0x58;  // CAnimUpdateNodeRef 
	constexpr uint32_t m_pChild2 = 0x68;  // CAnimUpdateNodeRef 
	constexpr uint32_t m_timingBehavior = 0x78;  // BinaryNodeTiming 
	constexpr uint32_t m_flTimingBlend = 0x7C;  // float32 
	constexpr uint32_t m_bResetChild1 = 0x80;  // bool 
	constexpr uint32_t m_bResetChild2 = 0x81;  // bool 
}

// Offset: 0x7ffe21f071a0 
// N. Class: 333 
// Fields: 11 
namespace CBlendUpdateNode
{
	constexpr uint32_t m_children = 0x60;  // CUtlVector< CAnimUpdateNodeRef > 
	constexpr uint32_t m_sortedOrder = 0x78;  // CUtlVector< uint8 > 
	constexpr uint32_t m_targetValues = 0x90;  // CUtlVector< float32 > 
	constexpr uint32_t m_blendValueSource = 0xAC;  // AnimValueSource 
	constexpr uint32_t m_paramIndex = 0xB0;  // CAnimParamHandle 
	constexpr uint32_t m_damping = 0xB8;  // CAnimInputDamping 
	constexpr uint32_t m_blendKeyType = 0xC8;  // BlendKeyType 
	constexpr uint32_t m_bLockBlendOnReset = 0xCC;  // bool 
	constexpr uint32_t m_bSyncCycles = 0xCD;  // bool 
	constexpr uint32_t m_bLoop = 0xCE;  // bool 
	constexpr uint32_t m_bLockWhenWaning = 0xCF;  // bool 
}

// Offset: 0x7ffe21f077e0 
// N. Class: 334 
// Fields: 6 
namespace BlendItem_t
{
	constexpr uint32_t m_tags = 0x0;  // CUtlVector< TagSpan_t > 
	constexpr uint32_t m_pChild = 0x18;  // CAnimUpdateNodeRef 
	constexpr uint32_t m_hSequence = 0x28;  // HSequence 
	constexpr uint32_t m_vPos = 0x2C;  // Vector2D 
	constexpr uint32_t m_flDuration = 0x34;  // float32 
	constexpr uint32_t m_bUseCustomDuration = 0x38;  // bool 
}

// Offset: 0x7ffe21f07920 
// N. Class: 335 
// Fields: 15 
namespace CBlend2DUpdateNode
{
	constexpr uint32_t m_items = 0x60;  // CUtlVector< BlendItem_t > 
	constexpr uint32_t m_tags = 0x78;  // CUtlVector< TagSpan_t > 
	constexpr uint32_t m_paramSpans = 0x90;  // CParamSpanUpdater 
	constexpr uint32_t m_nodeItemIndices = 0xA8;  // CUtlVector< int32 > 
	constexpr uint32_t m_damping = 0xC0;  // CAnimInputDamping 
	constexpr uint32_t m_blendSourceX = 0xD0;  // AnimValueSource 
	constexpr uint32_t m_paramX = 0xD4;  // CAnimParamHandle 
	constexpr uint32_t m_blendSourceY = 0xD8;  // AnimValueSource 
	constexpr uint32_t m_paramY = 0xDC;  // CAnimParamHandle 
	constexpr uint32_t m_eBlendMode = 0xE0;  // Blend2DMode 
	constexpr uint32_t m_playbackSpeed = 0xE4;  // float32 
	constexpr uint32_t m_bLoop = 0xE8;  // bool 
	constexpr uint32_t m_bLockBlendOnReset = 0xE9;  // bool 
	constexpr uint32_t m_bLockWhenWaning = 0xEA;  // bool 
	constexpr uint32_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB;  // bool 
}

// Offset: 0x7ffe21f177c0 
// N. Class: 336 
// Fields: 7 
namespace CBoneMaskUpdateNode
{
	constexpr uint32_t m_nWeightListIndex = 0x8C;  // int32 
	constexpr uint32_t m_flRootMotionBlend = 0x90;  // float32 
	constexpr uint32_t m_blendSpace = 0x94;  // BoneMaskBlendSpace 
	constexpr uint32_t m_footMotionTiming = 0x98;  // BinaryNodeChildOption 
	constexpr uint32_t m_bUseBlendScale = 0x9C;  // bool 
	constexpr uint32_t m_blendValueSource = 0xA0;  // AnimValueSource 
	constexpr uint32_t m_hBlendParameter = 0xA4;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f07e80 
// N. Class: 337 
// Fields: 10 
namespace CChoiceUpdateNode
{
	constexpr uint32_t m_children = 0x58;  // CUtlVector< CAnimUpdateNodeRef > 
	constexpr uint32_t m_weights = 0x70;  // CUtlVector< float32 > 
	constexpr uint32_t m_blendTimes = 0x88;  // CUtlVector< float32 > 
	constexpr uint32_t m_choiceMethod = 0xA0;  // ChoiceMethod 
	constexpr uint32_t m_choiceChangeMethod = 0xA4;  // ChoiceChangeMethod 
	constexpr uint32_t m_blendMethod = 0xA8;  // ChoiceBlendMethod 
	constexpr uint32_t m_blendTime = 0xAC;  // float32 
	constexpr uint32_t m_bCrossFade = 0xB0;  // bool 
	constexpr uint32_t m_bResetChosen = 0xB1;  // bool 
	constexpr uint32_t m_bDontResetSameSelection = 0xB2;  // bool 
}

// Offset: 0x7ffe21f18750 
// N. Class: 338 
// Fields: 2 
namespace CDirectPlaybackTagData
{
	constexpr uint32_t m_sequenceName = 0x0;  // CUtlString 
	constexpr uint32_t m_tags = 0x8;  // CUtlVector< TagSpan_t > 
}

// Offset: 0x7ffe21f082a0 
// N. Class: 339 
// Fields: 2 
namespace TraceSettings_t
{
	constexpr uint32_t m_flTraceHeight = 0x0;  // float32 
	constexpr uint32_t m_flTraceRadius = 0x4;  // float32 
}

// Offset: 0x7ffe21f08360 
// N. Class: 340 
// Fields: 10 
namespace FootFixedSettings
{
	constexpr uint32_t m_traceSettings = 0x0;  // TraceSettings_t 
	constexpr uint32_t m_vFootBaseBindPosePositionMS = 0x10;  // VectorAligned 
	constexpr uint32_t m_flFootBaseLength = 0x20;  // float32 
	constexpr uint32_t m_flMaxRotationLeft = 0x24;  // float32 
	constexpr uint32_t m_flMaxRotationRight = 0x28;  // float32 
	constexpr uint32_t m_footstepLandedTagIndex = 0x2C;  // int32 
	constexpr uint32_t m_bEnableTracing = 0x30;  // bool 
	constexpr uint32_t m_flTraceAngleBlend = 0x34;  // float32 
	constexpr uint32_t m_nDisableTagIndex = 0x38;  // int32 
	constexpr uint32_t m_nFootIndex = 0x3C;  // int32 
}

// Offset: 0x7ffe21f08e50 
// N. Class: 341 
// Fields: 3 
namespace FootStepTrigger
{
	constexpr uint32_t m_tags = 0x0;  // CUtlVector< int32 > 
	constexpr uint32_t m_nFootIndex = 0x18;  // int32 
	constexpr uint32_t m_triggerPhase = 0x1C;  // StepPhase 
}

// Offset: 0x0 
// N. Class: 342 
// Fields: 0 
namespace CLeafUpdateNode
{
}

// Offset: 0x7ffe21f1a1c0 
// N. Class: 343 
// Fields: 10 
namespace CLeanMatrixUpdateNode
{
	constexpr uint32_t m_frameCorners = 0x5C;  // int32[3][3] 
	constexpr uint32_t m_poses = 0x80;  // CPoseHandle[9] 
	constexpr uint32_t m_damping = 0xA8;  // CAnimInputDamping 
	constexpr uint32_t m_blendSource = 0xB8;  // AnimVectorSource 
	constexpr uint32_t m_paramIndex = 0xBC;  // CAnimParamHandle 
	constexpr uint32_t m_verticalAxis = 0xC0;  // Vector 
	constexpr uint32_t m_horizontalAxis = 0xCC;  // Vector 
	constexpr uint32_t m_hSequence = 0xD8;  // HSequence 
	constexpr uint32_t m_flMaxValue = 0xDC;  // float32 
	constexpr uint32_t m_nSequenceMaxFrame = 0xE0;  // int32 
}

// Offset: 0x7ffe21f1a8d8 
// N. Class: 344 
// Fields: 1 
namespace CMotionGraphUpdateNode
{
	constexpr uint32_t m_pMotionGraph = 0x58;  // CSmartPtr< CMotionGraph > 
}

// Offset: 0x7ffe21f1ac10 
// N. Class: 345 
// Fields: 23 
namespace CMotionMatchingUpdateNode
{
	constexpr uint32_t m_dataSet = 0x58;  // CMotionDataSet 
	constexpr uint32_t m_metrics = 0x78;  // CUtlVector< CSmartPtr< CMotionMetricEvaluator > > 
	constexpr uint32_t m_weights = 0x90;  // CUtlVector< float32 > 
	constexpr uint32_t m_bSearchEveryTick = 0xE0;  // bool 
	constexpr uint32_t m_flSearchInterval = 0xE4;  // float32 
	constexpr uint32_t m_bSearchWhenClipEnds = 0xE8;  // bool 
	constexpr uint32_t m_bSearchWhenGoalChanges = 0xE9;  // bool 
	constexpr uint32_t m_blendCurve = 0xEC;  // CBlendCurve 
	constexpr uint32_t m_flSampleRate = 0xF4;  // float32 
	constexpr uint32_t m_flBlendTime = 0xF8;  // float32 
	constexpr uint32_t m_bLockClipWhenWaning = 0xFC;  // bool 
	constexpr uint32_t m_flSelectionThreshold = 0x100;  // float32 
	constexpr uint32_t m_flReselectionTimeWindow = 0x104;  // float32 
	constexpr uint32_t m_bEnableRotationCorrection = 0x108;  // bool 
	constexpr uint32_t m_bGoalAssist = 0x109;  // bool 
	constexpr uint32_t m_flGoalAssistDistance = 0x10C;  // float32 
	constexpr uint32_t m_flGoalAssistTolerance = 0x110;  // float32 
	constexpr uint32_t m_distanceScale_Damping = 0x118;  // CAnimInputDamping 
	constexpr uint32_t m_flDistanceScale_OuterRadius = 0x128;  // float32 
	constexpr uint32_t m_flDistanceScale_InnerRadius = 0x12C;  // float32 
	constexpr uint32_t m_flDistanceScale_MaxScale = 0x130;  // float32 
	constexpr uint32_t m_flDistanceScale_MinScale = 0x134;  // float32 
	constexpr uint32_t m_bEnableDistanceScaling = 0x138;  // bool 
}

// Offset: 0x7ffe21f09a40 
// N. Class: 346 
// Fields: 10 
namespace CSelectorUpdateNode
{
	constexpr uint32_t m_children = 0x58;  // CUtlVector< CAnimUpdateNodeRef > 
	constexpr uint32_t m_tags = 0x70;  // CUtlVector< int8 > 
	constexpr uint32_t m_blendCurve = 0x8C;  // CBlendCurve 
	constexpr uint32_t m_flBlendTime = 0x94;  // CAnimValue< float32 > 
	constexpr uint32_t m_hParameter = 0x9C;  // CAnimParamHandle 
	constexpr uint32_t m_nTagIndex = 0xA0;  // int32 
	constexpr uint32_t m_eTagBehavior = 0xA4;  // SelectorTagBehavior_t 
	constexpr uint32_t m_bResetOnChange = 0xA8;  // bool 
	constexpr uint32_t m_bLockWhenWaning = 0xA9;  // bool 
	constexpr uint32_t m_bSyncCyclesOnChange = 0xAA;  // bool 
}

// Offset: 0x7ffe21f1c440 
// N. Class: 347 
// Fields: 2 
namespace CSequenceUpdateNodeBase
{
	constexpr uint32_t m_playbackSpeed = 0x64;  // float32 
	constexpr uint32_t m_bLoop = 0x68;  // bool 
}

// Offset: 0x7ffe21f1c510 
// N. Class: 348 
// Fields: 4 
namespace CSequenceUpdateNode
{
	constexpr uint32_t m_hSequence = 0x70;  // HSequence 
	constexpr uint32_t m_duration = 0x74;  // float32 
	constexpr uint32_t m_paramSpans = 0x78;  // CParamSpanUpdater 
	constexpr uint32_t m_tags = 0x90;  // CUtlVector< TagSpan_t > 
}

// Offset: 0x7ffe21f1c620 
// N. Class: 349 
// Fields: 4 
namespace CSingleFrameUpdateNode
{
	constexpr uint32_t m_actions = 0x58;  // CUtlVector< CSmartPtr< CAnimActionUpdater > > 
	constexpr uint32_t m_hPoseCacheHandle = 0x70;  // CPoseHandle 
	constexpr uint32_t m_hSequence = 0x74;  // HSequence 
	constexpr uint32_t m_flCycle = 0x78;  // float32 
}

// Offset: 0x7ffe21f1cbe0 
// N. Class: 350 
// Fields: 2 
namespace CSolveIKTargetHandle_t
{
	constexpr uint32_t m_positionHandle = 0x0;  // CAnimParamHandle 
	constexpr uint32_t m_orientationHandle = 0x2;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f09ed0 
// N. Class: 351 
// Fields: 2 
namespace StanceInfo_t
{
	constexpr uint32_t m_vPosition = 0x0;  // Vector 
	constexpr uint32_t m_flDirection = 0xC;  // float32 
}

// Offset: 0x7ffe21f0a4f0 
// N. Class: 352 
// Fields: 5 
namespace CStateNodeTransitionData
{
	constexpr uint32_t m_curve = 0x0;  // CBlendCurve 
	constexpr uint32_t m_blendDuration = 0x8;  // CAnimValue< float32 > 
	constexpr uint32_t m_resetCycleValue = 0x10;  // CAnimValue< float32 > 
	constexpr uint32_t m_bReset = 0x0;  // bitfield:1 
	constexpr uint32_t m_resetCycleOption = 0x0;  // bitfield:3 
}

// Offset: 0x7ffe21f0a2a0 
// N. Class: 353 
// Fields: 3 
namespace CStateNodeStateData
{
	constexpr uint32_t m_pChild = 0x0;  // CAnimUpdateNodeRef 
	constexpr uint32_t m_bExclusiveRootMotion = 0x0;  // bitfield:1 
	constexpr uint32_t m_bExclusiveRootMotionFirstFrame = 0x0;  // bitfield:1 
}

// Offset: 0x7ffe21f0a380 
// N. Class: 354 
// Fields: 5 
namespace CStateMachineUpdateNode
{
	constexpr uint32_t m_stateMachine = 0x68;  // CAnimStateMachineUpdater 
	constexpr uint32_t m_stateData = 0xC0;  // CUtlVector< CStateNodeStateData > 
	constexpr uint32_t m_transitionData = 0xD8;  // CUtlVector< CStateNodeTransitionData > 
	constexpr uint32_t m_bBlockWaningTags = 0xF4;  // bool 
	constexpr uint32_t m_bLockStateWhenWaning = 0xF5;  // bool 
}

// Offset: 0x7ffe21f1d880 
// N. Class: 355 
// Fields: 4 
namespace CSubtractUpdateNode
{
	constexpr uint32_t m_footMotionTiming = 0x8C;  // BinaryNodeChildOption 
	constexpr uint32_t m_bApplyToFootMotion = 0x90;  // bool 
	constexpr uint32_t m_bApplyChannelsSeparately = 0x91;  // bool 
	constexpr uint32_t m_bUseModelSpace = 0x92;  // bool 
}

// Offset: 0x7ffe21f1db90 
// N. Class: 356 
// Fields: 3 
namespace CTargetSelectorUpdateNode
{
	constexpr uint32_t m_children = 0x58;  // CUtlVector< CAnimUpdateNodeRef > 
	constexpr uint32_t m_hPositionParameter = 0x74;  // CAnimParamHandle 
	constexpr uint32_t m_hFacePositionParameter = 0x76;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f0a750 
// N. Class: 357 
// Fields: 15 
namespace TwoBoneIKSettings_t
{
	constexpr uint32_t m_endEffectorType = 0x0;  // IkEndEffectorType 
	constexpr uint32_t m_endEffectorAttachment = 0x10;  // CAnimAttachment 
	constexpr uint32_t m_targetType = 0x90;  // IkTargetType 
	constexpr uint32_t m_targetAttachment = 0xA0;  // CAnimAttachment 
	constexpr uint32_t m_targetBoneIndex = 0x120;  // int32 
	constexpr uint32_t m_hPositionParam = 0x124;  // CAnimParamHandle 
	constexpr uint32_t m_hRotationParam = 0x126;  // CAnimParamHandle 
	constexpr uint32_t m_bAlwaysUseFallbackHinge = 0x128;  // bool 
	constexpr uint32_t m_vLsFallbackHingeAxis = 0x130;  // VectorAligned 
	constexpr uint32_t m_nFixedBoneIndex = 0x140;  // int32 
	constexpr uint32_t m_nMiddleBoneIndex = 0x144;  // int32 
	constexpr uint32_t m_nEndBoneIndex = 0x148;  // int32 
	constexpr uint32_t m_bMatchTargetOrientation = 0x14C;  // bool 
	constexpr uint32_t m_bConstrainTwist = 0x14D;  // bool 
	constexpr uint32_t m_flMaxTwist = 0x150;  // float32 
}

// Offset: 0x7ffe21f1e598 
// N. Class: 358 
// Fields: 1 
namespace CUnaryUpdateNode
{
	constexpr uint32_t m_pChildNode = 0x58;  // CAnimUpdateNodeRef 
}

// Offset: 0x7ffe21f1e650 
// N. Class: 359 
// Fields: 5 
namespace CWayPointHelperUpdateNode
{
	constexpr uint32_t m_flStartCycle = 0x6C;  // float32 
	constexpr uint32_t m_flEndCycle = 0x70;  // float32 
	constexpr uint32_t m_bOnlyGoals = 0x74;  // bool 
	constexpr uint32_t m_bPreventOvershoot = 0x75;  // bool 
	constexpr uint32_t m_bPreventUndershoot = 0x76;  // bool 
}

// Offset: 0x0 
// N. Class: 360 
// Fields: 0 
namespace CZeroPoseUpdateNode
{
}

// Offset: 0x7ffe21f1ecd0 
// N. Class: 361 
// Fields: 2 
namespace ConfigIndex
{
	constexpr uint32_t m_nGroup = 0x0;  // uint16 
	constexpr uint32_t m_nConfig = 0x2;  // uint16 
}

// Offset: 0x7ffe21f1ed90 
// N. Class: 362 
// Fields: 2 
namespace MotionIndex
{
	constexpr uint32_t m_nGroup = 0x0;  // uint16 
	constexpr uint32_t m_nMotion = 0x2;  // uint16 
}

// Offset: 0x7ffe21f0aec0 
// N. Class: 363 
// Fields: 3 
namespace CAnimationGraphVisualizerPrimitiveBase
{
	constexpr uint32_t m_Type = 0x8;  // CAnimationGraphVisualizerPrimitiveType 
	constexpr uint32_t m_OwningAnimNodePaths = 0xC;  // AnimNodeID[11] 
	constexpr uint32_t m_nOwningAnimNodePathCount = 0x38;  // int32 
}

// Offset: 0x7ffe21f0afa0 
// N. Class: 364 
// Fields: 3 
namespace CAnimationGraphVisualizerText
{
	constexpr uint32_t m_vWsPosition = 0x40;  // VectorAligned 
	constexpr uint32_t m_Color = 0x50;  // Color 
	constexpr uint32_t m_Text = 0x58;  // CUtlString 
}

// Offset: 0x7ffe21f0b090 
// N. Class: 365 
// Fields: 3 
namespace CAnimationGraphVisualizerSphere
{
	constexpr uint32_t m_vWsPosition = 0x40;  // VectorAligned 
	constexpr uint32_t m_flRadius = 0x50;  // float32 
	constexpr uint32_t m_Color = 0x54;  // Color 
}

// Offset: 0x7ffe21f0b180 
// N. Class: 366 
// Fields: 3 
namespace CAnimationGraphVisualizerLine
{
	constexpr uint32_t m_vWsPositionStart = 0x40;  // VectorAligned 
	constexpr uint32_t m_vWsPositionEnd = 0x50;  // VectorAligned 
	constexpr uint32_t m_Color = 0x60;  // Color 
}

// Offset: 0x7ffe21f0b270 
// N. Class: 367 
// Fields: 4 
namespace CAnimationGraphVisualizerPie
{
	constexpr uint32_t m_vWsCenter = 0x40;  // VectorAligned 
	constexpr uint32_t m_vWsStart = 0x50;  // VectorAligned 
	constexpr uint32_t m_vWsEnd = 0x60;  // VectorAligned 
	constexpr uint32_t m_Color = 0x70;  // Color 
}

// Offset: 0x7ffe21f0b380 
// N. Class: 368 
// Fields: 2 
namespace CAnimationGraphVisualizerAxis
{
	constexpr uint32_t m_xWsTransform = 0x40;  // CTransform 
	constexpr uint32_t m_flAxisSize = 0x60;  // float32 
}

// Offset: 0x7ffe21f1ef68 
// N. Class: 369 
// Fields: 1 
namespace IKBoneNameAndIndex_t
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 370 
// Fields: 0 
namespace CNmBlendTaskBase
{
}

// Offset: 0x0 
// N. Class: 371 
// Fields: 0 
namespace CNmBlendTask
{
}

// Offset: 0x0 
// N. Class: 372 
// Fields: 0 
namespace CNmOverlayBlendTask
{
}

// Offset: 0x0 
// N. Class: 373 
// Fields: 0 
namespace CNmAdditiveBlendTask
{
}

// Offset: 0x0 
// N. Class: 374 
// Fields: 0 
namespace CNmModelSpaceBlendTask
{
}

// Offset: 0x0 
// N. Class: 375 
// Fields: 0 
namespace CNmCachedPoseWriteTask
{
}

// Offset: 0x0 
// N. Class: 376 
// Fields: 0 
namespace CNmCachedPoseReadTask
{
}

// Offset: 0x0 
// N. Class: 377 
// Fields: 0 
namespace CNmReferencePoseTask
{
}

// Offset: 0x0 
// N. Class: 378 
// Fields: 0 
namespace CNmZeroPoseTask
{
}

// Offset: 0x0 
// N. Class: 379 
// Fields: 0 
namespace CNmSampleTask
{
}

// Offset: 0x7ffe21f431f0 
// N. Class: 380 
// Fields: 3 
namespace CNmParameterizedBlendNode::CDefinition
{
	constexpr uint32_t m_sourceNodeIndices = 0x10;  // CUtlVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_nInputParameterValueNodeIdx = 0x38;  // int16 
	constexpr uint32_t m_bAllowLooping = 0x3A;  // bool 
}

// Offset: 0x7ffe21f43478 
// N. Class: 381 
// Fields: 1 
namespace CNmBlend1DNode::CDefinition
{
	constexpr uint32_t m_parameterization = 0x40;  // CNmParameterizedBlendNode::Parameterization_t 
}

// Offset: 0x0 
// N. Class: 382 
// Fields: 0 
namespace CNmVelocityBlendNode::CDefinition
{
}

// Offset: 0x7ffe21f435c0 
// N. Class: 383 
// Fields: 7 
namespace CNmBlend2DNode::CDefinition
{
	constexpr uint32_t m_sourceNodeIndices = 0x10;  // CUtlVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_nInputParameterNodeIdx0 = 0x38;  // int16 
	constexpr uint32_t m_nInputParameterNodeIdx1 = 0x3A;  // int16 
	constexpr uint32_t m_values = 0x40;  // CUtlVectorFixedGrowable< Vector2D, 10 > 
	constexpr uint32_t m_indices = 0xA8;  // CUtlVectorFixedGrowable< uint8, 30 > 
	constexpr uint32_t m_hullIndices = 0xE0;  // CUtlVectorFixedGrowable< uint8, 10 > 
	constexpr uint32_t m_bAllowLooping = 0x108;  // bool 
}

// Offset: 0x7ffe21f43728 
// N. Class: 384 
// Fields: 1 
namespace CNmBoneMaskNode::CDefinition
{
	constexpr uint32_t m_boneMaskID = 0x10;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f437d8 
// N. Class: 385 
// Fields: 1 
namespace CNmFixedWeightBoneMaskNode::CDefinition
{
	constexpr uint32_t m_flBoneWeight = 0x10;  // float32 
}

// Offset: 0x7ffe21f43890 
// N. Class: 386 
// Fields: 3 
namespace CNmBoneMaskBlendNode::CDefinition
{
	constexpr uint32_t m_nSourceMaskNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nTargetMaskNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_nBlendWeightValueNodeIdx = 0x14;  // int16 
}

// Offset: 0x7ffe21f43980 
// N. Class: 387 
// Fields: 6 
namespace CNmBoneMaskSelectorNode::CDefinition
{
	constexpr uint32_t m_defaultMaskNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_parameterValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_switchDynamically = 0x14;  // bool 
	constexpr uint32_t m_maskNodeIndices = 0x18;  // CUtlVectorFixedGrowable< int16, 7 > 
	constexpr uint32_t m_parameterValues = 0x40;  // CUtlVectorFixedGrowable< CGlobalSymbol, 7 > 
	constexpr uint32_t m_flBlendTimeSeconds = 0x90;  // float32 
}

// Offset: 0x7ffe21f43ac8 
// N. Class: 388 
// Fields: 1 
namespace CNmAndNode::CDefinition
{
	constexpr uint32_t m_conditionNodeIndices = 0x10;  // CUtlLeanVectorFixedGrowable< int16, 4 > 
}

// Offset: 0x7ffe21f43b78 
// N. Class: 389 
// Fields: 1 
namespace CNmOrNode::CDefinition
{
	constexpr uint32_t m_conditionNodeIndices = 0x10;  // CUtlLeanVectorFixedGrowable< int16, 4 > 
}

// Offset: 0x7ffe21f43c28 
// N. Class: 390 
// Fields: 1 
namespace CNmNotNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f3ea60 
// N. Class: 391 
// Fields: 2 
namespace CNmCachedBoolNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_mode = 0x14;  // NmCachedValueMode_t 
}

// Offset: 0x7ffe21f3eb30 
// N. Class: 392 
// Fields: 2 
namespace CNmCachedIDNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_mode = 0x14;  // NmCachedValueMode_t 
}

// Offset: 0x7ffe21f3ec00 
// N. Class: 393 
// Fields: 2 
namespace CNmCachedFloatNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_mode = 0x14;  // NmCachedValueMode_t 
}

// Offset: 0x7ffe21f3ecd0 
// N. Class: 394 
// Fields: 2 
namespace CNmCachedVectorNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_mode = 0x14;  // NmCachedValueMode_t 
}

// Offset: 0x7ffe21f3eda0 
// N. Class: 395 
// Fields: 2 
namespace CNmCachedTargetNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_mode = 0x14;  // NmCachedValueMode_t 
}

// Offset: 0x7ffe21f43cd8 
// N. Class: 396 
// Fields: 1 
namespace CNmChildGraphNode::CDefinition
{
	constexpr uint32_t m_nChildGraphIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f43d90 
// N. Class: 397 
// Fields: 5 
namespace CNmClipNode::CDefinition
{
	constexpr uint32_t m_nPlayInReverseValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nResetTimeValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_bSampleRootMotion = 0x14;  // bool 
	constexpr uint32_t m_bAllowLooping = 0x15;  // bool 
	constexpr uint32_t m_nDataSlotIdx = 0x16;  // int16 
}

// Offset: 0x7ffe21f43f30 
// N. Class: 398 
// Fields: 1 
namespace CNmConstBoolNode::CDefinition
{
	constexpr uint32_t m_bValue = 0x10;  // bool 
}

// Offset: 0x7ffe21f43fd8 
// N. Class: 399 
// Fields: 1 
namespace CNmConstIDNode::CDefinition
{
	constexpr uint32_t m_value = 0x10;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f44088 
// N. Class: 400 
// Fields: 1 
namespace CNmConstFloatNode::CDefinition
{
	constexpr uint32_t m_flValue = 0x10;  // float32 
}

// Offset: 0x7ffe21f44138 
// N. Class: 401 
// Fields: 1 
namespace CNmConstVectorNode::CDefinition
{
	constexpr uint32_t m_value = 0x10;  // Vector 
}

// Offset: 0x7ffe21f441e8 
// N. Class: 402 
// Fields: 1 
namespace CNmConstTargetNode::CDefinition
{
	constexpr uint32_t m_value = 0x10;  // CNmTarget 
}

// Offset: 0x0 
// N. Class: 403 
// Fields: 0 
namespace CNmControlParameterBoolNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 404 
// Fields: 0 
namespace CNmControlParameterIDNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 405 
// Fields: 0 
namespace CNmControlParameterFloatNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 406 
// Fields: 0 
namespace CNmControlParameterVectorNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 407 
// Fields: 0 
namespace CNmControlParameterTargetNode::CDefinition
{
}

// Offset: 0x7ffe21f44398 
// N. Class: 408 
// Fields: 1 
namespace CNmVirtualParameterBoolNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f44448 
// N. Class: 409 
// Fields: 1 
namespace CNmVirtualParameterIDNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f444f8 
// N. Class: 410 
// Fields: 1 
namespace CNmVirtualParameterFloatNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f445a8 
// N. Class: 411 
// Fields: 1 
namespace CNmVirtualParameterVectorNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f44658 
// N. Class: 412 
// Fields: 1 
namespace CNmVirtualParameterTargetNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f44708 
// N. Class: 413 
// Fields: 1 
namespace CNmVirtualParameterBoneMaskNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x0 
// N. Class: 414 
// Fields: 0 
namespace CNmExternalGraphNode::CDefinition
{
}

// Offset: 0x7ffe21f3ef00 
// N. Class: 415 
// Fields: 3 
namespace CNmIDEventConditionNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
	constexpr uint32_t m_eventIDs = 0x18;  // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > 
}

// Offset: 0x7ffe21f3eff0 
// N. Class: 416 
// Fields: 3 
namespace CNmIDEventNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
	constexpr uint32_t m_defaultValue = 0x18;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f3f0e0 
// N. Class: 417 
// Fields: 3 
namespace CNmIDEventPercentageThroughNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
	constexpr uint32_t m_eventID = 0x18;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f3f290 
// N. Class: 418 
// Fields: 3 
namespace CNmStateEventConditionNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
	constexpr uint32_t m_conditions = 0x18;  // CUtlVectorFixedGrowable< CNmStateEventConditionNode::Condition_t, 5 > 
}

// Offset: 0x7ffe21f3f380 
// N. Class: 419 
// Fields: 3 
namespace CNmFootEventConditionNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_phaseCondition = 0x12;  // NmFootPhaseCondition_t 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
}

// Offset: 0x7ffe21f3f470 
// N. Class: 420 
// Fields: 3 
namespace CNmFootstepEventPercentageThroughNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_phaseCondition = 0x12;  // NmFootPhaseCondition_t 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
}

// Offset: 0x7ffe21f3f560 
// N. Class: 421 
// Fields: 2 
namespace CNmFootstepEventIDNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_eventConditionRules = 0x14;  // CNmBitFlags 
}

// Offset: 0x7ffe21f3f630 
// N. Class: 422 
// Fields: 3 
namespace CNmSyncEventIndexConditionNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_triggerMode = 0x12;  // CNmSyncEventIndexConditionNode::TriggerMode_t 
	constexpr uint32_t m_syncEventIdx = 0x14;  // int32 
}

// Offset: 0x7ffe21f3f718 
// N. Class: 423 
// Fields: 1 
namespace CNmCurrentSyncEventIDNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f3f7c8 
// N. Class: 424 
// Fields: 1 
namespace CNmCurrentSyncEventIndexNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f3f878 
// N. Class: 425 
// Fields: 1 
namespace CNmCurrentSyncEventPercentageThroughNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f3f930 
// N. Class: 426 
// Fields: 4 
namespace CNmTransitionEventConditionNode::CDefinition
{
	constexpr uint32_t m_requireRuleID = 0x10;  // CGlobalSymbol 
	constexpr uint32_t m_eventConditionRules = 0x18;  // CNmBitFlags 
	constexpr uint32_t m_nSourceStateNodeIdx = 0x1C;  // int16 
	constexpr uint32_t m_ruleCondition = 0x1E;  // NmTransitionRuleCondition_t 
}

// Offset: 0x7ffe21f40290 
// N. Class: 427 
// Fields: 3 
namespace CNmFloatRemapNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_inputRange = 0x14;  // CNmFloatRemapNode::RemapRange_t 
	constexpr uint32_t m_outputRange = 0x1C;  // CNmFloatRemapNode::RemapRange_t 
}

// Offset: 0x7ffe21f40380 
// N. Class: 428 
// Fields: 2 
namespace CNmFloatClampNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_clampRange = 0x14;  // Range_t 
}

// Offset: 0x7ffe21f40448 
// N. Class: 429 
// Fields: 1 
namespace CNmFloatAbsNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f40500 
// N. Class: 430 
// Fields: 5 
namespace CNmFloatEaseNode::CDefinition
{
	constexpr uint32_t m_flEaseTime = 0x10;  // float32 
	constexpr uint32_t m_flStartValue = 0x14;  // float32 
	constexpr uint32_t m_nInputValueNodeIdx = 0x18;  // int16 
	constexpr uint32_t m_easingOp = 0x1A;  // NmEasingOperation_t 
	constexpr uint32_t m_bUseStartValue = 0x1B;  // bool 
}

// Offset: 0x7ffe21f40630 
// N. Class: 431 
// Fields: 2 
namespace CNmFloatCurveNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_curve = 0x18;  // CPiecewiseCurve 
}

// Offset: 0x7ffe21f3fab0 
// N. Class: 432 
// Fields: 5 
namespace CNmFloatMathNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdxA = 0x10;  // int16 
	constexpr uint32_t m_nInputValueNodeIdxB = 0x12;  // int16 
	constexpr uint32_t m_bReturnAbsoluteResult = 0x14;  // bool 
	constexpr uint32_t m_operator = 0x15;  // CNmFloatMathNode::Operator_t 
	constexpr uint32_t m_flValueB = 0x18;  // float32 
}

// Offset: 0x7ffe21f3fbe0 
// N. Class: 433 
// Fields: 5 
namespace CNmFloatComparisonNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nComparandValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_comparison = 0x14;  // CNmFloatComparisonNode::Comparison_t 
	constexpr uint32_t m_flEpsilon = 0x18;  // float32 
	constexpr uint32_t m_flComparisonValue = 0x1C;  // float32 
}

// Offset: 0x7ffe21f3fd10 
// N. Class: 434 
// Fields: 3 
namespace CNmFloatRangeComparisonNode::CDefinition
{
	constexpr uint32_t m_range = 0x10;  // Range_t 
	constexpr uint32_t m_nInputValueNodeIdx = 0x18;  // int16 
	constexpr uint32_t m_bIsInclusiveCheck = 0x1A;  // bool 
}

// Offset: 0x7ffe21f3fe00 
// N. Class: 435 
// Fields: 3 
namespace CNmFloatSwitchNode::CDefinition
{
	constexpr uint32_t m_nSwitchValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nTrueValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_nFalseValueNodeIdx = 0x14;  // int16 
}

// Offset: 0x7ffe21f3fef0 
// N. Class: 436 
// Fields: 2 
namespace CNmFloatAngleMathNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_operation = 0x12;  // CNmFloatAngleMathNode::Operation_t 
}

// Offset: 0x7ffe21f3ffc0 
// N. Class: 437 
// Fields: 5 
namespace CNmFloatSelectorNode::CDefinition
{
	constexpr uint32_t m_conditionNodeIndices = 0x10;  // CUtlVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_values = 0x38;  // CUtlVectorFixedGrowable< float32, 5 > 
	constexpr uint32_t m_flDefaultValue = 0x68;  // float32 
	constexpr uint32_t m_flEaseTime = 0x6C;  // float32 
	constexpr uint32_t m_easingOp = 0x70;  // NmEasingOperation_t 
}

// Offset: 0x7ffe21f406d0 
// N. Class: 438 
// Fields: 3 
namespace CNmIDComparisonNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_comparison = 0x12;  // CNmIDComparisonNode::Comparison_t 
	constexpr uint32_t m_comparisionIDs = 0x18;  // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > 
}

// Offset: 0x7ffe21f407c0 
// N. Class: 439 
// Fields: 4 
namespace CNmIDToFloatNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_defaultValue = 0x14;  // float32 
	constexpr uint32_t m_IDs = 0x18;  // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > 
	constexpr uint32_t m_values = 0x48;  // CUtlLeanVectorFixedGrowable< float32, 5 > 
}

// Offset: 0x7ffe21f40a90 
// N. Class: 440 
// Fields: 3 
namespace CNmLayerBlendNode::CDefinition
{
	constexpr uint32_t m_nBaseNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_bOnlySampleBaseRootMotion = 0x12;  // bool 
	constexpr uint32_t m_layerDefinition = 0x18;  // CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > 
}

// Offset: 0x7ffe21f44a10 
// N. Class: 441 
// Fields: 5 
namespace CNmOrientationWarpNode::CDefinition
{
	constexpr uint32_t m_nClipReferenceNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nTargetValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_bIsOffsetNode = 0x14;  // bool 
	constexpr uint32_t m_bIsOffsetRelativeToCharacter = 0x15;  // bool 
	constexpr uint32_t m_samplingMode = 0x16;  // CNmRootMotionData::SamplingMode_t 
}

// Offset: 0x7ffe21f44bb0 
// N. Class: 442 
// Fields: 1 
namespace CNmPassthroughNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
}

// Offset: 0x0 
// N. Class: 443 
// Fields: 0 
namespace CNmZeroPoseNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 444 
// Fields: 0 
namespace CNmReferencePoseNode::CDefinition
{
}

// Offset: 0x7ffe21f44d80 
// N. Class: 445 
// Fields: 5 
namespace CNmAnimationPoseNode::CDefinition
{
	constexpr uint32_t m_nPoseTimeValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nDataSlotIdx = 0x12;  // int16 
	constexpr uint32_t m_inputTimeRemapRange = 0x14;  // Range_t 
	constexpr uint32_t m_flUserSpecifiedTime = 0x1C;  // float32 
	constexpr uint32_t m_bUseFramesAsInput = 0x20;  // bool 
}

// Offset: 0x7ffe21f40c40 
// N. Class: 446 
// Fields: 7 
namespace CNmRootMotionOverrideNode::CDefinition
{
	constexpr uint32_t m_desiredMovingVelocityNodeIdx = 0x18;  // int16 
	constexpr uint32_t m_desiredFacingDirectionNodeIdx = 0x1A;  // int16 
	constexpr uint32_t m_linearVelocityLimitNodeIdx = 0x1C;  // int16 
	constexpr uint32_t m_angularVelocityLimitNodeIdx = 0x1E;  // int16 
	constexpr uint32_t m_maxLinearVelocity = 0x20;  // float32 
	constexpr uint32_t m_maxAngularVelocityRadians = 0x24;  // float32 
	constexpr uint32_t m_overrideFlags = 0x28;  // CNmBitFlags 
}

// Offset: 0x7ffe21f45120 
// N. Class: 447 
// Fields: 2 
namespace CNmSelectorNode::CDefinition
{
	constexpr uint32_t m_optionNodeIndices = 0x10;  // CUtlLeanVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_conditionNodeIndices = 0x28;  // CUtlLeanVectorFixedGrowable< int16, 5 > 
}

// Offset: 0x7ffe21f44eb0 
// N. Class: 448 
// Fields: 2 
namespace CNmClipSelectorNode::CDefinition
{
	constexpr uint32_t m_optionNodeIndices = 0x10;  // CUtlLeanVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_conditionNodeIndices = 0x28;  // CUtlLeanVectorFixedGrowable< int16, 5 > 
}

// Offset: 0x7ffe21f44f80 
// N. Class: 449 
// Fields: 2 
namespace CNmParameterizedSelectorNode::CDefinition
{
	constexpr uint32_t m_optionNodeIndices = 0x10;  // CUtlLeanVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_parameterNodeIdx = 0x28;  // int16 
}

// Offset: 0x7ffe21f45050 
// N. Class: 450 
// Fields: 2 
namespace CNmParameterizedClipSelectorNode::CDefinition
{
	constexpr uint32_t m_optionNodeIndices = 0x10;  // CUtlLeanVectorFixedGrowable< int16, 5 > 
	constexpr uint32_t m_parameterNodeIdx = 0x28;  // int16 
}

// Offset: 0x7ffe21f45260 
// N. Class: 451 
// Fields: 2 
namespace CNmSpeedScaleBaseNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x18;  // int16 
	constexpr uint32_t m_flDefaultInputValue = 0x1C;  // float32 
}

// Offset: 0x0 
// N. Class: 452 
// Fields: 0 
namespace CNmSpeedScaleNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 453 
// Fields: 0 
namespace CNmDurationScaleNode::CDefinition
{
}

// Offset: 0x0 
// N. Class: 454 
// Fields: 0 
namespace CNmVelocityBasedSpeedScaleNode::CDefinition
{
}

// Offset: 0x7ffe21f45610 
// N. Class: 455 
// Fields: 10 
namespace CNmStateNode::CDefinition
{
	constexpr uint32_t m_nChildNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_entryEvents = 0x18;  // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > 
	constexpr uint32_t m_executeEvents = 0x38;  // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > 
	constexpr uint32_t m_exitEvents = 0x58;  // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > 
	constexpr uint32_t m_timedRemainingEvents = 0x78;  // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > 
	constexpr uint32_t m_timedElapsedEvents = 0x90;  // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > 
	constexpr uint32_t m_nLayerWeightNodeIdx = 0xA8;  // int16 
	constexpr uint32_t m_nLayerRootMotionWeightNodeIdx = 0xAA;  // int16 
	constexpr uint32_t m_nLayerBoneMaskNodeIdx = 0xAC;  // int16 
	constexpr uint32_t m_bIsOffState = 0xAE;  // bool 
}

// Offset: 0x7ffe21f40ec0 
// N. Class: 456 
// Fields: 3 
namespace CNmStateCompletedConditionNode::CDefinition
{
	constexpr uint32_t m_nSourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nTransitionDurationOverrideNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_flTransitionDurationSeconds = 0x14;  // float32 
}

// Offset: 0x7ffe21f40fb0 
// N. Class: 457 
// Fields: 5 
namespace CNmTimeConditionNode::CDefinition
{
	constexpr uint32_t m_sourceStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nInputValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_flComparand = 0x14;  // float32 
	constexpr uint32_t m_type = 0x18;  // CNmTimeConditionNode::ComparisonType_t 
	constexpr uint32_t m_operator = 0x19;  // CNmTimeConditionNode::Operator_t 
}

// Offset: 0x7ffe21f459c0 
// N. Class: 458 
// Fields: 2 
namespace CNmStateMachineNode::CDefinition
{
	constexpr uint32_t m_stateDefinitions = 0x10;  // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::StateDefinition_t, 5 > 
	constexpr uint32_t m_nDefaultStateIndex = 0x130;  // int16 
}

// Offset: 0x7ffe21f41120 
// N. Class: 459 
// Fields: 1 
namespace CNmIsTargetSetNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f411d0 
// N. Class: 460 
// Fields: 3 
namespace CNmTargetInfoNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_infoType = 0x14;  // CNmTargetInfoNode::Info_t 
	constexpr uint32_t m_bIsWorldSpaceTarget = 0x18;  // bool 
}

// Offset: 0x7ffe21f412c0 
// N. Class: 461 
// Fields: 2 
namespace CNmTargetPointNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_bIsWorldSpaceTarget = 0x12;  // bool 
}

// Offset: 0x7ffe21f41390 
// N. Class: 462 
// Fields: 4 
namespace CNmTargetOffsetNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_bIsBoneSpaceOffset = 0x12;  // bool 
	constexpr uint32_t m_rotationOffset = 0x20;  // Quaternion 
	constexpr uint32_t m_translationOffset = 0x30;  // Vector 
}

// Offset: 0x7ffe21f45a90 
// N. Class: 463 
// Fields: 9 
namespace CNmTargetWarpNode::CDefinition
{
	constexpr uint32_t m_nClipReferenceNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nTargetValueNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_samplingMode = 0x14;  // CNmRootMotionData::SamplingMode_t 
	constexpr uint32_t m_bAllowTargetUpdate = 0x15;  // bool 
	constexpr uint32_t m_flSamplingPositionErrorThresholdSq = 0x18;  // float32 
	constexpr uint32_t m_flMaxTangentLength = 0x1C;  // float32 
	constexpr uint32_t m_flLerpFallbackDistanceThreshold = 0x20;  // float32 
	constexpr uint32_t m_flTargetUpdateDistanceThreshold = 0x24;  // float32 
	constexpr uint32_t m_flTargetUpdateAngleThresholdRadians = 0x28;  // float32 
}

// Offset: 0x7ffe21f414e0 
// N. Class: 464 
// Fields: 11 
namespace CNmTransitionNode::CDefinition
{
	constexpr uint32_t m_nTargetStateNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_nDurationOverrideNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_syncEventOffsetOverrideNodeIdx = 0x14;  // int16 
	constexpr uint32_t m_startBoneMaskNodeIdx = 0x16;  // int16 
	constexpr uint32_t m_flDuration = 0x18;  // float32 
	constexpr uint32_t m_boneMaskBlendInTimePercentage = 0x1C;  // NmPercent_t 
	constexpr uint32_t m_syncEventOffset = 0x20;  // float32 
	constexpr uint32_t m_transitionOptions = 0x24;  // CNmBitFlags 
	constexpr uint32_t m_targetSyncIDNodeIdx = 0x28;  // int16 
	constexpr uint32_t m_blendWeightEasing = 0x2A;  // NmEasingOperation_t 
	constexpr uint32_t m_rootMotionBlend = 0x2B;  // NmRootMotionBlendMode_t 
}

// Offset: 0x7ffe21f41790 
// N. Class: 465 
// Fields: 2 
namespace CNmVectorInfoNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_desiredInfo = 0x12;  // CNmVectorInfoNode::Info_t 
}

// Offset: 0x7ffe21f41860 
// N. Class: 466 
// Fields: 4 
namespace CNmVectorCreateNode::CDefinition
{
	constexpr uint32_t m_inputVectorValueNodeIdx = 0x10;  // int16 
	constexpr uint32_t m_inputValueXNodeIdx = 0x12;  // int16 
	constexpr uint32_t m_inputValueYNodeIdx = 0x14;  // int16 
	constexpr uint32_t m_inputValueZNodeIdx = 0x16;  // int16 
}

// Offset: 0x7ffe21f41968 
// N. Class: 467 
// Fields: 1 
namespace CNmVectorNegateNode::CDefinition
{
	constexpr uint32_t m_nInputValueNodeIdx = 0x10;  // int16 
}

// Offset: 0x7ffe21f05610 
// N. Class: 468 
// Fields: 1 
namespace CAnimGraphNetworkSettings
{
	constexpr uint32_t m_bNetworkingEnabled = 0x20;  // bool 
}

// Offset: 0x7ffe21f0e3e8 
// N. Class: 469 
// Fields: 1 
namespace CActionComponentUpdater
{
	constexpr uint32_t m_actions = 0x30;  // CUtlVector< CSmartPtr< CAnimActionUpdater > > 
}

// Offset: 0x7ffe21f16ae0 
// N. Class: 470 
// Fields: 5 
namespace CAddUpdateNode
{
	constexpr uint32_t m_footMotionTiming = 0x8C;  // BinaryNodeChildOption 
	constexpr uint32_t m_bApplyToFootMotion = 0x90;  // bool 
	constexpr uint32_t m_bApplyChannelsSeparately = 0x91;  // bool 
	constexpr uint32_t m_bUseModelSpace = 0x92;  // bool 
	constexpr uint32_t m_bApplyScale = 0x93;  // bool 
}

// Offset: 0x7ffe21f16e10 
// N. Class: 471 
// Fields: 10 
namespace CAimCameraUpdateNode
{
	constexpr uint32_t m_hParameterPosition = 0x68;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterOrientation = 0x6A;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterSpineRotationWeight = 0x6C;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterPelvisOffset = 0x6E;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterUseIK = 0x70;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterCameraOnly = 0x72;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterWeaponDepenetrationDistance = 0x74;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterWeaponDepenetrationDelta = 0x76;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterCameraClearanceDistance = 0x78;  // CAnimParamHandle 
	constexpr uint32_t m_opFixedSettings = 0x80;  // AimCameraOpFixedSettings_t 
}

// Offset: 0x7ffe21f171e0 
// N. Class: 472 
// Fields: 6 
namespace CAimMatrixUpdateNode
{
	constexpr uint32_t m_opFixedSettings = 0x70;  // AimMatrixOpFixedSettings_t 
	constexpr uint32_t m_target = 0x158;  // AnimVectorSource 
	constexpr uint32_t m_paramIndex = 0x15C;  // CAnimParamHandle 
	constexpr uint32_t m_hSequence = 0x160;  // HSequence 
	constexpr uint32_t m_bResetChild = 0x164;  // bool 
	constexpr uint32_t m_bLockWhenWaning = 0x165;  // bool 
}

// Offset: 0x0 
// N. Class: 473 
// Fields: 0 
namespace CBindPoseUpdateNode
{
}

// Offset: 0x0 
// N. Class: 474 
// Fields: 0 
namespace CChoreoUpdateNode
{
}

// Offset: 0x7ffe21f17dc0 
// N. Class: 475 
// Fields: 2 
namespace CCycleControlUpdateNode
{
	constexpr uint32_t m_valueSource = 0x68;  // AnimValueSource 
	constexpr uint32_t m_paramIndex = 0x6C;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f18090 
// N. Class: 476 
// Fields: 5 
namespace CCycleControlClipUpdateNode
{
	constexpr uint32_t m_tags = 0x60;  // CUtlVector< TagSpan_t > 
	constexpr uint32_t m_hSequence = 0x7C;  // HSequence 
	constexpr uint32_t m_duration = 0x80;  // float32 
	constexpr uint32_t m_valueSource = 0x84;  // AnimValueSource 
	constexpr uint32_t m_paramIndex = 0x88;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f183c0 
// N. Class: 477 
// Fields: 8 
namespace CDirectionalBlendUpdateNode
{
	constexpr uint32_t m_hSequences = 0x5C;  // HSequence[8] 
	constexpr uint32_t m_damping = 0x80;  // CAnimInputDamping 
	constexpr uint32_t m_blendValueSource = 0x90;  // AnimValueSource 
	constexpr uint32_t m_paramIndex = 0x94;  // CAnimParamHandle 
	constexpr uint32_t m_playbackSpeed = 0x98;  // float32 
	constexpr uint32_t m_duration = 0x9C;  // float32 
	constexpr uint32_t m_bLoop = 0xA0;  // bool 
	constexpr uint32_t m_bLockBlendOnReset = 0xA1;  // bool 
}

// Offset: 0x7ffe21f18810 
// N. Class: 478 
// Fields: 3 
namespace CDirectPlaybackUpdateNode
{
	constexpr uint32_t m_bFinishEarly = 0x6C;  // bool 
	constexpr uint32_t m_bResetOnFinish = 0x6D;  // bool 
	constexpr uint32_t m_allTags = 0x70;  // CUtlVector< CDirectPlaybackTagData > 
}

// Offset: 0x7ffe21f18900 
// N. Class: 479 
// Fields: 13 
namespace CFollowPathUpdateNode
{
	constexpr uint32_t m_flBlendOutTime = 0x6C;  // float32 
	constexpr uint32_t m_bBlockNonPathMovement = 0x70;  // bool 
	constexpr uint32_t m_bStopFeetAtGoal = 0x71;  // bool 
	constexpr uint32_t m_bScaleSpeed = 0x72;  // bool 
	constexpr uint32_t m_flScale = 0x74;  // float32 
	constexpr uint32_t m_flMinAngle = 0x78;  // float32 
	constexpr uint32_t m_flMaxAngle = 0x7C;  // float32 
	constexpr uint32_t m_flSpeedScaleBlending = 0x80;  // float32 
	constexpr uint32_t m_turnDamping = 0x88;  // CAnimInputDamping 
	constexpr uint32_t m_facingTarget = 0x98;  // AnimValueSource 
	constexpr uint32_t m_hParam = 0x9C;  // CAnimParamHandle 
	constexpr uint32_t m_flTurnToFaceOffset = 0xA0;  // float32 
	constexpr uint32_t m_bTurnToFace = 0xA4;  // bool 
}

// Offset: 0x7ffe21f18d28 
// N. Class: 480 
// Fields: 1 
namespace CFollowAttachmentUpdateNode
{
	constexpr uint32_t m_opFixedData = 0x70;  // FollowAttachmentSettings_t 
}

// Offset: 0x7ffe21f18fe0 
// N. Class: 481 
// Fields: 3 
namespace CFollowTargetUpdateNode
{
	constexpr uint32_t m_opFixedData = 0x68;  // FollowTargetOpFixedSettings_t 
	constexpr uint32_t m_hParameterPosition = 0x80;  // CAnimParamHandle 
	constexpr uint32_t m_hParameterOrientation = 0x82;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f192d0 
// N. Class: 482 
// Fields: 9 
namespace CFootAdjustmentUpdateNode
{
	constexpr uint32_t m_clips = 0x70;  // CUtlVector< HSequence > 
	constexpr uint32_t m_hBasePoseCacheHandle = 0x88;  // CPoseHandle 
	constexpr uint32_t m_facingTarget = 0x8C;  // CAnimParamHandle 
	constexpr uint32_t m_flTurnTimeMin = 0x90;  // float32 
	constexpr uint32_t m_flTurnTimeMax = 0x94;  // float32 
	constexpr uint32_t m_flStepHeightMax = 0x98;  // float32 
	constexpr uint32_t m_flStepHeightMaxAngle = 0x9C;  // float32 
	constexpr uint32_t m_bResetChild = 0xA0;  // bool 
	constexpr uint32_t m_bAnimationDriven = 0xA1;  // bool 
}

// Offset: 0x7ffe21f08520 
// N. Class: 483 
// Fields: 20 
namespace CFootLockUpdateNode
{
	constexpr uint32_t m_opFixedSettings = 0x68;  // FootLockPoseOpFixedSettings 
	constexpr uint32_t m_footSettings = 0xD0;  // CUtlVector< FootFixedSettings > 
	constexpr uint32_t m_hipShiftDamping = 0xE8;  // CAnimInputDamping 
	constexpr uint32_t m_rootHeightDamping = 0xF8;  // CAnimInputDamping 
	constexpr uint32_t m_flStrideCurveScale = 0x108;  // float32 
	constexpr uint32_t m_flStrideCurveLimitScale = 0x10C;  // float32 
	constexpr uint32_t m_flStepHeightIncreaseScale = 0x110;  // float32 
	constexpr uint32_t m_flStepHeightDecreaseScale = 0x114;  // float32 
	constexpr uint32_t m_flHipShiftScale = 0x118;  // float32 
	constexpr uint32_t m_flBlendTime = 0x11C;  // float32 
	constexpr uint32_t m_flMaxRootHeightOffset = 0x120;  // float32 
	constexpr uint32_t m_flMinRootHeightOffset = 0x124;  // float32 
	constexpr uint32_t m_flTiltPlanePitchSpringStrength = 0x128;  // float32 
	constexpr uint32_t m_flTiltPlaneRollSpringStrength = 0x12C;  // float32 
	constexpr uint32_t m_bApplyFootRotationLimits = 0x130;  // bool 
	constexpr uint32_t m_bApplyHipShift = 0x131;  // bool 
	constexpr uint32_t m_bModulateStepHeight = 0x132;  // bool 
	constexpr uint32_t m_bResetChild = 0x133;  // bool 
	constexpr uint32_t m_bEnableVerticalCurvedPaths = 0x134;  // bool 
	constexpr uint32_t m_bEnableRootHeightDamping = 0x135;  // bool 
}

// Offset: 0x7ffe21f08af0 
// N. Class: 484 
// Fields: 4 
namespace CFootPinningUpdateNode
{
	constexpr uint32_t m_poseOpFixedData = 0x70;  // FootPinningPoseOpFixedData_t 
	constexpr uint32_t m_eTimingSource = 0xA0;  // FootPinningTimingSource 
	constexpr uint32_t m_params = 0xA8;  // CUtlVector< CAnimParamHandle > 
	constexpr uint32_t m_bResetChild = 0xC0;  // bool 
}

// Offset: 0x7ffe21f08f30 
// N. Class: 485 
// Fields: 2 
namespace CFootStepTriggerUpdateNode
{
	constexpr uint32_t m_triggers = 0x68;  // CUtlVector< FootStepTrigger > 
	constexpr uint32_t m_flTolerance = 0x84;  // float32 
}

// Offset: 0x7ffe21f19860 
// N. Class: 486 
// Fields: 8 
namespace CHitReactUpdateNode
{
	constexpr uint32_t m_opFixedSettings = 0x68;  // HitReactFixedSettings_t 
	constexpr uint32_t m_triggerParam = 0xB4;  // CAnimParamHandle 
	constexpr uint32_t m_hitBoneParam = 0xB6;  // CAnimParamHandle 
	constexpr uint32_t m_hitOffsetParam = 0xB8;  // CAnimParamHandle 
	constexpr uint32_t m_hitDirectionParam = 0xBA;  // CAnimParamHandle 
	constexpr uint32_t m_hitStrengthParam = 0xBC;  // CAnimParamHandle 
	constexpr uint32_t m_flMinDelayBetweenHits = 0xC0;  // float32 
	constexpr uint32_t m_bResetChild = 0xC4;  // bool 
}

// Offset: 0x0 
// N. Class: 487 
// Fields: 0 
namespace CInputStreamUpdateNode
{
}

// Offset: 0x7ffe21f19e78 
// N. Class: 488 
// Fields: 1 
namespace CJiggleBoneUpdateNode
{
	constexpr uint32_t m_opFixedData = 0x68;  // JiggleBoneSettingsList_t 
}

// Offset: 0x7ffe21f09250 
// N. Class: 489 
// Fields: 8 
namespace CJumpHelperUpdateNode
{
	constexpr uint32_t m_hTargetParam = 0xA8;  // CAnimParamHandle 
	constexpr uint32_t m_flOriginalJumpMovement = 0xAC;  // Vector 
	constexpr uint32_t m_flOriginalJumpDuration = 0xB8;  // float32 
	constexpr uint32_t m_flJumpStartCycle = 0xBC;  // float32 
	constexpr uint32_t m_flJumpEndCycle = 0xC0;  // float32 
	constexpr uint32_t m_eCorrectionMethod = 0xC4;  // JumpCorrectionMethod 
	constexpr uint32_t m_bTranslationAxis = 0xC8;  // bool[3] 
	constexpr uint32_t m_bScaleSpeed = 0xCB;  // bool 
}

// Offset: 0x7ffe21f1a590 
// N. Class: 490 
// Fields: 6 
namespace CLookAtUpdateNode
{
	constexpr uint32_t m_opFixedSettings = 0x70;  // LookAtOpFixedSettings_t 
	constexpr uint32_t m_target = 0x138;  // AnimVectorSource 
	constexpr uint32_t m_paramIndex = 0x13C;  // CAnimParamHandle 
	constexpr uint32_t m_weightParamIndex = 0x13E;  // CAnimParamHandle 
	constexpr uint32_t m_bResetChild = 0x140;  // bool 
	constexpr uint32_t m_bLockWhenWaning = 0x141;  // bool 
}

// Offset: 0x7ffe21f1b200 
// N. Class: 491 
// Fields: 12 
namespace CMoverUpdateNode
{
	constexpr uint32_t m_damping = 0x70;  // CAnimInputDamping 
	constexpr uint32_t m_facingTarget = 0x80;  // AnimValueSource 
	constexpr uint32_t m_hMoveVecParam = 0x84;  // CAnimParamHandle 
	constexpr uint32_t m_hMoveHeadingParam = 0x86;  // CAnimParamHandle 
	constexpr uint32_t m_hTurnToFaceParam = 0x88;  // CAnimParamHandle 
	constexpr uint32_t m_flTurnToFaceOffset = 0x8C;  // float32 
	constexpr uint32_t m_flTurnToFaceLimit = 0x90;  // float32 
	constexpr uint32_t m_bAdditive = 0x94;  // bool 
	constexpr uint32_t m_bApplyMovement = 0x95;  // bool 
	constexpr uint32_t m_bOrientMovement = 0x96;  // bool 
	constexpr uint32_t m_bApplyRotation = 0x97;  // bool 
	constexpr uint32_t m_bLimitOnly = 0x98;  // bool 
}

// Offset: 0x7ffe21f1b608 
// N. Class: 492 
// Fields: 1 
namespace CPairedSequenceUpdateNode
{
	constexpr uint32_t m_sPairedSequenceRole = 0x70;  // CGlobalSymbol 
}

// Offset: 0x7ffe21f1b8c0 
// N. Class: 493 
// Fields: 2 
namespace CPathHelperUpdateNode
{
	constexpr uint32_t m_flStoppingRadius = 0x68;  // float32 
	constexpr uint32_t m_flStoppingSpeedScale = 0x6C;  // float32 
}

// Offset: 0x7ffe21f1bb90 
// N. Class: 494 
// Fields: 2 
namespace COrientationWarpUpdateNode
{
	constexpr uint32_t m_hFacingPositionParameter = 0x6C;  // CAnimParamHandle 
	constexpr uint32_t m_turnDamping = 0x70;  // CAnimInputDamping 
}

// Offset: 0x7ffe21f1bee0 
// N. Class: 495 
// Fields: 2 
namespace CRagdollUpdateNode
{
	constexpr uint32_t m_nWeightListIndex = 0x68;  // int32 
	constexpr uint32_t m_poseControlMethod = 0x6C;  // RagdollPoseControl 
}

// Offset: 0x0 
// N. Class: 496 
// Fields: 0 
namespace CRootUpdateNode
{
}

// Offset: 0x7ffe21f1c928 
// N. Class: 497 
// Fields: 1 
namespace CSlowDownOnSlopesUpdateNode
{
	constexpr uint32_t m_flSlowDownStrength = 0x68;  // float32 
}

// Offset: 0x7ffe21f1cca0 
// N. Class: 498 
// Fields: 2 
namespace CSolveIKChainUpdateNode
{
	constexpr uint32_t m_targetHandles = 0x68;  // CUtlVector< CSolveIKTargetHandle_t > 
	constexpr uint32_t m_opFixedData = 0x80;  // SolveIKChainPoseOpFixedSettings_t 
}

// Offset: 0x7ffe21f1cfe8 
// N. Class: 499 
// Fields: 1 
namespace CSpeedScaleUpdateNode
{
	constexpr uint32_t m_paramIndex = 0x68;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f09f90 
// N. Class: 500 
// Fields: 4 
namespace CStanceOverrideUpdateNode
{
	constexpr uint32_t m_footStanceInfo = 0x68;  // CUtlVector< StanceInfo_t > 
	constexpr uint32_t m_pStanceSourceNode = 0x80;  // CAnimUpdateNodeRef 
	constexpr uint32_t m_hParameter = 0x90;  // CAnimParamHandle 
	constexpr uint32_t m_eMode = 0x94;  // StanceOverrideMode 
}

// Offset: 0x7ffe21f1d298 
// N. Class: 501 
// Fields: 1 
namespace CStanceScaleUpdateNode
{
	constexpr uint32_t m_hParam = 0x68;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f1d550 
// N. Class: 502 
// Fields: 5 
namespace CStopAtGoalUpdateNode
{
	constexpr uint32_t m_flOuterRadius = 0x6C;  // float32 
	constexpr uint32_t m_flInnerRadius = 0x70;  // float32 
	constexpr uint32_t m_flMaxScale = 0x74;  // float32 
	constexpr uint32_t m_flMinScale = 0x78;  // float32 
	constexpr uint32_t m_damping = 0x80;  // CAnimInputDamping 
}

// Offset: 0x7ffe21f1df00 
// N. Class: 503 
// Fields: 2 
namespace CTargetWarpUpdateNode
{
	constexpr uint32_t m_hPositionParameter = 0x6C;  // CAnimParamHandle 
	constexpr uint32_t m_hFacePositionParameter = 0x6E;  // CAnimParamHandle 
}

// Offset: 0x7ffe21f1e250 
// N. Class: 504 
// Fields: 6 
namespace CTurnHelperUpdateNode
{
	constexpr uint32_t m_facingTarget = 0x6C;  // AnimValueSource 
	constexpr uint32_t m_turnStartTimeOffset = 0x70;  // float32 
	constexpr uint32_t m_turnDuration = 0x74;  // float32 
	constexpr uint32_t m_bMatchChildDuration = 0x78;  // bool 
	constexpr uint32_t m_manualTurnOffset = 0x7C;  // float32 
	constexpr uint32_t m_bUseManualTurnOffset = 0x80;  // bool 
}

