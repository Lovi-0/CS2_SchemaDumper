// Schema offset: 0x26fac850200 
// Schema name: soundsystem.dll 
// Schema declared class: 73 

// Offset: 0x7ffe21899d60 
// N. Class: 0 
// Fields: 3 
namespace CSosGroupActionSchema
{
	constexpr uint32_t m_name = 0x8;  // CUtlString 
	constexpr uint32_t m_actionType = 0x10;  // ActionType_t 
	constexpr uint32_t m_actionInstanceType = 0x14;  // ActionType_t 
}

// Offset: 0x7ffe21899c70 
// N. Class: 1 
// Fields: 3 
namespace CSosGroupActionLimitSchema
{
	constexpr uint32_t m_nMaxCount = 0x18;  // int32 
	constexpr uint32_t m_nStopType = 0x1C;  // SosActionStopType_t 
	constexpr uint32_t m_nSortType = 0x20;  // SosActionSortType_t 
}

// Offset: 0x7ffe21899bb0 
// N. Class: 2 
// Fields: 1 
namespace CSosGroupActionTimeLimitSchema
{
	constexpr uint32_t m_flMaxDuration = 0x18;  // float32 
}

// Offset: 0x7ffe21899af0 
// N. Class: 3 
// Fields: 2 
namespace CSosGroupActionTimeBlockLimitSchema
{
	constexpr uint32_t m_nMaxCount = 0x18;  // int32 
	constexpr uint32_t m_flMaxDuration = 0x1C;  // float32 
}

// Offset: 0x7ffe21899990 
// N. Class: 4 
// Fields: 5 
namespace CSosGroupActionSetSoundeventParameterSchema
{
	constexpr uint32_t m_nMaxCount = 0x18;  // int32 
	constexpr uint32_t m_flMinValue = 0x1C;  // float32 
	constexpr uint32_t m_flMaxValue = 0x20;  // float32 
	constexpr uint32_t m_opvarName = 0x28;  // CUtlString 
	constexpr uint32_t m_nSortType = 0x30;  // SosActionSortType_t 
}

// Offset: 0x7ffe218997e0 
// N. Class: 5 
// Fields: 7 
namespace CSosGroupActionSoundeventClusterSchema
{
	constexpr uint32_t m_nMinNearby = 0x18;  // int32 
	constexpr uint32_t m_flClusterEpsilon = 0x1C;  // float32 
	constexpr uint32_t m_shouldPlayOpvar = 0x20;  // CUtlString 
	constexpr uint32_t m_shouldPlayClusterChild = 0x28;  // CUtlString 
	constexpr uint32_t m_clusterSizeOpvar = 0x30;  // CUtlString 
	constexpr uint32_t m_groupBoundingBoxMinsOpvar = 0x38;  // CUtlString 
	constexpr uint32_t m_groupBoundingBoxMaxsOpvar = 0x40;  // CUtlString 
}

// Offset: 0x7ffe218996c0 
// N. Class: 6 
// Fields: 4 
namespace CSosGroupActionSoundeventPrioritySchema
{
	constexpr uint32_t m_priorityValue = 0x18;  // CUtlString 
	constexpr uint32_t m_priorityVolumeScalar = 0x20;  // CUtlString 
	constexpr uint32_t m_priorityContributeButDontRead = 0x28;  // CUtlString 
	constexpr uint32_t m_bPriorityReadButDontContribute = 0x30;  // CUtlString 
}

// Offset: 0x7ffe218994f0 
// N. Class: 7 
// Fields: 8 
namespace CSosGroupActionMemberCountEnvelopeSchema
{
	constexpr uint32_t m_nBaseCount = 0x18;  // int32 
	constexpr uint32_t m_nTargetCount = 0x1C;  // int32 
	constexpr uint32_t m_flBaseValue = 0x20;  // float32 
	constexpr uint32_t m_flTargetValue = 0x24;  // float32 
	constexpr uint32_t m_flAttack = 0x28;  // float32 
	constexpr uint32_t m_flDecay = 0x2C;  // float32 
	constexpr uint32_t m_resultVarName = 0x30;  // CUtlString 
	constexpr uint32_t m_bSaveToGroup = 0x38;  // bool 
}

// Offset: 0x7ffe21899410 
// N. Class: 8 
// Fields: 2 
namespace CSosGroupActionSoundeventCountSchema
{
	constexpr uint32_t m_bExcludeStoppedSounds = 0x18;  // bool 
	constexpr uint32_t m_strCountKeyName = 0x20;  // CUtlString 
}

// Offset: 0x7ffe218991d0 
// N. Class: 9 
// Fields: 10 
namespace CSosGroupActionSoundeventMinMaxValuesSchema
{
	constexpr uint32_t m_strQueryPublicFieldName = 0x18;  // CUtlString 
	constexpr uint32_t m_strDelayPublicFieldName = 0x20;  // CUtlString 
	constexpr uint32_t m_bExcludeStoppedSounds = 0x28;  // bool 
	constexpr uint32_t m_bExcludeDelayedSounds = 0x29;  // bool 
	constexpr uint32_t m_bExcludeSoundsBelowThreshold = 0x2A;  // bool 
	constexpr uint32_t m_flExcludeSoundsMinThresholdValue = 0x2C;  // float32 
	constexpr uint32_t m_bExcludSoundsAboveThreshold = 0x30;  // bool 
	constexpr uint32_t m_flExcludeSoundsMaxThresholdValue = 0x34;  // float32 
	constexpr uint32_t m_strMinValueName = 0x38;  // CUtlString 
	constexpr uint32_t m_strMaxValueName = 0x40;  // CUtlString 
}

// Offset: 0x7ffe21899090 
// N. Class: 10 
// Fields: 5 
namespace CSosGroupBranchPattern
{
	constexpr uint32_t m_bMatchEventName = 0x8;  // bool 
	constexpr uint32_t m_bMatchEventSubString = 0x9;  // bool 
	constexpr uint32_t m_bMatchEntIndex = 0xA;  // bool 
	constexpr uint32_t m_bMatchOpvar = 0xB;  // bool 
	constexpr uint32_t m_bMatchString = 0xC;  // bool 
}

// Offset: 0x7ffe21898f40 
// N. Class: 11 
// Fields: 5 
namespace CSosGroupMatchPattern
{
	constexpr uint32_t m_matchSoundEventName = 0x10;  // CUtlString 
	constexpr uint32_t m_matchSoundEventSubString = 0x18;  // CUtlString 
	constexpr uint32_t m_flEntIndex = 0x20;  // float32 
	constexpr uint32_t m_flOpvar = 0x24;  // float32 
	constexpr uint32_t m_opvarString = 0x28;  // CUtlString 
}

// Offset: 0x7ffe21898d30 
// N. Class: 12 
// Fields: 9 
namespace CSosSoundEventGroupSchema
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
	constexpr uint32_t m_nType = 0x8;  // SosGroupType_t 
	constexpr uint32_t m_bIsBlocking = 0xC;  // bool 
	constexpr uint32_t m_nBlockMaxCount = 0x10;  // int32 
	constexpr uint32_t m_bInvertMatch = 0x14;  // bool 
	constexpr uint32_t m_matchPattern = 0x18;  // CSosGroupMatchPattern 
	constexpr uint32_t m_branchPattern = 0x48;  // CSosGroupBranchPattern 
	constexpr uint32_t m_flLifeSpanTime = 0x58;  // float32 
	constexpr uint32_t m_vActions = 0xC0;  // CSosGroupActionSchema*[4] 
}

// Offset: 0x7ffe21898c98 
// N. Class: 13 
// Fields: 1 
namespace CSosSoundEventGroupListSchema
{
	constexpr uint32_t m_groupList = 0x0;  // CUtlVector< CSosSoundEventGroupSchema > 
}

// Offset: 0x7ffe21898b30 
// N. Class: 14 
// Fields: 5 
namespace SosEditItemInfo_t
{
	constexpr uint32_t itemType = 0x0;  // SosEditItemType_t 
	constexpr uint32_t itemName = 0x8;  // CUtlString 
	constexpr uint32_t itemTypeName = 0x10;  // CUtlString 
	constexpr uint32_t itemKVString = 0x20;  // CUtlString 
	constexpr uint32_t itemPos = 0x28;  // Vector2D 
}

// Offset: 0x7ffe21898a88 
// N. Class: 15 
// Fields: 1 
namespace SelectedEditItemInfo_t
{
	constexpr uint32_t m_EditItems = 0x0;  // CUtlVector< SosEditItemInfo_t > 
}

// Offset: 0x7ffe2189a018 
// N. Class: 16 
// Fields: 1 
namespace CSoundEventMetaData
{
}

// Offset: 0x7ffe21898870 
// N. Class: 17 
// Fields: 6 
namespace CDSPMixgroupModifier
{
	constexpr uint32_t m_mixgroup = 0x0;  // CUtlString 
	constexpr uint32_t m_flModifier = 0x8;  // float32 
	constexpr uint32_t m_flModifierMin = 0xC;  // float32 
	constexpr uint32_t m_flSourceModifier = 0x10;  // float32 
	constexpr uint32_t m_flSourceModifierMin = 0x14;  // float32 
	constexpr uint32_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18;  // float32 
}

// Offset: 0x7ffe21898800 
// N. Class: 18 
// Fields: 2 
namespace CDspPresetModifierList
{
	constexpr uint32_t m_dspName = 0x0;  // CUtlString 
	constexpr uint32_t m_modifiers = 0x8;  // CUtlVector< CDSPMixgroupModifier > 
}

// Offset: 0x7ffe21898750 
// N. Class: 19 
// Fields: 1 
namespace CDSPPresetMixgroupModifierTable
{
	constexpr uint32_t m_table = 0x0;  // CUtlVector< CDspPresetModifierList > 
}

// Offset: 0x7ffe21893fc0 
// N. Class: 20 
// Fields: 2 
namespace CVoiceContainerAnalysisBase
{
	constexpr uint32_t m_bRegenerateCurveOnCompile = 0x8;  // bool 
	constexpr uint32_t m_curve = 0x10;  // CPiecewiseCurve 
}

// Offset: 0x7ffe218940a0 
// N. Class: 21 
// Fields: 2 
namespace CVoiceContainerBase
{
	constexpr uint32_t m_vSound = 0x38;  // CVSound 
	constexpr uint32_t m_pEnvelopeAnalyzer = 0xB8;  // CVoiceContainerAnalysisBase* 
}

// Offset: 0x7ffe21894bf0 
// N. Class: 22 
// Fields: 11 
namespace CVSound
{
	constexpr uint32_t m_nRate = 0x0;  // int32 
	constexpr uint32_t m_nFormat = 0x4;  // CVSoundFormat_t 
	constexpr uint32_t m_nChannels = 0x8;  // uint32 
	constexpr uint32_t m_nLoopStart = 0xC;  // int32 
	constexpr uint32_t m_nSampleCount = 0x10;  // uint32 
	constexpr uint32_t m_flDuration = 0x14;  // float32 
	constexpr uint32_t m_Sentences = 0x18;  // CUtlVector< CAudioSentence > 
	constexpr uint32_t m_nStreamingSize = 0x30;  // uint32 
	constexpr uint32_t m_nSeekTable = 0x38;  // CUtlVector< int32 > 
	constexpr uint32_t m_nLoopEnd = 0x50;  // int32 
	constexpr uint32_t m_encodedHeader = 0x58;  // CUtlBinaryBlock 
}

// Offset: 0x0 
// N. Class: 23 
// Fields: 0 
namespace CVoiceContainerDefault
{
}

// Offset: 0x0 
// N. Class: 24 
// Fields: 0 
namespace CVoiceContainerNull
{
}

// Offset: 0x7ffe218942d0 
// N. Class: 25 
// Fields: 3 
namespace CSoundContainerReference
{
	constexpr uint32_t m_bUseReference = 0x0;  // bool 
	constexpr uint32_t m_sound = 0x8;  // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > 
	constexpr uint32_t m_pSound = 0x10;  // CVoiceContainerBase* 
}

// Offset: 0x7ffe218943e0 
// N. Class: 26 
// Fields: 3 
namespace CSoundContainerReferenceArray
{
	constexpr uint32_t m_bUseReference = 0x0;  // bool 
	constexpr uint32_t m_sounds = 0x8;  // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > 
	constexpr uint32_t m_pSounds = 0x20;  // CUtlVector< CVoiceContainerBase* > 
}

// Offset: 0x7ffe21895720 
// N. Class: 27 
// Fields: 2 
namespace CAudioEmphasisSample
{
	constexpr uint32_t m_flTime = 0x0;  // float32 
	constexpr uint32_t m_flValue = 0x4;  // float32 
}

// Offset: 0x7ffe218957e0 
// N. Class: 28 
// Fields: 3 
namespace CAudioPhonemeTag
{
	constexpr uint32_t m_flStartTime = 0x0;  // float32 
	constexpr uint32_t m_flEndTime = 0x4;  // float32 
	constexpr uint32_t m_nPhonemeCode = 0x8;  // int32 
}

// Offset: 0x7ffe218958c0 
// N. Class: 29 
// Fields: 6 
namespace CAudioMorphData
{
	constexpr uint32_t m_times = 0x0;  // CUtlVector< float32 > 
	constexpr uint32_t m_nameHashCodes = 0x18;  // CUtlVector< uint32 > 
	constexpr uint32_t m_nameStrings = 0x30;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_samples = 0x48;  // CUtlVector< CUtlVector< float32 > > 
	constexpr uint32_t m_flEaseIn = 0x60;  // float32 
	constexpr uint32_t m_flEaseOut = 0x64;  // float32 
}

// Offset: 0x7ffe21895a00 
// N. Class: 30 
// Fields: 4 
namespace CAudioSentence
{
	constexpr uint32_t m_bShouldVoiceDuck = 0x0;  // bool 
	constexpr uint32_t m_RunTimePhonemes = 0x8;  // CUtlVector< CAudioPhonemeTag > 
	constexpr uint32_t m_EmphasisSamples = 0x20;  // CUtlVector< CAudioEmphasisSample > 
	constexpr uint32_t m_morphData = 0x38;  // CAudioMorphData 
}

// Offset: 0x0 
// N. Class: 31 
// Fields: 0 
namespace CSoundInfoHeader
{
}

// Offset: 0x7ffe21894e50 
// N. Class: 32 
// Fields: 3 
namespace CVoiceContainerEnvelopeAnalyzer
{
	constexpr uint32_t m_mode = 0x50;  // EMode_t 
	constexpr uint32_t m_nSamples = 0x54;  // int32 
	constexpr uint32_t m_flThreshold = 0x58;  // float32 
}

// Offset: 0x7ffe21894f60 
// N. Class: 33 
// Fields: 2 
namespace CVoiceContainerEnvelope
{
	constexpr uint32_t m_sound = 0xC0;  // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > 
	constexpr uint32_t m_analysisContainer = 0xC8;  // CVoiceContainerAnalysisBase* 
}

// Offset: 0x7ffe21894740 
// N. Class: 34 
// Fields: 3 
namespace CVoiceContainerSelector
{
	constexpr uint32_t m_mode = 0xC0;  // PlayBackMode_t 
	constexpr uint32_t m_soundsToPlay = 0xC8;  // CSoundContainerReferenceArray 
	constexpr uint32_t m_fProbabilityWeights = 0x100;  // CUtlVector< float32 > 
}

// Offset: 0x7ffe21895b10 
// N. Class: 35 
// Fields: 3 
namespace CVoiceContainerBlender
{
	constexpr uint32_t m_firstSound = 0xC0;  // CSoundContainerReference 
	constexpr uint32_t m_secondSound = 0xD8;  // CSoundContainerReference 
	constexpr uint32_t m_flBlendFactor = 0xF0;  // float32 
}

// Offset: 0x7ffe21895c10 
// N. Class: 36 
// Fields: 5 
namespace CVoiceContainerLoopTrigger
{
	constexpr uint32_t m_sound = 0xC0;  // CSoundContainerReference 
	constexpr uint32_t m_flRetriggerTimeMin = 0xD8;  // float32 
	constexpr uint32_t m_flRetriggerTimeMax = 0xDC;  // float32 
	constexpr uint32_t m_flFadeTime = 0xE0;  // float32 
	constexpr uint32_t m_bCrossFade = 0xE4;  // bool 
}

// Offset: 0x7ffe21894530 
// N. Class: 37 
// Fields: 6 
namespace CVoiceContainerRandomSampler
{
	constexpr uint32_t m_flAmplitude = 0xC0;  // float32 
	constexpr uint32_t m_flAmplitudeJitter = 0xC4;  // float32 
	constexpr uint32_t m_flTimeJitter = 0xC8;  // float32 
	constexpr uint32_t m_flMaxLength = 0xCC;  // float32 
	constexpr uint32_t m_nNumDelayVariations = 0xD0;  // int32 
	constexpr uint32_t m_grainResources = 0xD8;  // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > 
}

// Offset: 0x7ffe21895d40 
// N. Class: 38 
// Fields: 5 
namespace CVoiceContainerGranulator
{
	constexpr uint32_t m_flGrainLength = 0xC0;  // float32 
	constexpr uint32_t m_flGrainCrossfadeAmount = 0xC4;  // float32 
	constexpr uint32_t m_flStartJitter = 0xC8;  // float32 
	constexpr uint32_t m_flPlaybackJitter = 0xCC;  // float32 
	constexpr uint32_t m_sourceAudio = 0xD0;  // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > 
}

// Offset: 0x7ffe218950d0 
// N. Class: 39 
// Fields: 1 
namespace CVoiceContainerStaticAdditiveSynth
{
	constexpr uint32_t m_tones = 0xC0;  // CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > 
}

// Offset: 0x7ffe21895440 
// N. Class: 40 
// Fields: 3 
namespace CVoiceContainerStaticAdditiveSynth::CTone
{
	constexpr uint32_t m_harmonics = 0x0;  // CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > 
	constexpr uint32_t m_curve = 0x18;  // CPiecewiseCurve 
	constexpr uint32_t m_bSyncInstances = 0x58;  // bool 
}

// Offset: 0x7ffe218951a0 
// N. Class: 41 
// Fields: 4 
namespace CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
{
	constexpr uint32_t m_flMinVolume = 0x0;  // float32 
	constexpr uint32_t m_nInstancesAtMinVolume = 0x4;  // int32 
	constexpr uint32_t m_flMaxVolume = 0x8;  // float32 
	constexpr uint32_t m_nInstancesAtMaxVolume = 0xC;  // int32 
}

// Offset: 0x7ffe218952d0 
// N. Class: 42 
// Fields: 7 
namespace CVoiceContainerStaticAdditiveSynth::CHarmonic
{
	constexpr uint32_t m_nWaveform = 0x0;  // EWaveform 
	constexpr uint32_t m_nFundamental = 0x1;  // EMidiNote 
	constexpr uint32_t m_nOctave = 0x4;  // int32 
	constexpr uint32_t m_flCents = 0x8;  // float32 
	constexpr uint32_t m_flPhase = 0xC;  // float32 
	constexpr uint32_t m_curve = 0x10;  // CPiecewiseCurve 
	constexpr uint32_t m_volumeScaling = 0x50;  // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance 
}

// Offset: 0x7ffe21895570 
// N. Class: 43 
// Fields: 9 
namespace CVoiceContainerShapedNoise
{
	constexpr uint32_t m_bUseCurveForFrequency = 0xC0;  // bool 
	constexpr uint32_t m_flFrequency = 0xC4;  // float32 
	constexpr uint32_t m_frequencySweep = 0xC8;  // CPiecewiseCurve 
	constexpr uint32_t m_bUseCurveForResonance = 0x108;  // bool 
	constexpr uint32_t m_flResonance = 0x10C;  // float32 
	constexpr uint32_t m_resonanceSweep = 0x110;  // CPiecewiseCurve 
	constexpr uint32_t m_bUseCurveForAmplitude = 0x150;  // bool 
	constexpr uint32_t m_flGainInDecibels = 0x154;  // float32 
	constexpr uint32_t m_gainSweep = 0x158;  // CPiecewiseCurve 
}

// Offset: 0x7ffe21895e80 
// N. Class: 44 
// Fields: 1 
namespace CVoiceContainerSwitch
{
	constexpr uint32_t m_soundsToPlay = 0xC0;  // CUtlVector< CSoundContainerReference > 
}

// Offset: 0x7ffe21895f30 
// N. Class: 45 
// Fields: 2 
namespace CVoiceContainerSetElement
{
	constexpr uint32_t m_sound = 0x0;  // CSoundContainerReference 
	constexpr uint32_t m_flVolumeDB = 0x18;  // float32 
}

// Offset: 0x7ffe21896000 
// N. Class: 46 
// Fields: 1 
namespace CVoiceContainerSet
{
	constexpr uint32_t m_soundsToPlay = 0xC0;  // CUtlVector< CVoiceContainerSetElement > 
}

// Offset: 0x7ffe21894860 
// N. Class: 47 
// Fields: 2 
namespace CVoiceContainerDecayingSineWave
{
	constexpr uint32_t m_flFrequency = 0xC0;  // float32 
	constexpr uint32_t m_flDecayTime = 0xC4;  // float32 
}

// Offset: 0x7ffe21894948 
// N. Class: 48 
// Fields: 1 
namespace CVoiceContainerAmpedDecayingSineWave
{
	constexpr uint32_t m_flGainAmount = 0xC8;  // float32 
}

// Offset: 0x7ffe21894a40 
// N. Class: 49 
// Fields: 3 
namespace CVoiceContainerRealtimeFMSineWave
{
	constexpr uint32_t m_flCarrierFrequency = 0xC0;  // float32 
	constexpr uint32_t m_flModulatorFrequency = 0xC4;  // float32 
	constexpr uint32_t m_flModulatorAmount = 0xC8;  // float32 
}

// Offset: 0x7ffe218927e0 
// N. Class: 50 
// Fields: 6 
namespace VMixFilterDesc_t
{
	constexpr uint32_t m_nFilterType = 0x0;  // VMixFilterType_t 
	constexpr uint32_t m_nFilterSlope = 0x2;  // VMixFilterSlope_t 
	constexpr uint32_t m_bEnabled = 0x3;  // bool 
	constexpr uint32_t m_fldbGain = 0x4;  // float32 
	constexpr uint32_t m_flCutoffFreq = 0x8;  // float32 
	constexpr uint32_t m_flQ = 0xC;  // float32 
}

// Offset: 0x7ffe218920e0 
// N. Class: 51 
// Fields: 1 
namespace VMixEQ8Desc_t
{
	constexpr uint32_t m_stages = 0x0;  // VMixFilterDesc_t[8] 
}

// Offset: 0x7ffe218922d0 
// N. Class: 52 
// Fields: 7 
namespace VMixDelayDesc_t
{
	constexpr uint32_t m_feedbackFilter = 0x0;  // VMixFilterDesc_t 
	constexpr uint32_t m_bEnableFilter = 0x10;  // bool 
	constexpr uint32_t m_flDelay = 0x14;  // float32 
	constexpr uint32_t m_flDirectGain = 0x18;  // float32 
	constexpr uint32_t m_flDelayGain = 0x1C;  // float32 
	constexpr uint32_t m_flFeedbackGain = 0x20;  // float32 
	constexpr uint32_t m_flWidth = 0x24;  // float32 
}

// Offset: 0x7ffe218928b0 
// N. Class: 53 
// Fields: 2 
namespace VMixPannerDesc_t
{
	constexpr uint32_t m_type = 0x0;  // VMixPannerType_t 
	constexpr uint32_t m_flStrength = 0x4;  // float32 
}

// Offset: 0x7ffe218929e0 
// N. Class: 54 
// Fields: 9 
namespace VMixModDelayDesc_t
{
	constexpr uint32_t m_feedbackFilter = 0x0;  // VMixFilterDesc_t 
	constexpr uint32_t m_bPhaseInvert = 0x10;  // bool 
	constexpr uint32_t m_flGlideTime = 0x14;  // float32 
	constexpr uint32_t m_flDelay = 0x18;  // float32 
	constexpr uint32_t m_flOutputGain = 0x1C;  // float32 
	constexpr uint32_t m_flFeedbackGain = 0x20;  // float32 
	constexpr uint32_t m_flModRate = 0x24;  // float32 
	constexpr uint32_t m_flModDepth = 0x28;  // float32 
	constexpr uint32_t m_bApplyAntialiasing = 0x2C;  // bool 
}

// Offset: 0x7ffe21892b80 
// N. Class: 55 
// Fields: 4 
namespace VMixDiffusorDesc_t
{
	constexpr uint32_t m_flSize = 0x0;  // float32 
	constexpr uint32_t m_flComplexity = 0x4;  // float32 
	constexpr uint32_t m_flFeedback = 0x8;  // float32 
	constexpr uint32_t m_flOutputGain = 0xC;  // float32 
}

// Offset: 0x7ffe21892c80 
// N. Class: 56 
// Fields: 17 
namespace VMixBoxverbDesc_t
{
	constexpr uint32_t m_flSizeMax = 0x0;  // float32 
	constexpr uint32_t m_flSizeMin = 0x4;  // float32 
	constexpr uint32_t m_flComplexity = 0x8;  // float32 
	constexpr uint32_t m_flDiffusion = 0xC;  // float32 
	constexpr uint32_t m_flModDepth = 0x10;  // float32 
	constexpr uint32_t m_flModRate = 0x14;  // float32 
	constexpr uint32_t m_bParallel = 0x18;  // bool 
	constexpr uint32_t m_filterType = 0x1C;  // VMixFilterDesc_t 
	constexpr uint32_t m_flWidth = 0x2C;  // float32 
	constexpr uint32_t m_flHeight = 0x30;  // float32 
	constexpr uint32_t m_flDepth = 0x34;  // float32 
	constexpr uint32_t m_flFeedbackScale = 0x38;  // float32 
	constexpr uint32_t m_flFeedbackWidth = 0x3C;  // float32 
	constexpr uint32_t m_flFeedbackHeight = 0x40;  // float32 
	constexpr uint32_t m_flFeedbackDepth = 0x44;  // float32 
	constexpr uint32_t m_flOutputGain = 0x48;  // float32 
	constexpr uint32_t m_flTaps = 0x4C;  // float32 
}

// Offset: 0x7ffe21892f20 
// N. Class: 57 
// Fields: 4 
namespace VMixFreeverbDesc_t
{
	constexpr uint32_t m_flRoomSize = 0x0;  // float32 
	constexpr uint32_t m_flDamp = 0x4;  // float32 
	constexpr uint32_t m_flWidth = 0x8;  // float32 
	constexpr uint32_t m_flLateReflections = 0xC;  // float32 
}

// Offset: 0x7ffe21893210 
// N. Class: 58 
// Fields: 7 
namespace VMixPlateverbDesc_t
{
	constexpr uint32_t m_flPrefilter = 0x0;  // float32 
	constexpr uint32_t m_flInputDiffusion1 = 0x4;  // float32 
	constexpr uint32_t m_flInputDiffusion2 = 0x8;  // float32 
	constexpr uint32_t m_flDecay = 0xC;  // float32 
	constexpr uint32_t m_flDamp = 0x10;  // float32 
	constexpr uint32_t m_flFeedbackDiffusion1 = 0x14;  // float32 
	constexpr uint32_t m_flFeedbackDiffusion2 = 0x18;  // float32 
}

// Offset: 0x7ffe218933e0 
// N. Class: 59 
// Fields: 12 
namespace VMixDynamicsDesc_t
{
	constexpr uint32_t m_fldbGain = 0x0;  // float32 
	constexpr uint32_t m_fldbNoiseGateThreshold = 0x4;  // float32 
	constexpr uint32_t m_fldbCompressionThreshold = 0x8;  // float32 
	constexpr uint32_t m_fldbLimiterThreshold = 0xC;  // float32 
	constexpr uint32_t m_fldbKneeWidth = 0x10;  // float32 
	constexpr uint32_t m_flRatio = 0x14;  // float32 
	constexpr uint32_t m_flLimiterRatio = 0x18;  // float32 
	constexpr uint32_t m_flAttackTimeMS = 0x1C;  // float32 
	constexpr uint32_t m_flReleaseTimeMS = 0x20;  // float32 
	constexpr uint32_t m_flRMSTimeMS = 0x24;  // float32 
	constexpr uint32_t m_flWetMix = 0x28;  // float32 
	constexpr uint32_t m_bPeakMode = 0x2C;  // bool 
}

// Offset: 0x7ffe218937e0 
// N. Class: 60 
// Fields: 9 
namespace VMixDynamicsCompressorDesc_t
{
	constexpr uint32_t m_fldbOutputGain = 0x0;  // float32 
	constexpr uint32_t m_fldbCompressionThreshold = 0x4;  // float32 
	constexpr uint32_t m_fldbKneeWidth = 0x8;  // float32 
	constexpr uint32_t m_flCompressionRatio = 0xC;  // float32 
	constexpr uint32_t m_flAttackTimeMS = 0x10;  // float32 
	constexpr uint32_t m_flReleaseTimeMS = 0x14;  // float32 
	constexpr uint32_t m_flRMSTimeMS = 0x18;  // float32 
	constexpr uint32_t m_flWetMix = 0x1C;  // float32 
	constexpr uint32_t m_bPeakMode = 0x20;  // bool 
}

// Offset: 0x7ffe21893b30 
// N. Class: 61 
// Fields: 10 
namespace VMixDynamicsBand_t
{
	constexpr uint32_t m_fldbGainInput = 0x0;  // float32 
	constexpr uint32_t m_fldbGainOutput = 0x4;  // float32 
	constexpr uint32_t m_fldbThresholdBelow = 0x8;  // float32 
	constexpr uint32_t m_fldbThresholdAbove = 0xC;  // float32 
	constexpr uint32_t m_flRatioBelow = 0x10;  // float32 
	constexpr uint32_t m_flRatioAbove = 0x14;  // float32 
	constexpr uint32_t m_flAttackTimeMS = 0x18;  // float32 
	constexpr uint32_t m_flReleaseTimeMS = 0x1C;  // float32 
	constexpr uint32_t m_bEnable = 0x20;  // bool 
	constexpr uint32_t m_bSolo = 0x21;  // bool 
}

// Offset: 0x7ffe21891dc0 
// N. Class: 62 
// Fields: 10 
namespace VMixDynamics3BandDesc_t
{
	constexpr uint32_t m_fldbGainOutput = 0x0;  // float32 
	constexpr uint32_t m_flRMSTimeMS = 0x4;  // float32 
	constexpr uint32_t m_fldbKneeWidth = 0x8;  // float32 
	constexpr uint32_t m_flDepth = 0xC;  // float32 
	constexpr uint32_t m_flWetMix = 0x10;  // float32 
	constexpr uint32_t m_flTimeScale = 0x14;  // float32 
	constexpr uint32_t m_flLowCutoffFreq = 0x18;  // float32 
	constexpr uint32_t m_flHighCutoffFreq = 0x1C;  // float32 
	constexpr uint32_t m_bPeakMode = 0x20;  // bool 
	constexpr uint32_t m_bandDesc = 0x24;  // VMixDynamicsBand_t[3] 
}

// Offset: 0x7ffe21891f80 
// N. Class: 63 
// Fields: 3 
namespace VMixEnvelopeDesc_t
{
	constexpr uint32_t m_flAttackTimeMS = 0x0;  // float32 
	constexpr uint32_t m_flHoldTimeMS = 0x4;  // float32 
	constexpr uint32_t m_flReleaseTimeMS = 0x8;  // float32 
}

// Offset: 0x7ffe21892060 
// N. Class: 64 
// Fields: 4 
namespace VMixPitchShiftDesc_t
{
	constexpr uint32_t m_nGrainSampleCount = 0x0;  // int32 
	constexpr uint32_t m_flPitchShift = 0x4;  // float32 
	constexpr uint32_t m_nQuality = 0x8;  // int32 
	constexpr uint32_t m_nProcType = 0xC;  // int32 
}

// Offset: 0x7ffe21892470 
// N. Class: 65 
// Fields: 8 
namespace VMixConvolutionDesc_t
{
	constexpr uint32_t m_fldbGain = 0x0;  // float32 
	constexpr uint32_t m_flPreDelayMS = 0x4;  // float32 
	constexpr uint32_t m_flWetMix = 0x8;  // float32 
	constexpr uint32_t m_fldbLow = 0xC;  // float32 
	constexpr uint32_t m_fldbMid = 0x10;  // float32 
	constexpr uint32_t m_fldbHigh = 0x14;  // float32 
	constexpr uint32_t m_flLowCutoffFreq = 0x18;  // float32 
	constexpr uint32_t m_flHighCutoffFreq = 0x1C;  // float32 
}

// Offset: 0x7ffe218935e0 
// N. Class: 66 
// Fields: 10 
namespace VMixVocoderDesc_t
{
	constexpr uint32_t m_nBandCount = 0x0;  // int32 
	constexpr uint32_t m_flBandwidth = 0x4;  // float32 
	constexpr uint32_t m_fldBModGain = 0x8;  // float32 
	constexpr uint32_t m_flFreqRangeStart = 0xC;  // float32 
	constexpr uint32_t m_flFreqRangeEnd = 0x10;  // float32 
	constexpr uint32_t m_fldBUnvoicedGain = 0x14;  // float32 
	constexpr uint32_t m_flAttackTimeMS = 0x18;  // float32 
	constexpr uint32_t m_flReleaseTimeMS = 0x1C;  // float32 
	constexpr uint32_t m_nDebugBand = 0x20;  // int32 
	constexpr uint32_t m_bPeakMode = 0x24;  // bool 
}

// Offset: 0x7ffe218939c0 
// N. Class: 67 
// Fields: 5 
namespace VMixShaperDesc_t
{
	constexpr uint32_t m_nShape = 0x0;  // int32 
	constexpr uint32_t m_fldbDrive = 0x4;  // float32 
	constexpr uint32_t m_fldbOutputGain = 0x8;  // float32 
	constexpr uint32_t m_flWetMix = 0xC;  // float32 
	constexpr uint32_t m_nOversampleFactor = 0x10;  // int32 
}

// Offset: 0x7ffe21893d20 
// N. Class: 68 
// Fields: 6 
namespace VMixUtilityDesc_t
{
	constexpr uint32_t m_nOp = 0x0;  // VMixChannelOperation_t 
	constexpr uint32_t m_flInputPan = 0x4;  // float32 
	constexpr uint32_t m_flOutputBalance = 0x8;  // float32 
	constexpr uint32_t m_fldbOutputGain = 0xC;  // float32 
	constexpr uint32_t m_bBassMono = 0x10;  // bool 
	constexpr uint32_t m_flBassFreq = 0x14;  // float32 
}

// Offset: 0x7ffe21893020 
// N. Class: 69 
// Fields: 8 
namespace VMixAutoFilterDesc_t
{
	constexpr uint32_t m_flEnvelopeAmount = 0x0;  // float32 
	constexpr uint32_t m_flAttackTimeMS = 0x4;  // float32 
	constexpr uint32_t m_flReleaseTimeMS = 0x8;  // float32 
	constexpr uint32_t m_filter = 0xC;  // VMixFilterDesc_t 
	constexpr uint32_t m_flLFOAmount = 0x1C;  // float32 
	constexpr uint32_t m_flLFORate = 0x20;  // float32 
	constexpr uint32_t m_flPhase = 0x24;  // float32 
	constexpr uint32_t m_nLFOShape = 0x28;  // VMixLFOShape_t 
}

// Offset: 0x7ffe21893e80 
// N. Class: 70 
// Fields: 3 
namespace VMixOscDesc_t
{
	constexpr uint32_t oscType = 0x0;  // VMixLFOShape_t 
	constexpr uint32_t m_freq = 0x4;  // float32 
	constexpr uint32_t m_flPhase = 0x8;  // float32 
}

// Offset: 0x7ffe21892248 
// N. Class: 71 
// Fields: 1 
namespace VMixEffectChainDesc_t
{
	constexpr uint32_t m_flCrossfadeTime = 0x0;  // float32 
}

// Offset: 0x7ffe21893130 
// N. Class: 72 
// Fields: 3 
namespace VMixSubgraphSwitchDesc_t
{
	constexpr uint32_t m_interpolationMode = 0x0;  // VMixSubgraphSwitchInterpolationType_t 
	constexpr uint32_t m_bOnlyTailsOnFadeOut = 0x4;  // bool 
	constexpr uint32_t m_flInterpolationTime = 0x8;  // float32 
}

