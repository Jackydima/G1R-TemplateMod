#ifndef UE4SS_SDK_W_SettingsRow_HPP
#define UE4SS_SDK_W_SettingsRow_HPP

class UW_SettingsRow_C : public USettingsRowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x03B0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Content;                                      // 0x03B8 (size: 0x8)
    class UImage* Image_Hover_Left;                                                   // 0x03C0 (size: 0x8)
    class UImage* Image_Hover_Right;                                                  // 0x03C8 (size: 0x8)
    class USizeBox* SizeBox_SettingsEntry;                                            // 0x03D0 (size: 0x8)
    class UTextBlock* Text_Name;                                                      // 0x03D8 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x03E0 (size: 0x28)
    FW_SettingsRow_COnAddedFocus OnAddedFocus;                                        // 0x0408 (size: 0x10)
    void OnAddedFocus(class UW_SettingsRow_C* Widget);
    FW_SettingsRow_COnRemovedFocus OnRemovedFocus;                                    // 0x0418 (size: 0x10)
    void OnRemovedFocus(class UW_SettingsRow_C* Widget);

    void Set Enabled Selectable(bool Enabled);
    void Get Setting Widget Class(TSubclassOf<class USettingObjectWidget>& Widget Class);
    void Update Visuals(bool Is Focused);
    void Create Setting Widget();
    void Update Display Name();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAvailabilityChanged(bool _IsAvailable);
    void OnSelectionChanged(bool _IsSelected);
    void ExecuteUbergraph_W_SettingsRow(int32 EntryPoint);
    void OnRemovedFocus__DelegateSignature(class UW_SettingsRow_C* Widget);
    void OnAddedFocus__DelegateSignature(class UW_SettingsRow_C* Widget);
}; // Size: 0x428

#endif
