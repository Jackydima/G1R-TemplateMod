#ifndef UE4SS_SDK_W_QuantitySelector_HPP
#define UE4SS_SDK_W_QuantitySelector_HPP

class UW_QuantitySelector_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0340 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0348 (size: 0x8)
    class UW_Slider_C* W_Crafting_QuantitySlider;                                     // 0x0350 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Clicked Sound;                                         // 0x0358 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x0380 (size: 0x28)
    FW_QuantitySelector_COnAmountSelected OnAmountSelected;                           // 0x03A8 (size: 0x10)
    void OnAmountSelected(int32 Amount Selected);
    FW_QuantitySelector_COnClose OnClose;                                             // 0x03B8 (size: 0x10)
    void OnClose();

    void SetValue(int32 New Value);
    void SetMaxQuantity(int32 MaxQuantity);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_QuantitySelector_Button_Accept_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BndEvt__W_QuantitySelector_Button_Cancel_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_QuantitySelector(int32 EntryPoint);
    void OnClose__DelegateSignature();
    void OnAmountSelected__DelegateSignature(int32 Amount Selected);
}; // Size: 0x3C8

#endif
