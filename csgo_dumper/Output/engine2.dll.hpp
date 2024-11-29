namespace EngineLoopState_t
{
	constexpr uint32_t m_nPlatWindowWidth = 0x18;  // int32 
	constexpr uint32_t m_nPlatWindowHeight = 0x1C;  // int32 
	constexpr uint32_t m_nRenderWidth = 0x20;  // int32 
	constexpr uint32_t m_nRenderHeight = 0x24;  // int32 
}

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

namespace CVariantDefaultAllocator
{
}

namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;  // CUtlSymbolLarge 
}

namespace ChangeAccessorFieldPathIndex_t
{
	constexpr uint32_t m_Value = 0x0;  // int32 
}

namespace EventModInitialized_t
{
}

namespace EventFrameBoundary_t
{
	constexpr uint32_t m_flFrameTime = 0x0;  // float32 
}

namespace EventProfileStorageAvailable_t
{
	constexpr uint32_t m_nSplitScreenSlot = 0x0;  // CSplitScreenSlot 
}

namespace EventSplitScreenStateChanged_t
{
}

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

namespace EventClientPollInput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
}

namespace EventClientProcessInput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flTickInterval = 0x2C;  // float32 
	constexpr uint32_t m_flTickStartTime = 0x30;  // float64 
}

namespace EventClientProcessGameInput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flFrameTime = 0x2C;  // float32 
}

namespace EventClientPreOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRenderTime = 0x28;  // float64 
	constexpr uint32_t m_flRenderFrameTime = 0x30;  // float64 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x38;  // float64 
	constexpr uint32_t m_flRealTime = 0x40;  // float32 
	constexpr uint32_t m_bRenderOnly = 0x44;  // bool 
}

namespace EventClientSceneSystemThreadStateChange_t
{
	constexpr uint32_t m_bThreadsActive = 0x0;  // bool 
}

namespace EventClientOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRenderTime = 0x28;  // float32 
	constexpr uint32_t m_flRealTime = 0x2C;  // float32 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x30;  // float32 
	constexpr uint32_t m_bRenderOnly = 0x34;  // bool 
}

namespace EventClientPostOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRenderTime = 0x28;  // float64 
	constexpr uint32_t m_flRenderFrameTime = 0x30;  // float32 
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x34;  // float32 
	constexpr uint32_t m_bRenderOnly = 0x38;  // bool 
}

namespace EventClientAdvanceNonRenderedFrame_t
{
}

namespace EventClientFrameSimulate_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flFrameTime = 0x2C;  // float32 
	constexpr uint32_t m_bScheduleSendTickPacket = 0x30;  // bool 
}

namespace EventSimpleLoopFrameUpdate_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_flRealTime = 0x28;  // float32 
	constexpr uint32_t m_flFrameTime = 0x2C;  // float32 
}

namespace EventSimulate_t
{
	constexpr uint32_t m_LoopState = 0x0;  // EngineLoopState_t 
	constexpr uint32_t m_bFirstTick = 0x28;  // bool 
	constexpr uint32_t m_bLastTick = 0x29;  // bool 
}

namespace EventAdvanceTick_t
{
	constexpr uint32_t m_nCurrentTick = 0x30;  // int32 
	constexpr uint32_t m_nCurrentTickThisFrame = 0x34;  // int32 
	constexpr uint32_t m_nTotalTicksThisFrame = 0x38;  // int32 
	constexpr uint32_t m_nTotalTicks = 0x3C;  // int32 
}

namespace EventPostAdvanceTick_t
{
	constexpr uint32_t m_nCurrentTick = 0x30;  // int32 
	constexpr uint32_t m_nCurrentTickThisFrame = 0x34;  // int32 
	constexpr uint32_t m_nTotalTicksThisFrame = 0x38;  // int32 
	constexpr uint32_t m_nTotalTicks = 0x3C;  // int32 
}

namespace EventServerAdvanceTick_t
{
}

namespace EventServerPostAdvanceTick_t
{
}

namespace EventServerBeginAsyncPostTickWork_t
{
}

namespace EventServerEndAsyncPostTickWork_t
{
}

namespace EventClientAdvanceTick_t
{
}

namespace EventClientPostAdvanceTick_t
{
}

namespace EventClientPollNetworking_t
{
	constexpr uint32_t m_nTickCount = 0x0;  // int32 
}

namespace EventClientProcessNetworking_t
{
	constexpr uint32_t m_nTickCount = 0x0;  // int32 
}

namespace EventClientPreSimulate_t
{
}

namespace EventClientSimulate_t
{
}

namespace EventServerPollNetworking_t
{
}

namespace EventServerProcessNetworking_t
{
}

namespace EventServerSimulate_t
{
}

namespace EventServerPostSimulate_t
{
}

namespace EventClientPostSimulate_t
{
}

namespace EventClientPauseSimulate_t
{
}

namespace EventPostDataUpdate_t
{
	constexpr uint32_t m_nCount = 0x0;  // int32 
}

namespace EventPreDataUpdate_t
{
	constexpr uint32_t m_nCount = 0x0;  // int32 
}

namespace EventAppShutdown_t
{
	constexpr uint32_t m_nDummy0 = 0x0;  // int32 
}

namespace CNetworkVarChainer
{
	constexpr uint32_t m_PathIndex = 0x20;  // ChangeAccessorFieldPathIndex_t 
}

namespace EntOutput_t
{
}

namespace CEntityComponentHelper
{
	constexpr uint32_t m_flags = 0x8;  // uint32 
	constexpr uint32_t m_pInfo = 0x10;  // EntComponentInfo_t* 
	constexpr uint32_t m_nPriority = 0x18;  // int32 
	constexpr uint32_t m_pNext = 0x20;  // CEntityComponentHelper* 
}

namespace CEntityComponent
{
}

namespace EntInput_t
{
}

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

namespace CEmptyEntityInstance
{
}

namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;  // CUtlSymbolLarge 
	constexpr uint32_t m_pEntity = 0x10;  // CEntityIdentity* 
	constexpr uint32_t m_CScriptComponent = 0x28;  // CScriptComponent* 
	constexpr uint32_t m_bVisibleinPVS = 0x30;  // bool 
}

namespace CEntityIOOutput
{
	constexpr uint32_t m_Value = 0x18;  // CVariantBase< CVariantDefaultAllocator > 
}

namespace GameTime_t
{
	constexpr uint32_t m_Value = 0x0;  // float32 
}

