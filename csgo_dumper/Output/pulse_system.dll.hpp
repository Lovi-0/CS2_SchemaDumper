namespace CPulseCursorFuncs
{
}

namespace CPulseCell_WaitForCursorsWithTagBase::CursorState_t
{
	constexpr uint32_t m_TagName = 0x0;  // CUtlSymbolLarge 
}

namespace CPulseTestFuncs_LibraryA
{
}

namespace FakeEntity_tAPI
{
}

namespace FakeEntityDerivedA_tAPI
{
}

namespace FakeEntityDerivedB_tAPI
{
}

namespace CPulseTestGapTypeQueryRegistration
{
}

namespace IGapHost_ExecLog
{
}

namespace IGapHost_Cursor
{
}

namespace IGapHost_YieldingCursor
{
}

namespace CPulseExecCursor
{
}

namespace CPulse_RegisterInfo
{
	constexpr uint32_t m_OriginName = 0x18;  // CKV3MemberNameWithStorage 
	constexpr uint32_t m_nWrittenByInstruction = 0x50;  // int32 
	constexpr uint32_t m_nLastReadByInstruction = 0x54;  // int32 
}

namespace PulseRuntimeRegisterIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

namespace CPulse_Chunk
{
	constexpr uint32_t m_Instructions = 0x0;  // CUtlLeanVector< PGDInstruction_t > 
	constexpr uint32_t m_Registers = 0x10;  // CUtlLeanVector< CPulse_RegisterInfo > 
	constexpr uint32_t m_InstructionEditorIDs = 0x20;  // CUtlLeanVector< PulseDocNodeID_t > 
}

namespace PGDInstruction_t
{
	constexpr uint32_t m_nCode = 0x0;  // PulseInstructionCode_t 
	constexpr uint32_t m_nVar = 0x4;  // PulseRuntimeVarIndex_t 
	constexpr uint32_t m_nInvokeBindingIndex = 0x10;  // PulseRuntimeInvokeIndex_t 
	constexpr uint32_t m_nChunk = 0x14;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nDestInstruction = 0x18;  // int32 
	constexpr uint32_t m_nCallInfoIndex = 0x1C;  // PulseRuntimeCallInfoIndex_t 
	constexpr uint32_t m_nConstIdx = 0x20;  // PulseRuntimeConstantIndex_t 
	constexpr uint32_t m_nDomainValueIdx = 0x22;  // PulseRuntimeDomainValueIndex_t 
	constexpr uint32_t m_nBlackboardReferenceIdx = 0x24;  // PulseRuntimeBlackboardReferenceIndex_t 
}

namespace PulseDocNodeID_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace CPulse_Variable
{
	constexpr uint32_t m_Name = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Description = 0x8;  // CUtlString 
	constexpr uint32_t m_DefaultValue = 0x20;  // KeyValues3 
	constexpr uint32_t m_bIsPublic = 0x32;  // bool 
	constexpr uint32_t m_bIsObservable = 0x33;  // bool 
	constexpr uint32_t m_nEditorNodeID = 0x34;  // PulseDocNodeID_t 
}

namespace CPulse_Constant
{
	constexpr uint32_t m_Value = 0x10;  // KeyValues3 
}

namespace CPulse_DomainValue
{
	constexpr uint32_t m_nType = 0x0;  // PulseDomainValueType_t 
	constexpr uint32_t m_Value = 0x8;  // CGlobalSymbol 
	constexpr uint32_t m_ExpectedRuntimeType = 0x10;  // CGlobalSymbol 
}

namespace CPulse_BlackboardReference
{
	constexpr uint32_t m_hBlackboardResource = 0x0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > 
	constexpr uint32_t m_BlackboardResource = 0xE0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nNodeID = 0xE8;  // PulseDocNodeID_t 
	constexpr uint32_t m_NodeName = 0xF0;  // CGlobalSymbol 
}

namespace CPulse_PublicOutput
{
	constexpr uint32_t m_Name = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Description = 0x8;  // CUtlString 
}

namespace CPulse_OutputConnection
{
	constexpr uint32_t m_SourceOutput = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetEntity = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetInput = 0x10;  // CUtlSymbolLarge 
	constexpr uint32_t m_Param = 0x18;  // CUtlSymbolLarge 
}

namespace CPulse_InvokeBinding
{
	constexpr uint32_t m_RegisterMap = 0x0;  // PulseRegisterMap_t 
	constexpr uint32_t m_FuncName = 0x20;  // CUtlSymbolLarge 
	constexpr uint32_t m_nCellIndex = 0x28;  // PulseRuntimeCellIndex_t 
	constexpr uint32_t m_nSrcChunk = 0x2C;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nSrcInstruction = 0x30;  // int32 
}

namespace PulseRegisterMap_t
{
	constexpr uint32_t m_Inparams = 0x0;  // KeyValues3 
	constexpr uint32_t m_Outparams = 0x10;  // KeyValues3 
}

namespace PulseRuntimeCellIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseRuntimeChunkIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace CPulse_CallInfo
{
	constexpr uint32_t m_PortName = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nEditorNodeID = 0x8;  // PulseDocNodeID_t 
	constexpr uint32_t m_RegisterMap = 0x10;  // PulseRegisterMap_t 
	constexpr uint32_t m_CallMethodID = 0x30;  // PulseDocNodeID_t 
	constexpr uint32_t m_nSrcChunk = 0x34;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nSrcInstruction = 0x38;  // int32 
}

namespace CPulseGraphDef
{
	constexpr uint32_t m_DomainIdentifier = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_ParentMapName = 0x10;  // CUtlSymbolLarge 
	constexpr uint32_t m_ParentXmlName = 0x18;  // CUtlSymbolLarge 
	constexpr uint32_t m_vecGameBlackboards = 0x20;  // CUtlVector< CUtlSymbolLarge > 
	constexpr uint32_t m_Chunks = 0x38;  // CUtlVector< CPulse_Chunk* > 
	constexpr uint32_t m_Cells = 0x50;  // CUtlVector< CPulseCell_Base* > 
	constexpr uint32_t m_Vars = 0x68;  // CUtlVector< CPulse_Variable > 
	constexpr uint32_t m_PublicOutputs = 0x80;  // CUtlVector< CPulse_PublicOutput > 
	constexpr uint32_t m_InvokeBindings = 0x98;  // CUtlVector< CPulse_InvokeBinding* > 
	constexpr uint32_t m_CallInfos = 0xB0;  // CUtlVector< CPulse_CallInfo* > 
	constexpr uint32_t m_Constants = 0xC8;  // CUtlVector< CPulse_Constant > 
	constexpr uint32_t m_DomainValues = 0xE0;  // CUtlVector< CPulse_DomainValue > 
	constexpr uint32_t m_BlackboardReferences = 0xF8;  // CUtlVector< CPulse_BlackboardReference > 
	constexpr uint32_t m_OutputConnections = 0x110;  // CUtlVector< CPulse_OutputConnection* > 
}

namespace CPulseCell_Base
{
	constexpr uint32_t m_nEditorNodeID = 0x8;  // PulseDocNodeID_t 
}

namespace CBasePulseGraphInstance
{
}

namespace PulseGraphExecutionHistoryEntry_t
{
	constexpr uint32_t nCursorID = 0x0;  // PulseCursorID_t 
	constexpr uint32_t nEditorID = 0x4;  // PulseDocNodeID_t 
	constexpr uint32_t flExecTime = 0x8;  // float32 
	constexpr uint32_t unFlags = 0xC;  // uint32 
	constexpr uint32_t tagName = 0x10;  // CUtlSymbolLarge 
}

namespace PulseCursorID_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseGraphExecutionHistoryNodeDesc_t
{
	constexpr uint32_t strCellDesc = 0x0;  // CBufferString 
	constexpr uint32_t strBindingName = 0x10;  // CUtlSymbolLarge 
}

namespace PulseGraphExecutionHistoryCursorDesc_t
{
	constexpr uint32_t vecAncestorCursorIDs = 0x0;  // CUtlVector< PulseCursorID_t > 
	constexpr uint32_t nSpawnNodeID = 0x18;  // PulseDocNodeID_t 
	constexpr uint32_t nRetiredAtNodeID = 0x1C;  // PulseDocNodeID_t 
	constexpr uint32_t flLastReferenced = 0x20;  // float32 
	constexpr uint32_t nLastValidEntryIdx = 0x24;  // int32 
}

namespace CPulseGraphExecutionHistory
{
	constexpr uint32_t m_nInstanceID = 0x0;  // PulseGraphInstanceID_t 
	constexpr uint32_t m_strFileName = 0x8;  // CUtlString 
	constexpr uint32_t m_vecHistory = 0x10;  // CUtlVector< PulseGraphExecutionHistoryEntry_t* > 
	constexpr uint32_t m_mapCellDesc = 0x28;  // CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > 
	constexpr uint32_t m_mapCursorDesc = 0x50;  // CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > 
}

namespace PulseGraphInstanceID_t
{
	constexpr uint32_t m_Value = 0x0;  // uint32 
}

namespace CPulseMathlib
{
}

namespace CPulseTestScriptLib
{
}

namespace PulseRuntimeCallInfoIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseRuntimeVarIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseRuntimeOutputIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseRuntimeStateOffset_t
{
	constexpr uint32_t m_Value = 0x0;  // uint16 
}

namespace PulseRuntimeConstantIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

namespace PulseRuntimeDomainValueIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

namespace PulseRuntimeBlackboardReferenceIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

namespace PulseRuntimeInvokeIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseRuntimeEntrypointIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace PulseCursorYieldToken_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace CPulse_OutflowConnection
{
	constexpr uint32_t m_SourceOutflowName = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nDestChunk = 0x8;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nInstruction = 0xC;  // int32 
	constexpr uint32_t m_OutflowRegisterMap = 0x10;  // PulseRegisterMap_t 
}

namespace CPulse_ResumePoint
{
}

namespace SignatureOutflow_Continue
{
}

namespace SignatureOutflow_Resume
{
}

namespace PulseNodeDynamicOutflows_t
{
	constexpr uint32_t m_Outflows = 0x0;  // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > 
}

namespace PulseNodeDynamicOutflows_t::DynamicOutflow_t
{
	constexpr uint32_t m_OutflowID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_Connection = 0x8;  // CPulse_OutflowConnection 
}

namespace CPulseCell_BaseFlow
{
}

namespace CPulseCell_BaseRequirement
{
}

namespace CPulseCell_Inflow_BaseEntrypoint
{
	constexpr uint32_t m_EntryChunk = 0x48;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_RegisterMap = 0x50;  // PulseRegisterMap_t 
}

namespace CPulseRuntimeMethodArg
{
	constexpr uint32_t m_Name = 0x0;  // CKV3MemberNameWithStorage 
	constexpr uint32_t m_Description = 0x38;  // CUtlString 
}

namespace CPulseCell_Inflow_Method
{
	constexpr uint32_t m_MethodName = 0x70;  // CUtlSymbolLarge 
	constexpr uint32_t m_Description = 0x78;  // CUtlString 
	constexpr uint32_t m_bIsPublic = 0x80;  // bool 
	constexpr uint32_t m_Args = 0x98;  // CUtlLeanVector< CPulseRuntimeMethodArg > 
}

namespace CPulseCell_Inflow_EventHandler
{
	constexpr uint32_t m_EventName = 0x70;  // CUtlSymbolLarge 
}

namespace CPulseCell_Inflow_GraphHook
{
	constexpr uint32_t m_HookName = 0x70;  // CUtlSymbolLarge 
}

namespace CPulseCell_Inflow_EntOutputHandler
{
	constexpr uint32_t m_SourceEntity = 0x70;  // CUtlSymbolLarge 
	constexpr uint32_t m_SourceOutput = 0x78;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetInput = 0x80;  // CUtlSymbolLarge 
}

namespace CPulseCell_Inflow_ObservableVariableListener
{
	constexpr uint32_t m_BlackboardReference = 0x70;  // CPulse_BlackboardReference 
	constexpr uint32_t m_bSelfReference = 0x168;  // bool 
}

namespace CPulseCell_BaseYieldingInflow
{
}

namespace CPulseCell_BaseLerp
{
	constexpr uint32_t m_WakeResume = 0x48;  // CPulse_ResumePoint 
}

namespace CPulseCell_BaseLerp::CursorState_t
{
	constexpr uint32_t m_StartTime = 0x0;  // GameTime_t 
	constexpr uint32_t m_EndTime = 0x4;  // GameTime_t 
}

namespace CPulseCell_BaseValue
{
}

namespace CPulseCell_Step_PublicOutput
{
	constexpr uint32_t m_OutputIndex = 0x48;  // PulseRuntimeOutputIndex_t 
}

namespace CPulseCell_Inflow_Yield
{
	constexpr uint32_t m_UnyieldResume = 0x48;  // CPulse_ResumePoint 
}

namespace CPulseCell_Inflow_Wait
{
	constexpr uint32_t m_WakeResume = 0x48;  // CPulse_ResumePoint 
}

namespace CPulseCell_Outflow_StringSwitch
{
	constexpr uint32_t m_DefaultCaseOutflow = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_CaseOutflows = 0x78;  // CUtlVector< CPulse_OutflowConnection > 
}

namespace CPulseCell_Outflow_IntSwitch
{
	constexpr uint32_t m_DefaultCaseOutflow = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_CaseOutflows = 0x78;  // CUtlVector< CPulse_OutflowConnection > 
}

namespace CPulseCell_Outflow_CycleOrdered
{
	constexpr uint32_t m_Outputs = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
}

namespace CPulseCell_Outflow_CycleOrdered::InstanceState_t
{
	constexpr uint32_t m_nNextIndex = 0x0;  // int32 
}

namespace CPulseCell_Outflow_CycleRandom
{
	constexpr uint32_t m_Outputs = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
}

namespace CPulseCell_Outflow_CycleShuffled
{
	constexpr uint32_t m_Outputs = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
}

namespace CPulseCell_Outflow_CycleShuffled::InstanceState_t
{
	constexpr uint32_t m_Shuffle = 0x0;  // CUtlVectorFixedGrowable< uint8, 8 > 
	constexpr uint32_t m_nNextShuffle = 0x20;  // int32 
}

namespace CPulseCell_Value_RandomInt
{
}

namespace CPulseCell_Value_RandomFloat
{
}

namespace CPulseCell_Step_DebugLog
{
}

namespace CPulseCell_Step_CallExternalMethod
{
	constexpr uint32_t m_MethodName = 0x48;  // CUtlSymbolLarge 
	constexpr uint32_t m_GameBlackboard = 0x50;  // CUtlSymbolLarge 
	constexpr uint32_t m_ExpectedArgs = 0x58;  // CUtlLeanVector< CPulseRuntimeMethodArg > 
	constexpr uint32_t m_nAsyncCallMode = 0x68;  // PulseMethodCallMode_t 
	constexpr uint32_t m_OnFinished = 0x70;  // CPulse_ResumePoint 
}

namespace CPulseCell_Unknown
{
	constexpr uint32_t m_UnknownKeys = 0x48;  // KeyValues3 
}

namespace CPulseCell_FireCursors
{
	constexpr uint32_t m_Outflows = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
	constexpr uint32_t m_bWaitForChildOutflows = 0x60;  // bool 
	constexpr uint32_t m_OnFinished = 0x68;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0x98;  // CPulse_ResumePoint 
}

namespace CPulseCell_LimitCount
{
	constexpr uint32_t m_nLimitCount = 0x48;  // int32 
}

namespace CPulseCell_LimitCount::InstanceState_t
{
	constexpr uint32_t m_nCurrentCount = 0x0;  // int32 
}

namespace CPulseCell_Timeline
{
	constexpr uint32_t m_TimelineEvents = 0x48;  // CUtlVector< CPulseCell_Timeline::TimelineEvent_t > 
	constexpr uint32_t m_bWaitForChildOutflows = 0x60;  // bool 
	constexpr uint32_t m_OnFinished = 0x68;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0x98;  // CPulse_ResumePoint 
}

namespace CPulseCell_Timeline::TimelineEvent_t
{
	constexpr uint32_t m_flTimeFromPrevious = 0x0;  // float32 
	constexpr uint32_t m_bPauseForPreviousEvents = 0x4;  // bool 
	constexpr uint32_t m_bCallModeSync = 0x5;  // bool 
	constexpr uint32_t m_EventOutflow = 0x8;  // CPulse_OutflowConnection 
}

namespace CPulseGraphInstance_TestDomain
{
	constexpr uint32_t m_bIsRunningUnitTests = 0xF8;  // bool 
	constexpr uint32_t m_bExplicitTimeStepping = 0xF9;  // bool 
	constexpr uint32_t m_bExpectingToDestroyWithYieldedCursors = 0xFA;  // bool 
	constexpr uint32_t m_nNextValidateIndex = 0xFC;  // int32 
	constexpr uint32_t m_Tracepoints = 0x100;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_bTestYesOrNoPath = 0x118;  // bool 
}

namespace CPulseCell_Step_TestDomainTracepoint
{
}

namespace CPulseCell_Step_TestDomainCreateFakeEntity
{
}

namespace CPulseCell_Step_TestDomainDestroyFakeEntity
{
}

namespace CPulseCell_Step_TestDomainEntFire
{
	constexpr uint32_t m_Input = 0x48;  // CUtlString 
}

namespace CPulseCell_Val_TestDomainGetEntityName
{
}

namespace CPulseCell_Val_TestDomainFindEntityByName
{
}

namespace CPulseCell_TestWaitWithCursorState
{
	constexpr uint32_t m_WakeResume = 0x48;  // CPulse_ResumePoint 
	constexpr uint32_t m_WakeCancel = 0x78;  // CPulse_ResumePoint 
	constexpr uint32_t m_WakeFail = 0xA8;  // CPulse_ResumePoint 
}

namespace CPulseCell_TestWaitWithCursorState::CursorState_t
{
	constexpr uint32_t flWaitValue = 0x0;  // float32 
	constexpr uint32_t bFailOnCancel = 0x4;  // bool 
}

namespace CTestDomainDerived_Cursor
{
	constexpr uint32_t m_nCursorValueA = 0xA8;  // int32 
	constexpr uint32_t m_nCursorValueB = 0xAC;  // int32 
}

namespace CPulseGraphInstance_TestDomain_Derived
{
	constexpr uint32_t m_nInstanceValueX = 0x120;  // int32 
}

namespace CPulseCell_Test_NoInflow
{
}

namespace CPulseCell_Test_MultiInflow_WithDefault
{
}

namespace CPulseCell_Test_MultiInflow_NoDefault
{
}

namespace CPulseCell_Test_MultiOutflow_WithParams
{
	constexpr uint32_t m_Out1 = 0x48;  // SignatureOutflow_Continue 
	constexpr uint32_t m_Out2 = 0x78;  // SignatureOutflow_Continue 
}

namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding
{
	constexpr uint32_t m_Out1 = 0x48;  // SignatureOutflow_Continue 
	constexpr uint32_t m_AsyncChild1 = 0x78;  // SignatureOutflow_Continue 
	constexpr uint32_t m_AsyncChild2 = 0xA8;  // SignatureOutflow_Continue 
	constexpr uint32_t m_YieldResume1 = 0xD8;  // SignatureOutflow_Resume 
	constexpr uint32_t m_YieldResume2 = 0x108;  // SignatureOutflow_Resume 
}

namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t
{
	constexpr uint32_t nTestStep = 0x0;  // int32 
}

namespace CPulseCell_Value_TestValue50
{
}

namespace CPulseCell_Outflow_TestRandomYesNo
{
	constexpr uint32_t m_Yes = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_No = 0x78;  // CPulse_OutflowConnection 
}

namespace CPulseCell_Outflow_TestExplicitYesNo
{
	constexpr uint32_t m_Yes = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_No = 0x78;  // CPulse_OutflowConnection 
}

namespace CPulseTurtleGraphicsCursor
{
	constexpr uint32_t m_Color = 0xA8;  // Color 
	constexpr uint32_t m_vPos = 0xAC;  // Vector2D 
	constexpr uint32_t m_flHeadingDeg = 0xB4;  // float32 
	constexpr uint32_t m_bPenUp = 0xB8;  // bool 
}

namespace CPulseGraphInstance_TurtleGraphics
{
}

namespace CPulseCell_WaitForCursorsWithTagBase
{
	constexpr uint32_t m_nCursorsAllowedToWait = 0x48;  // int32 
	constexpr uint32_t m_WaitComplete = 0x50;  // CPulse_ResumePoint 
}

namespace CPulseCell_WaitForCursorsWithTag
{
	constexpr uint32_t m_bTagSelfWhenComplete = 0x80;  // bool 
	constexpr uint32_t m_nDesiredKillPriority = 0x84;  // PulseCursorCancelPriority_t 
}

