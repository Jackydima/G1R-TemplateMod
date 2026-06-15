#ifndef UE4SS_SDK_FirstDream_CombatHarpy_BP_HPP
#define UE4SS_SDK_FirstDream_CombatHarpy_BP_HPP

class AFirstDream_CombatHarpy_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_FirstDream_CombatHarpy_BP(int32 EntryPoint);
}; // Size: 0x2A0

#endif
