#ifndef UE4SS_SDK_BP_UltraVolumetricsThirdPerson_HPP
#define UE4SS_SDK_BP_UltraVolumetricsThirdPerson_HPP

class UBP_UltraVolumetricsThirdPerson_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_UltraVolumetricsThirdPerson(int32 EntryPoint);
}; // Size: 0xA8

#endif
