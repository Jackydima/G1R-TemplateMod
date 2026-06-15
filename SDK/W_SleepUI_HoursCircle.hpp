#ifndef UE4SS_SDK_W_SleepUI_HoursCircle_HPP
#define UE4SS_SDK_W_SleepUI_HoursCircle_HPP

class UW_SleepUI_HoursCircle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_33;                                               // 0x02E8 (size: 0x8)
    double AngleOfFirstWidget;                                                        // 0x02F0 (size: 0x8)
    int32 NumWidgets;                                                                 // 0x02F8 (size: 0x4)
    FVector InitialRotationAxis;                                                      // 0x0300 (size: 0x18)
    double Radius;                                                                    // 0x0318 (size: 0x8)
    bool RotateWidgets;                                                               // 0x0320 (size: 0x1)
    double BaseWidgetRotation;                                                        // 0x0328 (size: 0x8)

    void PopulateAndArrangePins();
    void Construct();
    void ExecuteUbergraph_W_SleepUI_HoursCircle(int32 EntryPoint);
}; // Size: 0x330

#endif
