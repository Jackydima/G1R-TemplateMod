#ifndef UE4SS_SDK_W_GameOverMenu_HPP
#define UE4SS_SDK_W_GameOverMenu_HPP

class UW_GameOverMenu_C : public UGameOverWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anim_Open;                                                // 0x0470 (size: 0x8)
    class UGridPanel* GridPanel_Buttons;                                              // 0x0478 (size: 0x8)
    class UImage* Image;                                                              // 0x0480 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0488 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0490 (size: 0x8)
    class UImage* Image_Skull;                                                        // 0x0498 (size: 0x8)
    class UW_MainMenuButton_C* LoadGame;                                              // 0x04A0 (size: 0x8)
    class UW_MainMenuButton_C* LoadLastSave;                                          // 0x04A8 (size: 0x8)
    class UW_MainMenuButton_C* MainMenu;                                              // 0x04B0 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Menus;                                 // 0x04B8 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x04C0 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x04C8 (size: 0x8)
    class UTextBlock* TextBlock_RevivesLeft_DemoOnly;                                 // 0x04D0 (size: 0x8)
    class UTextBlock* TextBlock_SaveTimeAgo;                                          // 0x04D8 (size: 0x8)
    class UVerticalBox* VerticalBox_Buttons;                                          // 0x04E0 (size: 0x8)
    class UVerticalBox* VerticalBox_Menu;                                             // 0x04E8 (size: 0x8)
    FText RevivesText;                                                                // 0x04F0 (size: 0x10)

    void Check Can Revive();
    void Calculate Last Save Time(int32 Time Played);
    void OnQuitGame();
    ESlateVisibility Get_TextBlock_RevivesLeft_DemoOnly_Visibility();
    ESlateVisibility Get_Revive_Visibility();
    void SetReviveNumber();
    void ReturnToMainMenu();
    void BackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_PauseMenu_MainMenu_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BP_OnActivated();
    void BndEvt__W_GameOverMenu_Resume_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_GameOverMenu_LoadGame_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_GameOverMenu_Quit_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_GameOverMenu_LoadLastSave_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_GameOverMenu(int32 EntryPoint);
}; // Size: 0x500

#endif
