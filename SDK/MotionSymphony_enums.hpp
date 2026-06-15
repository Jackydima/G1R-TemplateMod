enum class EAllAxis {
    X = 0,
    Y = 1,
    Z = 2,
    NegX = 3,
    NegY = 4,
    NegZ = 5,
    EAllAxis_MAX = 6,
};

enum class EBlendStatus {
    Inactive = 0,
    Chosen = 1,
    Dominant = 2,
    Decay = 3,
    EBlendStatus_MAX = 4,
};

enum class EBodyVelocityMethod {
    None = 0,
    Manual = 1,
    Reported = 2,
    EBodyVelocityMethod_MAX = 3,
};

enum class EDistanceMatchBasis {
    Positional = 0,
    Rotational = 1,
    EDistanceMatchBasis_MAX = 2,
};

enum class EDistanceMatchTrigger {
    None = 0,
    Start = 1,
    Stop = 2,
    Plant = 3,
    Jump = 4,
    TurnInPlace = 5,
    Pivot = 6,
    EDistanceMatchTrigger_MAX = 7,
};

enum class EDistanceMatchType {
    None = 0,
    Backward = 1,
    Forward = 2,
    Both = 3,
    EDistanceMatchType_MAX = 4,
};

enum class EDistanceMatchingUseCase {
    None = 0,
    Strict = 1,
    EDistanceMatchingUseCase_MAX = 2,
};

enum class EHistoryTrajectoryMode {
    ActualHistory = 0,
    IntendedMaxSpeedHistory = 1,
    EHistoryTrajectoryMode_MAX = 2,
};

enum class EJointVelocityCalculationMethod {
    BodyIndependent = 0,
    BodyDependent = 1,
    EJointVelocityCalculationMethod_MAX = 2,
};

enum class EMSFootLockId {
    LeftFoot = 0,
    RightFoot = 1,
    Foot3 = 2,
    Foot4 = 3,
    Foot5 = 4,
    Foot6 = 5,
    Foot7 = 6,
    Foot8 = 7,
    EMSFootLockId_MAX = 8,
};

enum class EMSFootLockState {
    Unlocked = 0,
    Locked = 1,
    TimeLocked = 2,
    EMSFootLockState_MAX = 3,
};

enum class EMSHyperExtensionFixMethod {
    None = 0,
    MoveFootTowardsThigh = 1,
    MoveFootUnderThigh = 2,
    EMSHyperExtensionFixMethod_MAX = 3,
};

enum class EMSStrideVectorMethod {
    ManualVelocity = 0,
    ActorVelocity = 1,
    EMSStrideVectorMethod_MAX = 2,
};

enum class EMirrorMatchingRule {
    Never = 0,
    Always = 1,
    ExactMatch = 2,
    HeadMatch = 3,
    TailMatch = 4,
    WordMatch = 5,
    EMirrorMatchingRule_MAX = 6,
};

enum class EMotionAnimAssetType {
    None = 0,
    Sequence = 1,
    BlendSpace = 2,
    Composite = 3,
    EMotionAnimAssetType_MAX = 4,
};

enum class EMotionMatchingMode {
    MotionMatching = 0,
    DistanceMatching = 1,
    Action = 2,
    EMotionMatchingMode_MAX = 3,
};

enum class EPastTrajectoryMode {
    ActualHistory = 0,
    CopyFromCurrentPose = 1,
    EPastTrajectoryMode_MAX = 2,
};

enum class EPoseMatchMethod {
    Optimized = 0,
    Linear = 1,
    EPoseMatchMethod_MAX = 2,
};

enum class ETrajectoryControlMode {
    PlayerControlled = 0,
    AIControlled = 1,
    ETrajectoryControlMode_MAX = 2,
};

enum class ETrajectoryErrorWarpMode {
    Disabled = 0,
    Standard = 1,
    Strafe = 2,
    ETrajectoryErrorWarpMode_MAX = 3,
};

enum class ETrajectoryMoveMode {
    Standard = 0,
    Strafe = 1,
    ETrajectoryMoveMode_MAX = 2,
};

enum class ETrajectoryPreProcessMethod {
    None = 0,
    IgnoreEdges = 1,
    Extrapolate = 2,
    Animation = 3,
    ETrajectoryPreProcessMethod_MAX = 4,
};

enum class ETransitionDirectionMethod {
    Manual = 0,
    RootMotion = 1,
    ETransitionDirectionMethod_MAX = 2,
};

enum class ETransitionMatchingOrder {
    TransitionPriority = 0,
    PoseAndTransitionCombined = 1,
    ETransitionMatchingOrder_MAX = 2,
};

enum class ETransitionMethod {
    None = 0,
    Inertialization = 1,
    Blend = 2,
    ETransitionMethod_MAX = 3,
};

