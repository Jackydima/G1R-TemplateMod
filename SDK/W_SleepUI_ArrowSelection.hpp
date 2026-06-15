#ifndef UE4SS_SDK_W_SleepUI_ArrowSelection_HPP
#define UE4SS_SDK_W_SleepUI_ArrowSelection_HPP

class UW_SleepUI_ArrowSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_15;                                               // 0x02E8 (size: 0x8)
    class UImage* Image_32;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_Current;                                                      // 0x02F8 (size: 0x8)

    void SetPosition(int32 HoursToSleep);
    void Construct();
    void ExecuteUbergraph_W_SleepUI_ArrowSelection(int32 EntryPoint);
}; // Size: 0x300

#endif
