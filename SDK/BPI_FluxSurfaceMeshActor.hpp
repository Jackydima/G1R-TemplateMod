#ifndef UE4SS_SDK_BPI_FluxSurfaceMeshActor_HPP
#define UE4SS_SDK_BPI_FluxSurfaceMeshActor_HPP

class IBPI_FluxSurfaceMeshActor_C : public IInterface
{

    void GetGlassMaterials(TArray<class UMaterialInstanceDynamic*>& NewParam);
    void SetExternalMaterial(class UMaterialInterface* OverWater);
}; // Size: 0x28

#endif
