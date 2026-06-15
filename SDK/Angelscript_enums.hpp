enum class EAttackDirectionRequirement {
    None = 0,
    any = 1,
    Front = 2,
    Back = 3,
    NotFront = 4,
    NotBack = 5,
    max = 6,
    EAttackDirectionRequirement_MAX = 7,
};

enum class EAttackUsageType {
    None = 0,
    Regular = 1,
    Charge = 2,
    Control = 3,
    max = 4,
    EAttackUsageType_MAX = 5,
};

enum class EBloodColorType {
    Unknown = 0,
    Red = 1,
    Blue = 2,
    Purple = 3,
    Yellow = 4,
    Black = 5,
    None = 6,
    Light = 7,
    Green = 8,
    EBloodColorType_MAX = 9,
};

enum class ECBT_ExecutionResult {
    Success = 0,
    Failure = 1,
    Running = 2,
    Skip = 3,
    None = 4,
    ECBT_MAX = 5,
};

enum class ECBT_NodeStatus {
    Success = 0,
    Failure = 1,
    Running = 2,
    Cancelled = 3,
    None = 4,
    ECBT_MAX = 5,
};

enum class ECombatActionPerformAttemptResult {
    MoveIsNull = 0,
    AlreadyRunning = 1,
    NewActionIsLowerPriority = 2,
    CantMoveDuringCurrentAction = 3,
    MoveNotAllowed = 4,
    MoveOnCooldown = 5,
    UnableToCancelCurrentAction = 6,
    UnableToCancelCurrentMovement = 7,
    IsBlocked = 8,
    SuccessfullyStarted = 9,
    ECombatActionPerformAttemptResult_MAX = 10,
};

enum class ECombatActionPriority {
    None = 0,
    Movement = 1,
    Low = 2,
    Medium = 3,
    High = 4,
    ECombatActionPriority_MAX = 5,
};

enum class ECombatBehaviorSetTree {
    Main = 0,
    Secondary = 1,
    Movement = 2,
    Count = 3,
    ECombatBehaviorSetTree_MAX = 4,
};

enum class ECombatFormation {
    None = 0,
    Line = 1,
    Queue = 2,
    VShape = 3,
    MovingCircle = 4,
    ECombatFormation_MAX = 5,
};

enum class ECombatRoleCategories {
    None = 0,
    Attack = 1,
    Situational = 2,
    Spare = 3,
    max = 4,
    ECombatRoleCategories_MAX = 5,
};

enum class ECombatTestingBehaviorType {
    None = 0,
    Custom = 1,
    StopBlocking = 2,
    AlwaysBlock = 3,
    ParryRiposte = 4,
    DodgeAttacks = 5,
    DodgeAway = 6,
    Attack_Air_Left = 7,
    Attack_Air_Right = 8,
    Attack_Air_Top = 9,
    Attack_Air_Bottom = 10,
    Attack_Target_Left = 11,
    Attack_Target_Right = 12,
    Attack_Target_Top = 13,
    Attack_Target_Bottom = 14,
    Attack_IfClose_Left = 15,
    Attack_IfClose_Right = 16,
    Attack_IfClose_Top = 17,
    Attack_IfClose_Bottom = 18,
    CastSpell = 19,
    PatrolWaypoints = 20,
    RandomTaunt = 21,
    CircleAroundTarget = 22,
    max = 23,
    ECombatTestingBehaviorType_MAX = 24,
};

enum class EConflictType {
    None = 0,
    TrainingFight = 1,
    PettyFight = 2,
    TrueFight = 3,
    DeadlyFight = 4,
    EConflictType_MAX = 5,
};

enum class ECrimeDurationType {
    Continuous = 0,
    instant = 1,
    Count = 2,
    ECrimeDurationType_MAX = 3,
};

enum class ECrimeRegistrationMode {
    FromCriminal = 0,
    FromWitness = 1,
    FromVictim = 2,
    FromEvent = 3,
    Count = 4,
    ECrimeRegistrationMode_MAX = 5,
};

enum class ECrimeSeverityLevel {
    None = 0,
    Minimal = 1,
    Low = 2,
    Medium = 3,
    High = 4,
    Critical = 5,
    ECrimeSeverityLevel_MAX = 6,
    ECrimeSeverityLevel_0_MAX = 7,
};

enum class EDemonAreaTypes {
    base = 0,
    Ring = 1,
    BreachZigZag = 2,
    None = 3,
    EDemonAreaTypes_MAX = 4,
};

enum class EFireMagePuzzleState {
    NotStarted = 0,
    Waiting = 1,
    Active = 2,
    Solved = 3,
    EFireMagePuzzleState_MAX = 4,
};

enum class EFlameSize {
    Small = 0,
    Medium = 1,
    Large = 2,
    EFlameSize_MAX = 3,
};

enum class EFleeOnUnfavorableCombatMode {
    Never = 0,
    OnUnfavorable_PredatorOnly = 1,
    OnUnfavorable = 2,
    Always_PredatorOnly = 3,
    Always = 4,
    EFleeOnUnfavorableCombatMode_MAX = 5,
};

enum class EGuideAbandonPhase {
    Guiding = 0,
    WaitingAtPlace = 1,
    ReturningToTerminus = 2,
    AtTerminus = 3,
    EGuideAbandonPhase_MAX = 4,
};

enum class EIncomingAttackReaction {
    None = 0,
    Wait = 1,
    Dodge = 2,
    Parry = 3,
    Count = 4,
    EIncomingAttackReaction_MAX = 5,
};

enum class EItemPickupReason {
    None = 0,
    Return = 1,
    Exchange = 2,
    Bribe = 3,
    max = 4,
    EItemPickupReason_MAX = 5,
};

enum class EPerceptionCharacterType {
    None = 0,
    CharacterOfInterest = 1,
    SensedCharacter = 2,
    Instigator = 3,
    Target = 4,
    SensedCharactersTarget = 5,
    AffectedCharacter = 6,
    Self = 7,
    AllSensedHostiles = 8,
    AllSensedEnemies = 9,
    AllSensedNonTrainingHostiles = 10,
    EPerceptionCharacterType_MAX = 11,
};

enum class EPreferredDistanceBehavior {
    Exact = 0,
    CloserThan = 1,
    FartherThan = 2,
    Count = 3,
    EPreferredDistanceBehavior_MAX = 4,
};

enum class EPuzzleState {
    NotStarted = 0,
    Waiting = 1,
    Active = 2,
    Solved = 3,
    EPuzzleState_MAX = 4,
};

enum class ESwitchAIStateEndInteractionMode {
    None = 0,
    EndAnyOngoingInteraction = 1,
    EndAnyOngoingInteraction_Quick = 2,
    EndAnyOngoingInteraction_Instant = 3,
    ESwitchAIStateEndInteractionMode_MAX = 4,
};

enum class ESwitchAIStateMode {
    Interrupt = 0,
    EndState_Cancel = 1,
    EndState_DisallowGracefulExit = 2,
    ESwitchAIStateMode_MAX = 3,
};

enum class ETheftStakes {
    None = 0,
    LowStakes = 1,
    HighStakes = 2,
    ETheftStakes_MAX = 3,
    ETheftStakes_0_MAX = 4,
};

enum class EUnreachableEnemyBehaviorStageType {
    Taunting = 0,
    Dodging = 1,
    Covering = 2,
    Fleeing = 3,
    WaitingForFleeStateSwitch = 4,
    None = 5,
    totalAmount = 6,
    EUnreachableEnemyBehaviorStageType_MAX = 7,
};

enum class EWaterMageInternal {
    NotStarted = 0,
    FontFilling = 1,
    FirstDucFilling = 2,
    FillingPool = 3,
    SecondDuctFilling = 4,
    FinalSiwtchPosA = 5,
    FinalSiwtchPosB = 6,
    Solved = 7,
    Reset = 8,
    Finished = 9,
    EWaterMageInternal_MAX = 10,
};

enum class EWaterMagePuzzleState {
    NotStarted = 0,
    Waiting = 1,
    Active = 2,
    Solved = 3,
    EWaterMagePuzzleState_MAX = 4,
};

