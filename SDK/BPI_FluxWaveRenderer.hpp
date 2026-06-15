#ifndef UE4SS_SDK_BPI_FluxWaveRenderer_HPP
#define UE4SS_SDK_BPI_FluxWaveRenderer_HPP

class IBPI_FluxWaveRenderer_C : public IInterface
{

    void RequestOceanUpdate();
    void UpdateSpeed(double Extra Time);
    void SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile);
    void SetWaveTexture(bool Update Waves Only);
    void GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>& MaterialInstances);
    void SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, FLinearColor Area);
    void CanRenderWave(bool& CanRender);
}; // Size: 0x28

#endif
