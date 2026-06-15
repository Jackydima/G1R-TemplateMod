#ifndef UE4SS_SDK_W_SettingsSectionHeader_HPP
#define UE4SS_SDK_W_SettingsSectionHeader_HPP

class UW_SettingsSectionHeader_C : public USettingsSectionHeaderWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0340 (size: 0x8)
    FText title;                                                                      // 0x0348 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_SettingsSectionHeader(int32 EntryPoint);
}; // Size: 0x358

#endif
