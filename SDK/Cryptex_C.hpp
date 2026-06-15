#ifndef UE4SS_SDK_Cryptex_C_HPP
#define UE4SS_SDK_Cryptex_C_HPP

class ACryptex_C_C : public AInteractiveObjectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UGothicSmartLinkDoor* GothicSmartLinkDoor;                                  // 0x0930 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor1;                   // 0x0938 (size: 0x8)
    class UInteractiveObjectAnchorComponent* Arrow1;                                  // 0x0940 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0950 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x0958 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Cryptex_C(int32 EntryPoint);
}; // Size: 0x960

#endif
