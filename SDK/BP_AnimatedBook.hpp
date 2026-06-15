#ifndef UE4SS_SDK_BP_AnimatedBook_HPP
#define UE4SS_SDK_BP_AnimatedBook_HPP

class ABP_AnimatedBook_C : public ABookCaptureActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UUserWidget* CoverWidget;                                                   // 0x0460 (size: 0x8)
    class UObject* ScreenWidget;                                                      // 0x0468 (size: 0x8)
    class UUserWidget* OldLeftWidget;                                                 // 0x0470 (size: 0x8)
    class UUserWidget* OldRightWidget;                                                // 0x0478 (size: 0x8)
    TArray<class UTexture2D*> BookStateTextures;                                      // 0x0480 (size: 0x10)
    double AutoOpenDelay;                                                             // 0x0490 (size: 0x8)

    void SetupInitialPages(FText BookTitle, FBookVisualConfiguration Cover);
    void UserConstructionScript();
    void m_OnPageFlipped_Event(bool _LeftPage);
    void m_OnBookInitialized_Event(FText _BookTitle, class UBookCoverConfiguration* _BookCover);
    void BP_TestPreviousPage();
    void BP_TestNextPage();
    void TestPageFlip(bool NextPage);
    void ReceiveBeginPlay();
    void BP_AnimateOpenBook();
    void BP_AnimateCloseBook();
    void ExecuteUbergraph_BP_AnimatedBook(int32 EntryPoint);
}; // Size: 0x498

#endif
