#ifndef UE4SS_SDK_PDA_FluxCoastlineState_HPP
#define UE4SS_SDK_PDA_FluxCoastlineState_HPP

class UPDA_FluxCoastlineState_C : public UPrimaryDataAsset
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0030 (size: 0x8)
    FIntPoint WorldResolution;                                                        // 0x0038 (size: 0x8)
    double WorldPixelSize;                                                            // 0x0040 (size: 0x8)
    class UTexture* WorldGroundMap;                                                   // 0x0048 (size: 0x8)
    FVector AreaLocation;                                                             // 0x0050 (size: 0x18)
    FVector AreaSize;                                                                 // 0x0068 (size: 0x18)
    class UTexture* WorldCoastlineMap;                                                // 0x0080 (size: 0x8)
    double CaptureOffset;                                                             // 0x0088 (size: 0x8)
    double CoastWidth;                                                                // 0x0090 (size: 0x8)

    void CopyPropertiesToObject(class UObject* Destination, bool& Done);
    void GetExternalReferences(TArray<class UTexture*>& Objects);
    void GetSurfaceHeight(double& SurfaceHeight);
    void ApplyMaterialData(TArray<class UMaterialInstanceDynamic*>& MaterialInstances);
    void GetVolumeTransform(FVector ExtraSize, FVector Scale, double ZOffsetScale, FTransform& NewParam);
    void GetPixelSize(FLinearColor& WorldToSimulationUV);
    void GetWorldToTextureUV(FLinearColor& WorldToTextureUV);
    void GetTextureSize(FIntPoint& Resolution);
    void ApplyNiagaraData(class UNiagaraComponent* NiagaraSystem, bool UseGround);
    void SetTextures(class UTexture* WorldCoastline, class UTexture* WorldGround);
    void SetDomain(FVector Location, FVector Size, FIntPoint Resolution, double PixelSize, double CaptureOffset, double Width);
    void ClearExternalReferences();
    void ExecuteUbergraph_PDA_FluxCoastlineState(int32 EntryPoint);
}; // Size: 0x98

#endif
