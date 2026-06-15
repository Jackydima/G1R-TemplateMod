#ifndef UE4SS_SDK_W_Trading_UnderpayPopup_HPP
#define UE4SS_SDK_W_Trading_UnderpayPopup_HPP

class UW_Trading_UnderpayPopup_C : public UGothicCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0450 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0458 (size: 0x8)
    class UTextBlock* TextBlock_Amount;                                               // 0x0460 (size: 0x8)
    FW_Trading_UnderpayPopup_COnCancel OnCancel;                                      // 0x0468 (size: 0x10)
    void OnCancel();
    FW_Trading_UnderpayPopup_COnAccept OnAccept;                                      // 0x0478 (size: 0x10)
    void OnAccept();

    void Set Amount(int32 Amount);
    void BndEvt__W_Trading_QuantityPopup_Button_Accept_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Trading_QuantityPopup_Button_Cancel_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Trading_UnderpayPopup(int32 EntryPoint);
    void OnAccept__DelegateSignature();
    void OnCancel__DelegateSignature();
}; // Size: 0x488

#endif
