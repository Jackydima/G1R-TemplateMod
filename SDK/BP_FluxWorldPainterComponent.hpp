#ifndef UE4SS_SDK_BP_FluxWorldPainterComponent_HPP
#define UE4SS_SDK_BP_FluxWorldPainterComponent_HPP

class UBP_FluxWorldPainterComponent_C : public UActorComponent
{
    class UCanvas* CanvasObject;                                                      // 0x00A0 (size: 0x8)
    FVector2D CanvasSize;                                                             // 0x00A8 (size: 0x10)
    FDrawToRenderTargetContext Context;                                               // 0x00B8 (size: 0x8)
    TEnumAsByte<BE_WorldBrushType::Type> CanvasType;                                  // 0x00C0 (size: 0x1)

    void SetPainterParameters(TArray<class UMaterialInstanceDynamic*>& Material, FTransform& AreaTransform, class UTextureRenderTarget2D* Texture);
    void SetBrushParameters(class UMaterialInstanceDynamic* Material, FTransform AreaTransform, FIntPoint AreaResolution);
    void RenderScene(class UTextureRenderTarget2D* TextureRenderTarget);
    void DrawRect(class UMaterialInstanceDynamic*& MaterialInstance, FTransform Transform);
}; // Size: 0xC1

#endif
