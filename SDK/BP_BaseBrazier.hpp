#ifndef UE4SS_SDK_BP_BaseBrazier_HPP
#define UE4SS_SDK_BP_BaseBrazier_HPP

class ABP_BaseBrazier_C : public ABP_BaseCandle_C
{
    class UStaticMeshComponent* BrazierMesh;                                          // 0x1028 (size: 0x8)
    class UAC_StringDetector_C* AC_StringDetector;                                    // 0x1030 (size: 0x8)
    bool HasStringDetected;                                                           // 0x1038 (size: 0x1)
    FVector StringLocation;                                                           // 0x1040 (size: 0x18)
    TArray<class UMaterialInstance*> Material Instance Idle;                          // 0x1058 (size: 0x10)
    TArray<class UMaterialInstance*> Material Instance Displacement And Orbit;        // 0x1068 (size: 0x10)
    TEnumAsByte<E_CandleType::Type> CandleType;                                       // 0x1078 (size: 0x1)
    bool HasLight;                                                                    // 0x1079 (size: 0x1)
    double Radius;                                                                    // 0x1080 (size: 0x8)
    double Intensity;                                                                 // 0x1088 (size: 0x8)
    double Rotation Strength;                                                         // 0x1090 (size: 0x8)
    double Wind Time Delay;                                                           // 0x1098 (size: 0x8)
    bool WindEnabled;                                                                 // 0x10A0 (size: 0x1)
    double PhaseWeight;                                                               // 0x10A8 (size: 0x8)
    double PhaseIntensity;                                                            // 0x10B0 (size: 0x8)
    double StrengthIntensity;                                                         // 0x10B8 (size: 0x8)
    double WindWeight;                                                                // 0x10C0 (size: 0x8)
    double WindSpeed;                                                                 // 0x10C8 (size: 0x8)
    TArray<class UMaterialInstance*> Material Instance Orbit;                         // 0x10D0 (size: 0x10)
    FLinearColor Light Color;                                                         // 0x10E0 (size: 0x10)
    bool Add Random Offset;                                                           // 0x10F0 (size: 0x1)
    double Candle Radius Offset;                                                      // 0x10F8 (size: 0x8)
    bool Add Random Rotation;                                                         // 0x1100 (size: 0x1)
    bool Add Random Scale;                                                            // 0x1101 (size: 0x1)
    double Candle Scale Min;                                                          // 0x1108 (size: 0x8)
    double Candle Scale Max;                                                          // 0x1110 (size: 0x8)
    FVector CandleOrbitOffset;                                                        // 0x1118 (size: 0x18)
    bool IsInSight;                                                                   // 0x1130 (size: 0x1)
    TMap<TEnumAsByte<E_CandleType::Type>, UStaticMesh*> CandleMeshes;                 // 0x1138 (size: 0x50)
    TMap<TEnumAsByte<E_CandleType::Type>, FVector> FlamesPositions;                   // 0x1188 (size: 0x50)
    FVector LightOffset;                                                              // 0x11D8 (size: 0x18)
    double StormIntensity;                                                            // 0x11F0 (size: 0x8)
    double WindSpeedOnRain;                                                           // 0x11F8 (size: 0x8)
    double WindStormExtraIntensity;                                                   // 0x1200 (size: 0x8)
    class AStaticMeshActor* Custom String;                                            // 0x1208 (size: 0x8)
    class AStaticMeshActor* Evaluated String;                                         // 0x1210 (size: 0x8)
    FVector4 String Color;                                                            // 0x1220 (size: 0x20)

    void Initialize(bool InitializeOnlyLights);
    void IsBrazierInSight(FVector Camera Position, FRotator Camera Rotation, bool& IsInRange);
    void IsWindEnabled(bool& IsWindEnabled);
    void InitializeBrazierMaterial();
    void TransformCandleRoot(bool Add Random Offset, double Candle Radius Offset, bool Add Random Rotation, bool Add Random Scale, double Candle Scale Min, double Candle Scale Max);
    void EditorInitialization();
    void Get Wind Struct(FS_SimpleWindStruct& Wind Struct);
    void DisplaySelectedCandle(TEnumAsByte<E_CandleType::Type> Candle Type);
    void UserConstructionScript();
}; // Size: 0x1240

#endif
