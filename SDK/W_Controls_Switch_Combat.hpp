#ifndef UE4SS_SDK_W_Controls_Switch_Combat_HPP
#define UE4SS_SDK_W_Controls_Switch_Combat_HPP

class UW_Controls_Switch_Combat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_Controller;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_FrontDown;                                            // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_FrontDown_1;                                          // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_FrontLeft;                                            // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_FrontLeft_1;                                          // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_FrontRight;                                           // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_FrontRight_1;                                         // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_FrontUp;                                              // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_FrontUp_1;                                            // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_FrontUp_2;                                            // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_FrontUp_3;                                            // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_L2;                                                   // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_Menu;                                                 // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_R2;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_R2_1;                                                 // 0x0358 (size: 0x8)
    class UTexture2D* Image;                                                          // 0x0360 (size: 0x8)
    TArray<FText> ButtonText;                                                         // 0x0368 (size: 0x10)

    void SetInfo();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_Controls_Switch_Combat(int32 EntryPoint);
}; // Size: 0x378

#endif
