#ifndef UE4SS_SDK_W_DifficultyCustomizeDetails_Easy_HPP
#define UE4SS_SDK_W_DifficultyCustomizeDetails_Easy_HPP

class UW_DifficultyCustomizeDetails_Easy_C : public UW_DifficultyCustomizeDetails_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_DifficultyCustomizeDetails_Easy(int32 EntryPoint);
}; // Size: 0x500

#endif
