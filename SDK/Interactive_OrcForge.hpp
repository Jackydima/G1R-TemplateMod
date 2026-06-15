#ifndef UE4SS_SDK_Interactive_OrcForge_HPP
#define UE4SS_SDK_Interactive_OrcForge_HPP

class AInteractive_OrcForge_C : public AInteractiveObjectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UGothicFXComponent* GothicFX;                                               // 0x0930 (size: 0x8)
    class UStaticMeshComponent* SM_SwordRaw4;                                         // 0x0938 (size: 0x8)
    class UStaticMeshComponent* SM_SwordRaw3;                                         // 0x0940 (size: 0x8)
    class UStaticMeshComponent* SM_SwordRaw2;                                         // 0x0948 (size: 0x8)
    class UStaticMeshComponent* SM_SwordRaw1;                                         // 0x0950 (size: 0x8)
    class UStaticMeshComponent* SM_Swordblade5;                                       // 0x0958 (size: 0x8)
    class UStaticMeshComponent* SM_Swordblade4;                                       // 0x0960 (size: 0x8)
    class UStaticMeshComponent* SM_Swordblade3;                                       // 0x0968 (size: 0x8)
    class UStaticMeshComponent* SM_Swordblade2;                                       // 0x0970 (size: 0x8)
    class UStaticMeshComponent* SM_Swordblade;                                        // 0x0978 (size: 0x8)
    class UStaticMeshComponent* SM_SwordRaw;                                          // 0x0980 (size: 0x8)
    class UNiagaraComponent* P_Fires_embers_Forges;                                   // 0x0988 (size: 0x8)
    class UStaticMeshComponent* SM_Sword;                                             // 0x0990 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x0998 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x09A8 (size: 0x8)
    class UStaticMeshComponent* Cube8;                                                // 0x09B0 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x09B8 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x09C0 (size: 0x8)
    class UStaticMeshComponent* Cube7;                                                // 0x09C8 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x09D0 (size: 0x8)
    class UStaticMeshComponent* Cube6;                                                // 0x09D8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* Cube9;                                                // 0x09F0 (size: 0x8)
    class UBoxNavObstacleComponent* BoxNavObstacle;                                   // 0x09F8 (size: 0x8)
    FGothicFXInstanceHandle SFXFireLoopHandle;                                        // 0x0A00 (size: 0x8)

    void ReceiveBeginPlay();
    void PlayFireLoopSFX();
    void ExecuteUbergraph_Interactive_OrcForge(int32 EntryPoint);
}; // Size: 0xA08

#endif
