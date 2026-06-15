#ifndef UE4SS_SDK_BPI_WeatherSettingsReceiver_HPP
#define UE4SS_SDK_BPI_WeatherSettingsReceiver_HPP

class IBPI_WeatherSettingsReceiver_C : public IInterface
{

    void Update Weather Settings(class UUDS_Weather_Settings_C* Settings);
}; // Size: 0x28

#endif
