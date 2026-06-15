#ifndef UE4SS_SDK_Test_Magnet_Comp_HPP
#define UE4SS_SDK_Test_Magnet_Comp_HPP

class UTest_Magnet_Comp_C : public UTestMagnetComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AGothicCharacter* OwnerChar;                                                // 0x00B0 (size: 0x8)
    TArray<FTestMagnetAttackInfo> Attacks_Info;                                       // 0x00B8 (size: 0x10)
    class AGothicCharacter* MagnetTarget_Char;                                        // 0x00C8 (size: 0x8)
    FTestMagnetAttackInfo AttackInfo;                                                 // 0x00D0 (size: 0x40)
    bool FoundAttackInfo;                                                             // 0x0110 (size: 0x1)
    double WeaponRange;                                                               // 0x0118 (size: 0x8)
    double ReorientRate;                                                              // 0x0120 (size: 0x8)
    FVector AttackStartLocation;                                                      // 0x0128 (size: 0x18)
    class UHurtBoxCollisionComponent* Magnet Target Hurt;                             // 0x0140 (size: 0x8)
    double MagnetSearchAngle;                                                         // 0x0148 (size: 0x8)
    double MaxHelpDistance_Generic;                                                   // 0x0150 (size: 0x8)
    class AMeleeWeaponVisual* MeleeWeaponVisual;                                      // 0x0158 (size: 0x8)
    class UHitBoxCollisionComponent* MeleeWeaponHitBox;                               // 0x0160 (size: 0x8)
    bool UseFakeDamage;                                                               // 0x0168 (size: 0x1)
    FVector BoxSize;                                                                  // 0x0170 (size: 0x18)
    class AActor* FakeDmg_HitActor;                                                   // 0x0188 (size: 0x8)
    bool ActivateMagnetComp;                                                          // 0x0190 (size: 0x1)
    bool Debug_UsePrints;                                                             // 0x0191 (size: 0x1)
    float RMMultiplier;                                                               // 0x0194 (size: 0x4)
    bool Debug_AttackHit;                                                             // 0x0198 (size: 0x1)
    float Debug_InitialDist;                                                          // 0x019C (size: 0x4)
    FString DebugString;                                                              // 0x01A0 (size: 0x10)
    float Debug_InitialEnemyHP;                                                       // 0x01B0 (size: 0x4)
    bool Debug_UsedMagnet;                                                            // 0x01B4 (size: 0x1)
    double EndDistance_Generic;                                                       // 0x01B8 (size: 0x8)
    double CurrentDistanceToCheck;                                                    // 0x01C0 (size: 0x8)
    FString Debug_MagnetNotes;                                                        // 0x01C8 (size: 0x10)
    bool UseMagnetRMOnTick;                                                           // 0x01D8 (size: 0x1)
    double DistanceToCheckOnUpdate;                                                   // 0x01E0 (size: 0x8)
    bool UseHelpRM;                                                                   // 0x01E8 (size: 0x1)
    bool OwnerIsPlayer;                                                               // 0x01E9 (size: 0x1)
    bool Debug_UseLog_AI;                                                             // 0x01EA (size: 0x1)
    TArray<FTestMagnetAttackInfo> Attacks_S1H;                                        // 0x01F0 (size: 0x10)
    TArray<FTestMagnetAttackInfo> Attacks_Wolf;                                       // 0x0200 (size: 0x10)
    FString WeaponLibrary;                                                            // 0x0210 (size: 0x10)
    TArray<FString> HitBoxesLibrary;                                                  // 0x0220 (size: 0x10)
    FString AttackHitBox;                                                             // 0x0230 (size: 0x10)
    TMap<FString, double> WeaponRange_Library;                                        // 0x0240 (size: 0x50)
    TArray<FTestMagnetAttackInfo> Attacks_ShadowB;                                    // 0x0290 (size: 0x10)
    bool UseReorientOnly;                                                             // 0x02A0 (size: 0x1)
    TArray<FTestMagnetAttackInfo> Attacks_Lizard;                                     // 0x02A8 (size: 0x10)
    bool isBackAttack;                                                                // 0x02B8 (size: 0x1)
    FString AttackID;                                                                 // 0x02C0 (size: 0x10)
    TArray<FTestMagnetAttackInfo> Attacks_Skeleton;                                   // 0x02D0 (size: 0x10)
    TArray<FTestMagnetAttackInfo> Attacks_OrcDog;                                     // 0x02E0 (size: 0x10)
    TArray<FTestMagnetAttackInfo> Attacks_ScavMed;                                    // 0x02F0 (size: 0x10)

    void UpdateTickReorient(bool& Update);
    void SetCurrentWeaponRange(FString HitBox, bool& Dummy);
    void GetWeaponInfo(bool& WeaponFound);
    void PrintMessage_Debug_Log_AI(FString Message);
    bool WillAttackSucceed(FString AttackID);
    double GetRangeOfAttack(FString AttackID);
    void CanUpdateRM(bool& UpdateRM);
    void GetAttackRMUpdated(double& RM);
    void SetWeaponRange();
    FString Debug_AttackHitted();
    double CalculateMagnetMultiplier_UpdatedRM();
    double CalculateMagnetMultiplier();
    void GetAttackMaxTotalRange_NoHelp_UpdatedRM(double& Result);
    void GetNeareastHurtBox(TArray<class UActorComponent*>& Array, class UHurtBoxCollisionComponent*& MagnetTarget_Hurt, double& Distance);
    void GetHitTracesInAngle(TArray<FHitResult>& Array, FVector RelatedToVector, double ValidAngle, TArray<FHitResult>& ValidResults);
    void GetNeareastHitTrace(TArray<FHitResult>& Array, class AGothicCharacter*& MagnetTarget_Character, class UHurtBoxCollisionComponent*& MagnetTarget_Hurt, double& Distance);
    void GetAttackMaxTotalRange_UpdatedRM(double& Result);
    void GetAttackMaxTotalRange(double& Result);
    void GetAttackMaxTotalRange_NoHelp(double& Result);
    void Reorient_CalculateYaw(double CurrentYaw, double TargetYaw, double& Result);
    void PrintMessage_Debug_Log(FString Message);
    void PrintMessage_Debug(FString Message);
    void PrintMessage(FString Message);
    void StartMagnet(FString AttackID, FString HitBox);
    void SearchInitialMagnetTarget();
    void ResetRootmotion();
    void ReceiveTick(float DeltaSeconds);
    void Reorient();
    void StartTestMagnetComp(FString Weapon, const TArray<FString>& HitBoxes);
    void Debug_EndMagnet_Log();
    void Debug_EndMagnet_SimplePrint();
    void ManageRMMultiplier();
    void SearchMagnetTargetOnTick();
    void ReorientOnly(FString AttackID, FString HitBox, bool BackAttack);
    void Reorient_Back();
    void ExecuteUbergraph_Test_Magnet_Comp(int32 EntryPoint);
}; // Size: 0x300

#endif
