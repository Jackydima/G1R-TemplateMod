#ifndef UE4SS_SDK_Gothic_Ultra_Dynamic_Controller_HPP
#define UE4SS_SDK_Gothic_Ultra_Dynamic_Controller_HPP

class AGothic_Ultra_Dynamic_Controller_C : public AGothicUltraDynamicControlerAS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0390 (size: 0x8)
    double Weather Time Transition;                                                   // 0x0398 (size: 0x8)
    class UDataTable* Biome Data Table;                                               // 0x03A0 (size: 0x8)
    TEnumAsByte<E_Biome::Type> Default Biome;                                         // 0x03A8 (size: 0x1)
    EWeather Default Weather;                                                         // 0x03A9 (size: 0x1)
    class AUltra_Dynamic_Weather_C* Ultra Dynamic Weather;                            // 0x03B0 (size: 0x8)
    class AUltra_Dynamic_Sky_C* Ultra Dynamic Sky;                                    // 0x03B8 (size: 0x8)
    TArray<class AWeather_Override_Volume_C*> Weather Override Volumes;               // 0x03C0 (size: 0x10)
    bool Enable Logic;                                                                // 0x03D0 (size: 0x1)
    EWeather Current Weather;                                                         // 0x03D1 (size: 0x1)
    EWeather Previous Weather;                                                        // 0x03D2 (size: 0x1)
    bool Initialized;                                                                 // 0x03D3 (size: 0x1)
    double Randomize Time;                                                            // 0x03D8 (size: 0x8)
    double Time to Randomize;                                                         // 0x03E0 (size: 0x8)
    bool Randomize Weather;                                                           // 0x03E8 (size: 0x1)
    TArray<class ABP_Rain_Spline_C*> RainSplines;                                     // 0x03F0 (size: 0x10)
    bool IsRaining;                                                                   // 0x0400 (size: 0x1)
    double Acceleration;                                                              // 0x0408 (size: 0x8)
    double CumulativeSpeed;                                                           // 0x0410 (size: 0x8)

    class AActor* GetWeatherActorReference();
    TArray<class AActor*> GetWeatherOverridesReferences();
    FUltraDynamicPostProcessSettings GetPostProcessSettings();
    class UGothicWeatherSettings* GetCurrentSettings();
    void Update Randomize Weather Handler();
    void RemoveRainSpline(class ABP_Rain_Spline_C* RainSpline);
    void AddRainSpline(class ABP_Rain_Spline_C* RainSpline);
    void Update Raining State(bool State);
    EBiome GetCurrentBiome();
    FUltraDynamicWindSettings GetWindSettings();
    EWeather GetCurrentWeather();
    float GetRainIntensity();
    void UpdateToNewWeatherIfChanged(EWeather New Weather, double Transition Time);
    FLightSourceData GetCurrentLightSourceData();
    void Update Weather Presets(EWeather Weather, double TimeTransition);
    void Get Weather Preset(TEnumAsByte<E_Biome::Type> Biome, EWeather Weather, class UUDS_Weather_Settings_C*& Preset);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetCurrentWeather(EWeather weatherId);
    void SetCurrentWeatherImmediate(EWeather weatherId);
    void SetWindSettings(FUltraDynamicWindSettings Settings);
    void SetOverrideWeatherSettings(bool Override);
    void CustomEvent();
    void ExecuteUbergraph_Gothic_Ultra_Dynamic_Controller(int32 EntryPoint);
}; // Size: 0x418

#endif
