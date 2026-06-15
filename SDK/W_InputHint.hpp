#ifndef UE4SS_SDK_W_InputHint_HPP
#define UE4SS_SDK_W_InputHint_HPP

class UW_InputHint_C : public UInputHintWidget_CommonUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Content;                                      // 0x03F0 (size: 0x8)
    class UImage* Image_Hint;                                                         // 0x03F8 (size: 0x8)
    class UImage* Image_Hold;                                                         // 0x0400 (size: 0x8)
    class UTextBlock* TextBlock_HoldHint;                                             // 0x0408 (size: 0x8)
    class UTextBlock* TextBlock_Label;                                                // 0x0410 (size: 0x8)
    FVector2D Icon Size;                                                              // 0x0418 (size: 0x10)
    bool Hide when MKB;                                                               // 0x0428 (size: 0x1)
    bool Hide Label;                                                                  // 0x0429 (size: 0x1)
    bool Hide 'hold' Hint;                                                            // 0x042A (size: 0x1)
    bool Always reserve space for Hold progress;                                      // 0x042B (size: 0x1)
    FSlateFontInfo Font;                                                              // 0x0430 (size: 0x60)
    double Font Scale;                                                                // 0x0490 (size: 0x8)
    FSlateColor Font Color;                                                           // 0x0498 (size: 0x14)
    double Pointiness of the MKB Hold circle;                                         // 0x04B0 (size: 0x8)

    void Update Hold Material();
    void Set Hold Progress(double Progress);
    void Update Visibilities();
    void Update Content();
    void PreConstruct(bool IsDesignTime);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void OnHoldActionProgress(float _Progress);
    void OnTextOverrideChanged();
    void ExecuteUbergraph_W_InputHint(int32 EntryPoint);
}; // Size: 0x4B8

#endif
