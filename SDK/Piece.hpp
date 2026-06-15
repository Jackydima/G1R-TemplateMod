#ifndef UE4SS_SDK_Piece_HPP
#define UE4SS_SDK_Piece_HPP

class APiece_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    int32 ID;                                                                         // 0x02A8 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Piece(int32 EntryPoint);
}; // Size: 0x2AC

#endif
