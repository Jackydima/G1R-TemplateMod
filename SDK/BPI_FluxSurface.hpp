#ifndef UE4SS_SDK_BPI_FluxSurface_HPP
#define UE4SS_SDK_BPI_FluxSurface_HPP

class IBPI_FluxSurface_C : public IInterface
{

    void OnForceCameraUpdate();
    void SetColorPreset(int32 Index, class UPDA_FluxSurfacePreset_C* Preset);
    void GetColorPreset(int32 Index, class UPDA_FluxSurfacePreset_C*& Preset);
    void OnGlassMeshChanged();
    void InitializeAllStates();
    void ApplyColorProfiles();
    void ApplyMask();
    void ApplyPainter();
    void SetCoastlineState(class UPDA_FluxCoastlineState_C* State);
    void SetSimulationState(class UPDA_FluxSimulationState_C* State);
    void SpawnSplashAtLocation(FVector Location, int32 Type);
    void SetStateHeightWetMap(class UTexture* Texture);
    void GetVolumeCollision(class UPrimitiveComponent*& Volume);
    void ApplySurfaceMaterialData(const TArray<class UMaterialInstanceDynamic*>& Materials, bool Update Waves Only);
    void ApplySurfaceNiagaraData(class UNiagaraComponent* ParticleSystem, bool RequiredGround, bool RequiredWave, bool Update Waves Only);
}; // Size: 0x28

#endif
