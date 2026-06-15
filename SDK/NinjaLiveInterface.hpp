#ifndef UE4SS_SDK_NinjaLiveInterface_HPP
#define UE4SS_SDK_NinjaLiveInterface_HPP

class INinjaLiveInterface_C : public IInterface
{

    void LiveFluidParams(double BrushSize);
    void LiveActivation(FName ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas);
}; // Size: 0x28

#endif
