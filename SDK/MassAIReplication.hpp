#ifndef UE4SS_SDK_MassAIReplication_HPP
#define UE4SS_SDK_MassAIReplication_HPP

struct FReplicatedAgentPathData
{
    FZoneGraphShortPathRequest PathRequest;                                           // 0x0000 (size: 0x48)
    FZoneGraphLaneHandle LaneHandle;                                                  // 0x0048 (size: 0x8)
    double ActionServerStartTime;                                                     // 0x0050 (size: 0x8)
    float DistanceAlongLane;                                                          // 0x0058 (size: 0x4)
    float LaneLength;                                                                 // 0x005C (size: 0x4)
    FMassInt16Real DesiredSpeed;                                                      // 0x0060 (size: 0x2)
    uint16 ActionId;                                                                  // 0x0062 (size: 0x2)
    EMassMovementAction Action;                                                       // 0x0064 (size: 0x1)

}; // Size: 0x68

#endif
