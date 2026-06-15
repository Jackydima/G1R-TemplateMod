#ifndef UE4SS_SDK_W_GenericFilter_HPP
#define UE4SS_SDK_W_GenericFilter_HPP

class UW_GenericFilter_C : public UAlkFilterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UW_InputHint_C* InputHint_NextFilter;                                       // 0x03A8 (size: 0x8)
    class UW_InputHint_C* InputHint_PreviousFilter;                                   // 0x03B0 (size: 0x8)

    void BndEvt__W_GenericFilter_InputHint_PreviousFilter_K2Node_ComponentBoundEvent_3_ActionEventBP__DelegateSignature();
    void BndEvt__W_GenericFilter_InputHint_PreviousFilter_K2Node_ComponentBoundEvent_4_ActionEventBP__DelegateSignature();
    void BndEvt__W_GenericFilter_InputHint_NextFilter_K2Node_ComponentBoundEvent_5_ActionEventBP__DelegateSignature();
    void BndEvt__W_GenericFilter_InputHint_NextFilter_K2Node_ComponentBoundEvent_6_ActionEventBP__DelegateSignature();
    void BndEvt__W_GenericFilter_AlkListView_Filters_K2Node_ComponentBoundEvent_0_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void OnFiltersChanged(const TArray<class UAlkFilterWidgetFilter*>& _Filters);
    void ExecuteUbergraph_W_GenericFilter(int32 EntryPoint);
}; // Size: 0x3B8

#endif
