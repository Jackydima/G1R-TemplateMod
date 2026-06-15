#ifndef UE4SS_SDK_S_TorchData_HPP
#define UE4SS_SDK_S_TorchData_HPP

struct FS_TorchData
{
    bool IsLightActive_5_4B79DF74445B1EC39C6ABE864D1078A4;                            // 0x0000 (size: 0x1)
    bool DisableOnlyLight_26_1C4AA17449536AA843875A9FD238A953;                        // 0x0001 (size: 0x1)
    double LightRadius_11_A4FA94A64CA7565B91050DB1E811BED5;                           // 0x0008 (size: 0x8)
    double LightIntensity_12_EB32938C4E781561109216B13EB7D794;                        // 0x0010 (size: 0x8)
    FLinearColor LightColor_21_FE06F970401611D79C72FF988B485DA7;                      // 0x0018 (size: 0x10)
    bool UseTemperature_20_D46186E54A44E376DA073EAF8E362E37;                          // 0x0028 (size: 0x1)
    double TemperatureIntensity_13_5B2CEC23420F5375E3FEAA802B2E1614;                  // 0x0030 (size: 0x8)
    bool CustomIndirectLightIntensity_31_1BEEB40F4050B7D2B138758249F1B832;            // 0x0038 (size: 0x1)
    double IndirectLightIntensity_32_5EFA8BCB4E9C5D5CDC21AAB1E716EA0E;                // 0x0040 (size: 0x8)
    double VolumetricScatteringIntensity_24_DD05573847A5CDC868579D86D6401BFB;         // 0x0048 (size: 0x8)
    bool CastShadows_23_A4E4C635476B0F9E57910CAFD8EE69A6;                             // 0x0050 (size: 0x1)

}; // Size: 0x51

#endif
