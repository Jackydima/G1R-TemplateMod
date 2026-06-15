#ifndef UE4SS_SDK_W_DifficultySelectionMenu_HPP
#define UE4SS_SDK_W_DifficultySelectionMenu_HPP

class UW_DifficultySelectionMenu_C : public USettingsMainWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anim_ShowPage;                                            // 0x0478 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x0480 (size: 0x8)
    class UW_GenericButton_C* Button_Reset;                                           // 0x0488 (size: 0x8)
    class UW_GenericButton_C* Button_StartGame;                                       // 0x0490 (size: 0x8)
    class UImage* Image_206;                                                          // 0x0498 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x04A0 (size: 0x8)
    class UTextBlock* TextBlock_Description;                                          // 0x04A8 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x04B0 (size: 0x8)
    class UTextBlock* TextBlock_Version;                                              // 0x04B8 (size: 0x8)
    class UVerticalBox* VerticalBox_PageButtons;                                      // 0x04C0 (size: 0x8)
    class UW_DifficultyCustomizeDetails_Custom_C* W_DifficultyCustomizeDetails_Custom; // 0x04C8 (size: 0x8)
    class UW_DifficultyCustomizeDetails_Easy_C* W_DifficultyCustomizeDetails_Easy;    // 0x04D0 (size: 0x8)
    class UW_DifficultyCustomizeDetails_Hard_C* W_DifficultyCustomizeDetails_Hard;    // 0x04D8 (size: 0x8)
    class UW_InputHint_C* W_InputHint;                                                // 0x04E0 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Pages;                     // 0x04E8 (size: 0x8)
    FW_DifficultySelectionMenu_CBackWasClicked BackWasClicked;                        // 0x04F0 (size: 0x10)
    void BackWasClicked();
    class UWidget* CurrentActiveWidget;                                               // 0x0500 (size: 0x8)
    FString ProfileName;                                                              // 0x0508 (size: 0x10)

    FUIInputConfig BP_GetDesiredInputConfig();
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__W_SettingsMain_Button_Back_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_SettingsMain_WidgetSwitcher_Pages_K2Node_ComponentBoundEvent_1_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void Construct();
    void BndEvt__W_SettingsMain_Button_Reset_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void OnInputMethodChanged_Event(ECommonInputType bNewInputType);
    void Destruct();
    void OnClickedBP();
    void BndEvt__W_DifficultySelectionMenu_Button_StartGame_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_DifficultySelectionMenu(int32 EntryPoint);
    void BackWasClicked__DelegateSignature();
}; // Size: 0x518

#endif
