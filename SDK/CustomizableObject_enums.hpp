enum class ECOResourceDataType {
    None = 0,
    AssetUserData = 1,
    ECOResourceDataType_MAX = 2,
};

enum class ECustomizableObjectGroupType {
    COGT_TOGGLE = 0,
    COGT_ALL = 1,
    COGT_ONE = 2,
    COGT_ONE_OR_NONE = 3,
    COGT_MAX = 4,
};

enum class ECustomizableObjectNumBoneInfluences {
    Four = 4,
    Eight = 8,
    Twelve = 12,
    ECustomizableObjectNumBoneInfluences_MAX = 13,
};

enum class ECustomizableObjectProjectorType {
    Planar = 0,
    Cylindrical = 1,
    Wrapping = 2,
    ECustomizableObjectProjectorType_MAX = 3,
};

enum class ECustomizableObjectTextureCompression {
    None = 0,
    Fast = 1,
    HighQuality = 2,
    ECustomizableObjectTextureCompression_MAX = 3,
};

enum class EMutableCompileMeshType {
    Full = 0,
    Local = 1,
    LocalAndChildren = 2,
    AddWorkingSetNoChildren = 3,
    AddWorkingSetAndChildren = 4,
    EMutableCompileMeshType_MAX = 5,
};

enum class EMutableParameterType {
    None = 0,
    Bool = 1,
    Int = 2,
    Float = 3,
    Color = 4,
    Projector = 5,
    Texture = 6,
    EMutableParameterType_MAX = 7,
};

enum class EPackageSaveResolutionType {
    None = 0,
    NewFile = 1,
    Overriden = 2,
    UnableToOverride = 3,
    EPackageSaveResolutionType_MAX = 4,
};

enum class EUpdateResult {
    Success = 0,
    Warning = 1,
    Error = 2,
    ErrorOptimized = 3,
    ErrorReplaced = 4,
    ErrorDiscarded = 5,
    Error16BitBoneIndex = 6,
    EUpdateResult_MAX = 7,
};

