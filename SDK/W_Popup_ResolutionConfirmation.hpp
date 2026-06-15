#ifndef UE4SS_SDK_W_Popup_ResolutionConfirmation_HPP
#define UE4SS_SDK_W_Popup_ResolutionConfirmation_HPP

class UW_Popup_ResolutionConfirmation_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0438 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0440 (size: 0x8)
    class UImage* Image_133;                                                          // 0x0448 (size: 0x8)
    class UTextBlock* TextBlock_Message;                                              // 0x0450 (size: 0x8)
    class UTextBlock* TextBlock_Timer;                                                // 0x0458 (size: 0x8)
    int32 RevertTimer;                                                                // 0x0460 (size: 0x4)
    FW_Popup_ResolutionConfirmation_COnAccept OnAccept;                               // 0x0468 (size: 0x10)
    void OnAccept();
    FW_Popup_ResolutionConfirmation_COnCancel OnCancel;                               // 0x0478 (size: 0x10)
    void OnCancel();
    double RevertTimer_Current;                                                       // 0x0488 (size: 0x8)

    void SetText(FText NewText);
    void BndEvt__W_Popup_MessageNotification_Button_Accept_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_Popup_ResolutionConfirmation_Button_Cancel_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_Popup_ResolutionConfirmation(int32 EntryPoint);
    void OnCancel__DelegateSignature();
    void OnAccept__DelegateSignature();
}; // Size: 0x490

#endif
