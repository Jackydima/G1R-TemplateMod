#ifndef UE4SS_SDK_AIAgentCharacter_OrcF_HPP
#define UE4SS_SDK_AIAgentCharacter_OrcF_HPP

class AAIAgentCharacter_OrcF_C : public AAIAgentCharacter_OrcM_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A60 (size: 0x8)
    TMap<int32, int32> Orc Female Bones Remapping;                                    // 0x0A68 (size: 0x50)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIAgentCharacter_OrcF(int32 EntryPoint);
}; // Size: 0xAB8

#endif
