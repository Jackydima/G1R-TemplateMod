#ifndef UE4SS_SDK_PDA_FluxSimulationState_HPP
#define UE4SS_SDK_PDA_FluxSimulationState_HPP

class UPDA_FluxSimulationState_C : public UPrimaryDataAsset
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0030 (size: 0x8)
    bool Static;                                                                      // 0x0038 (size: 0x1)
    double EncodeVelocityMax;                                                         // 0x0040 (size: 0x8)
    double EncodeHeightMax;                                                           // 0x0048 (size: 0x8)
    int32 Iteration;                                                                  // 0x0050 (size: 0x4)
    FIntPoint Resolution;                                                             // 0x0054 (size: 0x8)
    class UTexture* GroundMap;                                                        // 0x0060 (size: 0x8)
    class UTexture* VelocityDepthFoamMap;                                             // 0x0068 (size: 0x8)
    FVector AreaLocation;                                                             // 0x0070 (size: 0x18)
    FVector AreaSize;                                                                 // 0x0088 (size: 0x18)
    class UTexture* HeightWetMap;                                                     // 0x00A0 (size: 0x8)
    int32 LevelOfDetail;                                                              // 0x00A8 (size: 0x4)
    bool Compression;                                                                 // 0x00AC (size: 0x1)
    FBS_FluxRectBlend AreaBlend;                                                      // 0x00B0 (size: 0x10)
    double CaptureOffset;                                                             // 0x00C0 (size: 0x8)

    void CopyPropertiesToObject(class UObject* Destination, bool& Done);
    void GetExternalReferences(TArray<class UTexture*>& Objects);
    void ApplyLandscapeData(class ALandscape* Landscape);
    void GetExternalFiles(TArray<class UTexture*>& List);
    void GetPathNames(TArray<FString>& Output_Get);
    void GetEncodeVector(FLinearColor& LinearColor);
    void GetDecodeVector(FVector& LinearColor);
    void GetLODScale(int32& Integer);
    void ApplyMaterialData(TArray<class UMaterialInstanceDynamic*>& MaterialInstances);
    void GetVolumeTransform(FVector ExtraSize, FVector Scale, double ZOffsetScale, FTransform& NewParam);
    void GetPixelSize(FLinearColor& WorldToSimulationUV);
    void GetWorldToTextureUV(FLinearColor& WorldToTextureUV);
    FVector4 GetAreaBlendBorders();
    void GetTextureSize(FIntPoint& Resolution);
    void ApplyNiagaraData(class UNiagaraComponent* NiagaraSystem, bool UseGround, bool UseSurface);
    void SetSimulationTextures(class UTexture* surface, class UTexture* Ground, class UTexture* Velocity);
    void SetSimulationWorld(FVector Location, FVector Size, int32 Frame, FIntPoint Resolution, FBS_FluxRectBlend Blend, double DepthOffset);
    void SetStateConfing(bool StaticFrame, double VelocityNormalization, double HeightNormalization, int32 LevelOfDetail, bool Compression);
    void ClearExternalReferences();
    void ExecuteUbergraph_PDA_FluxSimulationState(int32 EntryPoint);
}; // Size: 0xC8

#endif
