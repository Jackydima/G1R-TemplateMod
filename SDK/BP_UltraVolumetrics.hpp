#ifndef UE4SS_SDK_BP_UltraVolumetrics_HPP
#define UE4SS_SDK_BP_UltraVolumetrics_HPP

class ABP_UltraVolumetrics_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Fog;                                                  // 0x0298 (size: 0x8)
    class UBillboardComponent* FogIcon;                                               // 0x02A0 (size: 0x8)
    TArray<class UMaterialInstance*> Materials;                                       // 0x02A8 (size: 0x10)
    int32 Seed;                                                                       // 0x02B8 (size: 0x4)
    bool Randomize with Distance Fields?;                                             // 0x02BC (size: 0x1)
    bool EnableDistanceQuality?;                                                      // 0x02BD (size: 0x1)
    double GridSizeZ;                                                                 // 0x02C0 (size: 0x8)
    double GridPixelSize;                                                             // 0x02C8 (size: 0x8)
    TEnumAsByte<Enum_Fog-Quality::Type> QualityPreset;                                // 0x02D0 (size: 0x1)
    double QualityTriggerDistance;                                                    // 0x02D8 (size: 0x8)
    FStruct_FogQualityVars QualityVars;                                               // 0x02E0 (size: 0x20)
    class UMaterialInstanceDynamic* Material;                                         // 0x0300 (size: 0x8)
    TEnumAsByte<Enum_Layer2::Type> Second Layer;                                      // 0x0308 (size: 0x1)
    double Second Layer Amount;                                                       // 0x0310 (size: 0x8)
    bool Use Distance Field?;                                                         // 0x0318 (size: 0x1)
    double Distance Field - Height;                                                   // 0x0320 (size: 0x8)
    double Distance Field - Multiply;                                                 // 0x0328 (size: 0x8)
    double Distance Field - Contrast;                                                 // 0x0330 (size: 0x8)
    double Opacity;                                                                   // 0x0338 (size: 0x8)
    bool Use Time of Day Interaction?;                                                // 0x0340 (size: 0x1)
    bool Use Weather Interaction?;                                                    // 0x0341 (size: 0x1)
    double Opacity - Rain 1;                                                          // 0x0348 (size: 0x8)
    double Opacity - Rain 2;                                                          // 0x0350 (size: 0x8)
    double Opacity - Rain 3;                                                          // 0x0358 (size: 0x8)
    double Opacity - Snow/Dust 1;                                                     // 0x0360 (size: 0x8)
    double Opacity - Snow/Dust 2;                                                     // 0x0368 (size: 0x8)
    double Opacity - Snow/Dust 3;                                                     // 0x0370 (size: 0x8)
    double Self Shadow Amount;                                                        // 0x0378 (size: 0x8)
    FVector Noise Size;                                                               // 0x0380 (size: 0x18)
    double Noise - Contrast;                                                          // 0x0398 (size: 0x8)
    double Noise - Multiply;                                                          // 0x03A0 (size: 0x8)
    FLinearColor Color;                                                               // 0x03A8 (size: 0x10)
    double Panning Speed - X;                                                         // 0x03B8 (size: 0x8)
    double Panning Speed - Y;                                                         // 0x03C0 (size: 0x8)
    double Panning Speed - Z;                                                         // 0x03C8 (size: 0x8)
    double Far Fade Distance;                                                         // 0x03D0 (size: 0x8)
    double Near Fade Distance;                                                        // 0x03D8 (size: 0x8)
    bool Use ThirdPerson Near Fade?;                                                  // 0x03E0 (size: 0x1)
    TArray<class UMaterialInstance*> MaterialsDF;                                     // 0x03E8 (size: 0x10)
    class UVolumetricFogData_C* PresetAsset;                                          // 0x03F8 (size: 0x8)
    FBP_UltraVolumetrics_COnSavedPreset OnSavedPreset;                                // 0x0400 (size: 0x10)
    void OnSavedPreset();
    double MCP_Density;                                                               // 0x0410 (size: 0x8)
    FName Workload Name;                                                              // 0x0418 (size: 0x8)
    bool NeedsEvaluation;                                                             // 0x0420 (size: 0x1)
    double DesiredDensity;                                                            // 0x0428 (size: 0x8)
    double CurrentDensity;                                                            // 0x0430 (size: 0x8)
    double TransitionTime;                                                            // 0x0438 (size: 0x8)
    bool HasCustomFilingFog;                                                          // 0x0440 (size: 0x1)

    void SetDesiredDensity(double DesiredDensity);
    void EvaluateCustomDensity(double DeltaTime);
    void SavePreset();
    double Remap for DF(double Val);
    void SetRandom();
    void ApplySeed();
    void Randomize();
    void ApplyPreset();
    void FogQualitySet();
    void Fog Quality- GridSizeZ(FString& Output);
    void Fog Quality- GridPixelSize(FString& Output);
    void ResetFogQuality();
    void GetDefaultQualityVars();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BudgetTick(float DeltaTime);
    void DesiredFogTick(float DeltaTime);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_UltraVolumetrics(int32 EntryPoint);
    void OnSavedPreset__DelegateSignature();
}; // Size: 0x441

#endif
