#ifndef UE4SS_SDK_W_SleepUI_CirclePin_HPP
#define UE4SS_SDK_W_SleepUI_CirclePin_HPP

class UW_SleepUI_CirclePin_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_CurrentPin;                                                   // 0x02E8 (size: 0x8)
    class UImage* Image_NormalPin;                                                    // 0x02F0 (size: 0x8)
    int32 Hour;                                                                       // 0x02F8 (size: 0x4)

    void RefreshCurrentHourPin();
    void HideSquarePin();
    void ShowSquarePin();
    void Construct();
    void ExecuteUbergraph_W_SleepUI_CirclePin(int32 EntryPoint);
}; // Size: 0x2FC

#endif
