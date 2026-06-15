#ifndef UE4SS_SDK_FenceDoor_HPP
#define UE4SS_SDK_FenceDoor_HPP

class AFenceDoor_C : public AInteractiveObjectActor
{
    class UGothicSmartLinkDoor* GothicSmartLinkDoor_OnlyWalkWhenOpened;               // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0938 (size: 0x8)
    class UGothicSmartLinkDoor* GothicSmartLinkDoor;                                  // 0x0940 (size: 0x8)
    class UBoxNavShapeComponent* BoxNavShape;                                         // 0x0948 (size: 0x8)
    class UWaynetRelevantComponent* WaynetRelevant;                                   // 0x0950 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0958 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x0960 (size: 0x8)

}; // Size: 0x968

#endif
