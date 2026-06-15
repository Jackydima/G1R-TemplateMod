enum class EBugReportScreenShotMode {
    None = 0,
    EditorActiveWindow = 1,
    EditorLevelViewport = 2,
    EditorAllWindows = 3,
    Game = 4,
    GameNoUI = 5,
    EBugReportScreenShotMode_MAX = 6,
};

enum class EIssueDataResource {
    Fields = 0,
    Attachments = 1,
    Comments = 2,
    Checklists = 3,
    History = 4,
    Transitions = 5,
    Count = 6,
    EIssueDataResource_MAX = 7,
};

enum class EIssueDataResourceAvailability {
    NotSupported = 0,
    AlwaysAvailable = 1,
    ContentOnDemand = 2,
    OnDemand = 3,
    EIssueDataResourceAvailability_MAX = 4,
};

enum class EIssueFieldType {
    String = 0,
    MultilineString = 1,
    Int = 2,
    Bool = 3,
    Float = 4,
    Enum = 5,
    MultiValueEnum = 6,
    DateAndTime = 7,
    StringEmptyText = 8,
    MultilineStringEmptyText = 9,
    IntEmptyText = 10,
    FloatEmptyText = 11,
    DateAndTimeEmptyText = 12,
    PeriodEmptyText = 13,
    Unsupported = 14,
    EIssueFieldType_MAX = 15,
};

enum class EIssueProfile {
    Default = 0,
    Game = 1,
    Editor = 2,
    Crash = 3,
    Feedback = 4,
    EIssueProfile_MAX = 5,
};

enum class EIssueResourceState {
    NotFetched = 0,
    Fetching = 1,
    Fetched = 2,
    EIssueResourceState_MAX = 3,
};

enum class EIssueViewMode {
    None = 0,
    View = 1,
    Edit = 2,
    Report = 3,
    EIssueViewMode_MAX = 4,
};

enum class ELbtDateAndTimeMode {
    Default = 0,
    DateAndTime = 1,
    OptionalTime = 2,
    DateOnly = 3,
    ELbtDateAndTimeMode_MAX = 4,
};

