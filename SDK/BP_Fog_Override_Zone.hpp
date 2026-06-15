#ifndef UE4SS_SDK_BP_Fog_Override_Zone_HPP
#define UE4SS_SDK_BP_Fog_Override_Zone_HPP

class ABP_Fog_Override_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* FullEffectVisualization;                              // 0x0298 (size: 0x8)
    class UStaticMeshComponent* BoundsVisualization;                                  // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class AUltra_Dynamic_Weather_C* UDW;                                              // 0x02B0 (size: 0x8)
    int32 Priority;                                                                   // 0x02B8 (size: 0x4)
    class UPDA_Fog_Settings_C* Fog Settings;                                          // 0x02C0 (size: 0x8)
    class UBP_PostProcessDynamicData_C* Post Processing Settings;                     // 0x02C8 (size: 0x8)
    bool Is Interior;                                                                 // 0x02D0 (size: 0x1)
    bool Should Apply Extra Interior Exposure;                                        // 0x02D1 (size: 0x1)
    double Exposure;                                                                  // 0x02D8 (size: 0x8)
    bool Should Stop Rain;                                                            // 0x02E0 (size: 0x1)
    TEnumAsByte<E_CaveFogType::Type> CaveFogType;                                     // 0x02E1 (size: 0x1)
    bool Show Debug Volumes;                                                          // 0x02E2 (size: 0x1)
    TEnumAsByte<E_Shape::Type> Shape;                                                 // 0x02E3 (size: 0x1)
    double Transition Length;                                                         // 0x02E8 (size: 0x8)
    bool Should Change Sun Volumetric Scattering;                                     // 0x02F0 (size: 0x1)
    class UStaticMesh* CubeMesh;                                                      // 0x02F8 (size: 0x8)
    class UStaticMesh* SphereMesh;                                                    // 0x0300 (size: 0x8)
    double Sun Volumetric Scattering Intensity;                                       // 0x0308 (size: 0x8)
    double Squared Range Radius;                                                      // 0x0310 (size: 0x8)
    bool IsInitialized;                                                               // 0x0318 (size: 0x1)

    float GetExposure();
    class UGothicWeatherFogPostProcessSettings* GetPostProcessSettings();
    float GetSunVolumetricScatteringIntensity();
    bool ShouldChangeSunVolumetricScattering();
    float GetAreaAlphaAt(FVector Location);
    class UGothicWeatherFogSettings* GetFogSettings();
    float GetFogStartingDistance();
    int32 GetPriority();
    bool IsInRange(FVector Location);
    bool ShouldStopRain();
    void LazyInitialize();
    void GetFogStartDistance(double& Distance);
    bool IsInside(FVector position);
    void BP_IsInRange(FVector position, bool& Result);
    void Get Orthogonal Vector With Sign By Vector(FVector Vector, TEnumAsByte<E_Axis::Type> Biggest Axis, FVector& Orthogonal Vector);
    void Get Biggest Axis(FVector Vector, TEnumAsByte<E_Axis::Type>& Biggest Axis);
    void Is Position Inside Area(FVector position, bool& Is In Area, double& Alpha);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Custom Register();
    void Custom Unregister();
    void Update Base Fog(double Desired Base Fog);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Fog_Override_Zone(int32 EntryPoint);
}; // Size: 0x319

#endif
