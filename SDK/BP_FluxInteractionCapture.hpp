#ifndef UE4SS_SDK_BP_FluxInteractionCapture_HPP
#define UE4SS_SDK_BP_FluxInteractionCapture_HPP

class ABP_FluxInteractionCapture_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Preview;                                              // 0x0298 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x02A0 (size: 0x8)
    class UBP_FluxSolverRippleComponent_C* Ripple;                                    // 0x02A8 (size: 0x8)
    class UBoxComponent* Area;                                                        // 0x02B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B8 (size: 0x8)
    class UBP_FluxSolverComponent_C* Solver;                                          // 0x02C0 (size: 0x8)
    TArray<class AActor*> PersistantActors;                                           // 0x02C8 (size: 0x10)
    int32 AreaResolution;                                                             // 0x02D8 (size: 0x4)
    int32 WorldPixelSize;                                                             // 0x02DC (size: 0x4)
    double AreaSize;                                                                  // 0x02E0 (size: 0x8)
    double AreaHeight;                                                                // 0x02E8 (size: 0x8)
    bool DrawDebug;                                                                   // 0x02F0 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> DebugMesh;                                            // 0x02F8 (size: 0x28)

    void GetCoastlineState(class UPDA_FluxCoastlineState_C*& State);
    void GetSimulationState(class UPDA_FluxSimulationState_C*& State);
    void CanRenderInteractions(bool& CanRender);
    void InitializeArea();
    void PreviewDebugArea();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__WaterSurface_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__WaterSurface_BP_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetInteractionsArea(FLinearColor Area);
    void SetInteractionsTexture(class UTextureRenderTarget2D* Texture);
    void ExecuteUbergraph_BP_FluxInteractionCapture(int32 EntryPoint);
}; // Size: 0x320

#endif
