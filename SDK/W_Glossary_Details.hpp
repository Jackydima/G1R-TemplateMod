#ifndef UE4SS_SDK_W_Glossary_Details_HPP
#define UE4SS_SDK_W_Glossary_Details_HPP

class UW_Glossary_Details_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0340 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Category;                               // 0x0348 (size: 0x8)
    class UImage* Image_CharacterImage;                                               // 0x0350 (size: 0x8)
    class UImage* Image_CharLine;                                                     // 0x0358 (size: 0x8)
    class UImage* Image_PaperBg;                                                      // 0x0360 (size: 0x8)
    class UImage* Image_PaperBg_1;                                                    // 0x0368 (size: 0x8)
    class UImage* Image_PaperBg_2;                                                    // 0x0370 (size: 0x8)
    class UW_ListView_C* ListView_Entries;                                            // 0x0378 (size: 0x8)
    class UOverlay* Overlay_CharacterImage;                                           // 0x0380 (size: 0x8)
    class UW_Glossary_SpinBox_C* SpinBox_Entry;                                       // 0x0388 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0390 (size: 0x8)

    void Set Category(FText Category Name, FText Subcategory Name, int32 Num Items);
    void Set Document(class UGlossaryDocument* Document);
    void Randomize Background Transform(class UImage* Background Image);
    void Play Show Animation();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_Glossary_Details(int32 EntryPoint);
}; // Size: 0x398

#endif
