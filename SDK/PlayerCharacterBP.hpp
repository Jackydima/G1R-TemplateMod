#ifndef UE4SS_SDK_PlayerCharacterBP_HPP
#define UE4SS_SDK_PlayerCharacterBP_HPP

class APlayerCharacterBP_C : public AGothicPlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09D0 (size: 0x8)
    class UHitCapsuleCollisionComponent* HitBoxCollision_HandL;                       // 0x09D8 (size: 0x8)
    class UHitCapsuleCollisionComponent* HitBoxCollision_HandR;                       // 0x09E0 (size: 0x8)
    class UGothicRiderComponent* Rider Component;                                     // 0x09E8 (size: 0x8)
    class UBP_GothicFluxDataComponent_C* BP_GothicFluxDataComponent;                  // 0x09F0 (size: 0x8)
    class UBP_FluxSwimmingComponent_C* BP_FluxSwimmingComponent;                      // 0x09F8 (size: 0x8)
    class UBP_FluxModifierForceComponent_C* BP_FluxModifierForceComponent;            // 0x0A00 (size: 0x8)
    class UBP_FluxInteractionComponent_C* BP_FluxInteractionComponent;                // 0x0A08 (size: 0x8)
    class UBP_FluxBuoyancyComponent_C* BP_FluxBuoyancyComponent;                      // 0x0A10 (size: 0x8)
    class UTest_Magnet_Comp_C* Test_Magnet_Comp;                                      // 0x0A18 (size: 0x8)
    class UBP_UltraVolumetricsThirdPerson_C* BP_UltraVolumetricsThirdPerson;          // 0x0A20 (size: 0x8)
    class UDistanceMatching* DistanceMatching;                                        // 0x0A28 (size: 0x8)
    class UGothicTrajectoryGenerator_MotionSimphony* GothicTrajectoryGenerator;       // 0x0A30 (size: 0x8)
    class UGothicTrajectoryErrorWarping_MotionSimphony* GothicTrajectoryErrorWarping; // 0x0A38 (size: 0x8)
    class UInteractSensor* InteractSensor;                                            // 0x0A40 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Chest;                                 // 0x0A48 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Head;                                  // 0x0A50 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Pelvis;                                // 0x0A58 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* foot_l;                                // 0x0A60 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* foot_r;                                // 0x0A68 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootL;                           // 0x0A70 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootR;                           // 0x0A78 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_LowerBody;                     // 0x0A80 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_Head;                          // 0x0A88 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_UpperBody;                     // 0x0A90 (size: 0x8)
    double CamSpeed_Pitch;                                                            // 0x0A98 (size: 0x8)
    double CamSpeed_Yaw;                                                              // 0x0AA0 (size: 0x8)
    TArray<FString> FogVariables;                                                     // 0x0AA8 (size: 0x10)
    int32 Index;                                                                      // 0x0AB8 (size: 0x4)
    TMap<FString, double> DebugHeights;                                               // 0x0AC0 (size: 0x50)
    TArray<FS_ArtPlayerDebug> Debugs;                                                 // 0x0B10 (size: 0x10)
    bool IsRagdoll;                                                                   // 0x0B20 (size: 0x1)
    FTransform MeshTransform;                                                         // 0x0B30 (size: 0x60)
    bool IsDriver;                                                                    // 0x0B90 (size: 0x1)
    class UBP_FluxSwimmingComponent_C* BP_FluxSwimming;                               // 0x0B98 (size: 0x8)

    void AddModifiers(const TArray<class UBP_FluxModifierComponent_C*>& Modifiers, bool& Remove);
    void IgnoreModifierOverlap(class UActorComponent* Copmponent, bool& Ignore);
    void GetInteractions(double Ratio, int32 Iteration, TArray<FBS_FluxInteractionData>& Interactions);
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ExecuteUbergraph_PlayerCharacterBP(int32 EntryPoint);
}; // Size: 0xBA0

#endif
