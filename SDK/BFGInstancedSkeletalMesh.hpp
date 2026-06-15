#ifndef UE4SS_SDK_BFGInstancedSkeletalMesh_HPP
#define UE4SS_SDK_BFGInstancedSkeletalMesh_HPP

#include "BFGInstancedSkeletalMesh_enums.hpp"

struct FBFGInstancedSkeletalAnimationDefinition
{
    class UAnimSequence* m_pSequence;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x28

struct FBFGInstancedSkeletalMeshAnimationHandle
{
    class UAnimSequence* m_Animation;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FBFGInstancedSkeletalMeshDamageProxyTag : public FMassTag
{
}; // Size: 0x1

struct FBFGInstancedSkeletalMeshData_Common
{
    TArray<class UBFGInstancedSkeletalMeshComponent*> m_Components;                   // 0x0030 (size: 0x10)
    TArray<class UBFGInstancedSkeletalMeshComponent*> m_ComponentPendingRemoval;      // 0x0040 (size: 0x10)
    TArray<FBFGInstancedSkeletalAnimationDefinition> m_AnimDefinitions;               // 0x0070 (size: 0x10)

}; // Size: 0xA0

struct FBFGInstancedSkeletalMeshData_GT : public FBFGInstancedSkeletalMeshData_Common
{
    TArray<class AActor*> m_ExclusionVolumeActors;                                    // 0x00A0 (size: 0x10)
    TMap<class FName, class UBFGInstancedSkeletalMeshComponent*> m_MeshToComponent;   // 0x00D0 (size: 0x50)
    TArray<class UObject*> m_DamageUserData;                                          // 0x0120 (size: 0x10)
    TMap<class UAnimSequence*, class FBFGInstancedSkeletalMeshAnimationHandle> m_AnimTable; // 0x0130 (size: 0x50)

}; // Size: 0x1D0

struct FBFGInstancedSkeletalMeshData_RT : public FBFGInstancedSkeletalMeshData_Common
{
}; // Size: 0xF0

struct FBFGInstancedSkeletalMeshInstanceHandle
{
}; // Size: 0x4

struct FBFGInstancedSkeletalMeshTag : public FMassTag
{
}; // Size: 0x1

struct FBFGMassInstancedSkeletalMeshFragment : public FMassFragment
{
    FBFGInstancedSkeletalMeshAnimationHandle m_ActiveAnimation;                       // 0x0000 (size: 0x18)
    FBFGCharacterDefinitionReference m_Visuals;                                       // 0x0018 (size: 0x10)

}; // Size: 0x90

class ABFGInstancedSkeletalMeshManager : public AActor
{
    FBodyInstance m_DefaultBodyInstance;                                              // 0x02B8 (size: 0x198)
    FBFGInstancedSkeletalMeshData_GT m_Data;                                          // 0x0460 (size: 0x1D0)

}; // Size: 0x630

class IBFGInstancedSkeletalMeshAttachmentEvent : public IInterface
{
}; // Size: 0x28

class IBFGInstancedSkeletalMeshInstanceInterface : public IInterface
{

    void UpdateInstanceTransform(FBFGInstancedSkeletalMeshInstanceHandle _ActorHandle, const FTransform& _Transform);
    void UpdateInstanceDamageProxyState(FBFGInstancedSkeletalMeshInstanceHandle _ActorHandle, bool _Enabled);
    void UpdateInstanceAnimation(FBFGInstancedSkeletalMeshInstanceHandle _ActorHandle, FBFGInstancedSkeletalMeshAnimationHandle _AnimState, bool _ForceTimeUpdate, float _InitialTime);
    void SetInstanceVisibility(FBFGInstancedSkeletalMeshInstanceHandle _ActorHandle, bool _Hidden);
    void Reset();
    void RemoveInstance(FBFGInstancedSkeletalMeshInstanceHandle _ActorHandle);
    void RemoveExclusionVolume(class AActor* _Actor);
    bool GetInstanceTransform(FBFGInstancedSkeletalMeshInstanceHandle _ActorHandle, FTransform& _OutTransform);
    FBFGInstancedSkeletalMeshInstanceHandle AddInstance(const FBFGCharacterDefinitionReference& _Visuals, const FTransform& _Transform, FBFGInstancedSkeletalMeshAnimationHandle _InitialAnimState, bool _CreateDamageProxy);
    void AddExclusionVolume(class AActor* _Actor);
}; // Size: 0x28

class IBFGInstancedSkeletalMeshResourceInterface : public IInterface
{

    FBFGInstancedSkeletalMeshAnimationHandle RegisterAnimation(class UAnimSequence* _pSeq, bool _ForceToEndPose, bool _OnDemand);
}; // Size: 0x28

class UBFGInstancedSkeletalMeshComponent : public UBoxComponent
{
    TArray<class USkeletalMesh*> m_SkeletalMesh;                                      // 0x0568 (size: 0x10)
    TArray<class UStaticMesh*> m_StaticMeshes;                                        // 0x0578 (size: 0x10)
    class USkeleton* m_SourceSkeleton;                                                // 0x0588 (size: 0x8)
    FBodyInstance m_DefaultBodyInstance;                                              // 0x05B0 (size: 0x198)
    TSet<UMaterialInterface*> m_MaterialsInUse_GameThread;                            // 0x0760 (size: 0x50)

}; // Size: 0x840

class UBFGInstancedSkeletalMeshDamageProxyConstructor : public UMassObserverProcessor
{
}; // Size: 0x380

class UBFGInstancedSkeletalMeshDamageProxyDestructor : public UMassObserverProcessor
{
}; // Size: 0x380

class UBFGInstancedSkeletalMeshFragmentConstructor : public UMassObserverProcessor
{
}; // Size: 0x380

class UBFGInstancedSkeletalMeshFragmentDestructor : public UMassObserverProcessor
{
}; // Size: 0x380

class UBFGInstancedSkeletalMeshProcessor : public UMassProcessor
{
}; // Size: 0xC0

class UBFGInstancedSkeletalMeshSettings : public UDeveloperSettings
{
    FBodyInstance m_DefaultBodyInstance;                                              // 0x0038 (size: 0x198)

}; // Size: 0x1D0

class UBFGInstancedSkeletalMeshSubsystem : public UWorldSubsystem
{
    class ABFGInstancedSkeletalMeshManager* m_Actor;                                  // 0x0030 (size: 0x8)

    TScriptInterface<class IBFGInstancedSkeletalMeshResourceInterface> GetInstancedSkeletalMeshResourceInterface(class UObject* _WorldContext);
    TScriptInterface<class IBFGInstancedSkeletalMeshInstanceInterface> GetInstancedSkeletalMeshInstanceInterface(class UObject* _WorldContext);
}; // Size: 0x38

class UBFGMassInstancedSkeletalMeshVisualizationTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UBFGMassToInstancedSkeletalMeshTranslator : public UMassTranslator
{
}; // Size: 0x380

#endif
