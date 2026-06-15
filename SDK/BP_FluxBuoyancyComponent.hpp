#ifndef UE4SS_SDK_BP_FluxBuoyancyComponent_HPP
#define UE4SS_SDK_BP_FluxBuoyancyComponent_HPP

class UBP_FluxBuoyancyComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TArray<FBS_FluxBuoyancyPontoon> Pontoons;                                         // 0x00A8 (size: 0x10)
    class UPrimitiveComponent* CachedMesh;                                            // 0x00B8 (size: 0x8)
    double BaseDensity;                                                               // 0x00C0 (size: 0x8)
    double BaseDrag;                                                                  // 0x00C8 (size: 0x8)
    class UBP_FluxDataComponent_C* FluxData;                                          // 0x00D0 (size: 0x8)
    double BaseForce;                                                                 // 0x00D8 (size: 0x8)
    bool DrawDebug;                                                                   // 0x00E0 (size: 0x1)
    bool UsePontoonsInFluxData;                                                       // 0x00E1 (size: 0x1)

    void GetPontoonsLocations(TArray<FVector>& Locations);
    void UpdateBuoyancy(double DeltaTime);
    void DebugPontoons();
    void Get Owner Mesh(class UPrimitiveComponent*& Output_Get);
    void GetSphereVolume(double R, double& V);
    void GetCapVolume(double H, double R, double& V);
    void GetSpghereUnderPlaneVolume(double Distance, double Radius, double& V);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FluxBuoyancyComponent(int32 EntryPoint);
}; // Size: 0xE2

#endif
