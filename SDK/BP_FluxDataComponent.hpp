#ifndef UE4SS_SDK_BP_FluxDataComponent_HPP
#define UE4SS_SDK_BP_FluxDataComponent_HPP

class UBP_FluxDataComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TArray<FVector> ReadbackLocations;                                                // 0x00A8 (size: 0x10)
    double ReadbackEventInterval;                                                     // 0x00B8 (size: 0x8)
    class UNiagaraSystem* CustomReadbackSystem;                                       // 0x00C0 (size: 0x8)
    bool FindWorldSurface;                                                            // 0x00C8 (size: 0x1)
    bool IsAfterReadback;                                                             // 0x00C9 (size: 0x1)
    double FluxFluidHeight;                                                           // 0x00D0 (size: 0x8)
    FVector FluxSurfaceLocation;                                                      // 0x00D8 (size: 0x18)
    FVector FluxFluidVelocity;                                                        // 0x00F0 (size: 0x18)
    FBP_FluxDataComponent_COnReceiveParticleData OnReceiveParticleData;               // 0x0108 (size: 0x10)
    void OnReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
    bool UseGroundMap;                                                                // 0x0118 (size: 0x1)
    bool UseWave;                                                                     // 0x0119 (size: 0x1)
    FName OwnerComponentTag;                                                          // 0x011C (size: 0x8)
    FName OwnerSocketName;                                                            // 0x0124 (size: 0x8)
    class UNiagaraComponent* ExportDataInstance;                                      // 0x0130 (size: 0x8)
    class AActor* SurfaceActor;                                                       // 0x0138 (size: 0x8)
    bool DrawDebug;                                                                   // 0x0140 (size: 0x1)
    TArray<FBasicParticleData> ReadbackData;                                          // 0x0148 (size: 0x10)
    double SampleTime;                                                                // 0x0158 (size: 0x8)

    void GetOwnerComponent(class USceneComponent*& SceneComponent);
    void ApplyNiagaraParameters();
    void InitEventListener();
    void RemoveEventListener();
    void Get Readback Indexed Position(int32 Index, FVector& Location, FVector& Velocity, double& Height);
    void SetRelativeSamplePoints(TArray<FVector>& Points);
    void SetArrayData(TArray<FBasicParticleData>& ParticleDataStructure);
    void ReadParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
    void SetPointData(FBasicParticleData& ParticleDataStructure);
    void GetWorldSurface(class AActor*& Output);
    void SetSurfaceActor(const class AActor*& Interface);
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Activation(class UActorComponent* Component, bool bReset);
    void Deactivation(class UActorComponent* Component);
    void ReceiveReadData(const TArray<FBasicParticleData>& Data);
    void ExecuteUbergraph_BP_FluxDataComponent(int32 EntryPoint);
    void OnReceiveParticleData__DelegateSignature(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
}; // Size: 0x160

#endif
