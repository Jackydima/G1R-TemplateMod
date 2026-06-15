#ifndef UE4SS_SDK_W_DifficultyCustomizeDetails_Hard_HPP
#define UE4SS_SDK_W_DifficultyCustomizeDetails_Hard_HPP

class UW_DifficultyCustomizeDetails_Hard_C : public UW_DifficultyCustomizeDetails_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_DifficultyCustomizeDetails_Hard(int32 EntryPoint);
}; // Size: 0x500

#endif
