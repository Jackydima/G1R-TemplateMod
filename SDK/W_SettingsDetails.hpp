#ifndef UE4SS_SDK_W_SettingsDetails_HPP
#define UE4SS_SDK_W_SettingsDetails_HPP

class UW_SettingsDetails_C : public USettingsDetailsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0340 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Description;                            // 0x0348 (size: 0x8)
    class UImage* Image_Example;                                                      // 0x0350 (size: 0x8)
    class UScaleBox* ScaleBox_Image;                                                  // 0x0358 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0360 (size: 0x8)
    class UVerticalBox* VerticalBox_Content;                                          // 0x0368 (size: 0x8)
    bool Has Content;                                                                 // 0x0370 (size: 0x1)

    void Update Title(FText title);
    void Reset();
    void Update Text(FText Text);
    void OnLoaded_2223E76345EAA66C3CC04B84C542AEEF(class UObject* Loaded);
    void ClearDetails();
    void SetDetails(const FSettingDescription& _Description);
    void Construct();
    void ExecuteUbergraph_W_SettingsDetails(int32 EntryPoint);
}; // Size: 0x371

#endif
