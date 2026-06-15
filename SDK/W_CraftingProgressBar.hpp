#ifndef UE4SS_SDK_W_CraftingProgressBar_HPP
#define UE4SS_SDK_W_CraftingProgressBar_HPP

class UW_CraftingProgressBar_C : public UGothicCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UWidgetAnimation* Anim_Fill;                                                // 0x0450 (size: 0x8)
    class UImage* Image;                                                              // 0x0458 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0460 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0468 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0470 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0478 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0480 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0488 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0490 (size: 0x8)
    class UImage* Image_73;                                                           // 0x0498 (size: 0x8)
    class UImage* Image_Bar;                                                          // 0x04A0 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x04A8 (size: 0x8)
    class UImage* W1;                                                                 // 0x04B0 (size: 0x8)
    class UImage* W2;                                                                 // 0x04B8 (size: 0x8)
    class UImage* W2_1;                                                               // 0x04C0 (size: 0x8)
    class UImage* W3;                                                                 // 0x04C8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x04D0 (size: 0x8)

    void SwitchImagesByStationType(FGameplayTag StationType);
    void Finished_D2135C9D48E6C3DAC2C4E8A2F51C027A();
    void Construct();
    void Finish and Deactivate();
    void ExecuteUbergraph_W_CraftingProgressBar(int32 EntryPoint);
}; // Size: 0x4D8

#endif
