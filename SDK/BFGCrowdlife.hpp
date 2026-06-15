#ifndef UE4SS_SDK_BFGCrowdlife_HPP
#define UE4SS_SDK_BFGCrowdlife_HPP

struct FBFGCrowdlifeEntry
{
}; // Size: 0x10

struct FBFGRunningSushiEntry
{
    FFloatInterval m_InitialRatioInterval;                                            // 0x0000 (size: 0x8)
    float m_TimeVariance;                                                             // 0x0008 (size: 0x4)
    float m_Weight;                                                                   // 0x000C (size: 0x4)
    bool m_Reversed;                                                                  // 0x0010 (size: 0x1)
    float m_MovementSpeed;                                                            // 0x0014 (size: 0x4)
    bool m_AlwaysUpright;                                                             // 0x0018 (size: 0x1)
    FTransform m_RelativeTransform;                                                   // 0x0020 (size: 0x60)
    FVector m_RandomStartOffset;                                                      // 0x0080 (size: 0x18)
    FBFGCharacterDefinitionReference m_Visuals;                                       // 0x0098 (size: 0x10)
    TArray<class UAnimSequence*> m_Anim;                                              // 0x00A8 (size: 0x10)
    TArray<class UAnimSequence*> m_AnimFinish;                                        // 0x00B8 (size: 0x10)
    FTransform m_SplineOffset;                                                        // 0x00D0 (size: 0x60)
    BFGInstancedSkeletalMeshInterpolationAction_OnFinish m_FinishAction;              // 0x0130 (size: 0x1)

}; // Size: 0x140

struct FBFGRunningSushiEntryCollection
{
    TArray<FBFGRunningSushiEntry_Runtime> m_Entries;                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FBFGRunningSushiEntry_ActiveTag : public FMassTag
{
}; // Size: 0x1

struct FBFGRunningSushiEntry_Runtime : public FMassFragment
{
}; // Size: 0x90

struct FBFGRunningSushiEntry_Shared : public FMassSharedFragment
{
    class USplineComponent* m_SplineComponent;                                        // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBFGSimpleCrowdSpawnerEntry
{
    FBFGCharacterDefinitionReference m_Visuals;                                       // 0x0000 (size: 0x10)
    class UAnimSequence* m_pAnim;                                                     // 0x0010 (size: 0x8)
    FTransform m_Transform;                                                           // 0x0020 (size: 0x60)
    bool m_bCreateDamageProxy;                                                        // 0x0080 (size: 0x1)
    bool m_IsRelativeTransform;                                                       // 0x0081 (size: 0x1)
    FTransform m_RelativeTransform;                                                   // 0x0090 (size: 0x60)

}; // Size: 0x100

struct FBFGSimpleCrowdSpawnerEntryCollection
{
    TArray<FBFGSimpleCrowdSpawnerEntry> m_Entries;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FBFGSimpleCrowdTransferCollection
{
    TArray<FMassEntityHandle> m_Entries;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

class ABFGRunningSushiSpawner : public AActor
{
    bool m_SpawnOnBeginPlay;                                                          // 0x0290 (size: 0x1)
    int32 m_TotalAmountToSpawn;                                                       // 0x0294 (size: 0x4)
    TArray<FBFGRunningSushiEntry> m_Entries;                                          // 0x0298 (size: 0x10)
    class USplineComponent* m_SplineComponent;                                        // 0x02A8 (size: 0x8)
    class UBFGCrowdlifeSplineFollowerTrait* m_CachedTrait;                            // 0x02F0 (size: 0x8)

    void EnsureSpawned();
    void EnsureDepawned();
}; // Size: 0x330

class ABFGSimpleCrowdProxyCharacter : public AActor
{
}; // Size: 0x298

class ABFGSimpleCrowdSpawner : public AActor
{
    bool m_AlreadySpawned;                                                            // 0x0290 (size: 0x1)
    bool m_SpawnOnBeginPlay;                                                          // 0x0291 (size: 0x1)
    TArray<FBFGSimpleCrowdSpawnerEntry> m_Entries;                                    // 0x0298 (size: 0x10)

    void SetIndexTransform(int32 _InstanceIdx, const FTransform& _Transform);
    void SetAnimation(int32 _InstanceIdx, class UAnimSequence* _Animation, bool _IsUnique);
    TArray<FBFGInstancedSkeletalMeshInstanceHandle> GetInstanceHandles();
    void DoSpawning();
    void DoDespawning();
}; // Size: 0x2A8

class UBFGCrowdProxyRootCapsule : public UCapsuleComponent
{
}; // Size: 0x550

class UBFGCrowdlifeManager : public UWorldSubsystem
{
    class UBFGCrowdlifeSimpleProxyTrait* m_CachedTrait;                               // 0x0030 (size: 0x8)
    TArray<FBFGCrowdlifeEntry> m_Entries;                                             // 0x0078 (size: 0x10)

}; // Size: 0x88

class UBFGCrowdlifeSimpleProxyTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UBFGCrowdlifeSpawnerProcessor : public UMassProcessor
{
}; // Size: 0x360

class UBFGCrowdlifeSplineFollowerTrait : public UMassEntityTraitBase
{
    FBFGRunningSushiEntry_Shared m_SharedFragment;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class UBFGCrowdlifeTransferProcessor : public UMassProcessor
{
}; // Size: 0x360

class UBFGSplineMoverProcessor : public UMassProcessor
{
}; // Size: 0x360

class UBFGSplineMoverSpawnerProcessor : public UMassProcessor
{
}; // Size: 0x360

#endif
