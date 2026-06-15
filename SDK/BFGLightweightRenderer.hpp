#ifndef UE4SS_SDK_BFGLightweightRenderer_HPP
#define UE4SS_SDK_BFGLightweightRenderer_HPP

struct FBFGTrackedLightweightNaniteProxy
{
}; // Size: 0x18

struct FLightweightPostProcessPass
{
    class UMaterial* m_Material;                                                      // 0x0000 (size: 0x8)
    class UTextureRenderTarget2D* m_RenderTarget;                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

class ALightweightSceneCapture2D : public ASceneCapture2D
{
}; // Size: 0x2A8

class UBFGLightweightSceneCaptureComponent : public USceneCaptureComponent2D
{
    class UMaterial* m_OverrideMaterial;                                              // 0x0AF0 (size: 0x8)
    TArray<FLightweightPostProcessPass> m_PostprocessChain;                           // 0x0AF8 (size: 0x10)
    double m_NaniteFallbackEvictionTime;                                              // 0x0B08 (size: 0x8)
    TArray<TEnumAsByte<EMaterialUsage>> m_MaterialUsage;                              // 0x0B10 (size: 0x10)
    TMap<class UPrimitiveComponent*, class FBFGTrackedLightweightNaniteProxy> m_CachedNaniteProxies; // 0x0B20 (size: 0x50)

}; // Size: 0xB70

#endif
