#ifndef UE4SS_SDK_Weather_Override_Volume_HPP
#define UE4SS_SDK_Weather_Override_Volume_HPP

class AWeather_Override_Volume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0298 (size: 0x8)
    class URandom_Weather_Variation_C* Random_Weather_Variation;                      // 0x02A0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A8 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x02B0 (size: 0x8)
    TEnumAsByte<UDS_Weather_Override_Mode::Type> Mode;                                // 0x02B8 (size: 0x1)
    double Transition Width;                                                          // 0x02C0 (size: 0x8)
    int32 Priority;                                                                   // 0x02C8 (size: 0x4)
    class UUDS_Weather_Settings_C* Weather Type;                                      // 0x02D0 (size: 0x8)
    bool Override Material Effects;                                                   // 0x02D8 (size: 0x1)
    double Volume Alpha;                                                              // 0x02E0 (size: 0x8)
    double Scaled Transition Width;                                                   // 0x02E8 (size: 0x8)
    class AUltra_Dynamic_Weather_C* UDW;                                              // 0x02F0 (size: 0x8)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Spring);       // 0x02F8 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Summer);       // 0x0348 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Autumn);       // 0x0398 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Winter);       // 0x03E8 (size: 0x50)
    class UUDS_Weather_Settings_C* Editor Preview State;                              // 0x0438 (size: 0x8)
    double Total Sphere Bounds;                                                       // 0x0440 (size: 0x8)
    FVector Spline Bounds Center;                                                     // 0x0448 (size: 0x18)
    bool Show Weather Label in Editor;                                                // 0x0460 (size: 0x1)
    double Temperature Offset;                                                        // 0x0468 (size: 0x8)
    class UUDS_Weather_Settings_C* Weather State;                                     // 0x0470 (size: 0x8)
    TArray<FVector> World Space Triangles;                                            // 0x0478 (size: 0x10)
    FVector Canvas Scale Factor;                                                      // 0x0488 (size: 0x18)
    FVector Canvas Offset;                                                            // 0x04A0 (size: 0x18)
    FLinearColor Volume Color;                                                        // 0x04B8 (size: 0x10)
    TArray<FCanvasUVTri> Canvas Space Triangles;                                      // 0x04C8 (size: 0x10)
    bool Started;                                                                     // 0x04D8 (size: 0x1)
    FVector Material State Buffer;                                                    // 0x04E0 (size: 0x18)
    bool Transitioning Weather;                                                       // 0x04F8 (size: 0x1)
    class UUDS_Weather_Settings_C* Transition Weather A;                              // 0x0500 (size: 0x8)
    class UUDS_Weather_Settings_C* Transition Weather B;                              // 0x0508 (size: 0x8)
    double Transition Time Remaining;                                                 // 0x0510 (size: 0x8)
    bool Changing to Random Weather;                                                  // 0x0518 (size: 0x1)
    bool Changing from Random Weather;                                                // 0x0519 (size: 0x1)
    double Transition Timer Length;                                                   // 0x0520 (size: 0x8)
    FString Random Weather Label Text;                                                // 0x0528 (size: 0x10)
    TArray<FVector> Runtime Spline Points;                                            // 0x0538 (size: 0x10)
    class UUDS_Weather_Settings_C* Preview Weather State;                             // 0x0548 (size: 0x8)
    bool Apply Wind Direction;                                                        // 0x0550 (size: 0x1)
    double Wind Direction;                                                            // 0x0558 (size: 0x8)
    bool Absolute Weather Type;                                                       // 0x0560 (size: 0x1)
    TEnumAsByte<E_Biome::Type> Biome;                                                 // 0x0561 (size: 0x1)
    FVector Center;                                                                   // 0x0568 (size: 0x18)
    float Bound Size;                                                                 // 0x0580 (size: 0x4)

    int32 GetPriority();
    class AActor* GetOwnerActor();
    EBiome GetBiome();
    bool GetOverrideMaterialEffects();
    float GetScaledTransitionWidth();
    FVector GetSplineBoundsCenter();
    class USplineComponent* GetSplineComponent();
    float GetTemperatureOffset();
    float GetTotalSphereBounds();
    float GetVolumeAlpha();
    class UGothicWeatherSettings* GetWeatherSettings();
    void Change Default Preset();
    void Reset to Editor Weather();
    void Initialize Spline Data();
    void Check for Changing Material State to Request Target Redraw();
    void Update Volume Color(class AUltra_Dynamic_Weather_C* UDW);
    void Triangulate Polygon(TArray<FVector2D>& Vertices (Clockwise));
    void Is Point In Triangle(FVector2D Point, FVector2D v1, FVector2D v2, FVector2D V3, bool& Yes);
    void Scale And Place Vertex in Canvas Space(FVector In, FVector2D& Pos, FLinearColor& Color);
    void Add Triangle(FVector Vert 1, FVector Vert 2, FVector Vert 3);
    void Create Canvas Space Triangles(FVector2D Corner Position, double Width, int32 Resolution);
    void Add Quad(FVector Vert 1, FVector Vert 2, FVector Vert 3, FVector Vert 4);
    void Create World Space Drawing Geometry();
    void Calculate Spline Bounds();
    void UserConstructionScript();
    void Change Weather(class UUDS_Weather_Settings_C* New Weather Type, double Time to Transition to New Weather (Seconds));
    void Change to Random Weather(double Time to Transition to Random Weather (Seconds));
    void Start Up Random Weather Component();
    void Apply Current Single Weather();
    void ReceiveBeginPlay();
    void Force Startup();
    void Force Update Current Weather();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Disable Volume();
    void Enable Volume();
    void On Custom Tick(float DeltaTime);
    void ReceiveDestroyed();
    void ExecuteUbergraph_Weather_Override_Volume(int32 EntryPoint);
}; // Size: 0x584

#endif
