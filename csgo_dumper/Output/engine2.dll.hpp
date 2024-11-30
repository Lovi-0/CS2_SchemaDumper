// Schema offset: 0x26f7f640940 
// Schema name: engine2.dll 
// Schema declared class: 52 

// Offset: 0x7ffe3b5134e0 
// N. Class: 0 
// Fields: 4 
namespace EngineLoopState_t
{
	constexpr uint32_t m_nPlatWindowWidth = 0x18;  // int32 
	constexpr uint32_t m_nPlatWindowHeight = 0x1C;  // int32 
	constexpr uint32_t m_nRenderWidth = 0x20;  // int32 
	constexpr uint32_t m_nRenderHeight = 0x24;  // int32 
}

// Offset: 0x7ffe3b50db50 
// N. Class: 1 
// Fields: 7 
namespace EntComponentInfo_t
{
	constexpr uint32_t m_pName = 0x0;  // char* 
	constexpr uint32_t m_pCPPClassname = 0x8;  // char* 
	constexpr uint32_t m_pNetworkDataReferencedDescription = 0x10;  // char* 
	constexpr uint32_t m_pNetworkDataReferencedPtrPropDescription = 0x18;  // char* 
	constexpr uint32_t m_nRuntimeIndex = 0x20;  // int32 
	constexpr uint32_t m_nFlags = 0x24;  // uint32 
	constexpr uint32_t m_pBaseClassComponentHelper = 0x60;  // CEntityComponentHelper* 
}

// Offset: 0x0 
// N. Class: 2 
// Fields: 0 
namespace CVariantDefaultAllocator
{
}

// Offset: 0x7ffe3b50dea0 
// N. Class: 3 
// Fields: 1 
namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;  // CUtlSymbolLarge 
}

// Offset: 0x7ffe2711db60 
// N. Class: 4 
// Fields: 1 
namespace ChangeAccessorFieldPathIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

// Offset: 0x0 
// N. Class: 5 
// Fields: 0 
namespace EventModInitialized_t
{
}

// Offset: 0x7ffe3b5134c0 
// N. Class: 6 
// Fields: 1 
namespace EventFrameBoundary_t
{
	constexpr uint32_t m_flFrameTime = 0x0;  // float32 
}

// Offset: 0x7ffe3b5134a0 
// N. Class: 7 
// Fields: 1 
namespace EventProfileStorageAvailable_t
{
	constexpr uint32_t m_nSplitScreenSlot = 0x0;  // CSplitScreenSlot 
}

// Offset: 0x0 
// N. Class: 8 
// Fields: 0 
namespace EventSplitScreenStateChanged_t
{
}

// Offset: 0x7ffe3b5130e0 
// N. Class: 9 
// Fields: 8 
namespace EventSetTime_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_nClientOutputFrames = 0x28;  // int32 
	constexpr uint32_t m_flRealTime = 0x30;  // float64 
	constexpr uint32_t m_flRenderTime = 0x38;  // float64 
	constexpr uint32_t m_flRenderFrameTime = 0x40;  // float64 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x48;  // float64 
	constexpr uint32_t m_flRenderFrameTimeUnscaled = 0x50;  // float64 
	constexpr uint32_t m_flTickRemainder = 0x58;  // float64 
}

// Offset: 0x7ffe3b5130a0 
// N. Class: 10 
// Fields: 2 
namespace EventClientPollInput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
}

// Offset: 0x7ffe3b5131e0 
// N. Class: 11 
// Fields: 4 
namespace EventClientProcessInput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flTickInterval = 0x2C;  // float32 
	constexpr uint32_t m_flTickStartTime = 0x30;  // float64 
}

// Offset: 0x7ffe3b512f80 
// N. Class: 12 
// Fields: 3 
namespace EventClientProcessGameInput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flFrameTime = 0x2C;  // float32 
}

// Offset: 0x7ffe3b512fe0 
// N. Class: 13 
// Fields: 6 
namespace EventClientPreOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRenderTime = 0x28;  // float64 
	constexpr uint32_t m_flRenderFrameTime = 0x30;  // float64 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x38;  // float64 
	constexpr uint32_t m_flRealTime = 0x40;  // float32 
	constexpr uint32_t m_bRenderOnly = 0x44;  // bool 
}

// Offset: 0x7ffe3b5133e0 
// N. Class: 14 
// Fields: 1 
namespace EventClientSceneSystemThreadStateChange_t
{
	constexpr uint32_t m_bThreadsActive = 0x0;  // bool 
}

// Offset: 0x7ffe3b513400 
// N. Class: 15 
// Fields: 5 
namespace EventClientOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRenderTime = 0x28;  // float32 
	constexpr uint32_t m_flRealTime = 0x2C;  // float32 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x30;  // float32 
	constexpr uint32_t m_bRenderOnly = 0x34;  // bool 
}

// Offset: 0x7ffe3b513260 
// N. Class: 16 
// Fields: 5 
namespace EventClientPostOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRenderTime = 0x28;  // float64 
	constexpr uint32_t m_flRenderFrameTime = 0x30;  // float32 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x34;  // float32 
	constexpr uint32_t m_bRenderOnly = 0x38;  // bool 
}

// Offset: 0x0 
// N. Class: 17 
// Fields: 0 
namespace EventClientAdvanceNonRenderedFrame_t
{
}

// Offset: 0x7ffe3b513360 
// N. Class: 18 
// Fields: 4 
namespace EventClientFrameSimulate_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flFrameTime = 0x2C;  // float32 
	constexpr uint32_t m_bScheduleSendTickPacket = 0x30;  // bool 
}

// Offset: 0x7ffe3b513300 
// N. Class: 19 
// Fields: 3 
namespace EventSimpleLoopFrameUpdate_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flFrameTime = 0x2C;  // float32 
}

// Offset: 0x7ffe3b512de0 
// N. Class: 20 
// Fields: 3 
namespace EventSimulate_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_bFirstTick = 0x28;  // bool 
	constexpr uint32_t m_bLastTick = 0x29;  // bool 
}

// Offset: 0x7ffe3b512e40 
// N. Class: 21 
// Fields: 4 
namespace EventAdvanceTick_t
{
	constexpr uint32_t m_nCurrentTick = 0x30;  // int32 
	constexpr uint32_t m_nCurrentTickThisFrame = 0x34;  // int32 
	constexpr uint32_t m_nTotalTicksThisFrame = 0x38;  // int32 
	constexpr uint32_t m_nTotalTicks = 0x3C;  // int32 
}

// Offset: 0x7ffe3b512d30 
// N. Class: 22 
// Fields: 4 
namespace EventPostAdvanceTick_t
{
	constexpr uint32_t m_nCurrentTick = 0x30;  // int32 
	constexpr uint32_t m_nCurrentTickThisFrame = 0x34;  // int32 
	constexpr uint32_t m_nTotalTicksThisFrame = 0x38;  // int32 
	constexpr uint32_t m_nTotalTicks = 0x3C;  // int32 
}

// Offset: 0x0 
// N. Class: 23 
// Fields: 0 
namespace EventServerAdvanceTick_t
{
}

// Offset: 0x0 
// N. Class: 24 
// Fields: 0 
namespace EventServerPostAdvanceTick_t
{
}

// Offset: 0x0 
// N. Class: 25 
// Fields: 0 
namespace EventServerBeginAsyncPostTickWork_t
{
}

// Offset: 0x0 
// N. Class: 26 
// Fields: 0 
namespace EventServerEndAsyncPostTickWork_t
{
}

// Offset: 0x0 
// N. Class: 27 
// Fields: 0 
namespace EventClientAdvanceTick_t
{
}

// Offset: 0x0 
// N. Class: 28 
// Fields: 0 
namespace EventClientPostAdvanceTick_t
{
}

// Offset: 0x7ffe3b512f50 
// N. Class: 29 
// Fields: 1 
namespace EventClientPollNetworking_t
{
	constexpr uint32_t m_nTickCount = 0x0;  // int32 
}

// Offset: 0x7ffe3b512ee0 
// N. Class: 30 
// Fields: 1 
namespace EventClientProcessNetworking_t
{
	constexpr uint32_t m_nTickCount = 0x0;  // int32 
}

// Offset: 0x0 
// N. Class: 31 
// Fields: 0 
namespace EventClientPreSimulate_t
{
}

// Offset: 0x0 
// N. Class: 32 
// Fields: 0 
namespace EventClientSimulate_t
{
}

// Offset: 0x0 
// N. Class: 33 
// Fields: 0 
namespace EventServerPollNetworking_t
{
}

// Offset: 0x0 
// N. Class: 34 
// Fields: 0 
namespace EventServerProcessNetworking_t
{
}

// Offset: 0x0 
// N. Class: 35 
// Fields: 0 
namespace EventServerSimulate_t
{
}

// Offset: 0x0 
// N. Class: 36 
// Fields: 0 
namespace EventServerPostSimulate_t
{
}

// Offset: 0x0 
// N. Class: 37 
// Fields: 0 
namespace EventClientPostSimulate_t
{
}

// Offset: 0x0 
// N. Class: 38 
// Fields: 0 
namespace EventClientPauseSimulate_t
{
}

// Offset: 0x7ffe3b512d00 
// N. Class: 39 
// Fields: 1 
namespace EventPostDataUpdate_t
{
	constexpr uint32_t m_nCount = 0x0;  // int32 
}

// Offset: 0x7ffe3b512cb0 
// N. Class: 40 
// Fields: 1 
namespace EventPreDataUpdate_t
{
	constexpr uint32_t m_nCount = 0x0;  // int32 
}

// Offset: 0x7ffe3b512c90 
// N. Class: 41 
// Fields: 1 
namespace EventAppShutdown_t
{
	constexpr uint32_t m_nDummy0 = 0x0;  // int32 
}

// Offset: 0x7ffe3b50e060 
// N. Class: 42 
// Fields: 1 
namespace CNetworkVarChainer
{
	constexpr uint32_t m_PathIndex = 0x20;  // ChangeAccessorFieldPathIndex_t 
}

// Offset: 0x0 
// N. Class: 43 
// Fields: 0 
namespace EntOutput_t
{
}

// Offset: 0x7ffe3b50dd80 
// N. Class: 44 
// Fields: 4 
namespace CEntityComponentHelper
{
	constexpr uint32_t m_flags = 0x8;  // uint32 
	constexpr uint32_t m_pInfo = 0x10;  // EntComponentInfo_t* 
	constexpr uint32_t m_nPriority = 0x18;  // int32 
	constexpr uint32_t m_pNext = 0x20;  // CEntityComponentHelper* 
}

// Offset: 0x0 
// N. Class: 45 
// Fields: 0 
namespace CEntityComponent
{
}

// Offset: 0x0 
// N. Class: 46 
// Fields: 0 
namespace EntInput_t
{
}

// Offset: 0x7ffe3b50e190 
// N. Class: 47 
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

// Offset: 0x0 
// N. Class: 48 
// Fields: 0 
namespace CEmptyEntityInstance
{
}

// Offset: 0x7ffe3b50d870 
// N. Class: 49 
// Fields: 4 
namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_pEntity = 0x10;  // CEntityIdentity* 
	constexpr uint32_t m_CScriptComponent = 0x28;  // CScriptComponent* 
	constexpr uint32_t m_bVisibleinPVS = 0x30;  // bool 
}

// Offset: 0x7ffe3b50d9f8 
// N. Class: 50 
// Fields: 1 
namespace CEntityIOOutput
{
	constexpr uint32_t m_Value = 0x18;  // CVariantBase< CVariantDefaultAllocator > 
}

// Offset: 0x7ffe3b50e370 
// N. Class: 51 
// Fields: 1 
namespace GameTime_t
{
	constexpr uint32_t m_Value = 0x0;  // float32 
}

