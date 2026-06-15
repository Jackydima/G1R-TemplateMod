#ifndef UE4SS_SDK_ST_generic_Door_MissingWinch_HPP
#define UE4SS_SDK_ST_generic_Door_MissingWinch_HPP

class AST_generic_Door_MissingWinch_C : public AInteractiveObjectActor
{
    class UStaticMeshComponent* ShadowBox;                                            // 0x0928 (size: 0x8)
    class UBoxNavShapeComponent* BoxNavShape;                                         // 0x0930 (size: 0x8)
    class ULinkAnchorComponent* LinkAnchor1;                                          // 0x0938 (size: 0x8)
    class ULinkAnchorComponent* LinkAnchor;                                           // 0x0940 (size: 0x8)
    class UGothicSmartLinkComponentGeneric* GothicSmartLinkGeneric_Waynet;            // 0x0948 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0950 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0958 (size: 0x8)
    class UDoorInteractiveComponent* DoorInteractive;                                 // 0x0960 (size: 0x8)

}; // Size: 0x968

#endif
