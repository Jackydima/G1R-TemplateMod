#ifndef UE4SS_SDK_W_SettingsPageButton_HPP
#define UE4SS_SDK_W_SettingsPageButton_HPP

class UW_SettingsPageButton_C : public USettingsPageButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x03E8 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x03F0 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x03F8 (size: 0x8)
    FText Display Name;                                                               // 0x0400 (size: 0x10)
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x0410 (size: 0x28)

    void PreConstruct(bool IsDesignTime);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void SetDisplayName(const FText& DisplayName);
    void OnActivated();
    void OnDeactivated();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnHovered();
    void ExecuteUbergraph_W_SettingsPageButton(int32 EntryPoint);
}; // Size: 0x438

#endif
