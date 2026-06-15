#ifndef UE4SS_SDK_BP_GothicFluxDataComponent_HPP
#define UE4SS_SDK_BP_GothicFluxDataComponent_HPP

class UBP_GothicFluxDataComponent_C : public UBP_FluxDataComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    FVector GetGothicFluxSurfaceLocation();
    bool IsGothicFluxDataValid();
    void RecomputeSurfaceIfNeeded();
    void IsOceanPhysicsVolume(class APhysicsVolume* PhysicsVolume, bool& IsOceanVolume);
    void IsFluxSurfaceLocationWithinRange(bool& IsWithingRange);
    void SetActiveBasedOnPhysicsVolume(class APhysicsVolume* PhysicsVolume);
    void OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_GothicFluxDataComponent(int32 EntryPoint);
}; // Size: 0x168

#endif
