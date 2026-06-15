#ifndef UE4SS_SDK_BPI_LightColorReceiver_HPP
#define UE4SS_SDK_BPI_LightColorReceiver_HPP

class IBPI_LightColorReceiver_C : public IInterface
{

    void Set Light(FLinearColor Color, double Intensity);
}; // Size: 0x28

#endif
