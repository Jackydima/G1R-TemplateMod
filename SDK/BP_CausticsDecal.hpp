#ifndef UE4SS_SDK_BP_CausticsDecal_HPP
#define UE4SS_SDK_BP_CausticsDecal_HPP

class ABP_CausticsDecal_C : public ADecalActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x02A0 (size: 0x8)
    double Advection Speed;                                                           // 0x02A8 (size: 0x8)
    double Depth Intensity;                                                           // 0x02B0 (size: 0x8)
    double Depth Contrast;                                                            // 0x02B8 (size: 0x8)
    double Distortion Scale;                                                          // 0x02C0 (size: 0x8)
    double Distortion Intensity;                                                      // 0x02C8 (size: 0x8)
    FLinearColor Distortion Direction XY;                                             // 0x02D0 (size: 0x10)
    FLinearColor Caustics Speed XY;                                                   // 0x02E0 (size: 0x10)
    FLinearColor WetColor;                                                            // 0x02F0 (size: 0x10)

    void SetupMaterial();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CausticsDecal(int32 EntryPoint);
}; // Size: 0x300

#endif
