// Schema offset: 0x26fac9e0680 
// Schema name: pulse_system.dll 
// Schema declared class: 111 

// Offset: 0x0 
// N. Class: 0 
// Fields: 0 
namespace CPulseCursorFuncs
{
}

// Offset: 0x7ffe282591a8 
// N. Class: 1 
// Fields: 1 
namespace CPulseCell_WaitForCursorsWithTagBase::CursorState_t
{
	constexpr uint32_t m_TagName = 0x0;  // CUtlSymbolLarge 
}

// Offset: 0x0 
// N. Class: 2 
// Fields: 0 
namespace CPulseTestFuncs_LibraryA
{
}

// Offset: 0x0 
// N. Class: 3 
// Fields: 0 
namespace FakeEntity_tAPI
{
}

// Offset: 0x0 
// N. Class: 4 
// Fields: 0 
namespace FakeEntityDerivedA_tAPI
{
}

// Offset: 0x0 
// N. Class: 5 
// Fields: 0 
namespace FakeEntityDerivedB_tAPI
{
}

// Offset: 0x0 
// N. Class: 6 
// Fields: 0 
namespace CPulseTestGapTypeQueryRegistration
{
}

// Offset: 0x0 
// N. Class: 7 
// Fields: 0 
namespace IGapHost_ExecLog
{
}

// Offset: 0x0 
// N. Class: 8 
// Fields: 0 
namespace IGapHost_Cursor
{
}

// Offset: 0x0 
// N. Class: 9 
// Fields: 0 
namespace IGapHost_YieldingCursor
{
}

// Offset: 0x0 
// N. Class: 10 
// Fields: 0 
namespace CPulseExecCursor
{
}

// Offset: 0x7ffe2824c080 
// N. Class: 11 
// Fields: 5 
namespace CPulse_RegisterInfo
{
	constexpr uint32_t m_nReg = 0x0;  // PulseRuntimeRegisterIndex_t 
	constexpr uint32_t m_Type = 0x8;  // CPulseValueFullType 
	constexpr uint32_t m_OriginName = 0x18;  // CKV3MemberNameWithStorage 
	constexpr uint32_t m_nWrittenByInstruction = 0x50;  // int32 
	constexpr uint32_t m_nLastReadByInstruction = 0x54;  // int32 
}

// Offset: 0x7ffe282504f0 
// N. Class: 12 
// Fields: 1 
namespace PulseRuntimeRegisterIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

// Offset: 0x7ffe2824c1a0 
// N. Class: 13 
// Fields: 3 
namespace CPulse_Chunk
{
	constexpr uint32_t m_Instructions = 0x0;  // CUtlLeanVector< PGDInstruction_t > 
	constexpr uint32_t m_Registers = 0x10;  // CUtlLeanVector< CPulse_RegisterInfo > 
	constexpr uint32_t m_InstructionEditorIDs = 0x20;  // CUtlLeanVector< PulseDocNodeID_t > 
}

// Offset: 0x7ffe28250bf0 
// N. Class: 14 
// Fields: 12 
namespace PGDInstruction_t
{
	constexpr uint32_t m_nCode = 0x0;  // PulseInstructionCode_t 
	constexpr uint32_t m_nVar = 0x4;  // PulseRuntimeVarIndex_t 
	constexpr uint32_t m_nReg0 = 0x8;  // PulseRuntimeRegisterIndex_t 
	constexpr uint32_t m_nReg1 = 0xA;  // PulseRuntimeRegisterIndex_t 
	constexpr uint32_t m_nReg2 = 0xC;  // PulseRuntimeRegisterIndex_t 
	constexpr uint32_t m_nInvokeBindingIndex = 0x10;  // PulseRuntimeInvokeIndex_t 
	constexpr uint32_t m_nChunk = 0x14;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nDestInstruction = 0x18;  // int32 
	constexpr uint32_t m_nCallInfoIndex = 0x1C;  // PulseRuntimeCallInfoIndex_t 
	constexpr uint32_t m_nConstIdx = 0x20;  // PulseRuntimeConstantIndex_t 
	constexpr uint32_t m_nDomainValueIdx = 0x22;  // PulseRuntimeDomainValueIndex_t 
	constexpr uint32_t m_nBlackboardReferenceIdx = 0x24;  // PulseRuntimeBlackboardReferenceIndex_t 
}

// Offset: 0x7ffe28250850 
// N. Class: 15 
// Fields: 1 
namespace PulseDocNodeID_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe2824c280 
// N. Class: 16 
// Fields: 7 
namespace CPulse_Variable
{
	constexpr uint32_t m_Name = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Description = 0x8;  // CUtlString 
	constexpr uint32_t m_Type = 0x10;  // CPulseValueFullType 
	constexpr uint32_t m_DefaultValue = 0x20;  // KeyValues3 
	constexpr uint32_t m_bIsPublic = 0x32;  // bool 
	constexpr uint32_t m_bIsObservable = 0x33;  // bool 
	constexpr uint32_t m_nEditorNodeID = 0x34;  // PulseDocNodeID_t 
}

// Offset: 0x7ffe2824c3e0 
// N. Class: 17 
// Fields: 2 
namespace CPulse_Constant
{
	constexpr uint32_t m_Type = 0x0;  // CPulseValueFullType 
	constexpr uint32_t m_Value = 0x10;  // KeyValues3 
}

// Offset: 0x7ffe2824c4a0 
// N. Class: 18 
// Fields: 3 
namespace CPulse_DomainValue
{
	constexpr uint32_t m_nType = 0x0;  // PulseDomainValueType_t 
	constexpr uint32_t m_Value = 0x8;  // CGlobalSymbol 
	constexpr uint32_t m_ExpectedRuntimeType = 0x10;  // CGlobalSymbol 
}

// Offset: 0x7ffe2824c580 
// N. Class: 19 
// Fields: 4 
namespace CPulse_BlackboardReference
{
	constexpr uint32_t m_hBlackboardResource = 0x0;  // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > 
	constexpr uint32_t m_BlackboardResource = 0xE0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nNodeID = 0xE8;  // PulseDocNodeID_t 
	constexpr uint32_t m_NodeName = 0xF0;  // CGlobalSymbol 
}

// Offset: 0x7ffe2824c680 
// N. Class: 20 
// Fields: 3 
namespace CPulse_PublicOutput
{
	constexpr uint32_t m_Name = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_Description = 0x8;  // CUtlString 
	constexpr uint32_t m_ParamType = 0x10;  // CPulseValueFullType 
}

// Offset: 0x7ffe2824c760 
// N. Class: 21 
// Fields: 4 
namespace CPulse_OutputConnection
{
	constexpr uint32_t m_SourceOutput = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetEntity = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetInput = 0x10;  // CUtlSymbolLarge 
	constexpr uint32_t m_Param = 0x18;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe2824c860 
// N. Class: 22 
// Fields: 5 
namespace CPulse_InvokeBinding
{
	constexpr uint32_t m_RegisterMap = 0x0;  // PulseRegisterMap_t 
	constexpr uint32_t m_FuncName = 0x20;  // CUtlSymbolLarge 
	constexpr uint32_t m_nCellIndex = 0x28;  // PulseRuntimeCellIndex_t 
	constexpr uint32_t m_nSrcChunk = 0x2C;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nSrcInstruction = 0x30;  // int32 
}

// Offset: 0x7ffe28250b30 
// N. Class: 23 
// Fields: 2 
namespace PulseRegisterMap_t
{
	constexpr uint32_t m_Inparams = 0x0;  // KeyValues3 
	constexpr uint32_t m_Outparams = 0x10;  // KeyValues3 
}

// Offset: 0x7ffe28250730 
// N. Class: 24 
// Fields: 1 
namespace PulseRuntimeCellIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe28250218 
// N. Class: 25 
// Fields: 1 
namespace PulseRuntimeChunkIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe2824c980 
// N. Class: 26 
// Fields: 6 
namespace CPulse_CallInfo
{
	constexpr uint32_t m_PortName = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nEditorNodeID = 0x8;  // PulseDocNodeID_t 
	constexpr uint32_t m_RegisterMap = 0x10;  // PulseRegisterMap_t 
	constexpr uint32_t m_CallMethodID = 0x30;  // PulseDocNodeID_t 
	constexpr uint32_t m_nSrcChunk = 0x34;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nSrcInstruction = 0x38;  // int32 
}

// Offset: 0x7ffe2824cac0 
// N. Class: 27 
// Fields: 14 
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

// Offset: 0x7ffe2824dc08 
// N. Class: 28 
// Fields: 1 
namespace CPulseCell_Base
{
	constexpr uint32_t m_nEditorNodeID = 0x8;  // PulseDocNodeID_t 
}

// Offset: 0x0 
// N. Class: 29 
// Fields: 0 
namespace CBasePulseGraphInstance
{
}

// Offset: 0x7ffe28251820 
// N. Class: 30 
// Fields: 5 
namespace PulseGraphExecutionHistoryEntry_t
{
	constexpr uint32_t nCursorID = 0x0;  // PulseCursorID_t 
	constexpr uint32_t nEditorID = 0x4;  // PulseDocNodeID_t 
	constexpr uint32_t flExecTime = 0x8;  // float32 
	constexpr uint32_t unFlags = 0xC;  // uint32 
	constexpr uint32_t tagName = 0x10;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe28250a00 
// N. Class: 31 
// Fields: 1 
namespace PulseCursorID_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe282514e0 
// N. Class: 32 
// Fields: 2 
namespace PulseGraphExecutionHistoryNodeDesc_t
{
	constexpr uint32_t strCellDesc = 0x0;  // CBufferString 
	constexpr uint32_t strBindingName = 0x10;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe282515a0 
// N. Class: 33 
// Fields: 5 
namespace PulseGraphExecutionHistoryCursorDesc_t
{
	constexpr uint32_t vecAncestorCursorIDs = 0x0;  // CUtlVector< PulseCursorID_t > 
	constexpr uint32_t nSpawnNodeID = 0x18;  // PulseDocNodeID_t 
	constexpr uint32_t nRetiredAtNodeID = 0x1C;  // PulseDocNodeID_t 
	constexpr uint32_t flLastReferenced = 0x20;  // float32 
	constexpr uint32_t nLastValidEntryIdx = 0x24;  // int32 
}

// Offset: 0x7ffe282516c0 
// N. Class: 34 
// Fields: 5 
namespace CPulseGraphExecutionHistory
{
	constexpr uint32_t m_nInstanceID = 0x0;  // PulseGraphInstanceID_t 
	constexpr uint32_t m_strFileName = 0x8;  // CUtlString 
	constexpr uint32_t m_vecHistory = 0x10;  // CUtlVector< PulseGraphExecutionHistoryEntry_t* > 
	constexpr uint32_t m_mapCellDesc = 0x28;  // CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > 
	constexpr uint32_t m_mapCursorDesc = 0x50;  // CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > 
}

// Offset: 0x7ffe28250970 
// N. Class: 35 
// Fields: 1 
namespace PulseGraphInstanceID_t
{
	constexpr uint32_t m_Value = 0x0;  // uint32 
}

// Offset: 0x0 
// N. Class: 36 
// Fields: 0 
namespace CPulseMathlib
{
}

// Offset: 0x0 
// N. Class: 37 
// Fields: 0 
namespace CPulseTestScriptLib
{
}

// Offset: 0x7ffe282502b0 
// N. Class: 38 
// Fields: 1 
namespace PulseRuntimeCallInfoIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe28250340 
// N. Class: 39 
// Fields: 1 
namespace PulseRuntimeVarIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe282503d0 
// N. Class: 40 
// Fields: 1 
namespace PulseRuntimeOutputIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe28250460 
// N. Class: 41 
// Fields: 1 
namespace PulseRuntimeStateOffset_t
{
	constexpr uint32_t m_Value = 0x0;  // uint16 
}

// Offset: 0x7ffe28250580 
// N. Class: 42 
// Fields: 1 
namespace PulseRuntimeConstantIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

// Offset: 0x7ffe28250610 
// N. Class: 43 
// Fields: 1 
namespace PulseRuntimeDomainValueIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

// Offset: 0x7ffe282506a0 
// N. Class: 44 
// Fields: 1 
namespace PulseRuntimeBlackboardReferenceIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int16 
}

// Offset: 0x7ffe282507c0 
// N. Class: 45 
// Fields: 1 
namespace PulseRuntimeInvokeIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe282508e0 
// N. Class: 46 
// Fields: 1 
namespace PulseRuntimeEntrypointIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe28250a90 
// N. Class: 47 
// Fields: 1 
namespace PulseCursorYieldToken_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x7ffe28250de0 
// N. Class: 48 
// Fields: 4 
namespace CPulse_OutflowConnection
{
	constexpr uint32_t m_SourceOutflowName = 0x0;  // CUtlSymbolLarge 
	constexpr uint32_t m_nDestChunk = 0x8;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_nInstruction = 0xC;  // int32 
	constexpr uint32_t m_OutflowRegisterMap = 0x10;  // PulseRegisterMap_t 
}

// Offset: 0x0 
// N. Class: 49 
// Fields: 0 
namespace CPulse_ResumePoint
{
}

// Offset: 0x0 
// N. Class: 50 
// Fields: 0 
namespace SignatureOutflow_Continue
{
}

// Offset: 0x0 
// N. Class: 51 
// Fields: 0 
namespace SignatureOutflow_Resume
{
}

// Offset: 0x7ffe28251058 
// N. Class: 52 
// Fields: 1 
namespace PulseNodeDynamicOutflows_t
{
	constexpr uint32_t m_Outflows = 0x0;  // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > 
}

// Offset: 0x7ffe28251100 
// N. Class: 53 
// Fields: 2 
namespace PulseNodeDynamicOutflows_t::DynamicOutflow_t
{
	constexpr uint32_t m_OutflowID = 0x0;  // CGlobalSymbol 
	constexpr uint32_t m_Connection = 0x8;  // CPulse_OutflowConnection 
}

// Offset: 0x0 
// N. Class: 54 
// Fields: 0 
namespace CPulseCell_BaseFlow
{
}

// Offset: 0x0 
// N. Class: 55 
// Fields: 0 
namespace CPulseCell_BaseRequirement
{
}

// Offset: 0x7ffe2824e0c0 
// N. Class: 56 
// Fields: 2 
namespace CPulseCell_Inflow_BaseEntrypoint
{
	constexpr uint32_t m_EntryChunk = 0x48;  // PulseRuntimeChunkIndex_t 
	constexpr uint32_t m_RegisterMap = 0x50;  // PulseRegisterMap_t 
}

// Offset: 0x7ffe2824e190 
// N. Class: 57 
// Fields: 3 
namespace CPulseRuntimeMethodArg
{
	constexpr uint32_t m_Name = 0x0;  // CKV3MemberNameWithStorage 
	constexpr uint32_t m_Description = 0x38;  // CUtlString 
	constexpr uint32_t m_Type = 0x40;  // CPulseValueFullType 
}

// Offset: 0x7ffe2824e280 
// N. Class: 58 
// Fields: 5 
namespace CPulseCell_Inflow_Method
{
	constexpr uint32_t m_MethodName = 0x70;  // CUtlSymbolLarge 
	constexpr uint32_t m_Description = 0x78;  // CUtlString 
	constexpr uint32_t m_bIsPublic = 0x80;  // bool 
	constexpr uint32_t m_ReturnType = 0x88;  // CPulseValueFullType 
	constexpr uint32_t m_Args = 0x98;  // CUtlLeanVector< CPulseRuntimeMethodArg > 
}

// Offset: 0x7ffe2824e3b8 
// N. Class: 59 
// Fields: 1 
namespace CPulseCell_Inflow_EventHandler
{
	constexpr uint32_t m_EventName = 0x70;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe2824e478 
// N. Class: 60 
// Fields: 1 
namespace CPulseCell_Inflow_GraphHook
{
	constexpr uint32_t m_HookName = 0x70;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe2824e540 
// N. Class: 61 
// Fields: 4 
namespace CPulseCell_Inflow_EntOutputHandler
{
	constexpr uint32_t m_SourceEntity = 0x70;  // CUtlSymbolLarge 
	constexpr uint32_t m_SourceOutput = 0x78;  // CUtlSymbolLarge 
	constexpr uint32_t m_TargetInput = 0x80;  // CUtlSymbolLarge 
	constexpr uint32_t m_ExpectedParamType = 0x88;  // CPulseValueFullType 
}

// Offset: 0x7ffe2824e660 
// N. Class: 62 
// Fields: 2 
namespace CPulseCell_Inflow_ObservableVariableListener
{
	constexpr uint32_t m_BlackboardReference = 0x70;  // CPulse_BlackboardReference 
	constexpr uint32_t m_bSelfReference = 0x168;  // bool 
}

// Offset: 0x0 
// N. Class: 63 
// Fields: 0 
namespace CPulseCell_BaseYieldingInflow
{
}

// Offset: 0x7ffe2824e7b8 
// N. Class: 64 
// Fields: 1 
namespace CPulseCell_BaseLerp
{
	constexpr uint32_t m_WakeResume = 0x48;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe2824e870 
// N. Class: 65 
// Fields: 2 
namespace CPulseCell_BaseLerp::CursorState_t
{
	constexpr uint32_t m_StartTime = 0x0;  // GameTime_t 
	constexpr uint32_t m_EndTime = 0x4;  // GameTime_t 
}

// Offset: 0x0 
// N. Class: 66 
// Fields: 0 
namespace CPulseCell_BaseValue
{
}

// Offset: 0x7ffe2824e9c8 
// N. Class: 67 
// Fields: 1 
namespace CPulseCell_Step_PublicOutput
{
	constexpr uint32_t m_OutputIndex = 0x48;  // PulseRuntimeOutputIndex_t 
}

// Offset: 0x7ffe2824ea90 
// N. Class: 68 
// Fields: 1 
namespace CPulseCell_Inflow_Yield
{
	constexpr uint32_t m_UnyieldResume = 0x48;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe2824eb78 
// N. Class: 69 
// Fields: 1 
namespace CPulseCell_Inflow_Wait
{
	constexpr uint32_t m_WakeResume = 0x48;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe2824ec50 
// N. Class: 70 
// Fields: 2 
namespace CPulseCell_Outflow_StringSwitch
{
	constexpr uint32_t m_DefaultCaseOutflow = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_CaseOutflows = 0x78;  // CUtlVector< CPulse_OutflowConnection > 
}

// Offset: 0x7ffe2824ed30 
// N. Class: 71 
// Fields: 2 
namespace CPulseCell_Outflow_IntSwitch
{
	constexpr uint32_t m_DefaultCaseOutflow = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_CaseOutflows = 0x78;  // CUtlVector< CPulse_OutflowConnection > 
}

// Offset: 0x7ffe2824ee10 
// N. Class: 72 
// Fields: 1 
namespace CPulseCell_Outflow_CycleOrdered
{
	constexpr uint32_t m_Outputs = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
}

// Offset: 0x7ffe2824eec0 
// N. Class: 73 
// Fields: 1 
namespace CPulseCell_Outflow_CycleOrdered::InstanceState_t
{
	constexpr uint32_t m_nNextIndex = 0x0;  // int32 
}

// Offset: 0x7ffe2824ef68 
// N. Class: 74 
// Fields: 1 
namespace CPulseCell_Outflow_CycleRandom
{
	constexpr uint32_t m_Outputs = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
}

// Offset: 0x7ffe2824d8c0 
// N. Class: 75 
// Fields: 1 
namespace CPulseCell_Outflow_CycleShuffled
{
	constexpr uint32_t m_Outputs = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
}

// Offset: 0x7ffe2824d970 
// N. Class: 76 
// Fields: 2 
namespace CPulseCell_Outflow_CycleShuffled::InstanceState_t
{
	constexpr uint32_t m_Shuffle = 0x0;  // CUtlVectorFixedGrowable< uint8, 8 > 
	constexpr uint32_t m_nNextShuffle = 0x20;  // int32 
}

// Offset: 0x0 
// N. Class: 77 
// Fields: 0 
namespace CPulseCell_Value_RandomInt
{
}

// Offset: 0x0 
// N. Class: 78 
// Fields: 0 
namespace CPulseCell_Value_RandomFloat
{
}

// Offset: 0x0 
// N. Class: 79 
// Fields: 0 
namespace CPulseCell_Step_DebugLog
{
}

// Offset: 0x7ffe2824ddc0 
// N. Class: 80 
// Fields: 5 
namespace CPulseCell_Step_CallExternalMethod
{
	constexpr uint32_t m_MethodName = 0x48;  // CUtlSymbolLarge 
	constexpr uint32_t m_GameBlackboard = 0x50;  // CUtlSymbolLarge 
	constexpr uint32_t m_ExpectedArgs = 0x58;  // CUtlLeanVector< CPulseRuntimeMethodArg > 
	constexpr uint32_t m_nAsyncCallMode = 0x68;  // PulseMethodCallMode_t 
	constexpr uint32_t m_OnFinished = 0x70;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe2824def0 
// N. Class: 81 
// Fields: 1 
namespace CPulseCell_Unknown
{
	constexpr uint32_t m_UnknownKeys = 0x48;  // KeyValues3 
}

// Offset: 0x7ffe28255f20 
// N. Class: 82 
// Fields: 4 
namespace CPulseCell_FireCursors
{
	constexpr uint32_t m_Outflows = 0x48;  // CUtlVector< CPulse_OutflowConnection > 
	constexpr uint32_t m_bWaitForChildOutflows = 0x60;  // bool 
	constexpr uint32_t m_OnFinished = 0x68;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0x98;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe28256168 
// N. Class: 83 
// Fields: 1 
namespace CPulseCell_LimitCount
{
	constexpr uint32_t m_nLimitCount = 0x48;  // int32 
}

// Offset: 0x7ffe28256228 
// N. Class: 84 
// Fields: 1 
namespace CPulseCell_LimitCount::InstanceState_t
{
	constexpr uint32_t m_nCurrentCount = 0x0;  // int32 
}

// Offset: 0x7ffe28256440 
// N. Class: 85 
// Fields: 4 
namespace CPulseCell_Timeline
{
	constexpr uint32_t m_TimelineEvents = 0x48;  // CUtlVector< CPulseCell_Timeline::TimelineEvent_t > 
	constexpr uint32_t m_bWaitForChildOutflows = 0x60;  // bool 
	constexpr uint32_t m_OnFinished = 0x68;  // CPulse_ResumePoint 
	constexpr uint32_t m_OnCanceled = 0x98;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe28256560 
// N. Class: 86 
// Fields: 4 
namespace CPulseCell_Timeline::TimelineEvent_t
{
	constexpr uint32_t m_flTimeFromPrevious = 0x0;  // float32 
	constexpr uint32_t m_bPauseForPreviousEvents = 0x4;  // bool 
	constexpr uint32_t m_bCallModeSync = 0x5;  // bool 
	constexpr uint32_t m_EventOutflow = 0x8;  // CPulse_OutflowConnection 
}

// Offset: 0x7ffe28252d80 
// N. Class: 87 
// Fields: 6 
namespace CPulseGraphInstance_TestDomain
{
	constexpr uint32_t m_bIsRunningUnitTests = 0xF8;  // bool 
	constexpr uint32_t m_bExplicitTimeStepping = 0xF9;  // bool 
	constexpr uint32_t m_bExpectingToDestroyWithYieldedCursors = 0xFA;  // bool 
	constexpr uint32_t m_nNextValidateIndex = 0xFC;  // int32 
	constexpr uint32_t m_Tracepoints = 0x100;  // CUtlVector< CUtlString > 
	constexpr uint32_t m_bTestYesOrNoPath = 0x118;  // bool 
}

// Offset: 0x0 
// N. Class: 88 
// Fields: 0 
namespace CPulseCell_Step_TestDomainTracepoint
{
}

// Offset: 0x0 
// N. Class: 89 
// Fields: 0 
namespace CPulseCell_Step_TestDomainCreateFakeEntity
{
}

// Offset: 0x0 
// N. Class: 90 
// Fields: 0 
namespace CPulseCell_Step_TestDomainDestroyFakeEntity
{
}

// Offset: 0x7ffe282519a0 
// N. Class: 91 
// Fields: 1 
namespace CPulseCell_Step_TestDomainEntFire
{
	constexpr uint32_t m_Input = 0x48;  // CUtlString 
}

// Offset: 0x0 
// N. Class: 92 
// Fields: 0 
namespace CPulseCell_Val_TestDomainGetEntityName
{
}

// Offset: 0x0 
// N. Class: 93 
// Fields: 0 
namespace CPulseCell_Val_TestDomainFindEntityByName
{
}

// Offset: 0x7ffe28251bc0 
// N. Class: 94 
// Fields: 3 
namespace CPulseCell_TestWaitWithCursorState
{
	constexpr uint32_t m_WakeResume = 0x48;  // CPulse_ResumePoint 
	constexpr uint32_t m_WakeCancel = 0x78;  // CPulse_ResumePoint 
	constexpr uint32_t m_WakeFail = 0xA8;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe28251cc0 
// N. Class: 95 
// Fields: 2 
namespace CPulseCell_TestWaitWithCursorState::CursorState_t
{
	constexpr uint32_t flWaitValue = 0x0;  // float32 
	constexpr uint32_t bFailOnCancel = 0x4;  // bool 
}

// Offset: 0x7ffe28251d80 
// N. Class: 96 
// Fields: 2 
namespace CTestDomainDerived_Cursor
{
	constexpr uint32_t m_nCursorValueA = 0xA8;  // int32 
	constexpr uint32_t m_nCursorValueB = 0xAC;  // int32 
}

// Offset: 0x7ffe28251ff8 
// N. Class: 97 
// Fields: 1 
namespace CPulseGraphInstance_TestDomain_Derived
{
	constexpr uint32_t m_nInstanceValueX = 0x120;  // int32 
}

// Offset: 0x0 
// N. Class: 98 
// Fields: 0 
namespace CPulseCell_Test_NoInflow
{
}

// Offset: 0x0 
// N. Class: 99 
// Fields: 0 
namespace CPulseCell_Test_MultiInflow_WithDefault
{
}

// Offset: 0x0 
// N. Class: 100 
// Fields: 0 
namespace CPulseCell_Test_MultiInflow_NoDefault
{
}

// Offset: 0x7ffe28252450 
// N. Class: 101 
// Fields: 2 
namespace CPulseCell_Test_MultiOutflow_WithParams
{
	constexpr uint32_t m_Out1 = 0x48;  // SignatureOutflow_Continue 
	constexpr uint32_t m_Out2 = 0x78;  // SignatureOutflow_Continue 
}

// Offset: 0x7ffe282525f0 
// N. Class: 102 
// Fields: 5 
namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding
{
	constexpr uint32_t m_Out1 = 0x48;  // SignatureOutflow_Continue 
	constexpr uint32_t m_AsyncChild1 = 0x78;  // SignatureOutflow_Continue 
	constexpr uint32_t m_AsyncChild2 = 0xA8;  // SignatureOutflow_Continue 
	constexpr uint32_t m_YieldResume1 = 0xD8;  // SignatureOutflow_Resume 
	constexpr uint32_t m_YieldResume2 = 0x108;  // SignatureOutflow_Resume 
}

// Offset: 0x7ffe282528b0 
// N. Class: 103 
// Fields: 1 
namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t
{
	constexpr uint32_t nTestStep = 0x0;  // int32 
}

// Offset: 0x0 
// N. Class: 104 
// Fields: 0 
namespace CPulseCell_Value_TestValue50
{
}

// Offset: 0x7ffe28252ac0 
// N. Class: 105 
// Fields: 2 
namespace CPulseCell_Outflow_TestRandomYesNo
{
	constexpr uint32_t m_Yes = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_No = 0x78;  // CPulse_OutflowConnection 
}

// Offset: 0x7ffe28252bc0 
// N. Class: 106 
// Fields: 2 
namespace CPulseCell_Outflow_TestExplicitYesNo
{
	constexpr uint32_t m_Yes = 0x48;  // CPulse_OutflowConnection 
	constexpr uint32_t m_No = 0x78;  // CPulse_OutflowConnection 
}

// Offset: 0x7ffe28256780 
// N. Class: 107 
// Fields: 4 
namespace CPulseTurtleGraphicsCursor
{
	constexpr uint32_t m_Color = 0xA8;  // Color 
	constexpr uint32_t m_vPos = 0xAC;  // Vector2D 
	constexpr uint32_t m_flHeadingDeg = 0xB4;  // float32 
	constexpr uint32_t m_bPenUp = 0xB8;  // bool 
}

// Offset: 0x0 
// N. Class: 108 
// Fields: 0 
namespace CPulseGraphInstance_TurtleGraphics
{
}

// Offset: 0x7ffe28258cf0 
// N. Class: 109 
// Fields: 2 
namespace CPulseCell_WaitForCursorsWithTagBase
{
	constexpr uint32_t m_nCursorsAllowedToWait = 0x48;  // int32 
	constexpr uint32_t m_WaitComplete = 0x50;  // CPulse_ResumePoint 
}

// Offset: 0x7ffe28258d90 
// N. Class: 110 
// Fields: 2 
namespace CPulseCell_WaitForCursorsWithTag
{
	constexpr uint32_t m_bTagSelfWhenComplete = 0x80;  // bool 
	constexpr uint32_t m_nDesiredKillPriority = 0x84;  // PulseCursorCancelPriority_t 
}

