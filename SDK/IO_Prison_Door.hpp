#ifndef UE4SS_SDK_IO_Prison_Door_HPP
#define UE4SS_SDK_IO_Prison_Door_HPP

class AIO_Prison_Door_C : public AInteractiveObjectActor
{
    class UGothicFXComponent* GothicFX;                                               // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0930 (size: 0x8)
    class UGothicSmartLinkDoor* GothicSmartLinkDoor;                                  // 0x0938 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor1;                   // 0x0940 (size: 0x8)
    class UInteractiveObjectAnchorComponent* Arrow1;                                  // 0x0948 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0950 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x0958 (size: 0x8)

}; // Size: 0x960

#endif
