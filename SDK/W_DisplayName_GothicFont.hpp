#ifndef UE4SS_SDK_W_DisplayName_GothicFont_HPP
#define UE4SS_SDK_W_DisplayName_GothicFont_HPP

class UW_DisplayName_GothicFont_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Text_CharacterName;                                             // 0x02E8 (size: 0x8)

    void SetRedColor(bool IsRed);
    void DisplayName(const FText& Name);
    void ExecuteUbergraph_W_DisplayName_GothicFont(int32 EntryPoint);
}; // Size: 0x2F0

#endif
