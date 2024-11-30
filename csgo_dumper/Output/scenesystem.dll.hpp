// Schema offset: 0x26fac8f0880 
// Schema name: scenesystem.dll 
// Schema declared class: 8 

// Offset: 0x7ffe1e77d220 
// N. Class: 0 
// Fields: 2 
namespace CSSDSEndFrameViewInfo
{
	constexpr uint32_t m_nViewId = 0x0;  // uint64 
	constexpr uint32_t m_ViewName = 0x8;  // CUtlString 
}

// Offset: 0x7ffe1e77d1e8 
// N. Class: 1 
// Fields: 1 
namespace CSSDSMsg_EndFrame
{
	constexpr uint32_t m_Views = 0x0;  // CUtlVector< CSSDSEndFrameViewInfo > 
}

// Offset: 0x7ffe1e77d1a0 
// N. Class: 2 
// Fields: 2 
namespace SceneViewId_t
{
	constexpr uint32_t m_nViewId = 0x0;  // uint64 
	constexpr uint32_t m_nFrameCount = 0x8;  // uint64 
}

// Offset: 0x7ffe1e77d160 
// N. Class: 3 
// Fields: 2 
namespace CSSDSMsg_ViewRender
{
	constexpr uint32_t m_viewId = 0x0;  // SceneViewId_t 
	constexpr uint32_t m_ViewName = 0x10;  // CUtlString 
}

// Offset: 0x7ffe1e77d090 
// N. Class: 4 
// Fields: 6 
namespace CSSDSMsg_LayerBase
{
	constexpr uint32_t m_viewId = 0x0;  // SceneViewId_t 
	constexpr uint32_t m_ViewName = 0x10;  // CUtlString 
	constexpr uint32_t m_nLayerIndex = 0x18;  // int32 
	constexpr uint32_t m_nLayerId = 0x20;  // uint64 
	constexpr uint32_t m_LayerName = 0x28;  // CUtlString 
	constexpr uint32_t m_displayText = 0x30;  // CUtlString 
}

// Offset: 0x7ffe1e77cf40 
// N. Class: 5 
// Fields: 10 
namespace CSSDSMsg_ViewTarget
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
	constexpr uint32_t m_TextureId = 0x8;  // uint64 
	constexpr uint32_t m_nWidth = 0x10;  // int32 
	constexpr uint32_t m_nHeight = 0x14;  // int32 
	constexpr uint32_t m_nRequestedWidth = 0x18;  // int32 
	constexpr uint32_t m_nRequestedHeight = 0x1C;  // int32 
	constexpr uint32_t m_nNumMipLevels = 0x20;  // int32 
	constexpr uint32_t m_nDepth = 0x24;  // int32 
	constexpr uint32_t m_nMultisampleNumSamples = 0x28;  // int32 
	constexpr uint32_t m_nFormat = 0x2C;  // int32 
}

// Offset: 0x7ffe1e77cee0 
// N. Class: 6 
// Fields: 3 
namespace CSSDSMsg_ViewTargetList
{
	constexpr uint32_t m_viewId = 0x0;  // SceneViewId_t 
	constexpr uint32_t m_ViewName = 0x10;  // CUtlString 
	constexpr uint32_t m_Targets = 0x18;  // CUtlVector< CSSDSMsg_ViewTarget > 
}

// Offset: 0x0 
// N. Class: 7 
// Fields: 0 
namespace CSSDSMsg_PreLayer
{
}

