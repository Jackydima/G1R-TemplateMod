#ifndef UE4SS_SDK_BP_FloatingScroll_Actor_HPP
#define UE4SS_SDK_BP_FloatingScroll_Actor_HPP

class ABP_FloatingScroll_Actor_C : public AFloatingScrollActor_AS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UNiagaraComponent* P_Scroll_Dissolve;                                       // 0x0328 (size: 0x8)
    class UArrowComponent* ArrowGreen;                                                // 0x0330 (size: 0x8)
    class UArrowComponent* ArrowBlue;                                                 // 0x0338 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0340 (size: 0x8)
    class UArrowComponent* ArrowRed;                                                  // 0x0348 (size: 0x8)
    class USceneComponent* DesiredScrollTransform;                                    // 0x0350 (size: 0x8)
    float GoToHand_TL_LocationInterpolate_0C5FF75C40A0E5381F1C8A8F2F968962;           // 0x0358 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GoToHand_TL__Direction_0C5FF75C40A0E5381F1C8A8F2F968962; // 0x035C (size: 0x1)
    class UTimelineComponent* GoToHand_TL;                                            // 0x0360 (size: 0x8)
    float DissolveTimeline_NewTrack_0_EE46DBA649B1E35D03B33994115B71E5;               // 0x0368 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DissolveTimeline__Direction_EE46DBA649B1E35D03B33994115B71E5; // 0x036C (size: 0x1)
    class UTimelineComponent* DissolveTimeline;                                       // 0x0370 (size: 0x8)
    double DistanceToGetRecovered;                                                    // 0x0378 (size: 0x8)
    double DistanceToGoToHand;                                                        // 0x0380 (size: 0x8)
    double GoToHandTime;                                                              // 0x0388 (size: 0x8)
    double VerticalOffset;                                                            // 0x0390 (size: 0x8)
    bool GoingToHand;                                                                 // 0x0398 (size: 0x1)
    bool TryingToDestroy;                                                             // 0x0399 (size: 0x1)
    FVector InitialScrollLocation;                                                    // 0x03A0 (size: 0x18)
    double HorizontalOffset;                                                          // 0x03B8 (size: 0x8)
    double HorizontalSpeed;                                                           // 0x03C0 (size: 0x8)
    double BaseHorizontalDistance;                                                    // 0x03C8 (size: 0x8)
    double InitialVerticalOffset;                                                     // 0x03D0 (size: 0x8)
    bool AllowActorTick;                                                              // 0x03D8 (size: 0x1)
    class UCurveFloat* InitialMovement_Curve;                                         // 0x03E0 (size: 0x8)
    double AccumulatedDeltaTime;                                                      // 0x03E8 (size: 0x8)
    double InitTime;                                                                  // 0x03F0 (size: 0x8)
    double InitialMovementMaxHeight;                                                  // 0x03F8 (size: 0x8)
    FVector OriginalRunePosition;                                                     // 0x0400 (size: 0x18)
    double OffSetLerp;                                                                // 0x0418 (size: 0x8)
    bool Consumed;                                                                    // 0x0420 (size: 0x1)
    bool IsScrollOpened;                                                              // 0x0421 (size: 0x1)
    double TimeFromHandToDesiredPosition;                                             // 0x0428 (size: 0x8)
    FRotator ItemScrollRotationWhenAttachedToHand;                                    // 0x0430 (size: 0x18)
    FRotator InitialScrollMeshRelativeLocation;                                       // 0x0448 (size: 0x18)
    bool StartFloatingAround;                                                         // 0x0460 (size: 0x1)
    class UMaterialInstanceDynamic* Mid;                                              // 0x0468 (size: 0x8)
    class AActor* CubeToBeRemoved;                                                    // 0x0470 (size: 0x8)
    double ScrollRotationSpeed;                                                       // 0x0478 (size: 0x8)
    double ScrollRotationVerticalOffset;                                              // 0x0480 (size: 0x8)
    FVector ScrollLocationRelativeToTargetMesh;                                       // 0x0488 (size: 0x18)
    bool IsApproachingToTheStartRotationLocation ;                                    // 0x04A0 (size: 0x1)
    class UObject* CubeToRemove;                                                      // 0x04A8 (size: 0x8)
    bool WasCancelled;                                                                // 0x04B0 (size: 0x1)
    class UNiagaraComponent* P_Trail;                                                 // 0x04B8 (size: 0x8)
    class UNiagaraComponent* P_Magic;                                                 // 0x04C0 (size: 0x8)

    void GetScrollLocationBasedOnTarget(FVector& Location);
    void Update Accumulated Time(double A);
    void Set Floating Scroll Relative to Player();
    void CalculateSpiralPositionAtTime(double Time, double InitialAngle, double InitialRadius, FVector& NewPosition);
    void DrawRotator(FVector Location, FRotator Rotator, double Duration);
    void Set Scroll On Weapon Socket Location();
    void Calculate and Set Desired Scroll Position();
    void Set Scroll Particle System Color();
    void Spawn and Set Trail Particle System Color();
    void Get VFXParams(FLinearColor& m_MagicVFXColor, double& Magic VFXIntensity);
    void PlaceItemVisualInWorld();
    void GetForwardDisplacement(double& ForwardOffset);
    void MoveRuneToDesiredPos(double LerpValue);
    void MoveItemVisualToHandSocket(double Alpha);
    void RotateItemVisualTowardsHandRot(double Alpha);
    void GetHandRotation(FName InSocketName, FRotator& rot);
    bool Check Distance to Hand Is Closer(double DistanceToCheck);
    FVector Get Socket Location(FName InSocketName);
    void DissolveTimeline__FinishedFunc();
    void DissolveTimeline__UpdateFunc();
    void GoToHand_TL__FinishedFunc();
    void GoToHand_TL__UpdateFunc();
    void OnNotifyEnd_0C32462A442F98BF3DCB4ABB0E03306B(FName NotifyName);
    void OnNotifyBegin_0C32462A442F98BF3DCB4ABB0E03306B(FName NotifyName);
    void OnInterrupted_0C32462A442F98BF3DCB4ABB0E03306B(FName NotifyName);
    void OnBlendOut_0C32462A442F98BF3DCB4ABB0E03306B(FName NotifyName);
    void OnCompleted_0C32462A442F98BF3DCB4ABB0E03306B(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void ActivateEffect();
    void RestartEffect();
    void OpenScroll();
    void CreateDynamicMaterial();
    void OnStartRecoveringRune(float totalCastingTime);
    void GoToHand();
    void TryToFinnishEffect();
    void StopAllVisuals();
    void OnPreDestroyDebuffActor();
    void DestroyEffect();
    void ActivateOnLaunchSpellVisuals();
    void CloseScroll();
    void BP_CancelCastSpell();
    void ExecuteUbergraph_BP_FloatingScroll_Actor(int32 EntryPoint);
}; // Size: 0x4C8

#endif
