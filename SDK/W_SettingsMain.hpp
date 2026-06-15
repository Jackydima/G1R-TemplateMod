#ifndef UE4SS_SDK_W_SettingsMain_HPP
#define UE4SS_SDK_W_SettingsMain_HPP

class UW_SettingsMain_C : public USettingsMainWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anim_ShowPage;                                            // 0x0478 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x0480 (size: 0x8)
    class UW_GenericButton_C* Button_Reset;                                           // 0x0488 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x0490 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0498 (size: 0x8)
    class UTextBlock* TextBlock_Version;                                              // 0x04A0 (size: 0x8)
    class UVerticalBox* VerticalBox_PageButtons;                                      // 0x04A8 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Pages;                     // 0x04B0 (size: 0x8)
    FW_SettingsMain_CBackWasClicked BackWasClicked;                                   // 0x04B8 (size: 0x10)
    void BackWasClicked();
    class UWidget* CurrentActiveWidget;                                               // 0x04C8 (size: 0x8)

    FUIInputConfig BP_GetDesiredInputConfig();
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__W_SettingsMain_Button_Back_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_SettingsMain_WidgetSwitcher_Pages_K2Node_ComponentBoundEvent_1_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void Construct();
    void BndEvt__W_SettingsMain_Button_Reset_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void OnInputMethodChanged_Event(ECommonInputType bNewInputType);
    void Destruct();
    void ExecuteUbergraph_W_SettingsMain(int32 EntryPoint);
    void BackWasClicked__DelegateSignature();
}; // Size: 0x4D0

#endif
