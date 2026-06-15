#ifndef UE4SS_SDK_W_Quest_Details_HPP
#define UE4SS_SDK_W_Quest_Details_HPP

class UW_Quest_Details_C : public UQuestDetailsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0348 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Details;                                // 0x0350 (size: 0x8)
    class UImage* Image_Banner;                                                       // 0x0358 (size: 0x8)
    class UImage* Image_PaperBg;                                                      // 0x0360 (size: 0x8)
    class UImage* Image_PaperBg_1;                                                    // 0x0368 (size: 0x8)
    class UImage* Image_PaperBg_2;                                                    // 0x0370 (size: 0x8)
    class UW_ListView_C* ListView_Journal;                                            // 0x0378 (size: 0x8)
    class UW_ListView_C* ListView_Objectives;                                         // 0x0380 (size: 0x8)
    class UW_Glossary_SpinBox_C* SpinBox_Entry;                                       // 0x0388 (size: 0x8)
    class UTextBlock* TextBlock_Category;                                             // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock_QuestName;                                            // 0x0398 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Section;                   // 0x03A0 (size: 0x8)
    FW_Quest_Details_COnButtonRelevanceChanged OnButtonRelevanceChanged;              // 0x03A8 (size: 0x10)
    void OnButtonRelevanceChanged();
    FW_Quest_Details_COnSpinBoxValueChanged OnSpinBoxValueChanged;                    // 0x03B8 (size: 0x10)
    void OnSpinBoxValueChanged(int32 Old Value, int32 New Value);

    void Set Index(int32 Index);
    void Set Category(FText Name, int32 Num Entries);
    void Randomize Background Transform(class UImage* Background Image);
    void Play Show Animation();
    void Get Relevant Button Tags(FGameplayTagContainer& Relevant Button Tags);
    void Show Objectives();
    void Show Journal();
    void On Quest Set(class UQuest* Quest);
    void OnLoaded_0579CD2D4BE82D883A0E6E8E63B1886C(class UObject* Loaded);
    void Set Quest(class UQuest* Quest);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_Quest_Details_WidgetSwitcher_Section_K2Node_ComponentBoundEvent_0_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void BndEvt__W_Quest_Details_SpinBox_Entry_K2Node_ComponentBoundEvent_1_ValueChangedEventBP__DelegateSignature(int32 OldValue, int32 NewValue);
    void ExecuteUbergraph_W_Quest_Details(int32 EntryPoint);
    void OnSpinBoxValueChanged__DelegateSignature(int32 Old Value, int32 New Value);
    void OnButtonRelevanceChanged__DelegateSignature();
}; // Size: 0x3C8

#endif
