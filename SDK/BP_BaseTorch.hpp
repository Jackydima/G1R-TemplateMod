#ifndef UE4SS_SDK_BP_BaseTorch_HPP
#define UE4SS_SDK_BP_BaseTorch_HPP

class ABP_BaseTorch_C : public ABP_BaseFlame_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    class UStaticMeshComponent* SM_Mine_Torch;                                        // 0x0F78 (size: 0x8)
    class UNiagaraSystem* OverflowVFX;                                                // 0x0F80 (size: 0x8)
    class UNiagaraSystem* RecoverVFX;                                                 // 0x0F88 (size: 0x8)
    class UNiagaraSystem* HitVFX;                                                     // 0x0F90 (size: 0x8)
    class UNiagaraSystem* OverflowToBaseVFX;                                          // 0x0F98 (size: 0x8)

    void CustomLazyInitialize();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BaseTorch(int32 EntryPoint);
}; // Size: 0xFA0

#endif
