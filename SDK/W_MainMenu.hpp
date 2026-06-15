#ifndef UE4SS_SDK_W_MainMenu_HPP
#define UE4SS_SDK_W_MainMenu_HPP

class UW_MainMenu_C : public UMainMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    class UWidgetAnimation* Anim_OpenSettingsPage;                                    // 0x0518 (size: 0x8)
    class UW_MainMenuButton_C* Continue;                                              // 0x0520 (size: 0x8)
    class UW_MainMenuButton_C* credits;                                               // 0x0528 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0530 (size: 0x8)
    class UImage* Image_DisclaimerBackground;                                         // 0x0538 (size: 0x8)
    class UW_MainMenuButton_C* LoadGame;                                              // 0x0540 (size: 0x8)
    class UW_MainMenuButton_C* NewGame;                                               // 0x0548 (size: 0x8)
    class UW_MainMenuButton_C* PlayDemo;                                              // 0x0550 (size: 0x8)
    class UW_MainMenuButton_C* Settings;                                              // 0x0558 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Disclaimer1;                           // 0x0560 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x0568 (size: 0x8)
    class UVerticalBox* VerticalBox_Menu;                                             // 0x0570 (size: 0x8)
    FW_MainMenu_CActivePageIsMainMenu ActivePageIsMainMenu;                           // 0x0578 (size: 0x10)
    void ActivePageIsMainMenu();
    class UCommonActivatableWidgetStack* Stack_Parent;                                // 0x0588 (size: 0x8)
    int32 MaxNumProfiles;                                                             // 0x0590 (size: 0x4)
    bool ShowDemoDisclaimer;                                                          // 0x0594 (size: 0x1)
    bool DemoMode;                                                                    // 0x0595 (size: 0x1)
    TSubclassOf<class UW_SavedGamesPage_C> Save Game Widget Class;                    // 0x0598 (size: 0x8)
    bool AreProfilesFull;                                                             // 0x05A0 (size: 0x1)

    class UWidget* BP_GetDesiredFocusTarget();
    void Show Embargo Check Dialog(class UW_Popup_Spinner_C*& Dialog Widget);
    void OnProfilesFullAcceptPopup();
    void SetupNewGameOverrideWarning();
    void OnProfileTextAccept(FString ProfileName);
    void DemoStartNewGame();
    void DemoLoadMainMenuFromDisclaimer();
    void DemoGoToSecondDisclaimer();
    void OnLoadClicked();
    void OnNewGameClicked();
    void QuitGame();
    void BackAction();
    bool BP_OnHandleBackAction();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__W_MainMenu_SinglePlayer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BP_OnActivated();
    void BndEvt__W_MainMenu_Load_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_Credits_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_Settings_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_Continue_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_PlayDemo_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_MainMenu_Quit_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void LoadSecondDisclaimer();
    void DisclaimersFinished();
    void On Embargo Check Aborted();
    void ExecuteUbergraph_W_MainMenu(int32 EntryPoint);
    void ActivePageIsMainMenu__DelegateSignature();
}; // Size: 0x5A1

#endif
