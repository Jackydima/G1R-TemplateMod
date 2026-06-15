#ifndef UE4SS_SDK_Interactive_Chair_Box_HPP
#define UE4SS_SDK_Interactive_Chair_Box_HPP

class AInteractive_Chair_Box_C : public AInteractiveObjectActor
{
    class UInteractiveObjectAnchorComponent* EntryBack;                               // 0x0928 (size: 0x8)
    class UInteractiveObjectAnchorComponent* EntryLeft;                               // 0x0930 (size: 0x8)
    class UInteractiveObjectAnchorComponent* EntryRight;                              // 0x0938 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0940 (size: 0x8)
    class UBoxNavObstacleComponent* BoxNavObstacle;                                   // 0x0948 (size: 0x8)
    class UInteractiveObjectAnchorComponent* EntryFront;                              // 0x0950 (size: 0x8)

}; // Size: 0x958

#endif
