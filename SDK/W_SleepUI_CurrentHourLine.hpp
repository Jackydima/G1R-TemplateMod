#ifndef UE4SS_SDK_W_SleepUI_CurrentHourLine_HPP
#define UE4SS_SDK_W_SleepUI_CurrentHourLine_HPP

class UW_SleepUI_CurrentHourLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_15;                                               // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_32;                                                           // 0x02F8 (size: 0x8)

    void SetPosition();
    void Construct();
    void ExecuteUbergraph_W_SleepUI_CurrentHourLine(int32 EntryPoint);
}; // Size: 0x300

#endif
