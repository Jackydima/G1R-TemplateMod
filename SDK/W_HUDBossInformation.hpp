#ifndef UE4SS_SDK_W_HUDBossInformation_HPP
#define UE4SS_SDK_W_HUDBossInformation_HPP

class UW_HUDBossInformation_C : public UHUDBossInformationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0318 (size: 0x8)
    class UProgressBar* HealthBar_Secondary;                                          // 0x0320 (size: 0x8)
    class UImage* Image_Outline_1;                                                    // 0x0328 (size: 0x8)
    class UImage* Image_Shadow_1;                                                     // 0x0330 (size: 0x8)
    class UOverlay* Overlay_HealthBar;                                                // 0x0338 (size: 0x8)
    class UOverlay* Overlay_Name;                                                     // 0x0340 (size: 0x8)
    class USizeBox* SizeBox_HealthBar;                                                // 0x0348 (size: 0x8)
    class UTextBlock* Text_CharacterName;                                             // 0x0350 (size: 0x8)

    void BP_OnMaxHealthChanged(float OldValue, float NewValue);
    void BP_OnCurrentHealthChanged(float OldValue, float NewValue);
    void UpdateValue();
    void UpdateName(const FText& BossName);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShowWidget();
    void HideWidget();
    void CloseWidget();
    void ExecuteUbergraph_W_HUDBossInformation(int32 EntryPoint);
}; // Size: 0x358

#endif
