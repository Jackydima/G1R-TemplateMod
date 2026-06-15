#ifndef UE4SS_SDK_W_ManaBar_HPP
#define UE4SS_SDK_W_ManaBar_HPP

class UW_ManaBar_C : public UPlayerBarHealthMana
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C0 (size: 0x8)
    class UWidgetAnimation* Anim_SpellCost;                                           // 0x07C8 (size: 0x8)
    class UHorizontalBox* Horizontal_ManaBar;                                         // 0x07D0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ManaValues;                                   // 0x07D8 (size: 0x8)
    class UImage* Image_Outline;                                                      // 0x07E0 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x07E8 (size: 0x8)
    class UProgressBar* ManaBar;                                                      // 0x07F0 (size: 0x8)
    class UProgressBar* ManaBar_Restore;                                              // 0x07F8 (size: 0x8)
    class UProgressBar* ManaBar_Secondary;                                            // 0x0800 (size: 0x8)
    class UProgressBar* ManaBar_SpellCost;                                            // 0x0808 (size: 0x8)
    class UProgressBar* PreviewManaBar;                                               // 0x0810 (size: 0x8)
    class UProgressBar* PreviewManaBar_Restore;                                       // 0x0818 (size: 0x8)
    class UTextBlock* TextBlock_CurrentValue;                                         // 0x0820 (size: 0x8)
    class UTextBlock* TextBlock_MaxValue;                                             // 0x0828 (size: 0x8)
    double SpellManaCost;                                                             // 0x0830 (size: 0x8)
    FSpellsManaCost SpellManaCostInfo;                                                // 0x0838 (size: 0x18)

    void TickUpdateSpellManaCost();
    void BP_UpdateSpellManaCost(FSpellsManaCost manaCost);
    void UpdateMainBarPercent(double Override Stat Percent Value);
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    void Update Value();
    void BP_UpdateRecoveryOverTime(double FinalPercentageValue);
    void BP_OnBarHidden();
    void BP_OnBarVisible();
    void BP_OnMaxValueChanged(float OldValue, float NewValue);
    void BP_OnCurrentValueChanged(float OldValue, float NewValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BP_OnPreviewAttributeValue(float currentPercentageValue, float newPercentageValue);
    void BP_OnHidePreview();
    void BP_OnNumberVisibilityChanged(bool _Visible);
    void ExecuteUbergraph_W_ManaBar(int32 EntryPoint);
}; // Size: 0x850

#endif
