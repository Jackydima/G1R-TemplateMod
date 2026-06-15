#ifndef UE4SS_SDK_BP_BaseCandle_HPP
#define UE4SS_SDK_BP_BaseCandle_HPP

class ABP_BaseCandle_C : public ABP_BaseFlame_C
{
    class UStaticMeshComponent* CandlePlane;                                          // 0x0F70 (size: 0x8)
    class UStaticMeshComponent* candlemesh;                                           // 0x0F78 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0F80 (size: 0x8)
    class UMaterialInstance* CandleMaterialInstanceIdle;                              // 0x0F88 (size: 0x8)
    class UMaterialInstance* CandleMaterialInstanceWithWind;                          // 0x0F90 (size: 0x8)
    class UMaterialInstance* CandleMaterialInstanceOnlyOrbitWind;                     // 0x0F98 (size: 0x8)
    FVector FlameOffset;                                                              // 0x0FA0 (size: 0x18)
    FVector OriginalLightPositionLocal;                                               // 0x0FB8 (size: 0x18)
    FVector LightSourceOrbitDistance;                                                 // 0x0FD0 (size: 0x18)
    class UMaterialInstanceDynamic* CandleDIM;                                        // 0x0FE8 (size: 0x8)
    class UMaterialInstance* FlameMaterialInstanceWithWind;                           // 0x0FF0 (size: 0x8)
    class UMaterialInstance* FlameMaterialInstanceOnlyOrbit;                          // 0x0FF8 (size: 0x8)
    class UNiagaraSystem* CandleOverflowVFX;                                          // 0x1000 (size: 0x8)
    class UNiagaraSystem* CandleRecoverVFX;                                           // 0x1008 (size: 0x8)
    class UNiagaraSystem* CandleHitVFX;                                               // 0x1010 (size: 0x8)
    class UNiagaraSystem* CandleOverflowToBaseVFX;                                    // 0x1018 (size: 0x8)
    double EmissiveMaterialOnIntensity;                                               // 0x1020 (size: 0x8)

    void BP_Switchon(bool PlaySound, bool PlayParticles);
    void BP_Switchoff(bool PlaySound, bool PlayParticles);
    void CustomLazyInitialize();
    void GatherFireSources(TArray<class UPrimitiveComponent*>& Fire Planes);
    void Switchoff(bool isPlayer);
    void SwitchOn(bool isPlayer);
    void GatherInteractables(TArray<class USceneComponent*>& Interactables);
    void FixPivotToLocal(FLinearColor World Position Offset, FVector& World Pivot);
    void ResetMaterial();
    void Initialize Wind Material(FS_SimpleWindStruct Wind Struct, bool Is Wind Displacing);
    void ResetFlame(bool Is Wind Displacing, class UMeshComponent* Fire);
    void InitializeFlame(FS_SimpleWindStruct Wind Struct, bool Is Wind Displacing, class UMeshComponent* Fire);
    void InitializeCandle(FS_SimpleWindStruct Wind Struct, bool IsWindDisplacing, bool IsWindEnabled);
}; // Size: 0x1028

#endif
