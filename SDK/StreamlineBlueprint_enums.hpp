enum class EStreamlineFeature {
    DLSSG = 0,
    Reflex = 1,
    DeepDVC = 2,
    Count = 3,
    EStreamlineFeature_MAX = 4,
};

enum class EStreamlineFeatureRequirementsFlags {
    None = 0,
    D3D11Supported = 1,
    D3D12Supported = 2,
    VulkanSupported = 4,
    VSyncOffRequired = 8,
    HardwareSchedulingRequired = 16,
    EStreamlineFeatureRequirementsFlags_MAX = 17,
};

enum class EStreamlineFeatureSupport {
    Supported = 0,
    NotSupported = 1,
    NotSupportedIncompatibleHardware = 2,
    NotSupportedDriverOutOfDate = 3,
    NotSupportedOperatingSystemOutOfDate = 4,
    NotSupportedHardewareSchedulingDisabled = 5,
    NotSupportedByRHI = 6,
    NotSupportedByPlatformAtBuildTime = 7,
    NotSupportedIncompatibleAPICaptureToolActive = 8,
    EStreamlineFeatureSupport_MAX = 9,
};

