#ifndef UE4SS_SDK_W_Popup_MessageNotification_HPP
#define UE4SS_SDK_W_Popup_MessageNotification_HPP

class UW_Popup_MessageNotification_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0438 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0440 (size: 0x8)
    class UImage* Image_133;                                                          // 0x0448 (size: 0x8)
    class UTextBlock* TextBlock_Message;                                              // 0x0450 (size: 0x8)
    FW_Popup_MessageNotification_COnAccept OnAccept;                                  // 0x0458 (size: 0x10)
    void OnAccept();

    void SetText(FText NewText);
    void BndEvt__W_Popup_MessageNotification_Button_Accept_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Popup_MessageNotification(int32 EntryPoint);
    void OnAccept__DelegateSignature();
}; // Size: 0x468

#endif
