#ifndef UE4SS_SDK_W_Glossary_Badge_HPP
#define UE4SS_SDK_W_Glossary_Badge_HPP

class UW_Glossary_Badge_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UCommonVisualAttachment* cva_Tooltip;                                       // 0x0428 (size: 0x8)
    class UImage* Image_Badge;                                                        // 0x0430 (size: 0x8)
    class UTextBlock* TextBlock_Tooltip;                                              // 0x0438 (size: 0x8)

    void OnLoaded_A35306D647A11EF511C25ABE72A7CA59(class UObject* Loaded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_W_Glossary_Badge(int32 EntryPoint);
}; // Size: 0x440

#endif
