#ifndef UE4SS_SDK_W_Stats_Tooltip_HPP
#define UE4SS_SDK_W_Stats_Tooltip_HPP

class UW_Stats_Tooltip_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_Mastery;                                      // 0x02E0 (size: 0x8)
    class UImage* Image_Mastery;                                                      // 0x02E8 (size: 0x8)
    class UAlkRichTextBlock* RichTextBlock_Description;                               // 0x02F0 (size: 0x8)
    class UTextBlock* Text_Title;                                                     // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_Mastery;                                              // 0x0300 (size: 0x8)

    void Update From Mastery(class UStatEntryWidget* Stat Entry Widget);
    void Set Data(class UStatEntryWidget* Stat Entry Widget);
}; // Size: 0x308

#endif
