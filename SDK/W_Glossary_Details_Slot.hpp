#ifndef UE4SS_SDK_W_Glossary_Details_Slot_HPP
#define UE4SS_SDK_W_Glossary_Details_Slot_HPP

class UW_Glossary_Details_Slot_C : public UDocumentElementViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Caption;                                // 0x0458 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Text;                                   // 0x0460 (size: 0x8)
    class UImage* Image_Image;                                                        // 0x0468 (size: 0x8)
    class UScaleBox* ScaleBox_Image;                                                  // 0x0470 (size: 0x8)
    class USpacer* Spacer_Left;                                                       // 0x0478 (size: 0x8)
    class USpacer* Spacer_Right;                                                      // 0x0480 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Content;                                    // 0x0488 (size: 0x8)

    void Set Indentation(bool Indent);
    void Set Image(class UTexture2D* Image, FLinearColor Tint);
    void Set Caption(FText Caption, TEnumAsByte<ETextJustify::Type> Justification);
    void Set Text(FText Text);
    void OnEnumeratedListSet(const TArray<FText>& _Entries, FGameplayTag _Style);
    void OnBulletListSet(const TArray<FText>& _Entries, FGameplayTag _Style);
    void OnLoaded_3A72435C4AE2A9E28E5163ADE4AD9E69(class UObject* Loaded);
    void OnParagraphSet(const FText& _Text, FGameplayTag _Style);
    void OnChapterHeadingSet(const FText& _Text, FGameplayTag _Style);
    void OnSectionHeadingSet(const FText& _Text, FGameplayTag _Style);
    void OnQuoteSet(const FText& _Text, const FText& _Source, FGameplayTag _Style);
    void OnImageSet(const TSoftObjectPtr<UTexture2D>& _Image, const FText& _Caption, FGameplayTag _Style);
    void OnPageBreakSet(FGameplayTag _Style);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void ExecuteUbergraph_W_Glossary_Details_Slot(int32 EntryPoint);
}; // Size: 0x490

#endif
