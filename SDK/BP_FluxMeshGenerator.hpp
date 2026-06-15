#ifndef UE4SS_SDK_BP_FluxMeshGenerator_HPP
#define UE4SS_SDK_BP_FluxMeshGenerator_HPP

class UBP_FluxMeshGenerator_C : public UActorComponent
{
    class UTextureRenderTarget2D* HeightBuffer;                                       // 0x00A0 (size: 0x8)
    class UTextureRenderTarget2D* VelocityBuffer;                                     // 0x00A8 (size: 0x8)
    class UMaterialInterface* ReadHeightMaterial;                                     // 0x00B0 (size: 0x8)
    class UMaterialInterface* ReadVelocityMaterial;                                   // 0x00B8 (size: 0x8)

    void GetTriangle(TArray<int32>& Array, int32 Index, int32& 1, int32& 2, int32& 3);
    void GenerateMesh(class UProceduralMeshComponent* InitMesh, class UPDA_FluxSimulationState_C* InitState, int32 LOD, class UMaterialInterface* Material, uint8 Padding, int32& Vetticles, int32& Polygons);
    void ReadWater(FVector2D UV, FVector2D& Velocity, double& Water, double& Foam);
    void ReadHeight(FVector2D& UV, double& Height);
    void InitializeBuffers(class UPDA_FluxSimulationState_C* State, uint8 EdgePadding, double FoamScale);
}; // Size: 0xC0

#endif
