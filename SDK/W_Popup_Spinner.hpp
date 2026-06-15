#ifndef UE4SS_SDK_W_Popup_Spinner_HPP
#define UE4SS_SDK_W_Popup_Spinner_HPP

class UW_Popup_Spinner_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Spinner;                                                  // 0x0438 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0440 (size: 0x8)
    class UImage* Image_Spinner;                                                      // 0x0448 (size: 0x8)
    class UTextBlock* TextBlock_Message;                                              // 0x0450 (size: 0x8)
    FW_Popup_Spinner_COnAborted OnAborted;                                            // 0x0458 (size: 0x10)
    void OnAborted();

    void Set Text(FText NewText);
    void Construct();
    void BndEvt__W_Popup_Spinner_Button_Cancel_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Popup_Spinner(int32 EntryPoint);
    void OnAborted__DelegateSignature();
}; // Size: 0x468

#endif
