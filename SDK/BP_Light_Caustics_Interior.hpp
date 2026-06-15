#ifndef UE4SS_SDK_BP_Light_Caustics_Interior_HPP
#define UE4SS_SDK_BP_Light_Caustics_Interior_HPP

class ABP_Light_Caustics_Interior_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USpotLightComponent* SpotLight4;                                            // 0x0298 (size: 0x8)
    class USpotLightComponent* SpotLight3;                                            // 0x02A0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x02A8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x02B0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    class AUltra_Dynamic_Sky_C* Ultra Dynamic Controller;                             // 0x02C8 (size: 0x8)
    FLinearColor Own Color;                                                           // 0x02D0 (size: 0x10)
    double Intensity;                                                                 // 0x02E0 (size: 0x8)
    double AttenuationRadius;                                                         // 0x02E8 (size: 0x8)

    void InitializeLights();
    void UserConstructionScript();
    void Set Light(FLinearColor Color, double Intensity);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Light_Caustics_Interior(int32 EntryPoint);
}; // Size: 0x2F0

#endif
