#ifndef UE4SS_SDK_W_PauseMenu_HPP
#define UE4SS_SDK_W_PauseMenu_HPP

class UW_PauseMenu_C : public UPauseMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0498 (size: 0x8)
    class UWidgetAnimation* Anim_OpenSettingsPage;                                    // 0x04A0 (size: 0x8)
    class UGridPanel* GridPanel_Buttons;                                              // 0x04A8 (size: 0x8)
    class UImage* Image;                                                              // 0x04B0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x04B8 (size: 0x8)
    class UImage* Image_80;                                                           // 0x04C0 (size: 0x8)
    class UW_MainMenuButton_C* LoadGame;                                              // 0x04C8 (size: 0x8)
    class UW_MainMenuButton_C* MainMenu;                                              // 0x04D0 (size: 0x8)
    class UW_MainMenuButton_C* Resume;                                                // 0x04D8 (size: 0x8)
    class UW_MainMenuButton_C* SaveGame;                                              // 0x04E0 (size: 0x8)
    class UW_MainMenuButton_C* Settings;                                              // 0x04E8 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Menus;                                 // 0x04F0 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x04F8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0500 (size: 0x8)
    class UVerticalBox* VerticalBox_Menu;                                             // 0x0508 (size: 0x8)
    bool DemoMode;                                                                    // 0x0510 (size: 0x1)
    TSubclassOf<class UW_FrontEndStack_C> Load Menu Widget Class;                     // 0x0518 (size: 0x8)

    void TickCheckButtonsAreEnabled();
    void ResumeGame();
    void ReturnToMainMenu();
    void QuitGame();
    void Back Action();
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void InpActEvt_IA_Pause_Toggle_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void BndEvt__W_MainMenu_Quit_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_Settings_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_SinglePlayer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_PauseMenu_MainMenu_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void BndEvt__W_PauseMenu_LoadGame_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_PauseMenu_SaveGame_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BP_OnActivated();
    void CloseWidgetBP();
    void BP_OnDeactivated();
    void ExecuteUbergraph_W_PauseMenu(int32 EntryPoint);
}; // Size: 0x520

#endif
