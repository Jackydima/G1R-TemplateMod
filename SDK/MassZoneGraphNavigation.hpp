#ifndef UE4SS_SDK_MassZoneGraphNavigation_HPP
#define UE4SS_SDK_MassZoneGraphNavigation_HPP

struct FMassLaneCacheBoundaryFragment : public FMassFragment
{
}; // Size: 0x20

struct FMassZoneGraphCachedLaneFragment : public FMassFragment
{
}; // Size: 0xA8

struct FMassZoneGraphLaneLocationFragment : public FMassFragment
{
}; // Size: 0x10

struct FMassZoneGraphNavigationParameters : public FMassSharedFragment
{
    FZoneGraphTagFilter LaneFilter;                                                   // 0x0000 (size: 0xC)
    float QueryRadius;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMassZoneGraphPathPoint
{
}; // Size: 0x20

struct FMassZoneGraphPathRequestFragment : public FMassFragment
{
    FZoneGraphShortPathRequest PathRequest;                                           // 0x0000 (size: 0x48)

}; // Size: 0x48

struct FMassZoneGraphShortPathFragment : public FMassFragment
{
}; // Size: 0x78

struct FZoneGraphShortPathRequest
{
    FVector StartPosition;                                                            // 0x0000 (size: 0x18)
    FVector EndOfPathPosition;                                                        // 0x0018 (size: 0x18)
    FZoneGraphLaneHandle NextLaneHandle;                                              // 0x0030 (size: 0x8)
    float TargetDistance;                                                             // 0x0038 (size: 0x4)
    FMassSnorm8Vector EndOfPathDirection;                                             // 0x003C (size: 0x3)
    FMassInt16Real AnticipationDistance;                                              // 0x0040 (size: 0x2)
    FMassInt16Real EndOfPathOffset;                                                   // 0x0042 (size: 0x2)
    EMassMovementAction EndOfPathIntent;                                              // 0x0044 (size: 0x1)
    EZoneLaneLinkType NextExitLinkType;                                               // 0x0045 (size: 0x1)
    uint8 bMoveReverse;                                                               // 0x0046 (size: 0x1)
    uint8 bIsEndOfPathPositionSet;                                                    // 0x0046 (size: 0x1)
    uint8 bIsEndOfPathDirectionSet;                                                   // 0x0046 (size: 0x1)

}; // Size: 0x48

class UMassZoneGraphLaneCacheBoundaryProcessor : public UMassProcessor
{
}; // Size: 0x370

class UMassZoneGraphLocationInitializer : public UMassObserverProcessor
{
}; // Size: 0x380

class UMassZoneGraphNavigationTrait : public UMassEntityTraitBase
{
    FMassZoneGraphNavigationParameters NavigationParameters;                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMassZoneGraphPathFollowProcessor : public UMassProcessor
{
    class UMassSignalSubsystem* SignalSubsystem;                                      // 0x0360 (size: 0x8)

}; // Size: 0x370

#endif
