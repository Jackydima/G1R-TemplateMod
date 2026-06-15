#ifndef UE4SS_SDK_W_MapMarker_Enemy_HPP
#define UE4SS_SDK_W_MapMarker_Enemy_HPP

class UW_MapMarker_Enemy_C : public UW_MapMarker_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_MapMarker_Enemy(int32 EntryPoint);
}; // Size: 0x368

#endif
