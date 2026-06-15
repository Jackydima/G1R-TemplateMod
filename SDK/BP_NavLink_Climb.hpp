#ifndef UE4SS_SDK_BP_NavLink_Climb_HPP
#define UE4SS_SDK_BP_NavLink_Climb_HPP

class ABP_NavLink_Climb_C : public AActor
{
    class UArrowComponent* JumpDownTargetLocation;                                    // 0x0290 (size: 0x8)
    class UGothicSmartLinkComponentFly* NavLink_Fly;                                  // 0x0298 (size: 0x8)
    class UGothicSmartLinkComponentJump* NavLink_Jump_CreaturesOnly;                  // 0x02A0 (size: 0x8)
    class ULinkAnchorComponent* LinkAnchor_Climb_End;                                 // 0x02A8 (size: 0x8)
    class ULinkAnchorComponent* LinkAnchor_Climb_Start;                               // 0x02B0 (size: 0x8)
    class UGothicSmartLinkComponentClimb* NavLink_Climb;                              // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

#endif
