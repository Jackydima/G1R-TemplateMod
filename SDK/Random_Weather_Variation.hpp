#ifndef UE4SS_SDK_Random_Weather_Variation_HPP
#define UE4SS_SDK_Random_Weather_Variation_HPP

class URandom_Weather_Variation_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class AUltra_Dynamic_Weather_C* UDW;                                              // 0x00A8 (size: 0x8)
    class UUDS_Weather_Settings_C* Target Random Weather Type;                        // 0x00B0 (size: 0x8)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Summer);       // 0x00B8 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Autumn);       // 0x0108 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Winter);       // 0x0158 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Spring);       // 0x01A8 (size: 0x50)
    double Current Lerp Alpha;                                                        // 0x01F8 (size: 0x8)
    double Current Timer Length;                                                      // 0x0200 (size: 0x8)
    class AWeather_Override_Volume_C* Volume;                                         // 0x0208 (size: 0x8)
    int32 Total Changes;                                                              // 0x0210 (size: 0x4)
    bool Changing Weather;                                                            // 0x0214 (size: 0x1)
    class UUDS_Weather_Settings_C* Last Random Weather Type;                          // 0x0218 (size: 0x8)
    class UUDS_Weather_Settings_C* Current Random Weather State;                      // 0x0220 (size: 0x8)
    double Change Timer;                                                              // 0x0228 (size: 0x8)
    bool Running Timer;                                                               // 0x0230 (size: 0x1)

    void Increment Change Timer();
    void Create Composite Probability Map(TMap<UUDS_Weather_Settings_C*, double>& Out);
    void Apply State(FRandomWeatherVariation_State Random Weather State);
    void Get State for Saving(FRandomWeatherVariation_State& State, class AWeather_Override_Volume_C*& Volume);
    void Select New Random Weather Type(bool Filter Probability List);
    void Increment Random Weather();
    void Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<UUDS_Weather_Settings_C*, double> Summer Probabilities, TMap<UUDS_Weather_Settings_C*, double> Autumn Probabilities, TMap<UUDS_Weather_Settings_C*, double> Winter Probabilities, TMap<UUDS_Weather_Settings_C*, double> Spring Probabilities, bool Start with Random Type);
    void ReceiveTick(float DeltaSeconds);
    void Start Timer to Select New Weather();
    void Reset Timer();
    void ExecuteUbergraph_Random_Weather_Variation(int32 EntryPoint);
}; // Size: 0x231

#endif
