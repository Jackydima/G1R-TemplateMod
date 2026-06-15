#ifndef UE4SS_SDK_AL_B3_D0_HPP
#define UE4SS_SDK_AL_B3_D0_HPP

class AAL_B3_D0_C : public ACheckElementsInsideVolume
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)

    void OnValid();
    void ExecuteUbergraph_AL_B3_D0(int32 EntryPoint);
}; // Size: 0x350

#endif
