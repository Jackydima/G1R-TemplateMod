#ifndef UE4SS_SDK_BP_BarrierCloseDistanceManager_HPP
#define UE4SS_SDK_BP_BarrierCloseDistanceManager_HPP

class ABP_BarrierCloseDistanceManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    double FadingBarrierDistance;                                                     // 0x02A0 (size: 0x8)
    class AActor* BarrierReference;                                                   // 0x02A8 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x02B0 (size: 0x8)
    TArray<class UStaticMesh*> BarrierMeshes;                                         // 0x02B8 (size: 0x10)
    TArray<class UStaticMeshComponent*> MeshComponents;                               // 0x02C8 (size: 0x10)
    TArray<FS_BarrierCloseDistancePiece> PiecesData;                                  // 0x02D8 (size: 0x10)
    bool AllowUpdate;                                                                 // 0x02E8 (size: 0x1)
    bool IsActive;                                                                    // 0x02E9 (size: 0x1)
    TMap<class UStaticMesh*, class bool> DisabledMeshes;                              // 0x02F0 (size: 0x50)
    int32 CurrentIndex;                                                               // 0x0340 (size: 0x4)
    int32 MaxUpdatesPerFrame;                                                         // 0x0344 (size: 0x4)

    void Update Piece at Index(int32 Index);
    void InitializePieces();
    void Set Active Internal(bool IsActive, bool ForceUpdate);
    void Debug Distances(FS_BarrierCloseDistancePiece Piece Data, FVector Camera Position, double Delta Time, int32 Index);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetActive(bool IsActive);
    void ExecuteUbergraph_BP_BarrierCloseDistanceManager(int32 EntryPoint);
}; // Size: 0x348

#endif
