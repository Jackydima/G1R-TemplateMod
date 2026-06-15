#ifndef UE4SS_SDK_Cryptex_Info_HPP
#define UE4SS_SDK_Cryptex_Info_HPP

class ACryptex_Info_C : public AInteractiveObjectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Column011;                                            // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Root02;                                               // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Root01;                                               // 0x0940 (size: 0x8)
    class UStaticMeshComponent* Root03;                                               // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Column07;                                             // 0x0950 (size: 0x8)
    class UStaticMeshComponent* Column06;                                             // 0x0958 (size: 0x8)
    class UStaticMeshComponent* Column05;                                             // 0x0960 (size: 0x8)
    class UStaticMeshComponent* Column04;                                             // 0x0968 (size: 0x8)
    class UStaticMeshComponent* Column03;                                             // 0x0970 (size: 0x8)
    class UStaticMeshComponent* Column02;                                             // 0x0978 (size: 0x8)
    class UStaticMeshComponent* Column01;                                             // 0x0980 (size: 0x8)
    class UGothicSmartLinkDoor* GothicSmartLinkDoor;                                  // 0x0988 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor1;                   // 0x0990 (size: 0x8)
    class UInteractiveObjectAnchorComponent* Arrow1;                                  // 0x0998 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* Column;                                               // 0x09A8 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x09B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Cryptex_Info(int32 EntryPoint);
}; // Size: 0x9B8

#endif
