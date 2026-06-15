#ifndef UE4SS_SDK_IBP_GrindingOven_HPP
#define UE4SS_SDK_IBP_GrindingOven_HPP

class AIBP_GrindingOven_C : public AInteractiveObjectActor
{
    class UBoxNavObstacleComponent* BoxNavObstacle1;                                  // 0x0928 (size: 0x8)
    class UBoxNavObstacleComponent* BoxNavObstacle;                                   // 0x0930 (size: 0x8)
    class UBoxComponent* BoxCollision_Lever;                                          // 0x0938 (size: 0x8)
    class UStaticMeshComponent* SM_GrindingOvenDoor;                                  // 0x0940 (size: 0x8)

    void ChangeDirection(bool MoveForward);
    void StopMovement();
    void StartMovement();
}; // Size: 0x948

#endif
