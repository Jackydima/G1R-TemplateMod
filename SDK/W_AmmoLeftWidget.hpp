#ifndef UE4SS_SDK_W_AmmoLeftWidget_HPP
#define UE4SS_SDK_W_AmmoLeftWidget_HPP

class UW_AmmoLeftWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_RangedArrowNumber;                                   // 0x02E8 (size: 0x8)
    class UTextBlock* AmmoLeftText;                                                   // 0x02F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x02F8 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0300 (size: 0x8)

    void Update Projectile Count Visibility();
    void RefreshNumArrowsAvailable(int32 Value);
    void Finished_26A21D204C612B86B1069CB14D4AB89A();
    void Finished_3B1C1AE147A871580CD0768CC8B5AD49();
    void Construct();
    void OnRefreshCrossbowHasArrowNotched(bool HasArrowNotched);
    void OnRefreshNumArrowsAvailable(int32 numArrows);
    void OnHUDSettingsApplied_Event();
    void Destruct();
    void OnShow(int32 numArrows);
    void OnHide();
    void ExecuteUbergraph_W_AmmoLeftWidget(int32 EntryPoint);
}; // Size: 0x308

#endif
