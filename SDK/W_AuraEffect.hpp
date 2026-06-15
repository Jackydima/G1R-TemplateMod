#ifndef UE4SS_SDK_W_AuraEffect_HPP
#define UE4SS_SDK_W_AuraEffect_HPP

class UW_AuraEffect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x02E8 (size: 0x8)
    class UImage* Image_Background_1;                                                 // 0x02F0 (size: 0x8)
    class USizeBox* SizeBox_Aura_1;                                                   // 0x02F8 (size: 0x8)
    float AuraSize;                                                                   // 0x0300 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_AuraEffect(int32 EntryPoint);
}; // Size: 0x304

#endif
