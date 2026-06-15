#ifndef UE4SS_SDK_W_Popup_TextInput_HPP
#define UE4SS_SDK_W_Popup_TextInput_HPP

class UW_Popup_TextInput_C : public UPopupPersistentDataTextInput
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0448 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0450 (size: 0x8)
    class UEditableText* EditableText_Name;                                           // 0x0458 (size: 0x8)
    class UImage* Image_MouseBlock;                                                   // 0x0460 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Warning;                               // 0x0468 (size: 0x8)
    FW_Popup_TextInput_COnAccept OnAccept;                                            // 0x0470 (size: 0x10)
    void OnAccept(FString ProfileName);
    FW_Popup_TextInput_COnCancel OnCancel;                                            // 0x0480 (size: 0x10)
    void OnCancel();

    void SetDefaultTextName(FText NewParam);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnCannotCreateMoreProfiles_BP();
    void OnNameAlreadyInUse_BP();
    void OnNameIsEmpty_BP();
    void AnErrorOcurred_BP();
    void InitializeBP();
    void BndEvt__W_Popup_TextInput_EditableText_Name_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_Popup_TextInput_Button_Accept_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Popup_TextInput_Button_Cancel_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Popup_TextInput_EditableText_Name_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_W_Popup_TextInput(int32 EntryPoint);
    void OnCancel__DelegateSignature();
    void OnAccept__DelegateSignature(FString ProfileName);
}; // Size: 0x490

#endif
