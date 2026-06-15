#ifndef UE4SS_SDK_BP_EasyFog_2_HPP
#define UE4SS_SDK_BP_EasyFog_2_HPP

class ABP_EasyFog_2_C : public AActor
{
    class UStaticMeshComponent* Plane_NoCulling;                                      // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    int32 Cloud Variation;                                                            // 0x02A8 (size: 0x4)
    TArray<class UTexture*> DefaultMasks;                                             // 0x02B0 (size: 0x10)
    TArray<class UTexture*> DefaultNormals;                                           // 0x02C0 (size: 0x10)
    class UMaterialInstanceDynamic* Mid;                                              // 0x02D0 (size: 0x8)
    bool Orient to Camera?;                                                           // 0x02D8 (size: 0x1)
    bool Distance Culling?;                                                           // 0x02D9 (size: 0x1)
    double Density;                                                                   // 0x02E0 (size: 0x8)
    bool Customize Fade Values;                                                       // 0x02E8 (size: 0x1)
    double Near Fade Distance (Material);                                             // 0x02F0 (size: 0x8)
    double Near Fade Contrast (Material);                                             // 0x02F8 (size: 0x8)
    double Far Fade Distance (Material);                                              // 0x0300 (size: 0x8)
    double Far Fade Contrast (Material);                                              // 0x0308 (size: 0x8)

    void SwitchPlane();
    void ChangeTilingOffset(double Tiling X, double Tiling Y, double Offset X, double Offset Y);
    void SelectDefaultFog();
    void UserConstructionScript();
}; // Size: 0x310

#endif
