#ifndef UE4SS_SDK_BP_FluxSolverComponent_HPP
#define UE4SS_SDK_BP_FluxSolverComponent_HPP

class UBP_FluxSolverComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    double UpdateRate;                                                                // 0x00A8 (size: 0x8)
    int32 CurrentFrame;                                                               // 0x00B0 (size: 0x4)
    class UMaterialInstanceDynamic* SimulationInstance;                               // 0x00B8 (size: 0x8)
    class UMaterialInstanceDynamic* NormalInstance;                                   // 0x00C0 (size: 0x8)
    class UMaterialInstanceDynamic* InteractionInstance;                              // 0x00C8 (size: 0x8)
    int32 MaxIterationsPerFrame;                                                      // 0x00D0 (size: 0x4)
    double TimeAccumulator;                                                           // 0x00D8 (size: 0x8)
    TArray<class AActor*> ActiveInteractions;                                         // 0x00E0 (size: 0x10)
    int32 SimulationResolution;                                                       // 0x00F0 (size: 0x4)
    class UTextureRenderTarget2D* NormalTexture;                                      // 0x00F8 (size: 0x8)
    class UTextureRenderTarget2D* Heightmap0;                                         // 0x0100 (size: 0x8)
    class UTextureRenderTarget2D* Heightmap1;                                         // 0x0108 (size: 0x8)
    class UTextureRenderTarget2D* Heightmap2;                                         // 0x0110 (size: 0x8)
    TEnumAsByte<ETextureRenderTargetFormat> SimulationFormat;                         // 0x0118 (size: 0x1)
    int32 WorldPixelSize;                                                             // 0x011C (size: 0x4)
    int32 WorldAreaSize;                                                              // 0x0120 (size: 0x4)
    TEnumAsByte<ETextureRenderTargetFormat> NormalFormat;                             // 0x0124 (size: 0x1)
    double FrameDelta;                                                                // 0x0128 (size: 0x8)
    bool UseWorldPositionOffset;                                                      // 0x0130 (size: 0x1)
    class AActor* CapturedFocusActor;                                                 // 0x0138 (size: 0x8)
    double World Position Offset Range;                                               // 0x0140 (size: 0x8)
    double WorldPositionOffsetFrequency;                                              // 0x0148 (size: 0x8)
    FVector CaptureFocusLocation;                                                     // 0x0150 (size: 0x18)
    double CaptureCameraHeight;                                                       // 0x0168 (size: 0x8)
    FVector2D WorldOffset;                                                            // 0x0170 (size: 0x10)
    FVector2D WorldOffsetPrev;                                                        // 0x0180 (size: 0x10)
    int32 NormalLod;                                                                  // 0x0190 (size: 0x4)
    bool GenerateMipmaps;                                                             // 0x0194 (size: 0x1)
    double WorldAreaSizeInv;                                                          // 0x0198 (size: 0x8)
    bool CleanOffset;                                                                 // 0x01A0 (size: 0x1)
    FLinearColor WorldToInteractionUV;                                                // 0x01A4 (size: 0x10)
    TArray<class AActor*> InteractionRenderers;                                       // 0x01B8 (size: 0x10)
    bool OutputNormalAlpha;                                                           // 0x01C8 (size: 0x1)
    class UPDA_FluxSimulationState_C* SimulationState;                                // 0x01D0 (size: 0x8)
    double WaveDamping;                                                               // 0x01D8 (size: 0x8)
    double WaveTravelSpeed;                                                           // 0x01E0 (size: 0x8)
    double BorderFalloff;                                                             // 0x01E8 (size: 0x8)
    int32 Iteration;                                                                  // 0x01F0 (size: 0x4)
    class UPDA_FluxCoastlineState_C* WorldState;                                      // 0x01F8 (size: 0x8)
    class UMaterialInstanceDynamic* DebugInstance;                                    // 0x0200 (size: 0x8)
    bool Debug;                                                                       // 0x0208 (size: 0x1)
    double AutoDisablerTime;                                                          // 0x0210 (size: 0x8)
    double AutoDisablerMaxTime;                                                       // 0x0218 (size: 0x8)
    bool HasOverlaps;                                                                 // 0x0220 (size: 0x1)

    void CheckOverlaps();
    void RestartDisabler();
    void DisconnctSurface(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void GetMaterials(TArray<class UMaterialInstanceDynamic*>& Instances1);
    void CanRenderInteractions(bool& CanRender);
    void RemoveOverlapping(const class AActor*& OverlapingActor);
    void AddOverlapping(const class AActor*& OverlapingActor);
    void ApplySimulationOffset();
    void UpdateFocusLocation();
    FVector2D RoundToPixel(FVector2D& Location, int32 PixelSize);
    void UpdateWorldPosition();
    void InitializeRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget, TEnumAsByte<TextureAddress> Repeat, TEnumAsByte<TextureFilter> Filter);
    void UpdateInteractions(class UCanvas* Canvas, FVector2D ScreenSize, double Fraction, int32 Part, class UTextureRenderTarget2D* RenderTarget);
    void UpdateNormalMap(class UTexture* HeightMap);
    void UpdateSimulation(double DeltTime);
    void JumpToNextFrame(class UTextureRenderTarget2D*& PrevFrame, class UTextureRenderTarget2D*& CurrentFrame, class UTextureRenderTarget2D*& NextFrame);
    void InitializeSimulation();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FluxSolverComponent(int32 EntryPoint);
}; // Size: 0x221

#endif
