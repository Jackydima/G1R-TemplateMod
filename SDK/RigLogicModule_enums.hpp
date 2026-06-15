enum class EActivationFunction {
    Linear = 0,
    ReLU = 1,
    LeakyReLU = 2,
    Tanh = 3,
    Sigmoid = 4,
    EActivationFunction_MAX = 5,
};

enum class EArchetype {
    Asian = 0,
    Black = 1,
    Caucasian = 2,
    Hispanic = 3,
    Alien = 4,
    Other = 5,
    EArchetype_MAX = 6,
};

enum class EDNADataLayer {
    None = 0,
    Descriptor = 1,
    Definition = 3,
    Behavior = 7,
    Geometry = 11,
    GeometryWithoutBlendShapes = 19,
    MachineLearnedBehavior = 35,
    All = 47,
    EDNADataLayer_MAX = 48,
};

enum class EDirection {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Front = 4,
    Back = 5,
    EDirection_MAX = 6,
};

enum class EGender {
    Male = 0,
    Female = 1,
    Other = 2,
    EGender_MAX = 3,
};

enum class ELodUpdateOption {
    LOD0Only = 0,
    LOD1AndHigher = 1,
    All = 2,
    ELodUpdateOption_MAX = 3,
};

enum class ERigLogicCalculationType {
    Scalar = 0,
    SSE = 1,
    AVX = 2,
    ERigLogicCalculationType_MAX = 3,
};

enum class ERotationUnit {
    Degrees = 0,
    Radians = 1,
    ERotationUnit_MAX = 2,
};

enum class ETranslationUnit {
    CM = 0,
    M = 1,
    ETranslationUnit_MAX = 2,
};

