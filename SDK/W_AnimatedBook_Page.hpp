#ifndef UE4SS_SDK_W_AnimatedBook_Page_HPP
#define UE4SS_SDK_W_AnimatedBook_Page_HPP

class UW_AnimatedBook_Page_C : public UDocumentElementViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UListView* ListView_39;                                                     // 0x0458 (size: 0x8)
    class UTextBlock* PageNumber;                                                     // 0x0460 (size: 0x8)

    void HidePageNumber();
    void SetPageNumber(int32 PageContent);
    void SetDocumentData(FPageContent PageContent);
    void Construct();
    void ExecuteUbergraph_W_AnimatedBook_Page(int32 EntryPoint);
}; // Size: 0x468

#endif
