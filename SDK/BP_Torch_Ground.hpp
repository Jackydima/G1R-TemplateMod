#ifndef UE4SS_SDK_BP_Torch_Ground_HPP
#define UE4SS_SDK_BP_Torch_Ground_HPP

class ABP_Torch_Ground_C : public ABP_BaseTorch_C
{
    class UStaticMeshComponent* FarVisibility;                                        // 0x0FA0 (size: 0x8)
    class UStaticMeshComponent* SM_BottonTorch_01;                                    // 0x0FA8 (size: 0x8)

    void GatherInteractables(TArray<class USceneComponent*>& Interactables);
    void UserConstructionScript();
}; // Size: 0xFB0

#endif
