#ifndef UE4SS_SDK_BP_FluxDataAudioComponent_HPP
#define UE4SS_SDK_BP_FluxDataAudioComponent_HPP

class UBP_FluxDataAudioComponent_C : public UBP_FluxDataComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAudioComponent* AudioSource;                                               // 0x0168 (size: 0x8)
    class USoundBase* SoundMixer;                                                     // 0x0170 (size: 0x8)
    class USoundBase* SoundParameter;                                                 // 0x0178 (size: 0x8)
    double SourceLocationChange;                                                      // 0x0180 (size: 0x8)
    double SourceVolumeChange;                                                        // 0x0188 (size: 0x8)
    int32 SearchGridDivisions;                                                        // 0x0190 (size: 0x4)
    double SearchGridWidth;                                                           // 0x0198 (size: 0x8)
    double DistantSamples;                                                            // 0x01A0 (size: 0x8)
    double AmbientVolume;                                                             // 0x01A8 (size: 0x8)
    double CloseSamples;                                                              // 0x01B0 (size: 0x8)
    FVector FromOldToNewLocation;                                                     // 0x01B8 (size: 0x18)
    FVector OldLocation;                                                              // 0x01D0 (size: 0x18)
    FVector NewLocation;                                                              // 0x01E8 (size: 0x18)
    double AmbientVelocity;                                                           // 0x0200 (size: 0x8)

    void ApplyNiagaraParameters();
    void SetFluidDistance(double CameraNearSurface);
    void DrawDebugSource();
    void UpdateSource(FVector Location, double Velocity, int32 Index, double Distance);
    void ReceiveBeginPlay();
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FluxDataAudioComponent(int32 EntryPoint);
}; // Size: 0x208

#endif
