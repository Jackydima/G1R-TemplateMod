#ifndef UE4SS_SDK_BP_SlowdownDebuffEffectActor_HPP
#define UE4SS_SDK_BP_SlowdownDebuffEffectActor_HPP

class ABP_SlowdownDebuffEffectActor_C : public ASlowdownDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0308 (size: 0x8)
    EWalkSpeed PreviousWalkSpeed;                                                     // 0x0310 (size: 0x1)
    FGameplayAbilitySpecHandle SpecHandle;                                            // 0x0314 (size: 0x4)

    void ActivateEffect();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void ExecuteUbergraph_BP_SlowdownDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x318

#endif
