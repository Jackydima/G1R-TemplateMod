#ifndef UE4SS_SDK_BPL_FluidFlux_HPP
#define UE4SS_SDK_BPL_FluidFlux_HPP

class UBPL_FluidFlux_C : public UBlueprintFunctionLibrary
{

    void SetTexture2DConfig(class UTexture2D* RenderTargetObject, TEnumAsByte<TextureFilter> Filter, bool SRGB, TEnumAsByte<TextureAddress> Address X, TEnumAsByte<TextureAddress> Address Y, TEnumAsByte<TextureMipGenSettings> Mip Gen Settings, class UObject* __WorldContext);
    void IsPointPowerOfTwo(FIntPoint Value, class UObject* __WorldContext, bool& Result);
    void IsValuePowerOfTwo(int32 Value, class UObject* __WorldContext, bool& Result);
    void SetRectTransform2D(class UMaterialInstanceDynamic*& Target, const FTransform& InTransform, class UObject* __WorldContext);
    void SetRenderTargetConfig(class UTextureRenderTarget2D* RenderTargetObject, TEnumAsByte<TextureFilter> Filter, bool SRGB, TEnumAsByte<TextureAddress> Address X, TEnumAsByte<TextureAddress> Address Y, class UObject* __WorldContext);
    void MakeVolumeLocalTransform(FVector ExtraSize, FVector Scale, double ZOffsetScale, class UObject* __WorldContext, FTransform& NewParam);
    void GetUndefiniedHeight(class UObject* __WorldContext, double& NewParam);
    void GetEngineVersionInt(class UObject* __WorldContext, int32& Integer);
    void GetBordersVector(int32 StateAreaBorders, class UObject* __WorldContext, FLinearColor& LinearColor);
    void CheckRenderTarget(int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, class UTextureRenderTarget2D* CurrentRenderTarget, class UObject* __WorldContext, bool& TheSame);
    void RecreateRenderTarget(class UTextureRenderTarget2D* CurrentTexture, int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, uint8 LOD, bool GenerateMipmaps, class UObject* __WorldContext, class UTextureRenderTarget2D*& NewTexture);
}; // Size: 0x28

#endif
