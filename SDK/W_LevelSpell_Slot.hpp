#ifndef UE4SS_SDK_W_LevelSpell_Slot_HPP
#define UE4SS_SDK_W_LevelSpell_Slot_HPP

class UW_LevelSpell_Slot_C : public UUserWidget
{
    class UWidgetAnimation* Anim_LevelReached;                                        // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_Filllevel;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_70;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_Flash;                                                        // 0x0300 (size: 0x8)

    void SetEmpty();
    void FillAnimationFinished();
    void SetFilled(double Duration);
}; // Size: 0x308

#endif
