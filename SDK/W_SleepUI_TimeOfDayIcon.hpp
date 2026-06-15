#ifndef UE4SS_SDK_W_SleepUI_TimeOfDayIcon_HPP
#define UE4SS_SDK_W_SleepUI_TimeOfDayIcon_HPP

class UW_SleepUI_TimeOfDayIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x02E8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02F0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_SleepUI_TimeOfDayIcon(int32 EntryPoint);
}; // Size: 0x300

#endif
