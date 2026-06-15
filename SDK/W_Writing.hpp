#ifndef UE4SS_SDK_W_Writing_HPP
#define UE4SS_SDK_W_Writing_HPP

class UW_Writing_C : public UUserWidget
{
    class UWidgetAnimation* Anim_Show;                                                // 0x02E0 (size: 0x8)
    class UImage* Image_PaperBg;                                                      // 0x02E8 (size: 0x8)
    class UImage* Image_PaperBg_1;                                                    // 0x02F0 (size: 0x8)
    class UW_ListView_C* ListView_Text;                                               // 0x02F8 (size: 0x8)

    void SetDocumentData(FPageContent PageContent, class UTexture2D* BackgroundTexture);
}; // Size: 0x300

#endif
