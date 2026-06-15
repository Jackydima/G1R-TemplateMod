#ifndef UE4SS_SDK_BP_Fog_SwampCamp_HPP
#define UE4SS_SDK_BP_Fog_SwampCamp_HPP

class ABP_Fog_SwampCamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Sphere_Big;                                           // 0x0298 (size: 0x8)
    class UNiagaraComponent* P_SwampCamp_Fog;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* Mid;                                              // 0x02B8 (size: 0x8)
    bool Use Gradient;                                                                // 0x02C0 (size: 0x1)
    bool Invert Gradient;                                                             // 0x02C1 (size: 0x1)
    class UMaterialParameterCollection* FogPreset;                                    // 0x02C8 (size: 0x8)

    void Set MPC();
    void UserConstructionScript();
    void Update Preset();
    void ExecuteUbergraph_BP_Fog_SwampCamp(int32 EntryPoint);
}; // Size: 0x2D0

#endif
