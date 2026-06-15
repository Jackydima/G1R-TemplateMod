#ifndef UE4SS_SDK_W_HealthBar_HPP
#define UE4SS_SDK_W_HealthBar_HPP

class UW_HealthBar_C : public UPlayerBarHealthMana
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C0 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x07C8 (size: 0x8)
    class UProgressBar* HealthBar_Flash;                                              // 0x07D0 (size: 0x8)
    class UProgressBar* HealthBar_Healing;                                            // 0x07D8 (size: 0x8)
    class UProgressBar* HealthBar_Secondary;                                          // 0x07E0 (size: 0x8)
    class UHorizontalBox* Horizontal_Bar;                                             // 0x07E8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_HealthValues;                                 // 0x07F0 (size: 0x8)
    class UImage* Image_Outline;                                                      // 0x07F8 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x0800 (size: 0x8)
    class UProgressBar* PreviewHealthBar;                                             // 0x0808 (size: 0x8)
    class UProgressBar* PreviewHealthBar_Healing;                                     // 0x0810 (size: 0x8)
    class UTextBlock* TextBlock_CurrentValue;                                         // 0x0818 (size: 0x8)
    class UTextBlock* TextBlock_MaxValue;                                             // 0x0820 (size: 0x8)

    void Update Value();
    void BP_UpdateRecoveryOverTime(double FinalPercentageValue);
    void BP_OnBarVisible();
    void BP_OnMaxValueChanged(float OldValue, float NewValue);
    void BP_OnBarHidden();
    void BP_OnCurrentValueChanged(float OldValue, float NewValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BP_OnPreviewAttributeValue(float currentPercentageValue, float newPercentageValue);
    void BP_OnHidePreview();
    void BP_OnNumberVisibilityChanged(bool _Visible);
    void ExecuteUbergraph_W_HealthBar(int32 EntryPoint);
}; // Size: 0x828

#endif
