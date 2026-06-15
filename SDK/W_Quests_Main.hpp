#ifndef UE4SS_SDK_W_Quests_Main_HPP
#define UE4SS_SDK_W_Quests_Main_HPP

class UW_Quests_Main_C : public UQuestMain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Details;                                // 0x03F0 (size: 0x8)
    class UW_DiscreteItemsView_C* DiscreteItemsView_Quests;                           // 0x03F8 (size: 0x8)
    class UImage* Image_71;                                                           // 0x0400 (size: 0x8)
    class UW_Quest_Details_C* QuestDetails;                                           // 0x0408 (size: 0x8)
    class USizeBox* SizeBox_Description;                                              // 0x0410 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0418 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Pages;                     // 0x0420 (size: 0x8)

    void Handle Button Click(FGameplayTag Button Tag);
    FGameplayTagContainer GetRelevantButtonTags();
    void Update Content(FGameplayTag Filter Tag, FText title, FText Description);
    void Show Quest Details(class UQuest* Quest);
    void Show Details(int32 Index);
    void OnRelevantButtonClicked(const FGameplayTag& _GameplayTag);
    void BndEvt__W_Quests_Main_DiscreteItemsView_Quests_K2Node_ComponentBoundEvent_0_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void BndEvt__W_Quests_Main_W_GenericFilter_K2Node_ComponentBoundEvent_1_SelectionChangedEventBP__DelegateSignature(FGameplayTag _FilterTag, const FText& _DisplayName, const FText& _Description);
    void BndEvt__W_Quests_Main_WidgetSwitcher_Pages_K2Node_ComponentBoundEvent_2_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void OnShown();
    void SetSelection(FGameplayTag _FilterTag, const class UObject* _Item);
    void BndEvt__W_Quests_Main_QuestDetails_K2Node_ComponentBoundEvent_3_OnButtonRelevanceChanged__DelegateSignature();
    void Construct();
    void On Value Changed (SpinBox)(int32 Old Value, int32 New Value);
    void ExecuteUbergraph_W_Quests_Main(int32 EntryPoint);
}; // Size: 0x428

#endif
