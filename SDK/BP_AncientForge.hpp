#ifndef UE4SS_SDK_BP_AncientForge_HPP
#define UE4SS_SDK_BP_AncientForge_HPP

class ABP_AncientForge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UGothicFXComponent* GothicFX;                                               // 0x0298 (size: 0x8)
    class UEnvironmentLavaInteractionComponent* EnvironmentLavaInteractionComponent;  // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* DamagePlane;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    FGothicFXInstanceHandle SFXFireLoopHandle;                                        // 0x02C0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Activate();
    void PlayFireLoopSFX();
    void ExecuteUbergraph_BP_AncientForge(int32 EntryPoint);
}; // Size: 0x2C8

#endif
