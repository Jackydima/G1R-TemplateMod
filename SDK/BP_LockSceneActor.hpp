#ifndef UE4SS_SDK_BP_LockSceneActor_HPP
#define UE4SS_SDK_BP_LockSceneActor_HPP

class ABP_LockSceneActor_C : public AGothicLockSceneActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class APointLight* Light;                                                         // 0x0360 (size: 0x8)
    TMap<class TSoftObjectPtr<AActor>, class FName> SlotToNameMap;                    // 0x0368 (size: 0x50)
    class UMaterialParameterCollection* MPC;                                          // 0x03B8 (size: 0x8)
    class ALightweightSceneCapture2D* SceneCapture;                                   // 0x03C0 (size: 0x8)

    void SetSceneVisible(bool IsVisible);
    void UpdateMPC();
    void ExecuteUbergraph_BP_LockSceneActor(int32 EntryPoint);
}; // Size: 0x3C8

#endif
