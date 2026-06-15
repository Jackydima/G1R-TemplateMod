#ifndef UE4SS_SDK_W_CreditsScreen_Section_HPP
#define UE4SS_SDK_W_CreditsScreen_Section_HPP

class UW_CreditsScreen_Section_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UCommonListView* CommonList_Names;                                          // 0x0428 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0430 (size: 0x8)
    class UImage* Logo;                                                               // 0x0438 (size: 0x8)
    class URichTextBlock* RichTextBlock_Line;                                         // 0x0440 (size: 0x8)
    FText DepartmentName;                                                             // 0x0448 (size: 0x10)
    TArray<FCreditsRowContent> DepartmentContent;                                     // 0x0458 (size: 0x10)

    void Set Section Content(FText Department, TArray<FCreditsRowContent>& Content, class UTexture2D* Logo);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_W_CreditsScreen_Section(int32 EntryPoint);
}; // Size: 0x468

#endif
