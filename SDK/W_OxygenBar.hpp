#ifndef UE4SS_SDK_W_OxygenBar_HPP
#define UE4SS_SDK_W_OxygenBar_HPP

class UW_OxygenBar_C : public UOxygenBarWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anim_Flash;                                               // 0x0470 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Values;                                       // 0x0478 (size: 0x8)
    class UImage* Image_Outline;                                                      // 0x0480 (size: 0x8)
    class UImage* Image_Outline_1;                                                    // 0x0488 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x0490 (size: 0x8)
    class UImage* Image_Shadow_1;                                                     // 0x0498 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x04A0 (size: 0x8)
    class UProgressBar* OxygenBar;                                                    // 0x04A8 (size: 0x8)
    class UProgressBar* OxygenBar_Trained;                                            // 0x04B0 (size: 0x8)
    class UTextBlock* TextBlock_CurrentValue;                                         // 0x04B8 (size: 0x8)
    class UTextBlock* TextBlock_MaxValue;                                             // 0x04C0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher;                                            // 0x04C8 (size: 0x8)
    FW_OxygenBar_COnCriticalOxygenWarningChanged OnCriticalOxygenWarningChanged;      // 0x04D0 (size: 0x10)
    void OnCriticalOxygenWarningChanged(bool Started);
    bool OxygenWarningStarted;                                                        // 0x04E0 (size: 0x1)

    void SetPercentage();
    void UpdateOxygenWarning(double OldValue, double NewValue);
    void UpdateActiveWidgetIndex();
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    void BP_OnCurrentValueChanged(float OldValue, float NewValue);
    void BP_OnNumberVisibilityChanged(bool _Visible);
    void BP_OnBarVisible();
    void BP_OnBarHidden();
    void Construct();
    void ExecuteUbergraph_W_OxygenBar(int32 EntryPoint);
    void OnCriticalOxygenWarningChanged__DelegateSignature(bool Started);
}; // Size: 0x4E1

#endif
