#ifndef UE4SS_SDK_First_Zone_Door_HPP
#define UE4SS_SDK_First_Zone_Door_HPP

class AFirst_Zone_Door_C : public AInteractiveObjectActor
{
    class UBoxNavShapeComponent* BoxNavShape;                                         // 0x0928 (size: 0x8)
    class ULinkAnchorComponent* LinkAnchor1;                                          // 0x0930 (size: 0x8)
    class ULinkAnchorComponent* LinkAnchor;                                           // 0x0938 (size: 0x8)
    class UGothicSmartLinkComponentGeneric* GothicSmartLinkGeneric_Waynet;            // 0x0940 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0950 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x0958 (size: 0x8)

}; // Size: 0x960

#endif
