#ifndef UE4SS_SDK_BP_BaseBloodActor_HPP
#define UE4SS_SDK_BP_BaseBloodActor_HPP

class ABP_BaseBloodActor_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynamicInstances;                         // 0x0298 (size: 0x10)
    TArray<FTransform> BloodSpots;                                                    // 0x02A8 (size: 0x10)
    double NoiseSize;                                                                 // 0x02B8 (size: 0x8)
    double NoiseIntensity;                                                            // 0x02C0 (size: 0x8)
    double NoiseContrast;                                                             // 0x02C8 (size: 0x8)
    class UMeshComponent* Mesh Component;                                             // 0x02D0 (size: 0x8)
    double VerticalWaterHeight;                                                       // 0x02D8 (size: 0x8)
    double VerticalWaterBlend;                                                        // 0x02E0 (size: 0x8)

    void EnsureBloodLength();
    void UpdateBloodData();
    void CreateDyanmicInstances();
    void UserConstructionScript();
}; // Size: 0x2E8

#endif
