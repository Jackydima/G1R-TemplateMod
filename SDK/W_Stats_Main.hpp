#ifndef UE4SS_SDK_W_Stats_Main_HPP
#define UE4SS_SDK_W_Stats_Main_HPP

class UW_Stats_Main_C : public UStatMainWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UW_CharacterStat_XP_C* CharacterStat_XP;                                    // 0x03F0 (size: 0x8)
    class UImage* Image_71;                                                           // 0x03F8 (size: 0x8)
    class UImage* Image_CampBanner;                                                   // 0x0400 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x0408 (size: 0x8)
    class USizeBox* SizeBox_BottomArrow;                                              // 0x0410 (size: 0x8)
    class USizeBox* SizeBox_TopArrow;                                                 // 0x0418 (size: 0x8)
    class UW_Stats_Tooltip_C* Stats_Tooltip;                                          // 0x0420 (size: 0x8)
    class UVerticalBox* VerticalBox_Stats;                                            // 0x0428 (size: 0x8)

    void SetGuildIcon();
    void Update Arrows();
    void OnShown();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnScrolled(float CurrentOffset);
    void OnSelectionChanged(class UStatEntryWidget* _EntryWidget, bool _ScrollIntoView);
    void ExecuteUbergraph_W_Stats_Main(int32 EntryPoint);
}; // Size: 0x430

#endif
