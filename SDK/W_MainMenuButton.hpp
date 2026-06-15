#ifndef UE4SS_SDK_W_MainMenuButton_HPP
#define UE4SS_SDK_W_MainMenuButton_HPP

class UW_MainMenuButton_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x15A0 (size: 0x8)
    class UWidgetAnimation* Anim_Click;                                               // 0x15A8 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x15B0 (size: 0x8)
    class UBorder* Border_Fill;                                                       // 0x15B8 (size: 0x8)
    class UBorder* Border_Outline;                                                    // 0x15C0 (size: 0x8)
    class UTextBlock* Text_Main;                                                      // 0x15C8 (size: 0x8)
    FW_MainMenuButton_CClicked Clicked;                                               // 0x15D0 (size: 0x10)
    void Clicked();
    FText ButtonText;                                                                 // 0x15E0 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void BP_OnDeselected();
    void BP_OnClicked();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_W_MainMenuButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x15F0

#endif
