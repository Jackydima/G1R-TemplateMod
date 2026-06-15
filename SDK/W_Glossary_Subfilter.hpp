#ifndef UE4SS_SDK_W_Glossary_Subfilter_HPP
#define UE4SS_SDK_W_Glossary_Subfilter_HPP

class UW_Glossary_Subfilter_C : public UGlossarySubfilterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UButton* Button_Next;                                                       // 0x03C0 (size: 0x8)
    class UButton* Button_Previous;                                                   // 0x03C8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x03D0 (size: 0x8)
    class UW_InputHint_C* InputHint_Next;                                             // 0x03D8 (size: 0x8)
    class UW_InputHint_C* InputHint_Previous;                                         // 0x03E0 (size: 0x8)
    class UTextBlock* TextBlock_DisplayText;                                          // 0x03E8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Next;                                       // 0x03F0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Previous;                                   // 0x03F8 (size: 0x8)
    bool Auto Collapse;                                                               // 0x0400 (size: 0x1)

    void Update Visibility();
    void Update Buttons();
    void OnLoaded_824B45954A4459A4619418AF0B3BA43F(class UObject* Loaded);
    void OnLoaded_824B45954A4459A4619418AF88B1FD07(class UObject* Loaded);
    void OnSubfiltersChanged_BP(const TArray<FGlossarySubfilterData>& _Data);
    void OnCurrentIndexChanged_BP(int32 _Index, const FGlossarySubfilterData& _Data);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void BndEvt__W_Glossary_Subfilter_Button_Decrease_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Glossary_Subfilter_Button_Increase_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Glossary_Subfilter_InputHint_Decrement_K2Node_ComponentBoundEvent_2_ActionEventBP__DelegateSignature();
    void BndEvt__W_Glossary_Subfilter_InputHint_Increment_K2Node_ComponentBoundEvent_3_ActionEventBP__DelegateSignature();
    void OnInitialized();
    void ExecuteUbergraph_W_Glossary_Subfilter(int32 EntryPoint);
}; // Size: 0x401

#endif
