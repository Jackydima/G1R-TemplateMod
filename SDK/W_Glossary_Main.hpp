#ifndef UE4SS_SDK_W_Glossary_Main_HPP
#define UE4SS_SDK_W_Glossary_Main_HPP

class UW_Glossary_Main_C : public UGlossaryMainWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Details;                                // 0x03E8 (size: 0x8)
    class UW_DiscreteItemsView_C* DiscreteItemsView_Slots;                            // 0x03F0 (size: 0x8)
    class UW_Glossary_Details_C* GlossaryDetails;                                     // 0x03F8 (size: 0x8)
    class UImage* Image_71;                                                           // 0x0400 (size: 0x8)
    class USizeBox* SizeBox_Description;                                              // 0x0408 (size: 0x8)
    class USizeBox* SizeBox_Subfilter;                                                // 0x0410 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0418 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Pages;                     // 0x0420 (size: 0x8)
    bool Updating Subcategory;                                                        // 0x0428 (size: 0x1)

    void Update Subcategory Content();
    void Show Details(int32 Index);
    void Update Category Content(FGameplayTag Filter Tag, FText Category Name, FText Description);
    FGameplayTagContainer GetRelevantButtonTags();
    void BndEvt__W_Glossary_Main_DiscreteItemsView_Recipes_K2Node_ComponentBoundEvent_2_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void OnRelevantButtonClicked(const FGameplayTag& _GameplayTag);
    void BndEvt__W_Glossary_Main_GenericFilter_K2Node_ComponentBoundEvent_0_SelectionChangedEventBP__DelegateSignature(FGameplayTag _FilterTag, const FText& _DisplayName, const FText& _Description);
    void BndEvt__W_Glossary_Main_WidgetSwitcher_Pages_K2Node_ComponentBoundEvent_1_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void OnValueChanged (SpinBox)(int32 OldValue, int32 NewValue);
    void OnShown();
    void SetSelection(FGameplayTag _FilterTag, const class UObject* _Item);
    void BndEvt__W_Glossary_Main_Glossary_Subfilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void OnInitialized();
    void BndEvt__W_Glossary_Main_SubfilterWidget_K2Node_ComponentBoundEvent_4_CurrentIndexChangedEventBP__DelegateSignature(int32 _Index, const FGlossarySubfilterData& _Data);
    void ExecuteUbergraph_W_Glossary_Main(int32 EntryPoint);
}; // Size: 0x429

#endif
