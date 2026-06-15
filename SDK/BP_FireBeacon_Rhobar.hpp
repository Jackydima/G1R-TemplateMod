#ifndef UE4SS_SDK_BP_FireBeacon_Rhobar_HPP
#define UE4SS_SDK_BP_FireBeacon_Rhobar_HPP

class ABP_FireBeacon_Rhobar_C : public ABP_BaseFlame_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    class UStaticMeshComponent* FirePlane2_DONT_DELETE;                               // 0x0F78 (size: 0x8)
    class UStaticMeshComponent* FirePlane1_DONT_DELETE;                               // 0x0F80 (size: 0x8)
    FRotator RotationFirePlane;                                                       // 0x0F88 (size: 0x18)

    void GatherInteractables(TArray<class USceneComponent*>& Interactables);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FireBeacon_Rhobar(int32 EntryPoint);
}; // Size: 0xFA0

#endif
