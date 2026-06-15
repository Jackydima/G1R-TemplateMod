#ifndef UE4SS_SDK_W_GenericButton_HPP
#define UE4SS_SDK_W_GenericButton_HPP

class UW_GenericButton_C : public UButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x03E0 (size: 0x8)
    class UBorder* Border_Hover;                                                      // 0x03E8 (size: 0x8)
    class UOverlay* Overlay_41;                                                       // 0x03F0 (size: 0x8)
    class UOverlay* Overlay_Button;                                                   // 0x03F8 (size: 0x8)
    class UTextBlock* TextBlock_Label;                                                // 0x0400 (size: 0x8)
    FText Label Override;                                                             // 0x0408 (size: 0x10)
    bool Hide Background for MKB;                                                     // 0x0418 (size: 0x1)
    bool Hide Background for Controller;                                              // 0x0419 (size: 0x1)
    bool Hide Background for Touch;                                                   // 0x041A (size: 0x1)
    TSoftObjectPtr<UFMODEvent> Clicked Sound;                                         // 0x0420 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x0448 (size: 0x28)
    bool GamepadOnly;                                                                 // 0x0470 (size: 0x1)
    bool KeyboardOnly;                                                                // 0x0471 (size: 0x1)
    FLinearColor TextColor;                                                           // 0x0474 (size: 0x10)

    void SetKeyabordOnlyButton(ECommonInputType Input Type, bool& Should Hide);
    void ShouldAnimate(bool& Should);
    void SetGamepadOnlyButton(ECommonInputType Input Type, bool& Should Hide);
    void Handle Input Type Changed(ECommonInputType New Input Type);
    void Should Hide Background(ECommonInputType Input Type, bool& Should Hide);
    void Animate(bool Forward);
    void OnClicked();
    void OnSecondaryClicked();
    void OnHovered();
    void OnUnhovered();
    void OnPressed();
    void OnReleased();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void ExecuteUbergraph_W_GenericButton(int32 EntryPoint);
}; // Size: 0x484

#endif
