#ifndef UE4SS_SDK_W_Quest_ObjectiveSlot_HPP
#define UE4SS_SDK_W_Quest_ObjectiveSlot_HPP

class UW_Quest_ObjectiveSlot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Description;                            // 0x0428 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Title;                                  // 0x0430 (size: 0x8)
    class UImage* Image_Active;                                                       // 0x0438 (size: 0x8)
    class UImage* Image_Failed;                                                       // 0x0440 (size: 0x8)
    class UImage* Image_Succeeded;                                                    // 0x0448 (size: 0x8)

    void On Quest Set(class UQuest* Quest);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_W_Quest_ObjectiveSlot(int32 EntryPoint);
}; // Size: 0x450

#endif
