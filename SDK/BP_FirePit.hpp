#ifndef UE4SS_SDK_BP_FirePit_HPP
#define UE4SS_SDK_BP_FirePit_HPP

class ABP_FirePit_C : public ABP_BaseFlame_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    float Refraction Spawn Rate;                                                      // 0x0F78 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FirePit(int32 EntryPoint);
}; // Size: 0xF7C

#endif
