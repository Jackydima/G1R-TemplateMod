#ifndef UE4SS_SDK_BP_NCMages_WallTorch_HPP
#define UE4SS_SDK_BP_NCMages_WallTorch_HPP

class ABP_NCMages_WallTorch_C : public ABP_BaseTorch_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0FA0 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_01;                               // 0x0FA8 (size: 0x8)
    class UNiagaraSystem* BigOverflowVFX;                                             // 0x0FB0 (size: 0x8)
    class UNiagaraSystem* BigOverflowToBaseVFX;                                       // 0x0FB8 (size: 0x8)

    void CustomLazyInitialize();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NCMages_WallTorch(int32 EntryPoint);
}; // Size: 0xFC0

#endif
