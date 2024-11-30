// Schema offset: 0x26f837b0fc0 
// Schema name: materialsystem2.dll 
// Schema declared class: 12 

// Offset: 0x7ffe2b03dc58 
// N. Class: 0 
// Fields: 1 
namespace MaterialParam_t
{
	constexpr uint32_t m_name = 0x0;  // CUtlString 
}

// Offset: 0x7ffe2b03e040 
// N. Class: 1 
// Fields: 1 
namespace MaterialParamInt_t
{
	constexpr uint32_t m_nValue = 0x8;  // int32 
}

// Offset: 0x7ffe2b03e060 
// N. Class: 2 
// Fields: 1 
namespace MaterialParamFloat_t
{
	constexpr uint32_t m_flValue = 0x8;  // float32 
}

// Offset: 0x7ffe2b03db18 
// N. Class: 3 
// Fields: 1 
namespace MaterialParamVector_t
{
	constexpr uint32_t m_value = 0x8;  // Vector4D 
}

// Offset: 0x7ffe2b03da60 
// N. Class: 4 
// Fields: 1 
namespace MaterialParamTexture_t
{
	constexpr uint32_t m_pValue = 0x8;  // CStrongHandle< InfoForResourceTypeCTextureBase > 
}

// Offset: 0x7ffe2b03db38 
// N. Class: 5 
// Fields: 1 
namespace MaterialParamString_t
{
	constexpr uint32_t m_value = 0x8;  // CUtlString 
}

// Offset: 0x7ffe2b03e0f0 
// N. Class: 6 
// Fields: 1 
namespace MaterialParamBuffer_t
{
	constexpr uint32_t m_value = 0x8;  // CUtlBinaryBlock 
}

// Offset: 0x7ffe2b03de00 
// N. Class: 7 
// Fields: 14 
namespace MaterialResourceData_t
{
	constexpr uint32_t m_materialName = 0x0;  // CUtlString 
	constexpr uint32_t m_shaderName = 0x8;  // CUtlString 
	constexpr uint32_t m_intParams = 0x10;  // CUtlVector< MaterialParamInt_t > 
	constexpr uint32_t m_floatParams = 0x28;  // CUtlVector< MaterialParamFloat_t > 
	constexpr uint32_t m_vectorParams = 0x40;  // CUtlVector< MaterialParamVector_t > 
	constexpr uint32_t m_textureParams = 0x58;  // CUtlVector< MaterialParamTexture_t > 
	constexpr uint32_t m_dynamicParams = 0x70;  // CUtlVector< MaterialParamBuffer_t > 
	constexpr uint32_t m_dynamicTextureParams = 0x88;  // CUtlVector< MaterialParamBuffer_t > 
	constexpr uint32_t m_intAttributes = 0xA0;  // CUtlVector< MaterialParamInt_t > 
	constexpr uint32_t m_floatAttributes = 0xB8;  // CUtlVector< MaterialParamFloat_t > 
	constexpr uint32_t m_vectorAttributes = 0xD0;  // CUtlVector< MaterialParamVector_t > 
	constexpr uint32_t m_textureAttributes = 0xE8;  // CUtlVector< MaterialParamTexture_t > 
	constexpr uint32_t m_stringAttributes = 0x100;  // CUtlVector< MaterialParamString_t > 
	constexpr uint32_t m_renderAttributesUsed = 0x118;  // CUtlVector< CUtlString > 
}

// Offset: 0x7ffe2b03d2d0 
// N. Class: 8 
// Fields: 15 
namespace PostProcessingTonemapParameters_t
{
	constexpr uint32_t m_flExposureBias = 0x0;  // float32 
	constexpr uint32_t m_flShoulderStrength = 0x4;  // float32 
	constexpr uint32_t m_flLinearStrength = 0x8;  // float32 
	constexpr uint32_t m_flLinearAngle = 0xC;  // float32 
	constexpr uint32_t m_flToeStrength = 0x10;  // float32 
	constexpr uint32_t m_flToeNum = 0x14;  // float32 
	constexpr uint32_t m_flToeDenom = 0x18;  // float32 
	constexpr uint32_t m_flWhitePoint = 0x1C;  // float32 
	constexpr uint32_t m_flLuminanceSource = 0x20;  // float32 
	constexpr uint32_t m_flExposureBiasShadows = 0x24;  // float32 
	constexpr uint32_t m_flExposureBiasHighlights = 0x28;  // float32 
	constexpr uint32_t m_flMinShadowLum = 0x2C;  // float32 
	constexpr uint32_t m_flMaxShadowLum = 0x30;  // float32 
	constexpr uint32_t m_flMinHighlightLum = 0x34;  // float32 
	constexpr uint32_t m_flMaxHighlightLum = 0x38;  // float32 
}

// Offset: 0x7ffe2b03d180 
// N. Class: 9 
// Fields: 10 
namespace PostProcessingBloomParameters_t
{
	constexpr uint32_t m_blendMode = 0x0;  // BloomBlendMode_t 
	constexpr uint32_t m_flBloomStrength = 0x4;  // float32 
	constexpr uint32_t m_flScreenBloomStrength = 0x8;  // float32 
	constexpr uint32_t m_flBlurBloomStrength = 0xC;  // float32 
	constexpr uint32_t m_flBloomThreshold = 0x10;  // float32 
	constexpr uint32_t m_flBloomThresholdWidth = 0x14;  // float32 
	constexpr uint32_t m_flSkyboxBloomStrength = 0x18;  // float32 
	constexpr uint32_t m_flBloomStartValue = 0x1C;  // float32 
	constexpr uint32_t m_flBlurWeight = 0x20;  // float32[5] 
	constexpr uint32_t m_vBlurTint = 0x34;  // Vector[5] 
}

// Offset: 0x7ffe2b03d4b0 
// N. Class: 10 
// Fields: 6 
namespace PostProcessingVignetteParameters_t
{
	constexpr uint32_t m_flVignetteStrength = 0x0;  // float32 
	constexpr uint32_t m_vCenter = 0x4;  // Vector2D 
	constexpr uint32_t m_flRadius = 0xC;  // float32 
	constexpr uint32_t m_flRoundness = 0x10;  // float32 
	constexpr uint32_t m_flFeather = 0x14;  // float32 
	constexpr uint32_t m_vColorTint = 0x18;  // Vector 
}

// Offset: 0x7ffe2b03d0e0 
// N. Class: 11 
// Fields: 5 
namespace PostProcessingLocalContrastParameters_t
{
	constexpr uint32_t m_flLocalContrastStrength = 0x0;  // float32 
	constexpr uint32_t m_flLocalContrastEdgeStrength = 0x4;  // float32 
	constexpr uint32_t m_flLocalContrastVignetteStart = 0x8;  // float32 
	constexpr uint32_t m_flLocalContrastVignetteEnd = 0xC;  // float32 
	constexpr uint32_t m_flLocalContrastVignetteBlur = 0x10;  // float32 
}

