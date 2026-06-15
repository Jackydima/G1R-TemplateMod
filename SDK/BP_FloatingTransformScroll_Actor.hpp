#ifndef UE4SS_SDK_BP_FloatingTransformScroll_Actor_HPP
#define UE4SS_SDK_BP_FloatingTransformScroll_Actor_HPP

class ABP_FloatingTransformScroll_Actor_C : public AFloatingScrollActor_AS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0328 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0330 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0338 (size: 0x8)
    class USceneComponent* DesiredRunePos;                                            // 0x0340 (size: 0x8)
    double DistanceToGetRecovered;                                                    // 0x0348 (size: 0x8)
    double DistanceToGoToHand;                                                        // 0x0350 (size: 0x8)
    double GoToHandTime;                                                              // 0x0358 (size: 0x8)
    double ActualHorizontalOffset;                                                    // 0x0360 (size: 0x8)
    double VerticalOffset;                                                            // 0x0368 (size: 0x8)
    double VerticalSpeed;                                                             // 0x0370 (size: 0x8)
    bool GoingToHand;                                                                 // 0x0378 (size: 0x1)
    bool TryingToDestroy;                                                             // 0x0379 (size: 0x1)
    double ExpandRadiusSpeed;                                                         // 0x0380 (size: 0x8)
    FVector InitialRunePos;                                                           // 0x0388 (size: 0x18)
    double HorizontalOffset;                                                          // 0x03A0 (size: 0x8)
    double HorizontalSpeed;                                                           // 0x03A8 (size: 0x8)
    double BaseHorizontalDistance;                                                    // 0x03B0 (size: 0x8)
    double InitialVerticalOffset;                                                     // 0x03B8 (size: 0x8)
    bool AllowActorTick;                                                              // 0x03C0 (size: 0x1)
    class UCurveFloat* InitialMovement_Curve;                                         // 0x03C8 (size: 0x8)
    double AccumulatedDeltaTime;                                                      // 0x03D0 (size: 0x8)
    double InitTime;                                                                  // 0x03D8 (size: 0x8)
    double InitialMovementMaxHeight;                                                  // 0x03E0 (size: 0x8)
    class UNiagaraComponent* Trail_ParticleSystem;                                    // 0x03E8 (size: 0x8)
    class UNiagaraComponent* Rune_ParticleSystem;                                     // 0x03F0 (size: 0x8)
    double MaxLightIntensity;                                                         // 0x03F8 (size: 0x8)
    FVector OriginalRunePosition;                                                     // 0x0400 (size: 0x18)
    double OffSetLerp;                                                                // 0x0418 (size: 0x8)
    double RotationRate;                                                              // 0x0420 (size: 0x8)
    double MaxRotationRate;                                                           // 0x0428 (size: 0x8)
    bool Consumed;                                                                    // 0x0430 (size: 0x1)

    void StartRotations();
    void SpawnRuneParticleSystem();
    void SpawnTrailParticleSystem();
    void Get VFXParams(FLinearColor& m_MagicVFXColor, double& Magic VFXIntensity);
    void PlaceItemVisualInWorld();
    void GetForwardDisplacement(double& ForwardOffset);
    void MoveRuneToDesiredPos(double LerpValue);
    void MoveItemVisualToHandSocket(double Alpha);
    void RotateItemVisualTowardsHandRot(double Alpha);
    void GetHandRotation(FName InSocketName, FRotator& rot);
    bool Check Distance to Hand Is Closer(double DistanceToCheck);
    FVector Get Socket Location(FName InSocketName);
    void TryToFinnishEffect();
    void DestroyEffect();
    void GoToHand();
    void OnStartRecoveringRune(float totalCastingTime);
    void ActivateEffect();
    void BP_RestoreItemInHand();
    void StopAllVisuals();
    void OnPreDestroyDebuffActor();
    void ActivateOnLaunchSpellVisuals();
    void RestartEffect();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FloatingTransformScroll_Actor(int32 EntryPoint);
}; // Size: 0x431

#endif
