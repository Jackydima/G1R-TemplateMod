#ifndef UE4SS_SDK_W_ProfileSelectionPage_HPP
#define UE4SS_SDK_W_ProfileSelectionPage_HPP

class UW_ProfileSelectionPage_C : public UProfileSelectionPageWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0460 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x0468 (size: 0x8)
    class UW_GenericButton_C* Button_Continue;                                        // 0x0470 (size: 0x8)
    class UW_GenericButton_C* ButtonDelete;                                           // 0x0478 (size: 0x8)
    class UImage* Image_206;                                                          // 0x0480 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x0488 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0490 (size: 0x8)
    FW_ProfileSelectionPage_CNewProfileSelected NewProfileSelected;                   // 0x0498 (size: 0x10)
    void NewProfileSelected(int32 ProfileId);
    FW_ProfileSelectionPage_CExistingProfileSelected ExistingProfileSelected;         // 0x04A8 (size: 0x10)
    void ExistingProfileSelected();
    FW_ProfileSelectionPage_CBackFromProfile BackFromProfile;                         // 0x04B8 (size: 0x10)
    void BackFromProfile();
    class UCommonActivatableWidgetStack* Stack_Parent;                                // 0x04C8 (size: 0x8)
    int32 MaxNumProfiles;                                                             // 0x04D0 (size: 0x4)
    int32 SelectedProfileToDelete;                                                    // 0x04D4 (size: 0x4)
    bool DemoMode;                                                                    // 0x04D8 (size: 0x1)
    bool ProfileOverwriteMode;                                                        // 0x04D9 (size: 0x1)

    void OnContinueButtonClicked();
    void EnableProfileOverwriteMode(bool IsEnabled);
    void OnPopupCancelAction();
    void OnDeleteProfileAccept();
    void UpdateProfileInfo_BP();
    void OnProfileNameObtained(FString ProfileName);
    class UWidget* BP_GetDesiredFocusTarget();
    void UpdateProfiles();
    void BndEvt__W_ProfileSelectionPage_Button_Select_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void BndEvt__W_ProfileSelectionPage_ButtonDelete_K2Node_ComponentBoundEvent_5_ClickedEventBP__DelegateSignature();
    void BndEvt__W_ProfileSelectionPage_Button_Back_K2Node_ComponentBoundEvent_6_ClickedEventBP__DelegateSignature();
    void BP_OnDeactivated();
    void BP_OnActivated();
    void BndEvt__W_ProfileSelectionPage_View_Profile_K2Node_ComponentBoundEvent_9_SelectionChangedEventBP__DelegateSignature(int32 _OldIndex, class UObject* _OldItem, int32 _NewIndex, class UObject* _NewItem);
    void OnDeleteButtonClicked();
    void ExecuteUbergraph_W_ProfileSelectionPage(int32 EntryPoint);
    void BackFromProfile__DelegateSignature();
    void ExistingProfileSelected__DelegateSignature();
    void NewProfileSelected__DelegateSignature(int32 ProfileId);
}; // Size: 0x4DA

#endif
