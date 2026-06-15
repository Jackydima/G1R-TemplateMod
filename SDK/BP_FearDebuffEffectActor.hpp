#ifndef UE4SS_SDK_BP_FearDebuffEffectActor_HPP
#define UE4SS_SDK_BP_FearDebuffEffectActor_HPP

class ABP_FearDebuffEffectActor_C : public AFearDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* FireStateParticle;                                // 0x0300 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0308 (size: 0x8)
    float UnburnLastUpdateValue;                                                      // 0x0310 (size: 0x4)
    class ACharacter* TargetAsCharacter;                                              // 0x0318 (size: 0x8)
    bool Removed;                                                                     // 0x0320 (size: 0x1)
    bool RemovedByAttackOrDeath;                                                      // 0x0321 (size: 0x1)
    class UNiagaraComponent* P_Fear_Eyes_L;                                           // 0x0328 (size: 0x8)
    class UNiagaraComponent* P_Fear_Eyes_R;                                           // 0x0330 (size: 0x8)

    void RemoveInmediatelyEffect();
    void ActivateEffect();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void ApplyEffect();
    void RemoveEffect();
    void RestartEffect();
    void ExecuteUbergraph_BP_FearDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x338

#endif
