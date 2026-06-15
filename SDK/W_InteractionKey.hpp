#ifndef UE4SS_SDK_W_InteractionKey_HPP
#define UE4SS_SDK_W_InteractionKey_HPP

class UW_InteractionKey_C : public UInteractionKey
{
    class UHorizontalBox* HorizontalBox_Extended;                                     // 0x02E0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02E8 (size: 0x8)
    class UImage* Image_Icon_Extended;                                                // 0x02F0 (size: 0x8)
    class UInputAction* InputAction;                                                  // 0x02F8 (size: 0x8)
    class UInputAction* InputAction_Extended;                                         // 0x0300 (size: 0x8)

    void BP_RefreshInputDevice();
}; // Size: 0x308

#endif
