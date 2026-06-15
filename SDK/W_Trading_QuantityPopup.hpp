#ifndef UE4SS_SDK_W_Trading_QuantityPopup_HPP
#define UE4SS_SDK_W_Trading_QuantityPopup_HPP

class UW_Trading_QuantityPopup_C : public UGothicCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UWidgetAnimation* RightSide;                                                // 0x0450 (size: 0x8)
    class UWidgetAnimation* LeftSide;                                                 // 0x0458 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0460 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0468 (size: 0x8)
    class UImage* Image_Overlay;                                                      // 0x0470 (size: 0x8)
    class UW_Slider_C* W_Crafting_QuantitySlider;                                     // 0x0478 (size: 0x8)
    FW_Trading_QuantityPopup_COnAmountSelected OnAmountSelected;                      // 0x0480 (size: 0x10)
    void OnAmountSelected(int32 AmountSelected);
    FW_Trading_QuantityPopup_COnCancel OnCancel;                                      // 0x0490 (size: 0x10)
    void OnCancel();

    void SetSide(bool bRightSide);
    void SetMaxQuantity(int32 MaxQuantity);
    void BndEvt__W_Trading_QuantityPopup_Button_Accept_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Trading_QuantityPopup_Button_Cancel_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Trading_QuantityPopup(int32 EntryPoint);
    void OnCancel__DelegateSignature();
    void OnAmountSelected__DelegateSignature(int32 AmountSelected);
}; // Size: 0x4A0

#endif
