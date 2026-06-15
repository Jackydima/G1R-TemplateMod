#ifndef UE4SS_SDK_BP_FluxNiagaraActor_HPP
#define UE4SS_SDK_BP_FluxNiagaraActor_HPP

class ABP_FluxNiagaraActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0298 (size: 0x8)
    class UBoxComponent* Volume;                                                      // 0x02A0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A8 (size: 0x8)
    FVector VolumeSize;                                                               // 0x02B0 (size: 0x18)
    FBP_FluxNiagaraActor_COnWaterEvent OnWaterEvent;                                  // 0x02C8 (size: 0x10)
    void OnWaterEvent(FVector position, double Water, FVector Velocity);
    double SpawnRate;                                                                 // 0x02D8 (size: 0x8)
    class UNiagaraSystem* NiagaraSystem;                                              // 0x02E0 (size: 0x8)
    double ReceiveEventFrequency;                                                     // 0x02E8 (size: 0x8)
    double DelayedInitialization;                                                     // 0x02F0 (size: 0x8)
    bool UseGroundMap;                                                                // 0x02F8 (size: 0x1)
    TSubclassOf<class AActor> InteractionClass;                                       // 0x0300 (size: 0x8)
    class AActor* InteractionActor;                                                   // 0x0308 (size: 0x8)
    bool UseInteraction;                                                              // 0x0310 (size: 0x1)
    bool UseWaveMap;                                                                  // 0x0311 (size: 0x1)
    class UNiagaraComponent* Niagara;                                                 // 0x0318 (size: 0x8)
    int32 Translucent Sort Priority;                                                  // 0x0320 (size: 0x4)

    void OverlapingInteraction();
    void RestartNiagara();
    void StartReadback();
    void ApplyNiagaraData();
    void InitializeCollisions();
    void GetWorldSurface(class AActor*& SurfaceAbstract);
    void AdjustSize();
    void InitializeNiagara(class AActor* SurfaceAbstract);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void BndEvt__BP_FluxNiagara_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_FluxNiagara_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FluxNiagaraActor(int32 EntryPoint);
    void OnWaterEvent__DelegateSignature(FVector position, double Water, FVector Velocity);
}; // Size: 0x324

#endif
