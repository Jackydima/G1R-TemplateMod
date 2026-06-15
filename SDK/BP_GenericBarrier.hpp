#ifndef UE4SS_SDK_BP_GenericBarrier_HPP
#define UE4SS_SDK_BP_GenericBarrier_HPP

class ABP_GenericBarrier_C : public ABattleBarrierVisual
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UGothicFXComponent* GothicFX;                                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* InvCollider_BlockPawn;                                // 0x02D0 (size: 0x8)
    class UNiagaraComponent* P_GenericBarrierImpact;                                  // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* LightPlane;                                           // 0x02E0 (size: 0x8)
    class UNiagaraComponent* P_SleeperTemple_MagicBarrier;                            // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02F0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F8 (size: 0x8)
    float TL_BarrierHit_Alpha_947E2F3348CA46947AD679AB9C1FD10B;                       // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_BarrierHit__Direction_947E2F3348CA46947AD679AB9C1FD10B; // 0x0304 (size: 0x1)
    class UTimelineComponent* TL_BarrierHit;                                          // 0x0308 (size: 0x8)
    float TL_Door_Dissolve_639E55F8428877477C5D8AA67100051E;                          // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Door__Direction_639E55F8428877477C5D8AA67100051E; // 0x0314 (size: 0x1)
    class UTimelineComponent* TL Door;                                                // 0x0318 (size: 0x8)
    double Dissolve;                                                                  // 0x0320 (size: 0x8)
    bool IsOpening;                                                                   // 0x0328 (size: 0x1)
    bool IsOpened;                                                                    // 0x0329 (size: 0x1)
    double Time to Open;                                                              // 0x0330 (size: 0x8)
    class UMaterialInstanceDynamic* Mid;                                              // 0x0338 (size: 0x8)
    FLinearColor Barrier Color;                                                       // 0x0340 (size: 0x10)
    bool Use Distance Field Border;                                                   // 0x0350 (size: 0x1)
    FLinearColor Border Color;                                                        // 0x0354 (size: 0x10)
    FLinearColor Particle Color;                                                      // 0x0364 (size: 0x10)
    double Particle Multiplier;                                                       // 0x0378 (size: 0x8)
    double X Tiling;                                                                  // 0x0380 (size: 0x8)
    double Y Tiling;                                                                  // 0x0388 (size: 0x8)
    bool Two Sided;                                                                   // 0x0390 (size: 0x1)
    bool Enable Light;                                                                // 0x0391 (size: 0x1)
    bool IsHitting;                                                                   // 0x0392 (size: 0x1)

    class UGothicFXComponent* GetFXComp();
    void UserConstructionScript();
    void TL Door__FinishedFunc();
    void TL Door__UpdateFunc();
    void TL_BarrierHit__FinishedFunc();
    void TL_BarrierHit__UpdateFunc();
    void SetState(bool Openned);
    void OpenDoor(bool Reverse);
    void BndEvt__BP_GenericBarrier_Plane_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_GenericBarrier_Plane_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHitEvent(FVector position);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GenericBarrier(int32 EntryPoint);
}; // Size: 0x393

#endif
