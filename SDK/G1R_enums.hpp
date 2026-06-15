enum class EAIAgentBehaviorCombatSubState {
    WarnTarget = 0,
    EvaluateTarget = 1,
    Approach = 2,
    Attack = 3,
    Defend = 4,
    Count = 5,
    EAIAgentBehaviorCombatSubState_MAX = 6,
};

enum class EAIAgentCombatDistance {
    TooClose = 0,
    Attack = 1,
    OutOfRange = 2,
    OutOfCombat = 3,
    Count = 4,
    EAIAgentCombatDistance_MAX = 5,
};

enum class EAIAgentMindset {
    Calm = 0,
    Suspicious = 1,
    Aggressive = 2,
    Count = 3,
    EAIAgentMindset_MAX = 4,
};

enum class EAIAgentRelationshipType {
    None = 0,
    Neutral = 1,
    Friendly = 2,
    Hostile = 3,
    Prey = 4,
    Count = 5,
    EAIAgentRelationshipType_MAX = 6,
};

enum class EAIAgentScriptedBehavior_IncomingMeleeAttackStatus {
    None = 0,
    Start = 1,
    Damage = 2,
    Done = 3,
    EAIAgentScriptedBehavior_MAX = 4,
};

enum class EAIAgentSpawningCreatorType {
    None = 0,
    Proxy = 1,
    Player = 2,
    AI = 3,
    EAIAgentSpawningCreatorType_MAX = 4,
};

enum class EAIAgentWanderType {
    None = 0,
    Patrol = 1,
    Zone = 2,
    EAIAgentWanderType_MAX = 3,
};

enum class EAICombat_AbilityStatus {
    None = 0,
    Running = 1,
    Finishing = 2,
    EAICombat_MAX = 3,
};

enum class EARMPlaceModuleCategoryTagsWhen {
    Visited = 0,
    PassedConditions = 1,
    ProducedAtLeastOneResponse = 2,
    EARMPlaceModuleCategoryTagsWhen_MAX = 3,
};

enum class EASCodegenTestEnum {
    First = 0,
    Second = 1,
    Third = 2,
    EASCodegenTestEnum_MAX = 3,
};

enum class EAbilityInputID {
    None = 0,
    Confirm = 1,
    Cancel = 2,
    SprintAction = 3,
    JumpAction = 4,
    StanceAction = 5,
    WalkAction = 6,
    AimAction = 7,
    RollAction = 8,
    Possess = 9,
    RagdollAction = 10,
    Interact = 11,
    TargetEnemyAction = 12,
    TargetPOIAction = 13,
    Attack = 14,
    Block = 15,
    Reload = 16,
    SelectNextTargetLeft = 17,
    SelectNextTargetRight = 18,
    Ride = 19,
    IncreaseCameraDistance = 20,
    DecreaseCameraDistance = 21,
    KickAttack = 22,
    Parry = 23,
    ThrowQuickItem = 24,
    SprintActionToggle = 25,
    TopAttack = 26,
    RightAttack = 27,
    BottomAttack = 28,
    LeftAttack = 29,
    Dodge = 30,
    WinchLeft = 31,
    WinchRight = 32,
    CheatLeave = 33,
    EAbilityInputID_MAX = 34,
};

enum class EAbilityTaskCameraFadeSetupLerpType {
    Lerp = 0,
    InterpEaseInOut = 1,
    EAbilityTaskCameraFadeSetupLerpType_MAX = 2,
};

enum class EActivityActions {
    ActivateActivity = 0,
    StartActivity = 1,
    EndActivity = 2,
    ActivateChapter = 3,
    StartChapter = 4,
    EndChapter = 5,
    EActivityActions_MAX = 6,
};

enum class EAdaptZDivergeMode {
    AsTheCrowFlies = 0,
    RelativeToNavGround = 1,
    RelativeToOtherCharacter = 2,
    EAdaptZDivergeMode_MAX = 3,
};

enum class EAlkFilterWidgetEntryVisibility {
    InitiallyHidden = 0,
    InitiallyVisible = 1,
    AlwaysVisible = 2,
    EAlkFilterWidgetEntryVisibility_MAX = 3,
};

enum class EAlkMouseButton {
    Invalid = 0,
    Left = 1,
    Right = 2,
    Middle = 3,
    Thumb1 = 4,
    Thumb2 = 5,
    EAlkMouseButton_MAX = 6,
};

enum class EAmbientType {
    Warning = 0,
    WarningFlock = 1,
    EAmbientType_MAX = 2,
};

enum class EArcheryState {
    WaitingBowOrCrossbowExist = 0,
    UnEquipped = 1,
    Equipped = 2,
    BowInHandRelaxed = 3,
    BowInHandNotchedAiming = 4,
    WaitingToAiming = 5,
    BowInHandNotchedRelaxed = 6,
    WaitingToFinishNotch = 7,
    WaitingToFinishQuickNotch = 8,
    ReleaseBowString = 9,
    QuickReleaseBowString = 10,
    WaitingToEnterQuickRelease = 11,
    Interrupted = 12,
    NotchArrowOntoBow = 13,
    NotchArrowOntoBowAfterRelease = 14,
    DrawingBowString = 15,
    CountingResistanceTimeWhileDrawingBowString = 16,
    QuickNotchArrowOntoBow = 17,
    NotchArrowOntoBowFromRelax = 18,
    NotchArrowOntoBowFromQuickRelease = 19,
    NotchArrowOntoBowFromAiming = 20,
    ReleaseCrossbow = 21,
    WaitingToFinishRelease = 22,
    WaitingToFinishQuickRelease = 23,
    EArcheryState_MAX = 24,
};

enum class EAreaBoundMemoryContainerType {
    SubGuild = 0,
    CampGuild = 1,
    GeneralLocation = 2,
    MAX = 3,
};

enum class EAttackHandle {
    None = 0,
    RightHand = 1,
    LeftHand = 2,
    BothHands = 3,
    EAttackHandle_MAX = 4,
};

enum class EAttackState {
    None = 0,
    Damage = 1,
    Combo = 2,
    Count = 3,
    EAttackState_MAX = 4,
};

enum class EAxisInputID {
    MoveForwardBackwards = 0,
    MoveRightLeft = 1,
    LookUpDown = 2,
    LookLeftRight = 3,
    MoveUpDown = 4,
    SelectNextTarget = 5,
    EAxisInputID_MAX = 6,
};

enum class EBiome {
    TemperateDecidiousForest = 0,
    RainfeldUpland = 1,
    Desert = 2,
    Wetland = 3,
    Tundra = 4,
    OrcCity = 5,
    None = 6,
    EBiome_MAX = 7,
};

enum class EBloodFontState {
    WaitToStart = 0,
    WaitToPoolFull = 1,
    WaitForBloodStatueFull = 2,
    EBloodFontState_MAX = 3,
};

enum class EBloodType {
    Unknown = 0,
    Red = 1,
    Blue = 2,
    Purple = 3,
    Yellow = 4,
    Black = 5,
    None = 6,
    Light = 7,
    Green = 8,
    EBloodType_MAX = 9,
};

enum class EBookCaptureAnimState {
    Closed = 0,
    Opening = 1,
    Opened = 2,
    SwitchingPage = 3,
    SwitchedPage = 4,
    Closing = 5,
    EBookCaptureAnimState_MAX = 6,
};

enum class EBookCapturePage {
    BOOK_COVER = 0,
    BOOK_PAGE_LEFT = 1,
    BOOK_PAGE_RIGHT = 2,
    BOOK_PAGE_ANIMATING_LEFT = 3,
    BOOK_PAGE_ANIMATING_RIGHT = 4,
    BOOK_PAGE_COUNT = 5,
    BOOK_MAX = 6,
};

enum class EBreakerType {
    Idle = 0,
    Walk = 1,
    EBreakerType_MAX = 2,
};

enum class EButtonGraphics {
    None = 0,
    Auto = 1,
    XSX = 2,
    PS5 = 3,
    Switch = 4,
    EButtonGraphics_MAX = 5,
};

enum class EButtonInputID {
    None = 0,
    Confirm = 1,
    Cancel = 2,
    SprintAction = 3,
    JumpAction = 4,
    StanceAction = 5,
    WalkAction = 6,
    AimAction = 7,
    RollAction = 8,
    Possess = 9,
    RagdollAction = 10,
    Interact = 11,
    TargetEnemyAction = 12,
    TargetPOIAction = 13,
    Attack = 14,
    Block = 15,
    Reload = 16,
    SelectNextTargetLeft = 17,
    SelectNextTargetRight = 18,
    Ride = 19,
    IncreaseCameraDistance = 20,
    DecreaseCameraDistance = 21,
    KickAttack = 22,
    QuickItem = 23,
    EButtonInputID_MAX = 24,
};

enum class EButtonWidget_Button {
    Primary = 0,
    Secondary = 1,
    Any = 2,
    EButtonWidget_MAX = 3,
};

enum class ECamConditions {
    None = 0,
    Menu = 1,
    Idle = 2,
    Running = 3,
    Sprinting = 4,
    Crouch = 5,
    RangedWeapon = 6,
    RangedWeaponCrouch = 7,
    Aim = 8,
    AimCrouch = 9,
    AimRanged = 10,
    AimCrouchRanged = 11,
    AimRangedCrossbow = 12,
    AimCrouchRangedCrossbow = 13,
    Swim = 14,
    Dive = 15,
    Combat = 16,
    CombatOneTwo = 17,
    CombatThreePlus = 18,
    CombatFly = 19,
    CombatBig = 20,
    AimSpell = 21,
    AimCrouchSpell = 22,
    Spell = 23,
    WallClimbing = 24,
    WallWalking = 25,
    MountingOrUnmounting = 26,
    FrontArea = 27,
    Cinematic = 28,
    SpellCombatTargeting = 29,
    ECamConditions_MAX = 30,
};

enum class ECharacterStateGlobalIDFormat {
    Unknown = 0,
    UniqueName = 1,
    SpawnedBy = 2,
    SpawnIndex = 4,
    SpawnLocation = 8,
    Default = 7,
    Legacy = 15,
    ECharacterStateGlobalIDFormat_MAX = 16,
};

enum class ECinematicState {
    None = 0,
    Initializing = 1,
    Loading = 2,
    Playing = 3,
    Unloading = 4,
    DeInitializing = 5,
    ECinematicState_MAX = 6,
};

enum ECinematicVisibilityMode {
    ShowAndBlockPlayerInput = 0,
    ShowAndNotBlockPlayerInput = 1,
    Hidden = 2,
    ECinematicVisibilityMode_MAX = 3,
};

enum class EClimbType {
    None = 0,
    High = 1,
    Mid = 2,
    Low = 3,
    Fence = 4,
    HighFence = 5,
    FallingLow = 6,
    FallingHigh = 7,
    FallingImpact = 8,
    Water = 9,
    WaterLow = 10,
    Acrobatic = 11,
    StepDown = 12,
    JumpGap = 13,
    Count = 14,
    EClimbType_MAX = 15,
};

enum class ECombatRole {
    None = 0,
    PassiveAttacker = 1,
    ActiveAttacker = 2,
    Observer = 3,
    HealSelf = 4,
    Custom1 = 5,
    Custom2 = 6,
    Custom3 = 7,
    Custom4 = 8,
    ECombatRole_MAX = 9,
};

enum class ECombatStance {
    Idle = 0,
    Blocking = 1,
    Attacking = 2,
    Parry = 3,
    Count = 4,
    ECombatStance_MAX = 5,
};

enum class EComboQuality {
    None = 0,
    Buffer = 1,
    Wrong_Direction = 2,
    Too_Soon = 3,
    Reset_States = 4,
    Great = 5,
    Almost = 6,
    Ok = 7,
    EComboQuality_MAX = 8,
};

enum class EComboTiming {
    None = 0,
    ComboWindow = 1,
    ResetStates = 2,
    EComboTiming_MAX = 3,
};

enum class EControlCharacterState {
    Idle = 0,
    WaitingFramesBeforeWork = 1,
    WaitingFramesAfterWorkDone = 2,
    DoWork = 3,
    CameraTravellingStart = 4,
    CameraTravellingEnd = 5,
    Controlling = 6,
    WaitingServerFinishPossessUnpossess = 7,
    EControlCharacterState_MAX = 8,
};

enum class EConversationCameraFocusMode {
    Default = 0,
    Middle = 1,
    Speaker = 2,
    Listener = 3,
    ReferencePoint = 4,
    Manual = 5,
    EConversationCameraFocusMode_MAX = 6,
};

enum class EConversationCameraFocusTarget {
    None = 0,
    Middle = 1,
    Speaker = 2,
    Listener = 3,
    EConversationCameraFocusTarget_MAX = 4,
};

enum class EConversationCameraHideMode {
    None = 0,
    HideSpeaker = 1,
    HideListener = 2,
    HideSpeakerWeapon = 3,
    HideListenerWeapon = 4,
    OnlyShowSpeaker = 5,
    OnlyShowListener = 6,
    DontModify = 7,
    EConversationCameraHideMode_MAX = 8,
};

enum class EConversationCameraLoopMode {
    None = 0,
    Repeat = 1,
    WindBack = 2,
    EConversationCameraLoopMode_MAX = 3,
};

enum class EConversationCameraRelativeParticipant {
    Speaker = 0,
    Listener = 1,
    AdditionalParticipants = 2,
    ConversationInitiator = 3,
    Player = 4,
    EConversationCameraRelativeParticipant_MAX = 5,
};

enum class EConversationCameraShotMode {
    CloseShot = 0,
    WideShot = 1,
    EConversationCameraShotMode_MAX = 2,
};

enum class EConversationFlow {
    None = 0,
    PrepareRequestConversation_Begin = 1,
    PrepareRequestConversation_AlreadyInConversation = 2,
    RequestingConversation_Begin = 3,
    RequestingConversation_RequestFailed = 4,
    RequestingConversation_NothingToTalkAbout = 5,
    RequestingConversation_OtherExitedAfterJoining = 6,
    RequestingConversation_IdealTransformNotFound = 7,
    RequestingConversation_WaitingForPutAwayWeapon = 8,
    RespondingToRequest_OtherNotParticipating = 9,
    RespondingToRequest_GroupNotAvailable = 10,
    RespondingToRequest_NothingToTalkAbout = 11,
    RespondingToRequest_IdealTransformNotFound = 12,
    RespondingToRequest_OtherCharacterDespawned = 13,
    RespondingToRequest_IdealTransformAfterInteractionNotFound = 14,
    RespondingToRequest_ExitingOutOfInteractions = 15,
    RespondingToRequest_WaitingForNoLongerSpeaking = 16,
    RespondingToRequest_WaitingForPutAwayWeapon = 17,
    RespondingToRequest_Timeout = 18,
    GettingReady_GroupNotAvailable = 19,
    GettingReady_OtherNotParticipating = 20,
    GettingReady_WaitingForConversationAIState = 21,
    GettingReady_ExitingOutOfInteractions = 22,
    GettingReady_WaitingForBlockingAnimation = 23,
    GettingReady_MovingIntoPlace = 24,
    GettingReady_LoadingMorphTargets = 25,
    GettingReady_LoadingAssets = 26,
    GettingReady_WaitingForPutAwayWeapon = 27,
    WaitingForOthers_WaitingForAllOthers = 28,
    WaitingForOthers_OtherParticipantLeft = 29,
    WaitingForOthers_Timeout = 30,
    WaitingForOthers_NoGroup = 31,
    InConversation_GroupNotAvailable = 32,
    InConversation_LeftConversationAIState = 33,
    InConversation_AloneInConversation = 34,
    InConversation_AbilityEnded = 35,
    InConversation_Ongoing = 36,
    End_EndingAbility = 37,
    EConversationFlow_MAX = 38,
};

enum class EConversationForceRangeType {
    DefaultRange = 0,
    CloseRange = 1,
    FarRange = 2,
    SurroundingRange = 3,
    EConversationForceRangeType_MAX = 4,
};

enum class EConversationForceSense {
    See = 0,
    Any = 1,
    EConversationForceSense_MAX = 2,
};

enum class EConversationForceWalk {
    None = 0,
    LetOtherWalk = 1,
    WalkToOther = 2,
    EConversationForceWalk_MAX = 3,
};

enum class EConversationMultiParticipantMode {
    OnlySpeakerListener = 0,
    OnlyMultiConversations = 1,
    AllowAll = 2,
    EConversationMultiParticipantMode_MAX = 3,
};

enum class EConversationPresetMonologState {
    Any = 0,
    DuringMonolog = 1,
    OutsideOfMonolog = 2,
    EConversationPresetMonologState_MAX = 3,
};

enum class EConversationState {
    None = 0,
    PrepareRequestConversation = 1,
    RequestingConversation = 2,
    RespondingToRequest = 3,
    GettingReady = 4,
    WaitingForOthers = 5,
    InConversation = 6,
    RequestFailed = 7,
    NoTopicsToTalkAbout = 8,
    End = 9,
    EConversationState_MAX = 10,
};

enum EConversationTopicExtraInfoType {
    None = 0,
    Skill = 1,
    BuyItem = 2,
    PayFine = 3,
    EConversationTopicExtraInfoType_MAX = 4,
};

enum class ECoumpoundInputHintLocation {
    Up = 0,
    Left = 1,
    Down = 2,
    Right = 3,
    ECoumpoundInputHintLocation_MAX = 4,
};

enum class ECraftingState {
    None = 0,
    EnterStation = 1,
    SelectingRecipe = 2,
    WaitForCraft = 3,
    CraftingItem = 4,
    GoToRecipe = 5,
    ExitCraft = 6,
    ExitIntermediate = 7,
    ExitNothing = 8,
    ECraftingState_MAX = 9,
};

enum class ECrimeAffectedEntitySource {
    Area = 0,
    Item = 1,
    Interactable = 2,
    Event = 3,
    ECrimeAffectedEntitySource_MAX = 4,
};

enum class ECrimeDirectness {
    None = 0,
    Indirect = 1,
    Direct = 2,
    ECrimeDirectness_MAX = 3,
};

enum class ECrowdGroupsBehaviour {
    UseSocialHierarchy = 0,
    IgnoreAllAgents = 1,
    IgnoreAllAgentsAndObstacles = 2,
    AvoidAllAgents = 3,
    AvoidAllAIAgents = 4,
    ECrowdGroupsBehaviour_MAX = 5,
};

enum class ECrowdIdleBehaviour {
    TryAvoidMe = 0,
    ForceAvoidMe = 1,
    IgnoreMe = 2,
    ECrowdIdleBehaviour_MAX = 3,
};

enum class ECustomKeyBinding {
    QA_0 = 0,
    QA_1 = 1,
    QA_2 = 2,
    QA_3 = 3,
    QA_4 = 4,
    QA_5 = 5,
    QA_6 = 6,
    QA_7 = 7,
    QA_8 = 8,
    QA_END = 9,
    Q_MELEE = 10,
    Q_RANGE = 11,
    OTHER = 255,
    ECustomKeyBinding_MAX = 256,
};

enum class EDailyRoutineExecutionPhase {
    JustActivated = 0,
    GoingToTaskLocation = 1,
    DoTask = 2,
    WaitingForCancel = 3,
    WaitingForNextTask = 4,
    EDailyRoutineExecutionPhase_MAX = 5,
};

enum class EDailyRoutineTeleportMode {
    Never = 0,
    WhenOutOfBounds = 1,
    EDailyRoutineTeleportMode_MAX = 2,
};

enum class EDamageType {
    Slash = 0,
    Blunt = 1,
    Arrow = 2,
    Magic = 3,
    EDamageType_MAX = 4,
};

enum class EDangerLevel {
    Orange = 0,
    Red = 1,
    Safe = 2,
    Warning = 3,
    EDangerLevel_MAX = 4,
};

enum class EDataBehaviorModule_DebugDisplayMode {
    Behavior = 0,
    DataModule = 1,
    Lessons = 2,
    Pathing = 3,
    Input = 4,
    Count = 5,
    EDataBehaviorModule_MAX = 6,
};

enum class EDayTimeType {
    Morning = 0,
    Noon = 1,
    Afternoon = 2,
    Evening = 3,
    Night = 4,
    EDayTimeType_MAX = 5,
};

enum class EDeathCause {
    None = 0,
    Drowning = 1,
    FallDamage = 2,
    CombatDamage = 3,
    EDeathCause_MAX = 4,
};

enum class EDeflectMethod {
    WorldUp = 0,
    BladeDirection = 1,
    AnimationDirection = 2,
    HitNormals = 3,
    EDeflectMethod_MAX = 4,
};

enum class EDifficultyGroup {
    Combat = 0,
    Resources = 1,
    Progression = 2,
    EDifficultyGroup_MAX = 3,
};

enum class EDirtAmountType {
    Low = 0,
    Medium = 1,
    High = 2,
    Custom = 3,
    EDirtAmountType_MAX = 4,
};

enum class EDivergeState {
    DefaultMove = 0,
    StartZDiverge = 1,
    StopZDiverge = 2,
    ZDivergeMove = 3,
    EDivergeState_MAX = 4,
};

enum class EDocumentSectionListWidgetStyle {
    Bullet = 0,
    Enumerated = 1,
    EDocumentSectionListWidgetStyle_MAX = 2,
};

enum class EDodgeBehaviour {
    SlowMedium = 0,
    SlowShort = 1,
    Fast = 2,
    EDodgeBehaviour_MAX = 3,
};

enum class EDodgeWindowTimeframe {
    Any = 0,
    Early = 1,
    Late = 2,
    EDodgeWindowTimeframe_MAX = 3,
};

enum class EDoorModel {
    Normal = 0,
    Sewer = 1,
    Puzzle = 2,
    EDoorModel_MAX = 3,
};

enum class EDoorType {
    Triggered = 0,
    Interactable = 1,
    TriggeredAndInteractable = 2,
    Impact = 3,
    JustMove = 4,
    JustMoveTriggered = 5,
    EDoorType_MAX = 6,
};

enum class EFallingSurfaceType {
    None = 0,
    Ground = 1,
    Water = 2,
    Count = 3,
    EFallingSurfaceType_MAX = 4,
};

enum class EFinalItem {
    NonSpawn = 0,
    SpawnAndStore = 1,
    Spawn = 2,
    EFinalItem_MAX = 3,
};

enum class EFindPathType {
    WaynetOnly = 0,
    NavMeshOnly = 1,
    MetaPath = 2,
    EFindPathType_MAX = 3,
};

enum class EFishingDirection {
    None = 0,
    Front = 1,
    Right = 2,
    Left = 3,
    Back = 4,
    EFishingDirection_MAX = 5,
};

enum class EFishingState {
    Idle = 0,
    Aiming = 1,
    Fishing = 2,
    EFishingState_MAX = 3,
};

enum class EFlyDiveMode {
    DivergeHybrid = 0,
    DivergeNever = 1,
    FlyAlways = 2,
    EFlyDiveMode_MAX = 3,
};

enum class EFrameGenerationDLSS {
    Off = 0,
    Auto = 1,
    On2X = 2,
    On3X = 3,
    On4X = 4,
    EFrameGenerationDLSS_MAX = 5,
};

enum class EFreepointActionType {
    None = 0,
    Goto = 1,
    Interact = 2,
    Count = 3,
    EFreepointActionType_MAX = 4,
};

enum class EFreepointType {
    Normal = 0,
    Patrol = 1,
    Lineup = 2,
    EFreepointType_MAX = 3,
};

enum class EFreepointUsage {
    None = 0,
    Use = 1,
    Reserve = 2,
    ReadyToUse = 3,
    EFreepointUsage_MAX = 4,
};

enum class EGameDifficulty {
    Easy = 0,
    Normal = 1,
    Hard = 2,
    EGameDifficulty_MAX = 3,
};

enum class EGameInputDevice {
    MouseAndKeyboard = 0,
    Gamepad = 1,
    EGameInputDevice_MAX = 2,
};

enum class EGameInputMode {
    UI = 0,
    Game = 1,
    EGameInputMode_MAX = 2,
};

enum class EGenericTaskResult {
    Success = 0,
    Cancelled = 1,
    Failed = 2,
    EGenericTaskResult_MAX = 3,
};

enum class EGetBookCaptureActorValidResult {
    Valid = 0,
    Invalid = 1,
    EGetBookCaptureActorValidResult_MAX = 2,
};

enum class EGothicFocalPointMode {
    PointOfInterest = 1,
    LookAtWithController = 2,
    NPCTargeting = 4,
    Snap = 8,
    StrafeWithTargetRotationYaw = 16,
    EGothicFocalPointMode_MAX = 17,
};

enum class EGothicFocusPriority {
    DefaultMoveOrIdle = 0,
    Follow_MoveOutOfWay_GoalActor = 1,
    Follow_MoveOutOfWay_PathEnd = 2,
    Interaction = 3,
    IdleInteractionFocus = 4,
    DirectMove = 5,
    MoveIntoPositionForInteraction = 6,
    TurnTo = 7,
    Conversation = 8,
    Listen = 9,
    Speak = 10,
    PerceptionResponse = 11,
    UpdateTargetInCombat = 12,
    WatchFight = 13,
    Warning = 14,
    WarningCrime = 15,
    CombatBase = 16,
    CombatMove = 17,
    Fear = 18,
    EGothicFocusPriority_MAX = 19,
};

enum class EGothicHUDBarVisibility {
    On = 0,
    Dynamic = 1,
    Off = 2,
    EGothicHUDBarVisibility_MAX = 3,
};

enum class EGothicHUDVisibilityState {
    Empty = 0,
    CompletelyOn = 1,
    DefaultGameplay = 2,
    DefaultTransform = 3,
    DefaultCombat = 4,
    ManagementMenu = 5,
    DefaultMenu = 6,
    DefaultConversation = 7,
    GameOver = 8,
    LockPick = 9,
    DefaultCinematic = 10,
    CompletelyOff = 11,
    EGothicHUDVisibilityState_MAX = 12,
};

enum class EGothicLockPieceType {
    None = 0,
    Plate = 1,
    Bar = 2,
    Latch = 3,
    Count = 4,
    EGothicLockPieceType_MAX = 5,
};

enum class EGothicLogCategory {
    Core = 0,
    AI = 1,
    Combat = 2,
    Locomotion = 3,
    AngelscriptGAS = 4,
    Player = 5,
    Input = 6,
    GameplayPointSystem = 7,
    NavigationData = 8,
    NavigationDataCreation = 9,
    AINavigation = 10,
    GAS = 11,
    Items = 12,
    Network = 13,
    Magic = 14,
    Camera = 15,
    Sound = 16,
    FX = 17,
    Fishing = 18,
    Animation = 19,
    DataValidation = 20,
    AutomatedTest = 21,
    Spawning = 22,
    ScriptBindings = 23,
    Journal = 24,
    StoryEvents = 25,
    UI = 26,
    Localization = 27,
    Conversation = 28,
    Cinematics = 29,
    Target = 30,
    GameplayCue = 31,
    Environment = 32,
    Quest = 33,
    Resource = 34,
    ProcessingRange = 35,
    Interaction = 36,
    Mod = 37,
    PersistentData = 38,
    LockPick = 39,
    WorldPoint = 40,
    Count = 41,
    EGothicLogCategory_MAX = 42,
};

enum class EGothicLogVerbosity {
    Log = 0,
    Warning = 1,
    Error = 2,
    Count = 3,
    EGothicLogVerbosity_MAX = 4,
};

enum class EGothicRootMotionMode {
    Curve = 0,
    Anim = 1,
    EGothicRootMotionMode_MAX = 2,
};

enum class EGothicSaveGameVersion {
    None = 0,
    Initial = 1,
    Hotfix2 = 2,
    VersionPlusOne = 3,
    LatestVersion = 2,
    EGothicSaveGameVersion_MAX = 4,
};

enum class EGothicSpeedPriority {
    Default = 0,
    Locomotion = 1,
    MovementSpeed = 2,
    NavigationTask = 3,
    CharacterAIState = 4,
    Aim = 5,
    Combat = 6,
    AlignInteraction = 7,
    Interaction = 8,
    NavLink = 9,
    MovementOverrides = 10,
    MAX_PRIORITY = 11,
    EGothicSpeedPriority_MAX = 12,
};

enum class EGuideState {
    CannotGuide = 0,
    IsMoving = 1,
    WaitForFollowActor = 2,
    FollowActorGone = 3,
    EGuideState_MAX = 4,
};

enum class EHLSHipsDirection {
    F = 0,
    B = 1,
    RF = 2,
    RB = 3,
    LF = 4,
    LB = 5,
    EHLSHipsDirection_MAX = 6,
};

enum class EHUDNotificationGroup {
    None = 0,
    Inventory = 1,
    Character = 2,
    Quest = 3,
    EHUDNotificationGroup_MAX = 4,
};

enum class EHUDNotificationImportance {
    Lowest = 0,
    Lower = 1,
    Low = 2,
    Medium = 3,
    High = 4,
    Higher = 5,
    Highest = 6,
    EHUDNotificationImportance_MAX = 7,
};

enum class EHUDNotificationVisibilityState {
    Hidden = 0,
    Visible = 1,
    Hiding = 2,
    ForceHidden = 3,
    EHUDNotificationVisibilityState_MAX = 4,
};

enum EHUDQuickSlotOpenedFromPriorityState {
    Default = 0,
    HotkeyBinding = 1,
    Aiming = 2,
    Transform = 3,
    Inventory = 4,
    EHUDQuickSlotOpenedFromPriorityState_MAX = 5,
};

enum class EHealthStatus {
    Healthy = 0,
    Injured = 1,
    Count = 2,
    EHealthStatus_MAX = 3,
};

enum class EHitColliderState {
    None = 0,
    Damage = 1,
    EHitColliderState_MAX = 2,
};

enum class EHoldsterLocation {
    Waist = 0,
    Back = 1,
    None = 2,
    EHoldsterLocation_MAX = 3,
};

enum class EHorizontalAlignmenet {
    LEFT = 0,
    RIGHT = 1,
    CENTER = 2,
    EHorizontalAlignmenet_MAX = 3,
};

enum class EInputContextGroups {
    Default = 0,
    Combat = 1,
    Menu = 2,
    EInputContextGroups_MAX = 3,
};

enum class EIntegerPickerWidget_Layout {
    Horizontal = 0,
    Vertical = 1,
    EIntegerPickerWidget_MAX = 2,
};

enum class EInteractNotify {
    CharInteract = 0,
    Count = 1,
    EInteractNotify_MAX = 2,
};

enum class EInteractionEndBehavior {
    Normal = 0,
    Quick = 1,
    Instant = 2,
    EInteractionEndBehavior_MAX = 3,
};

enum class EInteractionFastExitMode {
    PlayExitAnimation = 0,
    PlayFastExitIfAvailableOtherwiseBlendOut = 1,
    AlwaysBlendOut = 2,
    EInteractionFastExitMode_MAX = 3,
};

enum class EInteractionInputKind {
    None = 0,
    Push = 1,
    Pull = 2,
    Left = 3,
    Right = 4,
    Up = 5,
    Down = 6,
    Interact = 7,
    EInteractionInputKind_MAX = 8,
};

enum class EInteractionInstruction {
    Traverse = 0,
    Open = 1,
    Close = 2,
    Wait = 3,
    AlreadyInteracting = 4,
    Error = 5,
    End = 6,
    EInteractionInstruction_MAX = 7,
};

enum class EInteractionSpotComparisonOp {
    LessThan = 0,
    LessOrEqualTo = 1,
    EqualTo = 2,
    GreaterThan = 3,
    GreaterOrEqualTo = 4,
    NotEqualTo = 5,
    EInteractionSpotComparisonOp_MAX = 6,
};

enum class EInteractionSpotConditions {
    Any = 0,
    IsUsableByCharacter = 1,
    IsNotUsableByCharacter = 2,
    EInteractionSpotConditions_MAX = 3,
};

enum class EInteractionSpotEntryDirection {
    None = 0,
    Front = 1,
    Back = 2,
    Left = 3,
    Right = 4,
    Count = 5,
    EInteractionSpotEntryDirection_MAX = 6,
};

enum class EInteractionSpotOccupation {
    Any = 0,
    Free = 1,
    ClaimedOrInUse = 2,
    InUse = 3,
    EInteractionSpotOccupation_MAX = 4,
};

enum class EInteractionSpotRequirementsMode {
    Fulfilled = 0,
    NotFulfilled = 1,
    EInteractionSpotRequirementsMode_MAX = 2,
};

enum class EInteractiveCameraTarget {
    Default = 0,
    Yes = 1,
    No = 2,
    Teleport = 3,
    EInteractiveCameraTarget_MAX = 4,
};

enum class EInventoryFilterTypes {
    Melee = 0,
    Ranged = 1,
    Magic = 2,
    Wearables = 3,
    Food = 4,
    Potions = 5,
    Materials = 6,
    Documents = 7,
    Miscellaneous = 8,
    Artifacts = 9,
    All = 10,
    Trade = 11,
    EInventoryFilterTypes_MAX = 12,
};

enum class EInventoryFilterVisibility {
    ShowAll = 0,
    DisableEmpty = 1,
    HideEmpty = 2,
    EInventoryFilterVisibility_MAX = 3,
};

enum class EInventoryOpenedStates {
    Default = 0,
    Crafting = 1,
    Looting = 2,
    TradingInventoryTrader = 3,
    TradingInventoryPlayer = 4,
    EInventoryOpenedStates_MAX = 5,
};

enum class EInventoryTypes {
    None = 0,
    MainContainer = 1,
    MainHandDEPRECATED = 2,
    MeleeSlot = 3,
    RangedSlot = 4,
    QuickItems = 5,
    TorchSlot = 6,
    Trader = 7,
    TradingBalance = 8,
    Pouch = 9,
    RingLeft = 10,
    RingRight = 11,
    Amulet = 12,
    ArmorSlot = 13,
    BoughtUpgradeItemsContainer = 14,
    Count = 15,
    EInventoryTypes_MAX = 16,
};

enum class EItemAction {
    Loot = 0,
    Plunder = 1,
    Pick = 2,
    Craft = 3,
    Buy = 4,
    Sell = 5,
    Drop = 6,
    Consume = 7,
    Throw = 8,
    CraftConsume = 9,
    EItemAction_MAX = 10,
};

enum class EItemState {
    Draw = 0,
    InHand = 1,
    Shelve = 2,
    EItemState_MAX = 3,
};

enum class EItemType {
    None = 0,
    Torch = 1,
    HandsTied = 2,
    Rifle = 3,
    Pistol1 = 4,
    Pistol2 = 5,
    Bow = 6,
    Binoculars = 7,
    Box = 8,
    Barrel = 9,
    Count = 10,
    EItemType_MAX = 11,
};

enum class EJumpDownArrowLocationMode {
    Free = 0,
    BottomEnd = 1,
    Dynamic = 2,
    EJumpDownArrowLocationMode_MAX = 3,
};

enum class ELadderDrawDebug {
    Lines = 0,
    Box = 1,
    ELadderDrawDebug_MAX = 2,
};

enum class ELightingModifierType {
    Location = 0,
    Daytime = 1,
    Weather = 2,
    Fog = 3,
    ShotMode = 4,
    Shadow = 5,
    ExternalLightIntensity = 6,
    ExternalLightColor = 7,
    SkinTone = 8,
    SceneBrightness = 9,
    ParticipantNumber = 10,
    UniqueArea = 11,
    ELightingModifierType_MAX = 12,
};

enum class ELinkAnchorType {
    Start = 0,
    End = 1,
    ELinkAnchorType_MAX = 2,
};

enum class ELoadingScreenType {
    Default = 0,
    BlackScreen = 1,
    GameIntro = 2,
    StoryRecap = 3,
    ELoadingScreenType_MAX = 4,
};

enum class ELockPickAnimState {
    Inactive = 0,
    Idle = 1,
    LockPicking = 2,
    Success = 3,
    Failure = 4,
    ELockPickAnimState_MAX = 5,
};

enum class ELockPickUIHint {
    None = 0,
    Chest = 1,
    Door = 2,
    ELockPickUIHint_MAX = 3,
};

enum class ELogicalLightSampleFunction {
    Max = 0,
    Average = 1,
};

enum class ELogicalLightsourceAttenuation {
    Linear = 0,
    Quadratic = 1,
    ELogicalLightsourceAttenuation_MAX = 2,
};

enum class ELogicalLightsourceType {
    PointLight = 0,
    DirectionalLight = 1,
    GlobalAmbientLight = 2,
    SpotLight = 3,
    Box = 4,
    ELogicalLightsourceType_MAX = 5,
};

enum class ELookAtState {
    Idle = 0,
    Idle_Crouch = 1,
    Combat_Melee = 2,
    Block = 3,
    Combat_Archery = 4,
    Aiming = 5,
    Combat_Archery_Crouch = 6,
    Aiming_Crouch = 7,
    Interact = 8,
    Drugs_Alcohol = 9,
    Conversation = 10,
    ELookAtState_MAX = 11,
};

enum class EMagnetConfig {
    SetByBestAlignment = 0,
    SetByFurthestDamagePoint = 1,
    SetByIndex = 2,
    SetManually = 3,
    EMagnetConfig_MAX = 4,
};

enum class EMainMenuState {
    Default = 0,
    LoadMenu = 1,
    SaveMenu = 2,
    SettingsMenu = 3,
    EMainMenuState_MAX = 4,
};

enum class EMapLayerFilterListState {
    Enabled = 0,
    Disabled = 1,
    Collapsed = 2,
    EMapLayerFilterListState_MAX = 3,
};

enum EMarvinStates {
    None = 0,
    M = 1,
    A = 2,
    R = 3,
    V = 4,
    I = 5,
    N = 6,
    EMarvinStates_MAX = 7,
};

enum class EMovementAction {
    None = 0,
    LowClimbimg = 1,
    HighClimbimg = 2,
    Rolling = 3,
    GettingUp = 4,
    Jumping = 5,
    LayingDown = 6,
    Interact = 7,
    Interaction = 8,
    Pivoting = 9,
    StartFlying = 10,
    Fishing = 11,
    CastingSpell = 12,
    LaunchingSpell = 13,
    Dodge = 14,
    Attack = 15,
    Count = 16,
    EMovementAction_MAX = 17,
};

enum class EMovementActionNotifyState {
    None = 0,
    Begin = 1,
    End = 2,
    Count = 3,
    EMovementActionNotifyState_MAX = 4,
};

enum class EMovementDirection {
    Forward = 0,
    Right = 1,
    Left = 2,
    Backward = 3,
    Count = 4,
    EMovementDirection_MAX = 5,
};

enum class EMovementState {
    None = 0,
    Grounded = 1,
    Swimming = 2,
    Falling = 3,
    Flying = 4,
    Climbing = 5,
    Traversing = 6,
    RagDoll = 7,
    Interaction = 8,
    Ladder = 9,
    Riding = 10,
    WallClimbing = 11,
    Floating = 12,
    Count = 13,
    EMovementState_MAX = 14,
};

enum class EMultiStageState {
    None = 0,
    WrongStation = 1,
    CorrectStation = 2,
    EMultiStageState_MAX = 3,
};

enum class EMusicMode {
    Menu = 0,
    Game = 1,
    Death = 2,
    Credits = 3,
    Cutscene = 4,
    BossFight = 5,
    EMusicMode_MAX = 6,
};

enum EMusicStartPosition {
    Start = 0,
    Random = 1,
    EMusicStartPosition_MAX = 2,
};

enum class ENPCSpawnMode {
    None = 0,
    PreloadOnly = 1,
    SpawnAfterEverythingIsLoaded = 2,
    SpawnViaBlockingLoad = 3,
    ENPCSpawnMode_MAX = 4,
};

enum class ENPCSpawnState {
    None = 0,
    SimulationOnly = 1,
    PreloadComplete = 2,
    WaitingForResourcesToLoad = 3,
    WaitingForLevelStreaming = 4,
    WaitingForMutable = 5,
    WaitingForNavigation = 6,
    WaitingForBudgetToSpawnActor = 7,
    SpawnedAndHiddenForOneFrame = 8,
    SpawnedAndVisible = 9,
    ENPCSpawnState_MAX = 10,
};

enum class ENPCUnSpawnMode {
    Everything = 0,
    KeepPreloaded = 1,
    ENPCUnSpawnMode_MAX = 2,
};

enum class ENavLinkState {
    NotSetUp = 0,
    Open = 1,
    Closed = 2,
    ENavLinkState_MAX = 3,
};

enum class ENavigationAgent {
    First = 0,
    Invalid = 15,
    ENavigationAgent_MAX = 16,
};

enum ENavigationNotSetupReason {
    NavigationSystemMissing = 0,
    NavigationDataMissing = 1,
    NavBoundsVolumeMissing = 2,
    GothicWorldActorMissing = 3,
    ENavigationNotSetupReason_MAX = 4,
};

enum class ENavigationType {
    Walk = 0,
    Swim = 1,
    Fly = 2,
    Count = 3,
    ENavigationType_MAX = 4,
};

enum class ENotificationGameplayTagEventType {
    New = 0,
    Removed = 1,
    ENotificationGameplayTagEventType_MAX = 2,
};

enum class ENotificationGameplayTagType {
    ExactTag = 0,
    TagAndAllChildTags = 1,
    OnlyLeafChildTags = 2,
    ENotificationGameplayTagType_MAX = 3,
};

namespace ENpcTalentsTypes {
    enum Type {
        NPC_TALENT_1H = 0,
        NPC_TALENT_2H = 1,
        NPC_TALENT_BOW = 2,
        NPC_TALENT_CROSSBOW = 3,
        NPC_TALENT_PICKLOCK = 4,
        NPC_TALENT_PICKPOCKET = 5,
        NPC_TALENT_SNEAK = 6,
        NPC_TALENT_MAGE = 7,
        Max = 8,
    };
}

enum class EOpenObjectState {
    None = 0,
    GoingToPosition = 1,
    PlayingIntroAnimation = 2,
    Unlocking = 3,
    Unlocked = 4,
    Opened = 5,
    Closed = 6,
    EOpenObjectState_MAX = 7,
};

enum class EOwnershipRelationFlags {
    None = 0,
    GuildSpecific = 1,
    GuildViaArea = 2,
    PersonalSpecific = 4,
    PersonalViaArea = 8,
    OtherGuild = 16,
    OtherPersonal = 32,
    Personal = 12,
    Guild = 3,
    Myself = 15,
    Other = 48,
    AnyOwnership = 255,
    EOwnershipRelationFlags_MAX = 256,
};

enum class EParryMode {
    ModeA = 0,
    ModeB = 1,
    EParryMode_MAX = 2,
};

enum class EPathResultReason {
    None = 0,
    UnreliableWaynet = 1,
    RequestStarted = 2,
    AlreadyAtGoal = 3,
    F_Waynet_Islands = 4,
    F_Waynet_StartNodeNotFound = 5,
    F_Waynet_EndNodeNotFound = 6,
    F_Waynet_PathingFailed = 7,
    F_Waynet_CostLimitReached = 8,
    F_Waynet_LengthLimitReached = 9,
    F_Waynet_WaynetNotPresent = 10,
    F_NavMesh_PathingFailed = 11,
    F_NavMesh_ProjectionFailedStart = 12,
    F_NavMesh_ProjectionFailedGoal = 13,
    F_NavMesh_SearchLimitReached = 14,
    F_NavLink_TryPrepareParkourAction = 15,
    F_NavLink_TraverseAbilityNotStarted = 16,
    S_NavLink_Traverse = 17,
    F_Follow_Blocked = 18,
    F_Follow_RequestFailed = 19,
    F_Follow_OffPath = 20,
    F_Follow_RequestInvalid = 21,
    F_Follow_AbortMove = 22,
    EPathResultReason_MAX = 23,
};

enum EPerceptionActivationType {
    Disabled = 0,
    Enabled = 1,
    EnableOnThrow = 2,
    EPerceptionActivationType_MAX = 3,
};

enum class EPerceptionNoiseLoudness {
    Silent = 0,
    Whisper = 1,
    Quiet = 2,
    Moderate = 3,
    Loud = 4,
    VeryLoud = 5,
    Count = 6,
    EPerceptionNoiseLoudness_MAX = 7,
};

enum class EPerceptionSense {
    None = 0,
    See = 1,
    Hear = 2,
    Smell = 3,
    Count = 4,
    EPerceptionSense_MAX = 5,
};

enum class EPerceptionSoundLengthType {
    Instant = 0,
    Continuous = 1,
    Duration = 2,
    EPerceptionSoundLengthType_MAX = 3,
};

enum class EPickpocketDifficultyType {
    None = 0,
    VeryEasy = 1,
    Easy = 2,
    Risky = 3,
    Hard = 4,
    VeryHard = 5,
    Impossible = 6,
    EPickpocketDifficultyType_MAX = 7,
};

enum class EPivotTrigger {
    None = 0,
    Left_90 = 1,
    Right_90 = 2,
    Left_135 = 3,
    Right_135 = 4,
    Left_180 = 5,
    Right_180 = 6,
    EPivotTrigger_MAX = 7,
};

enum class EPlayerControllerState {
    MainGame = 0,
    UI = 1,
    EPlayerControllerState_MAX = 2,
};

enum class EPlayerGuild {
    None = 0,
    Templars = 1,
    Novices = 2,
    MagesWater = 3,
    Mercenaries = 4,
    Rogues = 5,
    MagesFire = 6,
    Guards = 7,
    Shadows = 8,
    EPlayerGuild_MAX = 9,
};

enum class EPreferredLocationKind {
    None = 0,
    InteractionSpot = 1,
    Position = 2,
    StartingPosition = 3,
    EPreferredLocationKind_MAX = 4,
};

enum class EProxy {
    None = 0,
    Bottom = 1,
    WeaponBase = 2,
    Side = 3,
    Hanging = 4,
    Pivot = 5,
    EProxy_MAX = 6,
};

enum class EPuzzleEvent {
    DeathEvent = 0,
    OpenDoor = 1,
    Teleport = 2,
    EPuzzleEvent_MAX = 3,
};

enum class EQuestKind {
    None = 0,
    Main = 1,
    Side = 2,
    Subobjective = 3,
    EQuestKind_MAX = 4,
};

enum class EQuestSortOrder {
    None = 0,
    UnlockTime_NewestFirst = 1,
    UnlockTime_NewestLast = 2,
    StartTime_NewestFirst = 3,
    StartTime_NewestLast = 4,
    LastUpdateTime_NewestFirst = 5,
    LastUpdateTime_NewestLast = 6,
    Name = 7,
    EQuestSortOrder_MAX = 8,
};

enum class EQuestState {
    None = 0,
    Available = 1,
    Running = 2,
    Failed = 3,
    Succeeded = 4,
    EQuestState_MAX = 5,
};

enum class EQuickSlotType {
    Wheel = 0,
    Hotbar = 1,
    Crossbar = 2,
    TransformedHotbar = 3,
    EQuickSlotType_MAX = 4,
};

enum class ERagdollState {
    None = 0,
    WaitingToStart = 1,
    Running = 2,
    WaitingToEnd = 3,
    ERagdollState_MAX = 4,
};

enum class ERangedWeaponState {
    Idle = 0,
    Ready = 1,
    Aim = 2,
    ERangedWeaponState_MAX = 3,
};

enum class EReactionType {
    ReactToCamera = 0,
    ReactToPlayer = 1,
    EReactionType_MAX = 2,
};

enum class EReceiverEventActor {
    INSTIGATOR = 0,
    TARGET = 1,
    EReceiverEventActor_MAX = 2,
};

enum class ERelationship {
    Unknown = 0,
    Enemy = 1,
    Hostile = 2,
    Angry = 3,
    Neutral = 4,
    Friend = 5,
    Count = 6,
    ERelationship_MAX = 7,
};

enum class ERelationshipHostility {
    Unknown = 0,
    None = 1,
    Help = 2,
    FleeOnSight = 3,
    ReportToGuardsWithinReason = 4,
    ReportToGuardsOnSight = 5,
    DemandPaymentForCrimes = 6,
    AttackWithinReason = 7,
    ProtectFromNonFriendly = 8,
    ProtectFromCreature = 9,
    ProtectFromDifferentGuild = 10,
    ProtectFromDifferentGuild_Jurisdiction = 11,
    ProtectFromDifferentGuild_Premium = 12,
    AttackOnSight = 13,
    AttackWithFistsOnSight = 14,
    AttackWithFistsWithinReason = 15,
    TrainingFight = 16,
    Predator = 17,
    Prey = 18,
    LowThreatMagicTarget = 19,
    FollowOnSight = 20,
    CloseFriend = 21,
    MagicFear = 22,
    Loot = 23,
    Execute = 24,
    Count = 25,
    ERelationshipHostility_MAX = 26,
};

enum class ERelationshipRelativeRank {
    Unknown = 0,
    Scum = 1,
    LowerThanMe = 2,
    Same = 3,
    HigherThanMe = 4,
    Boss = 5,
    Count = 6,
    ERelationshipRelativeRank_MAX = 7,
};

enum class ERelativeCrimeOrigin {
    Witness = 0,
    ConflictSync = 1,
    PathwaySync = 2,
    Unknown = 3,
    ERelativeCrimeOrigin_MAX = 4,
};

enum class ERequestPathVelocityInstigator {
    Pathfollowing = 0,
    ClimbTask = 1,
    DirectMoveTask = 2,
    COUNT = 3,
    ERequestPathVelocityInstigator_MAX = 4,
};

enum class EResourceDisplayMode {
    Normal = 0,
    Short = 1,
    Count = 2,
    EResourceDisplayMode_MAX = 3,
};

enum class EResourceLoadPriority {
    Normal = 0,
    GeneralConfig = 1,
    Player = 2,
    EResourceLoadPriority_MAX = 3,
};

enum class ERiderLocation {
    RIGHT = 0,
    LEFT = 1,
    BACK = 2,
    NONE = 3,
    ERiderLocation_MAX = 4,
};

enum class ERotationMode {
    LookingDirection = 0,
    VelocityDirection = 1,
    Aiming = 2,
    PointOfInterest = 3,
    Count = 4,
    ERotationMode_MAX = 5,
};

enum class ESaveStatus {
    None = 0,
    WaitingGameSave = 1,
    WaitingCreateProfile = 2,
    SavingGame = 3,
    LoadingGame = 4,
    SavingOnlyProfile = 5,
    ESaveStatus_MAX = 6,
};

enum class EScriptableCrowdAvoidanceQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    High_BoldMove = 3,
    High_CarefulCombat = 4,
    EScriptableCrowdAvoidanceQuality_MAX = 5,
};

enum class ESelectionType {
    Next = 0,
    Random = 1,
    ESelectionType_MAX = 2,
};

enum class ESettingObject_Enum_WidgetType {
    Spinner = 0,
    Dropdown = 1,
    ESettingObject_Enum_MAX = 2,
};

enum class ESettingsMainWidget_Context {
    None = 0,
    MainMenu = 1,
    InGame = 2,
    ESettingsMainWidget_MAX = 3,
};

enum class ESettingsMessagePriority {
    Lowest = 0,
    Lower = 1,
    Low = 2,
    Normal = 3,
    High = 4,
    Higher = 5,
    Highest = 6,
    ESettingsMessagePriority_MAX = 7,
};

enum class ESettingsMessageState {
    Hidden = 0,
    FadingIn = 1,
    Shown = 2,
    FadingOut = 3,
    ESettingsMessageState_MAX = 4,
};

enum class ESettingsPlatforms {
    Windows = 0,
    XSX = 1,
    PS5 = 2,
    ESettingsPlatforms_MAX = 3,
};

enum class ESettingsType {
    Invalid = 0,
    Bool = 1,
    Int = 2,
    Enum = 3,
    Float = 4,
    KeyMapping = 5,
    ESettingsType_MAX = 6,
};

enum class ESlimeManagerActions {
    Disable = 0,
    Enable = 1,
    StartSlimeBreakEffect = 2,
    Sync = 3,
    StartFadeIn = 4,
    ESlimeManagerActions_MAX = 5,
};

enum class ESlimeName {
    All = 0,
    SlimeAgressive = 1,
    SlimeAttack = 2,
    SlimeDeath = 3,
    SlimeHit = 4,
    SlimeLower = 5,
    SlimeRaised = 6,
    SlimeStunned = 7,
    ESlimeName_MAX = 8,
};

enum class ESpawningRequestPersistenceType {
    None = 0,
    Persistent = 1,
    Released = 2,
    ESpawningRequestPersistenceType_MAX = 3,
};

enum class ESpawningRequestPrioriy {
    Normal = 0,
    Mandatory = 1,
    ESpawningRequestPrioriy_MAX = 2,
};

enum class ESpellManaUsage {
    Normal = 0,
    Rechargeable = 1,
    TargetLevel = 2,
    Continuous = 3,
    NormalContinuous = 4,
    ESpellManaUsage_MAX = 5,
};

enum class ESpellTargetType {
    None = 0,
    Focused = 1,
    Dynamic = 2,
    Area = 3,
    Caster = 4,
    FocusedOrCaster = 5,
    CustomTarget = 6,
    ESpellTargetType_MAX = 7,
};

enum class EStance {
    Standing = 0,
    Crouching = 1,
    Sitting = 2,
    Laying = 3,
    Riding = 4,
    Count = 5,
    EStance_MAX = 6,
};

enum class EStatEntryWidget_MasteryLevel {
    Untrained = 0,
    Trained = 1,
    Master = 2,
    EStatEntryWidget_MAX = 3,
};

enum class EStatEntryWidget_SkillType {
    Binary = 0,
    Mastery = 1,
    EStatEntryWidget_MAX = 2,
};

enum class EStatEntryWidget_StatType {
    Attribute = 0,
    Skill = 1,
    EStatEntryWidget_MAX = 2,
};

enum class EStateBasedActionStage {
    WaitForManualStart = 0,
    SimulatingRoutine = 1,
    None = 2,
    WaitingForUnblock = 3,
    ReadyForAction = 4,
    WaitingForActionToStart = 5,
    DoingAction = 6,
    FinishingAction = 7,
    ActionCompleted = 8,
    Done = 9,
    EStateBasedActionStage_MAX = 10,
};

enum class EStencilsUsage {
    None = 0,
    OutlineInSight = 1,
    OutlineAction = 2,
    TelekinesisOnRange = 3,
    TelekinesisOutOfRange = 4,
    EStencilsUsage_MAX = 5,
};

enum class EStoryActionRegionRequirementsMode {
    Fulfilled = 0,
    NotFulfilled = 1,
    EStoryActionRegionRequirementsMode_MAX = 2,
};

enum class ESwimType {
    Normal = 0,
    Diving = 1,
    Count = 2,
    ESwimType_MAX = 3,
};

enum class ETattooType {
    Head = 0,
    Torso = 1,
    Legs = 2,
    None = 3,
    ETattooType_MAX = 4,
};

enum class ETeleportCharacterState {
    Idle = 0,
    EnableStreamingSource = 1,
    DisableStreamingSource = 2,
    Start = 3,
    Stop = 4,
    ETeleportCharacterState_MAX = 5,
};

enum class ETradingOutcome {
    PlayerGetXOre = 0,
    PlayerPaysXOre = 1,
    PlayerNeedsX = 2,
    ETradingOutcome_MAX = 3,
};

enum class ETraverseMoveToPoint {
    FirstPoint = 0,
    LastPoint = 1,
    ETraverseMoveToPoint_MAX = 2,
};

enum class EUICraftingStates {
    Default = 0,
    ForgeOpened = 1,
    ForgeStarted = 2,
    ForgeFinished = 3,
    AnvilStarted = 4,
    AnvilFinished = 5,
    BarrelStarted = 6,
    BarrelFinished = 7,
    ExitDefault = 8,
    ExitInProgress = 9,
    EUICraftingStates_MAX = 10,
};

enum class EUIStatType {
    Attribute = 0,
    Protection = 1,
    Fighting = 2,
    SpecialSkills = 3,
    EUIStatType_MAX = 4,
};

enum class EUpscalingMethod {
    None = 0,
    DLSS = 1,
    FSR = 2,
    XeSS = 3,
    TSR = 4,
    UpscalingMethod_MAX = 5,
    EUpscalingMethod_MAX = 6,
};

enum class EUpscalingQualityDLSS {
    DLSS_SR_Performance = 0,
    DLSS_SR_Balanced = 1,
    DLSS_SR_Quality = 2,
    DLAA = 3,
    UpscalingQualityDLSS_MAX = 4,
    EUpscalingQualityDLSS_MAX = 5,
};

enum class EUpscalingQualityFSR {
    NativeAA = 0,
    Quality = 1,
    Balanced = 2,
    Performance = 3,
    UltraPerformance = 4,
    UpscalingQualityFSR_MAX = 5,
    EUpscalingQualityFSR_MAX = 6,
};

enum class EUpscalingQualityTSR {
    Performance = 0,
    Balanced = 1,
    Quality = 2,
    UltraQuality = 3,
    Native = 4,
    UpscalingQualityTSR_MAX = 5,
    EUpscalingQualityTSR_MAX = 6,
};

enum class EUpscalingQualityXeSS {
    UltraPerformance = 0,
    Performance = 1,
    Balanced = 2,
    Quality = 3,
    UltraQuality = 4,
    UltraQualityPlus = 5,
    AntiAliasing = 6,
    UpscalingQualityXeSS_MAX = 7,
    EUpscalingQualityXeSS_MAX = 8,
};

enum class EVertexColor {
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    EVertexColor_MAX = 4,
};

enum class EVerticalAlignmenet {
    TOP = 0,
    DOWN = 1,
    CENTER = 2,
    EVerticalAlignmenet_MAX = 3,
};

enum class EViabilityStatus {
    Valid = 0,
    AlwaysValid = 1,
    ObstructedView = 2,
    ZeroWeight = 3,
    NotOnWhitelist = 4,
    HeightThresholdFail = 5,
    DistanceThresholdFail = 6,
    InternalCheckFail = 7,
    UnspecifiedFail = 8,
    AdditionalParticipantFail = 9,
    ForbiddenInvert = 10,
    SpeakerMissingRequiredTags = 11,
    ListenerMissingRequiredTags = 12,
    SpeakerOrListenerMissingRequiredTags = 13,
    SpeakerHasForbiddenTags = 14,
    ListenerHasForbiddenTags = 15,
    SpeakerOrListenerHasForbiddenTags = 16,
    MoreParticipantsThanAllowed = 17,
    LessParticipantsThanAllowed = 18,
    EViabilityStatus_MAX = 19,
};

enum class EViewMode {
    VMThirdPerson = 0,
    VMFirstPerson = 1,
    EViewMode_MAX = 2,
};

enum class EVisualCarrySlot {
    None = 0,
    RightHand = 1,
    LeftHand = 2,
    InventorySlot = 3,
    EVisualCarrySlot_MAX = 4,
};

enum class EWalkSpeed {
    Walking = 0,
    Running = 1,
    Sprinting = 2,
    Count = 3,
    EWalkSpeed_MAX = 4,
};

enum class EWallClimbLinkStatus {
    Errorous = 0,
    NormalClimb = 1,
    JumpAndClimbDown = 2,
    JumpAndClimbUp = 3,
    ClimbToDrop_TopToBottom = 4,
    ClimbToDrop_BottomSideways = 5,
    EWallClimbLinkStatus_MAX = 6,
};

enum EWaynetRelevantFailReason {
    NoEnabledEntryPoints = 0,
    HasNoWaynetNodeEntry = 1,
    ShouldHaveAtLeast2Nodes = 2,
    BelongsToAnIsland = 3,
    EWaynetRelevantFailReason_MAX = 4,
};

enum class EWeaponSkill {
    None = 0,
    Untrained = 1,
    Trained = 2,
    Master = 3,
    EWeaponSkill_MAX = 4,
};

enum class EWeaponType {
    Melee = 0,
    Ranged = 1,
    EWeaponType_MAX = 2,
};

enum class EWeather {
    Sunny = 0,
    Rain_Level1 = 1,
    Rain_Level2 = 2,
    Rain_Level3 = 3,
    Cloudy = 4,
    Count = 5,
    EWeather_MAX = 6,
};

enum class EWeatherEvent {
    Sunny = 0,
    Rain = 1,
    Cloud = 2,
    Snow = 3,
    Sand = 4,
    EWeatherEvent_MAX = 5,
};

enum class EWeekDay {
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6,
    Count = 7,
    EWeekDay_MAX = 8,
};

enum class EWinchState {
    None = 0,
    Enter = 1,
    Idle = 2,
    MoveRight = 3,
    RightFailure = 4,
    MoveFastRight = 5,
    MoveLeft = 6,
    LeftFailure = 7,
    MoveFastLeft = 8,
    Exit = 9,
    EWinchState_MAX = 10,
};

enum class EWorldItemState {
    Default = 0,
    Waiting = 1,
    Dropped = 2,
    FinalDestination = 3,
    EWorldItemState_MAX = 4,
};

enum class EWorldPointElementType {
    WorldPoint = 0,
    Dropped = 1,
    EWorldPointElementType_MAX = 2,
};

enum class ModifyState {
    Idle = 0,
    Applied = 1,
    Disposed = 2,
    ModifyState_MAX = 3,
};

