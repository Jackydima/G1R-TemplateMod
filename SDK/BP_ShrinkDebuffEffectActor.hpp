#ifndef UE4SS_SDK_BP_ShrinkDebuffEffectActor_HPP
#define UE4SS_SDK_BP_ShrinkDebuffEffectActor_HPP

class ABP_ShrinkDebuffEffectActor_C : public AShrinkDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* FireStateParticle;                                // 0x0300 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0308 (size: 0x8)
    class AGothicCharacter* TargetAsCharacter;                                        // 0x0310 (size: 0x8)
    float ShrinkMinScale;                                                             // 0x0318 (size: 0x4)
    float ShrinkDuration;                                                             // 0x031C (size: 0x4)
    bool HasShrinkStarted;                                                            // 0x0320 (size: 0x1)
    double ShrinkTime;                                                                // 0x0328 (size: 0x8)
    double OriginalScale;                                                             // 0x0330 (size: 0x8)

    void Shrink(double Scale, double Duration);
    void ActivateEffect();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void RestartEffect();
    void OnShrink(FGameplayTag EventTag, const FGameplayEventData& Payload);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ShrinkDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x338

#endif
