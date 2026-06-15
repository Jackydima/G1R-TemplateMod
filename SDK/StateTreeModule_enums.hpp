enum class EStateTreeBindableStructSource {
    Context = 0,
    Parameter = 1,
    Evaluator = 2,
    GlobalTask = 3,
    State = 4,
    Task = 5,
    Condition = 6,
    EStateTreeBindableStructSource_MAX = 7,
};

enum class EStateTreeBlueprintPropertyCategory {
    NotSet = 0,
    Input = 1,
    Parameter = 2,
    Output = 3,
    ContextObject = 4,
    EStateTreeBlueprintPropertyCategory_MAX = 5,
};

enum class EStateTreeBreakpointType {
    Unset = 0,
    OnEnter = 1,
    OnExit = 2,
    OnTransition = 3,
    EStateTreeBreakpointType_MAX = 4,
};

enum class EStateTreeConditionEvaluationMode {
    Evaluated = 0,
    ForcedTrue = 1,
    ForcedFalse = 2,
    EStateTreeConditionEvaluationMode_MAX = 3,
};

enum class EStateTreeConditionOperand {
    Copy = 0,
    And = 1,
    Or = 2,
    EStateTreeConditionOperand_MAX = 3,
};

enum class EStateTreeDataSourceType {
    None = 0,
    GlobalInstanceData = 1,
    GlobalInstanceDataObject = 2,
    ActiveInstanceData = 3,
    ActiveInstanceDataObject = 4,
    SharedInstanceData = 5,
    SharedInstanceDataObject = 6,
    ContextData = 7,
    ExternalData = 8,
    GlobalParameterData = 9,
    SubtreeParameterData = 10,
    StateParameterData = 11,
    EStateTreeDataSourceType_MAX = 12,
};

enum class EStateTreeExternalDataRequirement {
    Required = 0,
    Optional = 1,
    EStateTreeExternalDataRequirement_MAX = 2,
};

enum class EStateTreeLinkerStatus {
    Succeeded = 0,
    Failed = 1,
    EStateTreeLinkerStatus_MAX = 2,
};

enum class EStateTreeLoopEvents {
    Next = 0,
    Break = 1,
    EStateTreeLoopEvents_MAX = 2,
};

enum class EStateTreePropertyAccessType {
    Offset = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    ObjectInstance = 4,
    StructInstance = 5,
    IndexArray = 6,
    EStateTreePropertyAccessType_MAX = 7,
};

enum class EStateTreePropertyCopyType {
    None = 0,
    CopyPlain = 1,
    CopyComplex = 2,
    CopyBool = 3,
    CopyStruct = 4,
    CopyObject = 5,
    CopyName = 6,
    CopyFixedArray = 7,
    StructReference = 8,
    PromoteBoolToByte = 9,
    PromoteBoolToInt32 = 10,
    PromoteBoolToUInt32 = 11,
    PromoteBoolToInt64 = 12,
    PromoteBoolToFloat = 13,
    PromoteBoolToDouble = 14,
    PromoteByteToInt32 = 15,
    PromoteByteToUInt32 = 16,
    PromoteByteToInt64 = 17,
    PromoteByteToFloat = 18,
    PromoteByteToDouble = 19,
    PromoteInt32ToInt64 = 20,
    PromoteInt32ToFloat = 21,
    PromoteInt32ToDouble = 22,
    PromoteUInt32ToInt64 = 23,
    PromoteUInt32ToFloat = 24,
    PromoteUInt32ToDouble = 25,
    PromoteFloatToInt32 = 26,
    PromoteFloatToInt64 = 27,
    PromoteFloatToDouble = 28,
    DemoteDoubleToInt32 = 29,
    DemoteDoubleToInt64 = 30,
    DemoteDoubleToFloat = 31,
    EStateTreePropertyCopyType_MAX = 32,
};

enum class EStateTreePropertyUsage {
    Invalid = 0,
    Context = 1,
    Input = 2,
    Parameter = 3,
    Output = 4,
    EStateTreePropertyUsage_MAX = 5,
};

enum class EStateTreeRunStatus {
    Running = 0,
    Failed = 1,
    Succeeded = 2,
    Stopped = 3,
    Unset = 4,
    EStateTreeRunStatus_MAX = 5,
};

enum class EStateTreeSelectionFallback {
    None = 0,
    NextSelectableSibling = 1,
    EStateTreeSelectionFallback_MAX = 2,
};

enum class EStateTreeStateChangeType {
    None = 0,
    Changed = 1,
    Sustained = 2,
    EStateTreeStateChangeType_MAX = 3,
};

enum class EStateTreeStateSelectionBehavior {
    None = 0,
    TryEnterState = 1,
    TrySelectChildrenInOrder = 2,
    TryFollowTransitions = 3,
    EStateTreeStateSelectionBehavior_MAX = 4,
};

enum class EStateTreeStateType {
    State = 0,
    Group = 1,
    Linked = 2,
    LinkedAsset = 3,
    Subtree = 4,
    EStateTreeStateType_MAX = 5,
};

enum class EStateTreeTraceEventType {
    Unset = 0,
    OnEntering = 1,
    OnEntered = 2,
    OnExiting = 3,
    OnExited = 4,
    Push = 5,
    Pop = 6,
    OnStateSelected = 7,
    OnStateCompleted = 8,
    OnTicking = 9,
    OnTaskCompleted = 10,
    OnTicked = 11,
    Passed = 12,
    Failed = 13,
    ForcedSuccess = 14,
    ForcedFailure = 15,
    InternalForcedFailure = 16,
    OnEvaluating = 17,
    OnTransition = 18,
    OnTreeStarted = 19,
    OnTreeStopped = 20,
    EStateTreeTraceEventType_MAX = 21,
};

enum class EStateTreeTransitionPriority {
    None = 0,
    Normal = 1,
    Medium = 2,
    High = 3,
    Critical = 4,
    EStateTreeTransitionPriority_MAX = 5,
};

enum class EStateTreeTransitionSourceType {
    Unset = 0,
    Asset = 1,
    ExternalRequest = 2,
    Internal = 3,
    EStateTreeTransitionSourceType_MAX = 4,
};

enum class EStateTreeTransitionTrigger {
    None = 0,
    OnStateCompleted = 3,
    OnStateSucceeded = 1,
    OnStateFailed = 2,
    OnTick = 4,
    OnEvent = 8,
    MAX = 9,
};

enum class EStateTreeTransitionType {
    None = 0,
    Succeeded = 1,
    Failed = 2,
    GotoState = 3,
    NextState = 4,
    NextSelectableState = 5,
    NotSet = 6,
    EStateTreeTransitionType_MAX = 7,
};

enum class EStateTreeUpdatePhase {
    Unset = 0,
    StartTree = 1,
    StopTree = 2,
    StartGlobalTasks = 3,
    StopGlobalTasks = 4,
    TickStateTree = 5,
    ApplyTransitions = 6,
    TriggerTransitions = 7,
    TickingGlobalTasks = 8,
    TickingTasks = 9,
    TransitionConditions = 10,
    StateSelection = 11,
    TrySelectBehavior = 12,
    EnterConditions = 13,
    EnterStates = 14,
    ExitStates = 15,
    StateCompleted = 16,
    EStateTreeUpdatePhase_MAX = 17,
};

