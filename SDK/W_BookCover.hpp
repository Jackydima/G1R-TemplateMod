#ifndef UE4SS_SDK_W_BookCover_HPP
#define UE4SS_SDK_W_BookCover_HPP

class UW_BookCover_C : public UUserWidget
{
    class UImage* BottomLCorner;                                                      // 0x02E0 (size: 0x8)
    class UImage* BottomRCorner;                                                      // 0x02E8 (size: 0x8)
    class UImage* CoverLogo;                                                          // 0x02F0 (size: 0x8)
    class UImage* LBorder;                                                            // 0x02F8 (size: 0x8)
    class UImage* LBorder_1;                                                          // 0x0300 (size: 0x8)
    class UImage* RBorder;                                                            // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_BookTitle;                                            // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_BookTitle_LowerLight;                                 // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_BookTitle_LowerShadow;                                // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_BookTitle_UpperLight;                                 // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_BookTitle_UpperShadow;                                // 0x0330 (size: 0x8)
    class UImage* TopLCorner;                                                         // 0x0338 (size: 0x8)
    class UImage* TopRCorner;                                                         // 0x0340 (size: 0x8)
    class UImage* TopRCorner_1;                                                       // 0x0348 (size: 0x8)
    TMap<class EVerticalAlignmenet, class FVector> VerticalPaddings;                  // 0x0350 (size: 0x50)
    TMap<class EHorizontalAlignmenet, class FVector> HorizontalPaddings;              // 0x03A0 (size: 0x50)

    void SetFontInfo(TSoftObjectPtr<UFont> Input, double FontSize);
    void SetImageVisuals(TSoftObjectPtr<UTexture2D> Texture, class UImage* Corner);
    void AddMargings(FMargin A, FMargin B, FMargin& Result);
    void SetShadowsPadding(double ShadowIntensity, FMargin Marging);
    void SetTitlePadding(EHorizontalAlignmenet HorizontalAlignment, EVerticalAlignmenet VerticalAlignment, double ShadowIntensity, double WearIntensity);
    void SetCoverConfiguration(FBookVisualConfiguration Cover);
    void Set Cover Image(class UImage* Cover image);
    void SetTitleText(FText Text);
}; // Size: 0x3F0

#endif
