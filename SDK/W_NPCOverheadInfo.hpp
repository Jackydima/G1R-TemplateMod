#ifndef UE4SS_SDK_W_NPCOverheadInfo_HPP
#define UE4SS_SDK_W_NPCOverheadInfo_HPP

class UW_NPCOverheadInfo_C : public UNPCOverheadInfoWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* Anim_InflictDamage;                                       // 0x0308 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0310 (size: 0x8)
    class UProgressBar* HealthBar_Flash;                                              // 0x0318 (size: 0x8)
    class UProgressBar* HealthBar_Secondary;                                          // 0x0320 (size: 0x8)
    class UImage* Image_Outline_1;                                                    // 0x0328 (size: 0x8)
    class UImage* Image_Shadow_1;                                                     // 0x0330 (size: 0x8)
    class UW_ObjectInteraction_C* ObjectInteraction;                                  // 0x0338 (size: 0x8)
    class UOverlay* Overlay_HealthBar;                                                // 0x0340 (size: 0x8)
    class UOverlay* Overlay_Name;                                                     // 0x0348 (size: 0x8)
    class UTextBlock* Text_CharacterName;                                             // 0x0350 (size: 0x8)
    float FeatureScale;                                                               // 0x0358 (size: 0x4)

    void UpdateObjectInteraction(const FGameplayTag& interactMain, const FGameplayTag& interactSecondary, const FGameplayTag& failMain, const FGameplayTag& failSecondary);
    void Construct();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShowName();
    void ShowHealthBar();
    void HideName();
    void HideHealthBar();
    void SetFeatureScale(float _Scale);
    void ExecuteUbergraph_W_NPCOverheadInfo(int32 EntryPoint);
}; // Size: 0x35C

#endif
