#ifndef UE4SS_SDK_VarragKasorgPuzzle_Platform_03_HPP
#define UE4SS_SDK_VarragKasorgPuzzle_Platform_03_HPP

class AVarragKasorgPuzzle_Platform_03_C : public AInteractiveObjectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UBoxNavShapeComponent* BoxNavShape;                                         // 0x0930 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor1;                   // 0x0938 (size: 0x8)
    class UInteractiveObjectAnchorComponent* Arrow1;                                  // 0x0940 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0950 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x0958 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_VarragKasorgPuzzle_Platform_03(int32 EntryPoint);
}; // Size: 0x960

#endif
