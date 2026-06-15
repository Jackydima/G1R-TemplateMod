#ifndef UE4SS_SDK_Ultra_Dynamic_Sky_HPP
#define UE4SS_SDK_Ultra_Dynamic_Sky_HPP

class AUltra_Dynamic_Sky_C : public AGothicUltraDynamicSkyAS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class ULogicalLightsourceComponent* LogicalMoon;                                  // 0x0360 (size: 0x8)
    class ULogicalLightsourceComponent* LogicalSun;                                   // 0x0368 (size: 0x8)
    class ULogicalLightsourceComponent* LogicalSkyLight;                              // 0x0370 (size: 0x8)
    class UDebugFogComponent* DebugFog;                                               // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Rainbow;                                              // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Compass;                                              // 0x0388 (size: 0x8)
    class USkyLightComponent* PathTracer Sky Light;                                   // 0x0390 (size: 0x8)
    class UPostProcessComponent* Cloud_Fog_Post Process;                              // 0x0398 (size: 0x8)
    class UArrowComponent* Moon Icon Arrow;                                           // 0x03A0 (size: 0x8)
    class UArrowComponent* Sun Icon Arrow;                                            // 0x03A8 (size: 0x8)
    class UBillboardComponent* Sun Icon;                                              // 0x03B0 (size: 0x8)
    class UBillboardComponent* Moon Icon;                                             // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Overcast_Turbulence;                                  // 0x03C0 (size: 0x8)
    class UPostProcessComponent* Lens Flare;                                          // 0x03C8 (size: 0x8)
    class USkyLightComponent* Captured Scene Sky Light;                               // 0x03D0 (size: 0x8)
    class UNiagaraComponent* Inside_Cloud_Fog;                                        // 0x03D8 (size: 0x8)
    class UVolumetricCloudComponent* VolumetricAurora;                                // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* StaticCloudsSphere;                                   // 0x03E8 (size: 0x8)
    class UBillboardComponent* Root;                                                  // 0x03F0 (size: 0x8)
    class UVolumetricCloudComponent* VolumetricCloud;                                 // 0x03F8 (size: 0x8)
    class USkyLightComponent* Cubemap Sky Light;                                      // 0x0400 (size: 0x8)
    class UPostProcessComponent* Exposure;                                            // 0x0408 (size: 0x8)
    class UExponentialHeightFogComponent* HeightFog;                                  // 0x0410 (size: 0x8)
    class UDirectionalLightComponent* Moon;                                           // 0x0418 (size: 0x8)
    class UDirectionalLightComponent* Sun;                                            // 0x0420 (size: 0x8)
    class USkyAtmosphereComponent* SkyAtmosphere;                                     // 0x0428 (size: 0x8)
    class UArrowComponent* Moon_Root;                                                 // 0x0430 (size: 0x8)
    class UArrowComponent* Sun_Root;                                                  // 0x0438 (size: 0x8)
    class UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere;                             // 0x0440 (size: 0x8)
    TEnumAsByte<UDS_FeatureToggle::Type> Sun Light;                                   // 0x0448 (size: 0x1)
    class ADirectionalLight* Custom Sun Light Actor;                                  // 0x0450 (size: 0x8)
    class UMaterialInstanceDynamic* Sky_MID;                                          // 0x0458 (size: 0x8)
    double Cloud Speed;                                                               // 0x0460 (size: 0x8)
    double Cloud Wisps Opacity (Clear);                                               // 0x0468 (size: 0x8)
    bool Refresh Settings;                                                            // 0x0470 (size: 0x1)
    double Time Of Day;                                                               // 0x0478 (size: 0x8)
    TEnumAsByte<UDS_SkyMode::Type> Sky Mode;                                          // 0x0480 (size: 0x1)
    TEnumAsByte<UDS_ColorMode::Type> Color Mode;                                      // 0x0481 (size: 0x1)
    TEnumAsByte<UDS_Project_Mode::Type> Project Mode;                                 // 0x0482 (size: 0x1)
    double Cloud Coverage;                                                            // 0x0488 (size: 0x8)
    double Fog;                                                                       // 0x0490 (size: 0x8)
    double Gothic Wind Intensity;                                                     // 0x0498 (size: 0x8)
    double Overall Intensity;                                                         // 0x04A0 (size: 0x8)
    double Cloud Direction;                                                           // 0x04A8 (size: 0x8)
    double Cloud Phase;                                                               // 0x04B0 (size: 0x8)
    bool Manually Position Moon Target;                                               // 0x04B8 (size: 0x1)
    bool Render Moon;                                                                 // 0x04B9 (size: 0x1)
    double Moon Light Intensity;                                                      // 0x04C0 (size: 0x8)
    TEnumAsByte<EComponentMobility::Type> Moon Mobility;                              // 0x04C8 (size: 0x1)
    double Moon Angle;                                                                // 0x04D0 (size: 0x8)
    double Moon Inclination;                                                          // 0x04D8 (size: 0x8)
    double Moon Vertical Offset;                                                      // 0x04E0 (size: 0x8)
    double Moon Orbit Offset;                                                         // 0x04E8 (size: 0x8)
    bool Moon Casts Shadows;                                                          // 0x04F0 (size: 0x1)
    double Moon Scale;                                                                // 0x04F8 (size: 0x8)
    double Moon Phase;                                                                // 0x0500 (size: 0x8)
    bool Moon Phase Changes Over Time;                                                // 0x0508 (size: 0x1)
    double Dark Side Brightness;                                                      // 0x0510 (size: 0x8)
    double Moon Texture Intensity (Night);                                            // 0x0518 (size: 0x8)
    bool Manually Position Sun Target;                                                // 0x0520 (size: 0x1)
    double Sun Light Intensity;                                                       // 0x0528 (size: 0x8)
    TEnumAsByte<EComponentMobility::Type> Sun Mobility;                               // 0x0530 (size: 0x1)
    double Sun Angle;                                                                 // 0x0538 (size: 0x8)
    bool Animate Time of Day;                                                         // 0x0540 (size: 0x1)
    double Contrast;                                                                  // 0x0548 (size: 0x8)
    double Sun Inclination;                                                           // 0x0550 (size: 0x8)
    double Sun Vertical Offset;                                                       // 0x0558 (size: 0x8)
    bool Sun Casts Shadows;                                                           // 0x0560 (size: 0x1)
    FLinearColor Sun Light Color;                                                     // 0x0564 (size: 0x10)
    double Moon Texture Intensity (Day);                                              // 0x0578 (size: 0x8)
    FLinearColor Moon Light Color;                                                    // 0x0580 (size: 0x10)
    double Soften Cloud Layer 1;                                                      // 0x0590 (size: 0x8)
    double Soften Cloud Layer 2;                                                      // 0x0598 (size: 0x8)
    double Sharpen Outer Edge;                                                        // 0x05A0 (size: 0x8)
    double Stars Intensity;                                                           // 0x05A8 (size: 0x8)
    FLinearColor Stars Color;                                                         // 0x05B0 (size: 0x10)
    FLinearColor Moon Material Color;                                                 // 0x05C0 (size: 0x10)
    FVector Sun Target;                                                               // 0x05D0 (size: 0x18)
    double Sun Radius;                                                                // 0x05E8 (size: 0x8)
    class UMaterialInstanceDynamic* Sun Cloud Shadows MID;                            // 0x05F0 (size: 0x8)
    bool Use Cloud Shadows;                                                           // 0x05F8 (size: 0x1)
    double Cloud Shadows Intensity When Sunny;                                        // 0x0600 (size: 0x8)
    TEnumAsByte<UDS_FeatureToggle::Type> Moon Light;                                  // 0x0608 (size: 0x1)
    class ADirectionalLight* Custom Moon Light Actor;                                 // 0x0610 (size: 0x8)
    double Stars Speed;                                                               // 0x0618 (size: 0x8)
    class UMaterialInstanceDynamic* Moon Cloud Shadows MID;                           // 0x0620 (size: 0x8)
    double New Moon Light Brightness;                                                 // 0x0628 (size: 0x8)
    double Moon Texture Rotation;                                                     // 0x0630 (size: 0x8)
    class UTexture2D* Custom Moon Texture;                                            // 0x0638 (size: 0x8)
    TEnumAsByte<UDS_FeatureToggle::Type> Sky Light;                                   // 0x0640 (size: 0x1)
    class ASkyLight* Custom Sky Light Actor;                                          // 0x0648 (size: 0x8)
    TEnumAsByte<UDS_FeatureToggle::Type> Height Fog;                                  // 0x0650 (size: 0x1)
    class AExponentialHeightFog* Custom Height Fog Actor;                             // 0x0658 (size: 0x8)
    TEnumAsByte<UDS_SkyLightMode::Type> Sky Light Mode;                               // 0x0660 (size: 0x1)
    class UCurveFloat* Night Filter Curve;                                            // 0x0668 (size: 0x8)
    double Moon Glow Intensity;                                                       // 0x0670 (size: 0x8)
    bool Use Auroras;                                                                 // 0x0678 (size: 0x1)
    double Aurora Intensity;                                                          // 0x0680 (size: 0x8)
    double Aurora Speed;                                                              // 0x0688 (size: 0x8)
    double Cloud Shadows Intensity When Overcast;                                     // 0x0690 (size: 0x8)
    double Cloud Shadows Softness When Sunny;                                         // 0x0698 (size: 0x8)
    double Cloud Shadows Softness When Overcast;                                      // 0x06A0 (size: 0x8)
    double Cloud Tiling Layer 1;                                                      // 0x06A8 (size: 0x8)
    double Cloud Tiling Layer 2;                                                      // 0x06B0 (size: 0x8)
    double Soften Horizon;                                                            // 0x06B8 (size: 0x8)
    bool One Cloud Layer;                                                             // 0x06C0 (size: 0x1)
    double Cloud Height Layer 1;                                                      // 0x06C8 (size: 0x8)
    double Cloud Height Layer 2;                                                      // 0x06D0 (size: 0x8)
    double Overcast Swirling Texture;                                                 // 0x06D8 (size: 0x8)
    double Saturation;                                                                // 0x06E0 (size: 0x8)
    double Directional Balance;                                                       // 0x06E8 (size: 0x8)
    double Dawn Time;                                                                 // 0x06F0 (size: 0x8)
    double Dusk Time;                                                                 // 0x06F8 (size: 0x8)
    double Night Brightness;                                                          // 0x0700 (size: 0x8)
    double Sun Softness;                                                              // 0x0708 (size: 0x8)
    double Sun Volumetric Scattering Intensity;                                       // 0x0710 (size: 0x8)
    double Moon Volumetric Scattering Intensity;                                      // 0x0718 (size: 0x8)
    double Aurora Phase;                                                              // 0x0720 (size: 0x8)
    class UDirectionalLightComponent* Sun_LightComponent;                             // 0x0728 (size: 0x8)
    class UDirectionalLightComponent* Moon_LightComponent;                            // 0x0730 (size: 0x8)
    class USkyLightComponent* SkyLightComponent;                                      // 0x0738 (size: 0x8)
    class UExponentialHeightFogComponent* Height Fog Component;                       // 0x0740 (size: 0x8)
    bool Apply Exposure Settings;                                                     // 0x0748 (size: 0x1)
    class UCurveFloat* Exposure Compensation Curve;                                   // 0x0750 (size: 0x8)
    bool Use Gothic Day Time;                                                         // 0x0758 (size: 0x1)
    double Day Length;                                                                // 0x0760 (size: 0x8)
    double Night Length;                                                              // 0x0768 (size: 0x8)
    double Extend Dawn and Dusk;                                                      // 0x0770 (size: 0x8)
    bool Move_Static/Stationary_Lights;                                               // 0x0778 (size: 0x1)
    double Base Fog Density;                                                          // 0x0780 (size: 0x8)
    double Foggy Density Contribution;                                                // 0x0788 (size: 0x8)
    double Cloudy Density Contribution;                                               // 0x0790 (size: 0x8)
    double Dust Density Contribution;                                                 // 0x0798 (size: 0x8)
    double Scale Total Fog Density;                                                   // 0x07A0 (size: 0x8)
    double Stars Tiling;                                                              // 0x07A8 (size: 0x8)
    double Stars Daytime Intensity;                                                   // 0x07B0 (size: 0x8)
    double Twinkle Amount;                                                            // 0x07B8 (size: 0x8)
    double Twinkle Speed;                                                             // 0x07C0 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Tiling Stars Texture;                                  // 0x07C8 (size: 0x28)
    TSoftObjectPtr<UTexture2D> Real Stars Texture;                                    // 0x07F0 (size: 0x28)
    double Stars Phase;                                                               // 0x0818 (size: 0x8)
    class UTexture2D* Custom Tiling Stars Texture;                                    // 0x0820 (size: 0x8)
    class UTexture2D* Custom Real Stars Texture;                                      // 0x0828 (size: 0x8)
    class UCurveFloat* Stars Intensity Curve;                                         // 0x0830 (size: 0x8)
    double Sky Light Intensity;                                                       // 0x0838 (size: 0x8)
    TEnumAsByte<EComponentMobility::Type> Sky Light_Mobility;                         // 0x0840 (size: 0x1)
    double Sky Light Temperature;                                                     // 0x0848 (size: 0x8)
    FLinearColor Sky Light Color Multiplier (Day);                                    // 0x0850 (size: 0x10)
    FLinearColor Sky Light Color Multiplier (Dawn/Dusk);                              // 0x0860 (size: 0x10)
    FLinearColor Sky Light Color Multiplier (Night);                                  // 0x0870 (size: 0x10)
    bool Sky Light Casts Shadows;                                                     // 0x0880 (size: 0x1)
    double DFAO Min Occlusion;                                                        // 0x0888 (size: 0x8)
    double DFAO Exponent;                                                             // 0x0890 (size: 0x8)
    TSoftObjectPtr<UTextureCube> Flat Cubemap;                                        // 0x0898 (size: 0x28)
    TSoftObjectPtr<UTextureCube> Custom Cubemap;                                      // 0x08C0 (size: 0x28)
    FLinearColor Tinted Sky Light Lower Hemisphere Color;                             // 0x08E8 (size: 0x10)
    bool Real Time Capture;                                                           // 0x08F8 (size: 0x1)
    FLinearColor Captured Sky Light Lower Hemisphere Tint;                            // 0x08FC (size: 0x10)
    bool Recapture Sky light Periodically;                                            // 0x090C (size: 0x1)
    double Sky Light Recapture Period (Seconds);                                      // 0x0910 (size: 0x8)
    double Lights Update Period;                                                      // 0x0918 (size: 0x8)
    double Lights Update Degree Threshold;                                            // 0x0920 (size: 0x8)
    double Sunrise Event Offset;                                                      // 0x0928 (size: 0x8)
    double Sunset Event Offset;                                                       // 0x0930 (size: 0x8)
    FUltra_Dynamic_Sky_CSunset Sunset;                                                // 0x0938 (size: 0x10)
    void Sunset();
    FUltra_Dynamic_Sky_CSunrise Sunrise;                                              // 0x0948 (size: 0x10)
    void Sunrise();
    double Cloud Wisps Opacity (Cloudy);                                              // 0x0958 (size: 0x8)
    class UTexture2D* Cloud Wisps Texture;                                            // 0x0960 (size: 0x8)
    TEnumAsByte<UDS_NoiseType::Type> Cloud Noise Type;                                // 0x0968 (size: 0x1)
    class UTexture2D* Custom Noise Texture;                                           // 0x0970 (size: 0x8)
    double Sun Shader Intensity;                                                      // 0x0978 (size: 0x8)
    double Directional Lighting Intensity;                                            // 0x0980 (size: 0x8)
    double Sun Highlight Radius;                                                      // 0x0988 (size: 0x8)
    double Cloud Opacity;                                                             // 0x0990 (size: 0x8)
    double Horizon Density Multiplier;                                                // 0x0998 (size: 0x8)
    double Zenith Density Multiplier;                                                 // 0x09A0 (size: 0x8)
    double Latitude Gradient Position;                                                // 0x09A8 (size: 0x8)
    double Latitude Gradient Width;                                                   // 0x09B0 (size: 0x8)
    double Around Sun Density Multiplier;                                             // 0x09B8 (size: 0x8)
    double Around Sun Density Exponent;                                               // 0x09C0 (size: 0x8)
    double Around Moon Density Multiplier;                                            // 0x09C8 (size: 0x8)
    double Around Moon Density Exponent;                                              // 0x09D0 (size: 0x8)
    class UCurveFloat* Shine Intensity Curve;                                         // 0x09D8 (size: 0x8)
    class UCurveFloat* Sun Highlight Intensity Curve;                                 // 0x09E0 (size: 0x8)
    class UCurveFloat* Sun Highlight Radius Curve;                                    // 0x09E8 (size: 0x8)
    double Shine Variation;                                                           // 0x09F0 (size: 0x8)
    bool Adjust for Path Tracer;                                                      // 0x09F8 (size: 0x1)
    bool Dim Directional Lights with Cloud Coverage;                                  // 0x09F9 (size: 0x1)
    bool Spread Out Tick Behaviors Over 3 Frames;                                     // 0x09FA (size: 0x1)
    bool Only Fully Update Active Parameters When Cloud Coverage Changes;             // 0x09FB (size: 0x1)
    double Extra Night Brightness when Cloudy;                                        // 0x0A00 (size: 0x8)
    double Directional Lights Absent Brightness;                                      // 0x0A08 (size: 0x8)
    class UMaterialInstanceDynamic* Volumetric_Clouds_MID_Complex;                    // 0x0A10 (size: 0x8)
    TEnumAsByte<UDS_VolRT_Mode::Type> Volumetric Cloud Rendering Mode;                // 0x0A18 (size: 0x1)
    double Bottom Altitude;                                                           // 0x0A20 (size: 0x8)
    double Layer Height Scale;                                                        // 0x0A28 (size: 0x8)
    double Base Clouds Scale;                                                         // 0x0A30 (size: 0x8)
    double 3D Noise Scale;                                                            // 0x0A38 (size: 0x8)
    double High Frequency Noise Amount;                                               // 0x0A40 (size: 0x8)
    int32 High Frequency Levels;                                                      // 0x0A48 (size: 0x4)
    double Distort High Frequency Noise;                                              // 0x0A50 (size: 0x8)
    double Extinction Scale Top;                                                      // 0x0A58 (size: 0x8)
    double Extinction Scale Bottom;                                                   // 0x0A60 (size: 0x8)
    double Volumetric Clouds Scale;                                                   // 0x0A68 (size: 0x8)
    int32 ShiftMinutesTransitionLength;                                               // 0x0A70 (size: 0x4)
    class UCurveFloat* Min Shift Cloud Curve;                                         // 0x0A78 (size: 0x8)
    class UCurveFloat* Max Shift Cloud Curve;                                         // 0x0A80 (size: 0x8)
    double Z Disturbance;                                                             // 0x0A88 (size: 0x8)
    double Minimum Erosion;                                                           // 0x0A90 (size: 0x8)
    double Base Floor Variation;                                                      // 0x0A98 (size: 0x8)
    double Overcast Floor Variation;                                                  // 0x0AA0 (size: 0x8)
    double Floor Variation Luminance Scale;                                           // 0x0AA8 (size: 0x8)
    double View Sample Scale (Day);                                                   // 0x0AB0 (size: 0x8)
    double View Sample Scale (Night);                                                 // 0x0AB8 (size: 0x8)
    double Distance to Sample MaxCount;                                               // 0x0AC0 (size: 0x8)
    double Shadow Sample Scale;                                                       // 0x0AC8 (size: 0x8)
    double Shadow Tracing Distance;                                                   // 0x0AD0 (size: 0x8)
    double Reflection Sample Count Scale;                                             // 0x0AD8 (size: 0x8)
    double Reflection Shadow Sample Count Scale;                                      // 0x0AE0 (size: 0x8)
    TEnumAsByte<UDS_NoiseType::Type> Volumetric Cloud Noise Type;                     // 0x0AE8 (size: 0x1)
    class UTexture2D* Volumetric Custom Noise Texture;                                // 0x0AF0 (size: 0x8)
    double Base Clouds Mip Level;                                                     // 0x0AF8 (size: 0x8)
    double Multiscattering Intensity;                                                 // 0x0B00 (size: 0x8)
    double Multiscattering Occlusion Factor;                                          // 0x0B08 (size: 0x8)
    double SubNoise Erosion;                                                          // 0x0B10 (size: 0x8)
    class UMaterialInstanceDynamic* Volumetric_Clouds_MID_Simplified;                 // 0x0B18 (size: 0x8)
    double Fog Start Distance when Clear;                                             // 0x0B20 (size: 0x8)
    double Fog Density where Start Distance Reaches Zero;                             // 0x0B28 (size: 0x8)
    bool Randomize Cloud Formation on Run;                                            // 0x0B30 (size: 0x1)
    double 3D Noise Vertical Movement;                                                // 0x0B38 (size: 0x8)
    float Formation Change Speed;                                                     // 0x0B40 (size: 0x4)
    double Macro Variation;                                                           // 0x0B48 (size: 0x8)
    double Macro Scale;                                                               // 0x0B50 (size: 0x8)
    double Multiscattering Phase 1;                                                   // 0x0B58 (size: 0x8)
    double Multiscattering Phase 2;                                                   // 0x0B60 (size: 0x8)
    double Multiscattering Eccentricity;                                              // 0x0B68 (size: 0x8)
    double Time Speed;                                                                // 0x0B70 (size: 0x8)
    double Internal Time of Day;                                                      // 0x0B78 (size: 0x8)
    class AActor* Weather_BP;                                                         // 0x0B80 (size: 0x8)
    FLinearColor Volumetric Cloud Color;                                              // 0x0B88 (size: 0x10)
    double Tracing Max Start Distance;                                                // 0x0B98 (size: 0x8)
    class UMaterialInstanceDynamic* Static Clouds MID;                                // 0x0BA0 (size: 0x8)
    FLinearColor Aurora Color 1;                                                      // 0x0BA8 (size: 0x10)
    FLinearColor Aurora Color 2;                                                      // 0x0BB8 (size: 0x10)
    FLinearColor Aurora Color 3;                                                      // 0x0BC8 (size: 0x10)
    class UMaterialInstanceDynamic* Volumetric_Aurora_MID;                            // 0x0BD8 (size: 0x8)
    bool Use Sky Mode Scalability Map;                                                // 0x0BE0 (size: 0x1)
    TMap<int32, TEnumAsByte<UDS_SkyMode::Type>> Sky Mode Scalability Map;             // 0x0BE8 (size: 0x50)
    double Sun Disk Intensity;                                                        // 0x0C38 (size: 0x8)
    class UCurveLinearColor* Sun Disk Color Curve;                                    // 0x0C40 (size: 0x8)
    class UCurveFloat* Aurora Intensity Curve;                                        // 0x0C48 (size: 0x8)
    class UMaterialInstanceDynamic* Inside_Clouds_Fog_MID;                            // 0x0C50 (size: 0x8)
    double Tracing Max Distance (Inside Cloud Layer);                                 // 0x0C58 (size: 0x8)
    double Tracing Max Distance (Outside Cloud Layer);                                // 0x0C60 (size: 0x8)
    bool Enable Fog Inside Clouds;                                                    // 0x0C68 (size: 0x1)
    TSoftObjectPtr<UTexture2D> Aurora Texture;                                        // 0x0C70 (size: 0x28)
    double 2D Aurora Max Samples;                                                     // 0x0C98 (size: 0x8)
    double 2D Aurora Sample Step Size;                                                // 0x0CA0 (size: 0x8)
    double 2D Aurora Line Exponent;                                                   // 0x0CA8 (size: 0x8)
    double 2D Aurora Mask Exponent;                                                   // 0x0CB0 (size: 0x8)
    double Volumetric Aurora Sample Count Scale;                                      // 0x0CB8 (size: 0x8)
    double Volumetric Aurora Layer Height;                                            // 0x0CC0 (size: 0x8)
    double Volumetric Aurora Bottom Altitude;                                         // 0x0CC8 (size: 0x8)
    double Fog Density Daytime Mutliplier;                                            // 0x0CD0 (size: 0x8)
    double Fog Density Nighttime Multiplier;                                          // 0x0CD8 (size: 0x8)
    double Base Height Fog Falloff;                                                   // 0x0CE0 (size: 0x8)
    double Cloudy Height Fog Falloff;                                                 // 0x0CE8 (size: 0x8)
    double Foggy Height Fog Falloff;                                                  // 0x0CF0 (size: 0x8)
    double Inside Cloud Fog Strength;                                                 // 0x0CF8 (size: 0x8)
    FLinearColor Inside Cloud Fog Color;                                              // 0x0D00 (size: 0x10)
    double 2D Overcast Turbulence;                                                    // 0x0D10 (size: 0x8)
    double Close Fade Distance;                                                       // 0x0D18 (size: 0x8)
    bool Two Layers;                                                                  // 0x0D20 (size: 0x1)
    double Layer 2 Coverage Scale;                                                    // 0x0D28 (size: 0x8)
    double Layer 2 Extinction Scale;                                                  // 0x0D30 (size: 0x8)
    FVector2D Layer 2 Cloud Scale;                                                    // 0x0D38 (size: 0x10)
    double Layer 2 Mip Offset;                                                        // 0x0D48 (size: 0x8)
    double Distance Between Layers;                                                   // 0x0D50 (size: 0x8)
    bool Enable Sun Light Shaft Bloom;                                                // 0x0D58 (size: 0x1)
    double Sun Light Shaft Max Brightness;                                            // 0x0D60 (size: 0x8)
    double Sun Light Shaft Bloom Scale;                                               // 0x0D68 (size: 0x8)
    double Sun Light Shaft Bloom Threshold;                                           // 0x0D70 (size: 0x8)
    class UCurveFloat* Sun Light Shaft Bloom Threshold Curve;                         // 0x0D78 (size: 0x8)
    class UCurveFloat* Sun Light Shaft Bloom Scale Curve;                             // 0x0D80 (size: 0x8)
    FLinearColor Sun Light Shaft Tint Color;                                          // 0x0D88 (size: 0x10)
    bool Enable Moon Light Shaft Bloom;                                               // 0x0D98 (size: 0x1)
    double Moon Light Shaft Max Brightness;                                           // 0x0DA0 (size: 0x8)
    double Moon Light Shaft Bloom Threshold;                                          // 0x0DA8 (size: 0x8)
    double Moon Light Shaft Bloom Scale;                                              // 0x0DB0 (size: 0x8)
    FLinearColor Moon Light Shaft Tint Color;                                         // 0x0DB8 (size: 0x10)
    bool Factor Absent Directional Lights Brightness;                                 // 0x0DC8 (size: 0x1)
    bool Real Time Capture Uses Time Slicing;                                         // 0x0DC9 (size: 0x1)
    bool Use Mobile Overrides;                                                        // 0x0DCA (size: 0x1)
    TEnumAsByte<UDS_SkyMode::Type> Volumetric Clouds Replacement;                     // 0x0DCB (size: 0x1)
    TEnumAsByte<UDS_SkyLightMode::Type> Real Time Capture Sky Light Replacement;      // 0x0DCC (size: 0x1)
    bool Adjust For Mobile Renderer;                                                  // 0x0DCD (size: 0x1)
    TArray<FString> Mobile Platforms;                                                 // 0x0DD0 (size: 0x10)
    FVector Moon Target;                                                              // 0x0DE0 (size: 0x18)
    bool Mobile;                                                                      // 0x0DF8 (size: 0x1)
    bool Simulate Real Sun;                                                           // 0x0DF9 (size: 0x1)
    bool Simulate Real Moon;                                                          // 0x0DFA (size: 0x1)
    bool Simulate Real Stars;                                                         // 0x0DFB (size: 0x1)
    TEnumAsByte<UDS_CityPresets::Type> Location Preset;                               // 0x0DFC (size: 0x1)
    double Latitude;                                                                  // 0x0E00 (size: 0x8)
    double Longitude;                                                                 // 0x0E08 (size: 0x8)
    double Time Zone;                                                                 // 0x0E10 (size: 0x8)
    int32 Year;                                                                       // 0x0E18 (size: 0x4)
    int32 Month;                                                                      // 0x0E1C (size: 0x4)
    int32 Day;                                                                        // 0x0E20 (size: 0x4)
    double North Yaw;                                                                 // 0x0E28 (size: 0x8)
    double Simulation Speed;                                                          // 0x0E30 (size: 0x8)
    bool True Real World Time;                                                        // 0x0E38 (size: 0x1)
    bool Apply Daylight Savings Time;                                                 // 0x0E39 (size: 0x1)
    int32 DST Start Month;                                                            // 0x0E3C (size: 0x4)
    int32 DST Start Day;                                                              // 0x0E40 (size: 0x4)
    int32 DST End Month;                                                              // 0x0E44 (size: 0x4)
    int32 DST End Day;                                                                // 0x0E48 (size: 0x4)
    int32 DST Change Hour;                                                            // 0x0E4C (size: 0x4)
    TArray<int32> Months;                                                             // 0x0E50 (size: 0x10)
    TArray<int32> Months (Leap Year);                                                 // 0x0E60 (size: 0x10)
    double Stellar Calibration;                                                       // 0x0E70 (size: 0x8)
    double Lunar Orbit Calibration;                                                   // 0x0E78 (size: 0x8)
    double Lunar Inclination Calibration;                                             // 0x0E80 (size: 0x8)
    bool Runtime;                                                                     // 0x0E88 (size: 0x1)
    bool Daylight Savings Time;                                                       // 0x0E89 (size: 0x1)
    int32 Total Days Elapsed;                                                         // 0x0E8C (size: 0x4)
    bool Clouds Move with Time of Day;                                                // 0x0E90 (size: 0x1)
    double Time of Day Movement Multiplier;                                           // 0x0E98 (size: 0x8)
    TMap<class FString, class TSoftObjectPtr<UMaterialInstance>> Sky MID Parent Instances; // 0x0EA0 (size: 0x50)
    double Fog Shadows;                                                               // 0x0EF0 (size: 0x8)
    double Dust Shadows;                                                              // 0x0EF8 (size: 0x8)
    double 2D Cloud Shadows Speed;                                                    // 0x0F00 (size: 0x8)
    double 2D Cloud Shadows Scale;                                                    // 0x0F08 (size: 0x8)
    bool Disable Directional Light Shadows when Fully Shadowed by Clouds;             // 0x0F10 (size: 0x1)
    class UMaterialInterface* Custom Light Function Material;                         // 0x0F18 (size: 0x8)
    bool Force Light Functions On;                                                    // 0x0F20 (size: 0x1)
    double Time of Day Replication Period;                                            // 0x0F28 (size: 0x8)
    double Replicated Time of Day;                                                    // 0x0F30 (size: 0x8)
    double Replicated Moon Phase;                                                     // 0x0F38 (size: 0x8)
    double Scale Sun Radius as it Nears Horizon;                                      // 0x0F40 (size: 0x8)
    double Sun Specular Scale;                                                        // 0x0F48 (size: 0x8)
    double Scale Moon Radius as it Nears Horizon;                                     // 0x0F50 (size: 0x8)
    bool Fog Colors from Sky Atmosphere;                                              // 0x0F58 (size: 0x1)
    double Dusty Height Fog Falloff;                                                  // 0x0F60 (size: 0x8)
    double Moon Specular Scale;                                                       // 0x0F68 (size: 0x8)
    double Replicated Day Length;                                                     // 0x0F70 (size: 0x8)
    double Replicated Night Length;                                                   // 0x0F78 (size: 0x8)
    double Replicated Time Speed;                                                     // 0x0F80 (size: 0x8)
    double Replicated Simulation Speed;                                               // 0x0F88 (size: 0x8)
    double Scale Ambient Sky Atmosphere Contribution;                                 // 0x0F90 (size: 0x8)
    double High Frequency Disable Distance;                                           // 0x0F98 (size: 0x8)
    bool Change to Simplified Material when Overcast;                                 // 0x0FA0 (size: 0x1)
    double Simplified Material Cloud Coverage Threshold;                              // 0x0FA8 (size: 0x8)
    double Simplified Material Fade Length;                                           // 0x0FB0 (size: 0x8)
    double Scale View Samples when Overcast;                                          // 0x0FB8 (size: 0x8)
    int32 Current Volumetric Clouds MID;                                              // 0x0FC0 (size: 0x4)
    FVector Clouds Position;                                                          // 0x0FC8 (size: 0x18)
    double Standard Base Clouds Size;                                                 // 0x0FE0 (size: 0x8)
    double Last Clouds Time of Day Factor;                                            // 0x0FE8 (size: 0x8)
    FVector Starting Cloud Texture Velocity;                                          // 0x0FF0 (size: 0x18)
    FLinearColor Rayleigh Scattering Color (Dawn/Dusk);                               // 0x1008 (size: 0x10)
    FLinearColor Rayleigh Scattering Color (Night);                                   // 0x1018 (size: 0x10)
    double Desaturate Rayleigh Scattering when Cloudy;                                // 0x1028 (size: 0x8)
    double Brighten Rayleigh Scattering When Cloudy;                                  // 0x1030 (size: 0x8)
    int32 Current Tick Set;                                                           // 0x1038 (size: 0x4)
    double Cloud Coverage Change Speed;                                               // 0x1040 (size: 0x8)
    double Time of Day Change Speed;                                                  // 0x1048 (size: 0x8)
    double Fog Change Speed;                                                          // 0x1050 (size: 0x8)
    double Dust Change Speed;                                                         // 0x1058 (size: 0x8)
    double Current Time of Day Offset;                                                // 0x1060 (size: 0x8)
    double Last Frame Cloud Coverage;                                                 // 0x1068 (size: 0x8)
    double Cloud Coverage Change This Frame;                                          // 0x1070 (size: 0x8)
    TMap<FName, TEnumAsByte<UDS_PropertyType::Type>> Properties;                      // 0x1078 (size: 0x50)
    double Last Frame Time of Day;                                                    // 0x10C8 (size: 0x8)
    double Night Sky Glow;                                                            // 0x10D0 (size: 0x8)
    FLinearColor Night Sky Glow Color;                                                // 0x10D8 (size: 0x10)
    double Light Pollution Intensity;                                                 // 0x10E8 (size: 0x8)
    FLinearColor Light Pollution Color;                                               // 0x10F0 (size: 0x10)
    class UMaterialInstanceDynamic* Cloud Fog Post Process MID;                       // 0x1100 (size: 0x8)
    double Dimming Range Lower Bound;                                                 // 0x1108 (size: 0x8)
    double Dimming Range Upper Bound;                                                 // 0x1110 (size: 0x8)
    double Dimming Range Exponent;                                                    // 0x1118 (size: 0x8)
    class UMaterialInterface* Custom Sky Sphere Material;                             // 0x1120 (size: 0x8)
    double Fog Snow Contribution;                                                     // 0x1128 (size: 0x8)
    FUltra_Dynamic_Sky_CMidnight Midnight;                                            // 0x1130 (size: 0x10)
    void Midnight();
    FLinearColor Sunset/Sunrise Color (Absorption);                                   // 0x1140 (size: 0x10)
    double Sunset/Sunrise Color Intensity (Absorption Scale);                         // 0x1150 (size: 0x8)
    double Simulated Sunrise Time;                                                    // 0x1158 (size: 0x8)
    double Simulated Sunset Time;                                                     // 0x1160 (size: 0x8)
    bool Disallow Tick Skip;                                                          // 0x1168 (size: 0x1)
    double Base Cloud Height;                                                         // 0x1170 (size: 0x8)
    bool Enable Sun Lens Flare;                                                       // 0x1178 (size: 0x1)
    TEnumAsByte<UDS_LensFlareType::Type> Lens Flare Type;                             // 0x1179 (size: 0x1)
    double Lens Flare Strength;                                                       // 0x1180 (size: 0x8)
    FLinearColor Lens Flare Tint;                                                     // 0x1188 (size: 0x10)
    class UMaterialInstanceDynamic* Lens Flare MID;                                   // 0x1198 (size: 0x8)
    class UMaterialInterface* Custom Lens Flare Parent Instance;                      // 0x11A0 (size: 0x8)
    double Scale Flare Elements;                                                      // 0x11A8 (size: 0x8)
    double Dynamic Sky Light Transition Time;                                         // 0x11B0 (size: 0x8)
    double Target Sky Light Multiplier;                                               // 0x11B8 (size: 0x8)
    double Dynamic Sky Light Multiplier;                                              // 0x11C0 (size: 0x8)
    bool Override with New Changes;                                                   // 0x11C8 (size: 0x1)
    class UMaterialInstanceDynamic* Overcast Turbulence MID;                          // 0x11D0 (size: 0x8)
    double Low Material Quality Sample Count Scale;                                   // 0x11D8 (size: 0x8)
    double Medium Material Quality Sample Count Scale;                                // 0x11E0 (size: 0x8)
    TSoftObjectPtr<UVolumeTexture> Epic Quality Volume Texture;                       // 0x11E8 (size: 0x28)
    TSoftObjectPtr<UVolumeTexture> High Quality Volume Texture;                       // 0x1210 (size: 0x28)
    TSoftObjectPtr<UVolumeTexture> Low Quality Volume Texture;                        // 0x1238 (size: 0x28)
    double Epic Material Quality Sample Count Scale;                                  // 0x1260 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> Inside Cloud Fog Parent Material;              // 0x1268 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> Inside Cloud Fog System;                           // 0x1290 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Post Process Cloud Fog Parent Material;        // 0x12B8 (size: 0x28)
    TArray<class UMaterialInstanceDynamic*> Volumetric Cloud and Shadow MIDs;         // 0x12E0 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> Volumetric Cloud MIDs;                    // 0x12F0 (size: 0x10)
    double Moon Light Current Intensity Value;                                        // 0x1300 (size: 0x8)
    bool Keep Planet Top at Camera XY Location;                                       // 0x1308 (size: 0x1)
    FLinearColor Base Sky Color (Day);                                                // 0x130C (size: 0x10)
    FLinearColor Base Sky Color (Dawn/Dusk);                                          // 0x131C (size: 0x10)
    FLinearColor Base Sky Color (Night);                                              // 0x132C (size: 0x10)
    FLinearColor Cloud Light Color (Day);                                             // 0x133C (size: 0x10)
    FLinearColor Cloud Light Color (Dawn/Dusk);                                       // 0x134C (size: 0x10)
    FLinearColor Cloud Light Color (Night);                                           // 0x135C (size: 0x10)
    FLinearColor Cloud Dark Color (Day);                                              // 0x136C (size: 0x10)
    FLinearColor Cloud Dark Color (Dawn/Dusk);                                        // 0x137C (size: 0x10)
    FLinearColor Cloud Dark Color (Night);                                            // 0x138C (size: 0x10)
    FLinearColor Sun Glow Color;                                                      // 0x139C (size: 0x10)
    FLinearColor Moon Glow Tint;                                                      // 0x13AC (size: 0x10)
    class UCurveFloat* Directional Intensity Curve;                                   // 0x13C0 (size: 0x8)
    class UCurveLinearColor* Directional Light Scattering Curve;                      // 0x13C8 (size: 0x8)
    class UTexture2D* Atmospheric Scattering LUT Texture;                             // 0x13D0 (size: 0x8)
    TEnumAsByte<UDS_FogColorMode::Type> Fog Color Mode;                               // 0x13D8 (size: 0x1)
    double Fog Color Intensity Scale;                                                 // 0x13E0 (size: 0x8)
    class UCurveLinearColor* Fog Scattering Color Curve;                              // 0x13E8 (size: 0x8)
    FLinearColor Fog Inscattering Sun;                                                // 0x13F0 (size: 0x10)
    FLinearColor Fog Inscattering Moon;                                               // 0x1400 (size: 0x10)
    class UCurveLinearColor* Fog Directional Scattering Color Curve;                  // 0x1410 (size: 0x8)
    FLinearColor Fog Directional Inscattering;                                        // 0x1418 (size: 0x10)
    double Foggy Desaturation;                                                        // 0x1428 (size: 0x8)
    double Overcast Desaturation;                                                     // 0x1430 (size: 0x8)
    double Overcast Brightness Day;                                                   // 0x1438 (size: 0x8)
    double Overcast Brightness Night;                                                 // 0x1440 (size: 0x8)
    FLinearColor All Fog Colors Multiplier;                                           // 0x1448 (size: 0x10)
    class UCurveFloat* Sky Atmosphere Fog Influence Curve;                            // 0x1458 (size: 0x8)
    double Dust Amount;                                                               // 0x1460 (size: 0x8)
    FLinearColor Dust Color;                                                          // 0x1468 (size: 0x10)
    bool Use Volumetric Fog;                                                          // 0x1478 (size: 0x1)
    float Height Fog Density;                                                         // 0x147C (size: 0x4)
    bool Using Cloud Fog Post Process;                                                // 0x1480 (size: 0x1)
    FVector Current Camera Location;                                                  // 0x1488 (size: 0x18)
    FLinearColor Ambient Fog Color;                                                   // 0x14A0 (size: 0x10)
    FLinearColor Directional Inscattering Fog Color;                                  // 0x14B0 (size: 0x10)
    FLinearColor Directional Base Fog Color;                                          // 0x14C0 (size: 0x10)
    FLinearColor Scaled Directional Base Fog Color;                                   // 0x14D0 (size: 0x10)
    TSoftObjectPtr<UMaterialInterface> Volumetric Aurora Parent Material;             // 0x14E0 (size: 0x28)
    TSoftObjectPtr<UTexture2D> Moon Masks Texture;                                    // 0x1508 (size: 0x28)
    TArray<class UMaterialInstanceDynamic*> Sky and Static Clouds MID;                // 0x1530 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> Sky and Shadows MIDs;                     // 0x1540 (size: 0x10)
    TSoftObjectPtr<UMaterialInterface> Overcast Turbulence Parent Material;           // 0x1550 (size: 0x28)
    bool Forward Shading;                                                             // 0x1578 (size: 0x1)
    FUltra_Dynamic_Sky_CHourly Hourly;                                                // 0x1580 (size: 0x10)
    void Hourly(int32 Hour);
    int32 Event Hour;                                                                 // 0x1590 (size: 0x4)
    float Cloud Wisps Color Intensity;                                                // 0x1594 (size: 0x4)
    double Max Sun Source Angle Scale;                                                // 0x1598 (size: 0x8)
    double Sun Source Angle Softness;                                                 // 0x15A0 (size: 0x8)
    double Max Moon Source Angle Scale;                                               // 0x15A8 (size: 0x8)
    double Transition Time A;                                                         // 0x15B0 (size: 0x8)
    double Transition Time B;                                                         // 0x15B8 (size: 0x8)
    bool Transitioning Time;                                                          // 0x15C0 (size: 0x1)
    TEnumAsByte<EEasingFunc::Type> Transition Easing Function;                        // 0x15C1 (size: 0x1)
    double Transition Easing Exponent;                                                // 0x15C8 (size: 0x8)
    FTimerHandle Transition Timer;                                                    // 0x15D0 (size: 0x8)
    double Transition Duration;                                                       // 0x15D8 (size: 0x8)
    int32 Transition Days Counted;                                                    // 0x15E0 (size: 0x4)
    bool Transition Can Go Backwards;                                                 // 0x15E4 (size: 0x1)
    double Moon Source Angle Softness;                                                // 0x15E8 (size: 0x8)
    float Exposure Bias Day;                                                          // 0x15F0 (size: 0x4)
    float Exposure Bias Night;                                                        // 0x15F4 (size: 0x4)
    float Exposure Bias Cloudy;                                                       // 0x15F8 (size: 0x4)
    float Exposure Bias Foggy;                                                        // 0x15FC (size: 0x4)
    float Exposure Bias Dusty;                                                        // 0x1600 (size: 0x4)
    float Exposure Min Brightness;                                                    // 0x1604 (size: 0x4)
    float Exposure Max Brightness;                                                    // 0x1608 (size: 0x4)
    bool Apply Interior Adjustments;                                                  // 0x160C (size: 0x1)
    double Extra Fog Start Distance in Interior;                                      // 0x1610 (size: 0x8)
    double Fog Density Multiplier in Interior;                                        // 0x1618 (size: 0x8)
    double Exposure Bias in Interior;                                                 // 0x1620 (size: 0x8)
    double Sky Light Intensity Multiplier in Interiors;                               // 0x1628 (size: 0x8)
    double Sun Light Intensity Multiplier in Interiors;                               // 0x1630 (size: 0x8)
    double Moon Light Intensity Multiplier in Interiors;                              // 0x1638 (size: 0x8)
    double Extra Sun Volumetric Scattering in Interiors;                              // 0x1640 (size: 0x8)
    double Extra Moon Volumetric Scattering in Interiors;                             // 0x1648 (size: 0x8)
    TEnumAsByte<UDS_Occlusion_Mode::Type> Occlusion Sampling Mode;                    // 0x1650 (size: 0x1)
    double Max Interior Trace Distance;                                               // 0x1658 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> Interior Occlusion Trace Channel;                    // 0x1660 (size: 0x1)
    double Interior Occlusion Update Period;                                          // 0x1668 (size: 0x8)
    class UMaterialInstanceDynamic* Rainbow MID;                                      // 0x1670 (size: 0x8)
    double Cloud Shadow Disable Threshold;                                            // 0x1678 (size: 0x8)
    double Fraction of Trace Hits for No Occlusion;                                   // 0x1680 (size: 0x8)
    double Fraction of Trace Hits for Full Occlusion;                                 // 0x1688 (size: 0x8)
    double Cloud Bottom World Height;                                                 // 0x1690 (size: 0x8)
    TArray<double> Cached Floats Old;                                                 // 0x1698 (size: 0x10)
    TArray<double> Cached Floats New;                                                 // 0x16A8 (size: 0x10)
    double Cache Alpha;                                                               // 0x16B8 (size: 0x8)
    bool Filling Starting Cache;                                                      // 0x16C0 (size: 0x1)
    double Cache Period;                                                              // 0x16C8 (size: 0x8)
    TArray<FLinearColor> Cached Colors Old;                                           // 0x16D0 (size: 0x10)
    TArray<FLinearColor> Cached Colors New;                                           // 0x16E0 (size: 0x10)
    TArray<FVector> Cached Vectors Old;                                               // 0x16F0 (size: 0x10)
    TArray<FVector> Cached Vectors New;                                               // 0x1700 (size: 0x10)
    FVector Cached Sun Vector;                                                        // 0x1710 (size: 0x18)
    FVector Cached Moon Vector;                                                       // 0x1728 (size: 0x18)
    double Fog Change This Frame;                                                     // 0x1740 (size: 0x8)
    double Last Frame Fog;                                                            // 0x1748 (size: 0x8)
    double Last Frame Dust;                                                           // 0x1750 (size: 0x8)
    double Dust Change This Frame;                                                    // 0x1758 (size: 0x8)
    TArray<bool> Cached Value Changing;                                               // 0x1760 (size: 0x10)
    double Max Property Cache Period;                                                 // 0x1770 (size: 0x8)
    double Time of Last Cache;                                                        // 0x1778 (size: 0x8)
    TMap<TEnumAsByte<UDS_CityPresets::Type>, FVector> Preset Location Coordinates;    // 0x1780 (size: 0x50)
    bool Disable Image Based Lens Flares when Enabled;                                // 0x17D0 (size: 0x1)
    double Starting Sky Atmosphere Height;                                            // 0x17D8 (size: 0x8)
    TArray<FUDS_Post_Process_Stage> Post Process Components;                          // 0x17E0 (size: 0x10)
    TArray<class UPostProcessComponent*> User Post Process Components;                // 0x17F0 (size: 0x10)
    bool Using Post Process Components;                                               // 0x1800 (size: 0x1)
    double Increase Wisps Brightness Around Sun;                                      // 0x1808 (size: 0x8)
    double Increase Wisps Brightness Around Moon;                                     // 0x1810 (size: 0x8)
    double Cached Moon Phase;                                                         // 0x1818 (size: 0x8)
    bool Solar Eclipse;                                                               // 0x1820 (size: 0x1)
    FLinearColor Solar Eclipse Tint Color;                                            // 0x1824 (size: 0x10)
    double Solar Eclipse Intensity Multiplier;                                        // 0x1838 (size: 0x8)
    bool Fade Down High Sun Light Intensity Below Horizon;                            // 0x1840 (size: 0x1)
    FString UDS Version;                                                              // 0x1848 (size: 0x10)
    class UUDS_VersionInfo_C* UDS Version Info;                                       // 0x1858 (size: 0x8)
    double Clouds B Time;                                                             // 0x1860 (size: 0x8)
    double Sky Atmosphere Overcast Luminance;                                         // 0x1868 (size: 0x8)
    FVector Old Moon Target;                                                          // 0x1870 (size: 0x18)
    FVector Old Sun Target;                                                           // 0x1888 (size: 0x18)
    double Targets Change Speed;                                                      // 0x18A0 (size: 0x8)
    double Cache Timer Length;                                                        // 0x18A8 (size: 0x8)
    double Cache Current Timer;                                                       // 0x18B0 (size: 0x8)
    bool Initialized;                                                                 // 0x18B8 (size: 0x1)
    class UUDS_Planet_Preset_C* Add Planet/Moon Preset;                               // 0x18C0 (size: 0x8)
    TArray<FUDS_Space_Planet> Planets/Moons;                                          // 0x18C8 (size: 0x10)
    double Space Layer Brightness (Night);                                            // 0x18D8 (size: 0x8)
    double Space Layer Brightness (Day);                                              // 0x18E0 (size: 0x8)
    double Space Glow Brightness;                                                     // 0x18E8 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> UDS_Space Parent Material;                     // 0x18F0 (size: 0x28)
    TArray<class UStaticMeshComponent*> Space Planet Components;                      // 0x1918 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> Space Planet MIDs;                        // 0x1928 (size: 0x10)
    TArray<class USceneComponent*> Space Scene Components;                            // 0x1938 (size: 0x10)
    TMap<class UMaterialInstanceDynamic*, class UMaterialInstanceDynamic*> Space Glow MIDs; // 0x1948 (size: 0x50)
    bool Space Layer Active;                                                          // 0x1998 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> UDS_Space Sim Stars Parent Material;           // 0x19A0 (size: 0x28)
    FLinearColor Cached Solar Eclipse Tint;                                           // 0x19C8 (size: 0x10)
    double Cached Sun Radius;                                                         // 0x19D8 (size: 0x8)
    double Cached Eclipse Percent;                                                    // 0x19E0 (size: 0x8)
    double Cached Moon Cutout;                                                        // 0x19E8 (size: 0x8)
    double Cached Moon Scale;                                                         // 0x19F0 (size: 0x8)
    double Last Construction Script Time;                                             // 0x19F8 (size: 0x8)
    bool Create New MIDs;                                                             // 0x1A00 (size: 0x1)
    bool Sun - Lighting Channel 0;                                                    // 0x1A01 (size: 0x1)
    bool Sun - Lighting Channel 1;                                                    // 0x1A02 (size: 0x1)
    bool Sun - Lighting Channel 2;                                                    // 0x1A03 (size: 0x1)
    bool Moon - Lighting Channel 0;                                                   // 0x1A04 (size: 0x1)
    bool Moon - Lighting Channel 1;                                                   // 0x1A05 (size: 0x1)
    bool Moon - Lighting Channel 2;                                                   // 0x1A06 (size: 0x1)
    bool Show Trace Debugs;                                                           // 0x1A07 (size: 0x1)
    TArray<class USceneComponent*> Space Roots;                                       // 0x1A08 (size: 0x10)
    bool Render Water Caustics;                                                       // 0x1A18 (size: 0x1)
    double Water Level;                                                               // 0x1A20 (size: 0x8)
    double Caustics Intensity;                                                        // 0x1A28 (size: 0x8)
    double Caustics Falloff;                                                          // 0x1A30 (size: 0x8)
    double Deep Water Falloff;                                                        // 0x1A38 (size: 0x8)
    double Caustics Texture Scale;                                                    // 0x1A40 (size: 0x8)
    double Moons Cloud Mask;                                                          // 0x1A48 (size: 0x8)
    double Blur Caustics with Depth;                                                  // 0x1A50 (size: 0x8)
    double Blur Caustics in Cloud Shadow;                                             // 0x1A58 (size: 0x8)
    double Blur Caustics with Camera Distance;                                        // 0x1A60 (size: 0x8)
    double Noon Active Time Percentage;                                               // 0x1A68 (size: 0x8)
    double Noon Span Percentage;                                                      // 0x1A70 (size: 0x8)
    bool Span Golden Hour;                                                            // 0x1A78 (size: 0x1)
    double Golden Hour Active Time;                                                   // 0x1A80 (size: 0x8)
    double Golden Hour Span Time;                                                     // 0x1A88 (size: 0x8)
    double Golden Hour Before Magic Time Percentage;                                  // 0x1A90 (size: 0x8)
    bool Use Static Day Time;                                                         // 0x1A98 (size: 0x1)
    class AStaticMeshActor* Barrier Mesh;                                             // 0x1AA0 (size: 0x8)
    class UMaterialInterface* Barrier Material;                                       // 0x1AA8 (size: 0x8)
    class UCurveFloat* Barrier Intensity On Day;                                      // 0x1AB0 (size: 0x8)
    class UCurveFloat* Barrier Intensity On Clouds;                                   // 0x1AB8 (size: 0x8)
    class UMaterialInstanceDynamic* Barrier Dynamic Material;                         // 0x1AC0 (size: 0x8)
    class UCurveLinearColor* Light Curve Color;                                       // 0x1AC8 (size: 0x8)
    class UCurveFloat* Light Curve Intensity;                                         // 0x1AD0 (size: 0x8)
    double Exponential Fog Start Distance;                                            // 0x1AD8 (size: 0x8)
    double Volumetric Fog Start Distance;                                             // 0x1AE0 (size: 0x8)
    double Raw Light Intensity;                                                       // 0x1AE8 (size: 0x8)
    class UCurveFloat* Ninja Fog Light Intensity Curve;                               // 0x1AF0 (size: 0x8)
    double Raw Fog Density;                                                           // 0x1AF8 (size: 0x8)
    class UCurveFloat* Ninja Fog Density Curve;                                       // 0x1B00 (size: 0x8)
    class UCurveFloat* UltraVol_DF-Height_Curve;                                      // 0x1B08 (size: 0x8)
    double UltraVol_DF-Height_Multiplier;                                             // 0x1B10 (size: 0x8)
    class UCurveFloat* UltraVol_Density_Curve;                                        // 0x1B18 (size: 0x8)
    double UltraVol_Density_Multiplier;                                               // 0x1B20 (size: 0x8)
    TArray<TScriptInterface<IBPI_LightColorReceiver_C>> RectLights;                   // 0x1B28 (size: 0x10)
    bool Force Rect Light Register;                                                   // 0x1B38 (size: 0x1)
    int32 Current Rect Light Index;                                                   // 0x1B3C (size: 0x4)
    FExponentialHeightFogData Secondary Fog Data;                                     // 0x1B40 (size: 0xC)
    class UCurveFloat* Day Intensity Emissive Curve;                                  // 0x1B50 (size: 0x8)
    class UCurveFloat* Cloud Intensity Emissive Curve;                                // 0x1B58 (size: 0x8)
    class UCurveFloat* Post Processing Interpolator;                                  // 0x1B60 (size: 0x8)
    TArray<class APostProcessVolume*> Post Process Volumes Settings;                  // 0x1B68 (size: 0x10)
    class UBP_PostProcessDynamicData_C* Global Day Settings;                          // 0x1B78 (size: 0x8)
    class UBP_PostProcessDynamicData_C* Global Night Settings;                        // 0x1B80 (size: 0x8)
    class UBP_PostProcessDynamicData_C* Current Post Process Settings;                // 0x1B88 (size: 0x8)
    class AUltra_Dynamic_Weather_C* UDW;                                              // 0x1B90 (size: 0x8)
    double Gothic Wind Rotation Speed;                                                // 0x1B98 (size: 0x8)
    double Max Wind Strength;                                                         // 0x1BA0 (size: 0x8)
    double Max Wind Speed;                                                            // 0x1BA8 (size: 0x8)
    double Total Speed Displacement;                                                  // 0x1BB0 (size: 0x8)
    class UCurveFloat* Eye Dot Intensity Emissive Curve;                              // 0x1BB8 (size: 0x8)
    double Inside Override Fog Alpha;                                                 // 0x1BC0 (size: 0x8)
    TMap<ABP_Fog_Override_Zone_C*, double> Current Fog Areas;                         // 0x1BC8 (size: 0x50)
    double Interior Extra Start Distance Fog;                                         // 0x1C18 (size: 0x8)
    int32 FrameCount;                                                                 // 0x1C20 (size: 0x4)
    FVector Wind Direction;                                                           // 0x1C28 (size: 0x18)
    FVector Previous Wind Direction;                                                  // 0x1C40 (size: 0x18)
    FVector Desired Wind Direction;                                                   // 0x1C58 (size: 0x18)
    double WindLerpTime;                                                              // 0x1C70 (size: 0x8)
    double MinWindChangeSeconds;                                                      // 0x1C78 (size: 0x8)
    double MaxWindChangeSeconds;                                                      // 0x1C80 (size: 0x8)
    double WindDirectionStartTimer;                                                   // 0x1C88 (size: 0x8)
    double WindDirectionChangeTimer;                                                  // 0x1C90 (size: 0x8)
    bool ForcedWindDirection;                                                         // 0x1C98 (size: 0x1)
    double InteriorWindIntensity;                                                     // 0x1CA0 (size: 0x8)
    double Unscaled Total Speed Displacement;                                         // 0x1CA8 (size: 0x8)
    double ShiftStartTime;                                                            // 0x1CB0 (size: 0x8)
    double ShiftEndTime;                                                              // 0x1CB8 (size: 0x8)
    double PreviousShiftLerpTime;                                                     // 0x1CC0 (size: 0x8)
    double ShiftLerpTime;                                                             // 0x1CC8 (size: 0x8)
    int32 Update Rect Lights Per Frame;                                               // 0x1CD0 (size: 0x4)
    double DayTimeValue;                                                              // 0x1CD8 (size: 0x8)
    class UBP_PostProcessDynamicData_C* Desired Post Process Settings;                // 0x1CE0 (size: 0x8)
    FVector AccumulativeWindDisplacement;                                             // 0x1CE8 (size: 0x18)
    double Last Known Flashing State;                                                 // 0x1D00 (size: 0x8)
    TArray<class ABP_StandardLightingMagnet_C*> Lightings;                            // 0x1D08 (size: 0x10)

    void UnregisterThunder(class ABP_StandardLightingMagnet_C* Lighting);
    void RegisterThunder(class ABP_StandardLightingMagnet_C* Lighting);
    FRotator GetSunRotation();
    FRotator GetMoonRotation();
    class UMaterialInstanceDynamic* GetCloudsMaterial();
    void StopDesiredRotation();
    void ForceDesiredRotation(FVector DesiredWindRotation);
    void Set Desired Rotation(FVector New Wind Direction);
    void Gothic Hourly(int32 Hour);
    FUltraDynamicSkySettings GetSettings();
    double Get UDW Exterior Fog Start Distance();
    double Get UDW Exterior Alpha();
    void Update Sun Values Of Override Volumes();
    double CloudCoverageOverridedByFog();
    void Update Post Processings();
    void Update Overall Intensity();
    void Set Second Fog Data();
    void SetupBarrier();
    void Get Current Day Night Intensity(double& Light Intensity);
    void Get Current Day Night Color(FLinearColor& Light Color);
    void Update Single Rect Lights(TScriptInterface<class IBPI_LightColorReceiver_C> Light Receiver, bool Get Cached Version);
    void Update Editor Rect Lights();
    void Unregister Light Receiver(TScriptInterface<class IBPI_LightColorReceiver_C> Light Receiver);
    void Update Barrier();
    void Update Gothic Systems(FLinearColor Ambient Color);
    void Get Span Zones By Ranges(double Start, double Span, double Time Percentage, double Span Percentage, double Span Start Offset Percentage, double& Old Start, double& Old End, double& New Start, double& New End);
    void Interpolate Line By Zones(double Start, double First Section Old, double First Section New, double Second Section Old, double Second Section New, double End, double Value, double& Result, bool& BeforeSection, bool& DuringSection, bool& AfterSection);
    void Get Time Cycle Variables(double Environment Day Time, bool& Is Day Time, double& Rise Time, double& Span Time, double& Normalized Environment Time);
    void Get Gothic Day Time(bool UseGothicTime, bool& Has Day Elapsed, double& Time Of Day, double& Golden Hour Percentage Intensity);
    void Update Distance to Sample Max Count(bool Shut Down);
    double Current Moons Cloud Mask();
    void Update from UDW Construction Script();
    void Swap with Cinematic Runtime Value(double In, double Cine, bool User Higher, double& Out);
    void Check To Use Existing MIDs();
    void Solar Eclipse Circle Mask(double Sun Angular Radius, double Moon Angular Radius, FVector Moon Vector, double Moon Softness, double& Fraction Showing);
    double Current Space Layer Brightness();
    void Space Planet Parent MID(FUDS_Space_Planet Planet, TSoftObjectPtr<UMaterialInterface>& Out);
    void Update Space Planet Vectors();
    void Moon Z Vector(FVector& Out);
    void Sun Z Vector(FVector& Out);
    void Construct Space Layer();
    void Increment Cache Timer();
    void Is it Daytime?(bool& Yes);
    void Combined Night Brightness(double& Out);
    void Restart Real Time Sky Light Capture();
    void Hard Reset Cache();
    void Days Since J2000(int32 Input Year, int32 Day of Year, int32& Days);
    void Update Forced Active Variables();
    void Cloud Wisp Gradient Vector(FLinearColor& Out);
    double Current Directional Inscattering Exponent();
    void Current View Sample Scale(double& Out);
    void Three Time Floats(double Day, double Dawn/Dusk, double Night, double& Out);
    void Update Post Process Blend Weights();
    void Create Post Process Components();
    void Change Sky Mode at Runtime(TEnumAsByte<UDS_SkyMode::Type> New Sky Mode);
    void Apply Location Preset(TEnumAsByte<UDS_CityPresets::Type> Location);
    void Current Volumetric Cloud Shadow Tracing Distance(double& Out);
    void Current Sky Atmosphere Absorbtion Scale(double& Scale);
    FLinearColor Current Sky Atmosphere Luminance();
    void Volumetric Clouds Top Bottom Distribution(double& Out);
    void Control UDW Weather State();
    void Volumetric Clouds SubNoise Scales(FLinearColor& High, FLinearColor& Low, FLinearColor& Medium);
    void Volumetric Cloud Floor Variation(double& Height, double& Color);
    void Flat Cloudiness(bool& On);
    void Static Clouds XYZ Masks(FLinearColor& XY Mask, double& Z Mask);
    void Starting Cloud Formation();
    bool Increase Tick Frequency();
    void Simplified Sun Glow Color(FLinearColor& Out);
    void Size Cache Arrays();
    void Is Lens Flare Enabled(bool& Yes);
    void Current Exposure Bias(double& Bias);
    void Monitor for Changes();
    void Scaled Cache Period(double& Period);
    void Get Cached Vector(TEnumAsByte<UDS_CachedProperties::Type> Property, FVector& Value);
    void Cache Vector(TEnumAsByte<UDS_CachedProperties::Type> Property, FVector Set Value);
    void Cache Sun and Moon Orientation();
    void Get Cached Color(TEnumAsByte<UDS_CachedProperties::Type> Property, FLinearColor& Value);
    void Cache Color(TEnumAsByte<UDS_CachedProperties::Type> Property, FLinearColor Set Value);
    void Set Cache Alpha();
    void Cache Float(TEnumAsByte<UDS_CachedProperties::Type> Property, double Set Value);
    void Cache Properties();
    void Get Cached Float(TEnumAsByte<UDS_CachedProperties::Type> Property, double& Value);
    void Sun Height(double& Z);
    void Current Solar Eclipse Values(FLinearColor& Tint Color, double& Eclipse Percent);
    void Adjust Base Sun Light Intensity(FVector Sun Vector, double& Intensity, double& Multiplier);
    void Filtered Moon Light Intensity(double Unfiltered, double& Intensity);
    void Both Cloud Shadows MIDs(TArray<class UMaterialInstanceDynamic*>& Out);
    void Sun Shadows MIDs(TArray<class UMaterialInstanceDynamic*>& Out);
    void Initialize Occlusion();
    void Update Exposure Bias();
    void Tick Time Transition();
    void Finish Time Transition();
    void Transition Time of Day(double New Time of Day, double Transition Duration (Seconds), TEnumAsByte<EEasingFunc::Type> Easing Function, double Easing Exponent, bool Allow Time Going Backwards);
    void Directional Light Dimming(double& Out);
    void Lens Flare Parent Material(TSoftObjectPtr<UMaterialInterface>& Mat);
    void Cloud Shadows Parent Material(TSoftObjectPtr<UMaterialInterface>& Mat);
    void Static Clouds Parent Material(TSoftObjectPtr<UMaterialInterface>& Material);
    void 2D Clouds Base Texture(TSoftObjectPtr<UTexture2D>& Tex);
    void Load Required Assets();
    void Current Moon Source Angle(double& Out);
    void Twilight Brightness Falloff(double Z, double& Scale);
    void Current Applied Cloud Top and Bottom(double& Bottom, double& Top);
    void Set Up Overcast Turbulence();
    void Update Overcast Turbulence();
    void Update Current Volumetric Clouds MID();
    void Current Max Trace Distance(double& Out);
    void Volumetric Clouds Base Clouds Texture(TSoftObjectPtr<UTexture2D>& Tex);
    void Is Location Inside Cloud Layer(FVector Location, bool& Inside);
    void Current Sun Source Angle(double& Out);
    void Cancel Shadows Value(FVector Light Vector, double& Out);
    void Cloud Shadows Light Vector Process(FVector Vector, FLinearColor& Out);
    void Apply Console Variable with Check(FString Cvar, double setting, int32 Type);
    void Current Moon Light Color(FLinearColor& Color);
    void Simplified Current Color(FLinearColor Day Color, FLinearColor Dawn/Dusk Color, FLinearColor Night Color, FLinearColor& Out);
    void Directional Inscattering Multiplier(double& Multiplier);
    void Query Project Settings And UDS Version();
    void Sky Atmosphere Fog Contribution(double& Output);
    void Volumetric Cloud Layer Scale(double& Layer Scale);
    void Volumetric Cloud Shadows Altitude(double& Cloud Shadows Altitude);
    void Volumetric Cloud Top Altitude(double& Cloud Top Altitude);
    void Volumetric Cloud Layer Height(double& Layer Height);
    void Volumetric Cloud Base Cloud Height(double& Base Cloud Height);
    void Current Sky Ambient Color(FLinearColor& Sky Ambient Color);
    void Current Fog Directional Inscattering Color(FLinearColor& Directional Inscattering Color);
    void Current Fog Inscattering Color(FLinearColor& Inscattering Color);
    void Get Current Fog Base Colors(FLinearColor& Ambient Fog Color, FLinearColor& Directional Base Color, FLinearColor& Scaled Directional Base Color);
    void Scale Sample Count(double In, double& Out);
    void Fire Editor Dispatchers();
    double Current Overcast Swirl();
    double Current Wisps Opacity();
    double Sky MID Cloud Density();
    double Current Overall Intensity();
    double Current Lit Intensity();
    double Current Saturation();
    double Fog Start Distance();
    double Fog Height Falloff();
    double Current Fog Density();
    TSoftObjectPtr<UMaterialInterface> Get Sky MID Parent Material Instance();
    double Current Sunset Event Time();
    double Current Sunrise Event Time();
    double Clouds Time of Day Factor();
    double Total Time Elapsed();
    void H/M/S/MS to Time of Day(int32 Hours, int32 Minutes, int32 Seconds, int32 Miliseconds, double& Time);
    void Convert Time of Day to Time Code(double Time, FTimecode& Timecode);
    double Time of Day Offset();
    FLinearColor Current 2D Cloud Tint();
    double Night Filter();
    double Find Overall Intensity(double Cloud Darkening);
    double Cloud Darkening();
    double Absent Directional Lights Brightness();
    double Moon Phase Multiplier(double& Without Light Brightness);
    bool Gate With Current Changes(bool Clouds Changing, bool Fog Changing, bool Dust Changing);
    bool Using 2D Clouds();
    bool Dimming Directional Lights();
    bool Use Sky Atmosphere();
    FLinearColor Current Light Pollution();
    FLinearColor Overcast Light Contribution(bool For Volumetric Clouds);
    double Current Aurora Intensity();
    FLinearColor Current Night Sky Glow();
    FLinearColor Current Stars Color();
    FLinearColor Current Rayleigh Scattering Color();
    double Current Mie Scattering Scale();
    double Current Mie Anisotropy();
    void Get Current Sky Light Color and Intensity(double& Out Intensity, FLinearColor& Out Color);
    FLinearColor Current Sky Light Lower Hemisphere Color();
    FLinearColor Current Moon Light Material Color();
    double Current Moon Lit Percent();
    double Current Moon Material Intensity();
    FLinearColor Current Moon Phase Angle();
    void Current Moon Scale and Cutout Value(double& Scale, double& Cutout);
    double Moon Light Specular Scale();
    double Moon Light Volumetric Scattering Intensity();
    void Is Moon Light Casting Shadows(bool& Yes);
    void Unfiltered Moon Light Intensity(double& Out);
    double Current Sun Radius();
    double Current Sun Light Intensity();
    void Is Sun Light Casting Shadows(bool& Yes);
    FLinearColor Current Sun Light Color();
    FLinearColor Current Sun Disk Color();
    double Current Sun Disk Intensity();
    double Cloud Shadows Cloud Density();
    void Get Current Cloud Shadows Intensity and Softness(double& Intensity, double& Softness);
    void Get Volumetric Cloud Emissive Colors(FLinearColor& Bottom, FLinearColor& Top);
    void Current Z Disturbance(double& Out);
    void All Volumetric Cloud MIDs(bool Shadows, TArray<class UMaterialInstanceDynamic*>& MIDs);
    double Current Base Clouds Scale();
    FVector Cloud Texture Velocity();
    void Current Lerp to Simplified Clouds(double& Alpha);
    void Volumetric Clouds Parent Materials(TSoftObjectPtr<UMaterialInterface>& Simplified, TSoftObjectPtr<UMaterialInterface>& Complex);
    double Current Volumetric Cloud Macro Variation();
    FLinearColor Current Volumetric Cloud Albedo();
    void Current Volumetric Cloud Multiscattering Occlusion(double& Occlusion);
    void Current Volumetric Cloud Subnoise Amount(double& Erosion);
    void Current Volumetric Cloud Taper Position(double& Taper);
    void Get Current Volumetric Cloud Extinction Scales(double& Top, double& Bottom);
    void Current Volumetric Clouds Density(double& Layer1, double& Layer2);
    void Update Dynamic Sky Light Multiplier();
    void Transition Sky Light Intensity(double New Sky Light Intensity Multiplier, double Transition Time);
    void Update Lens Flare();
    void Set Up Lens Flare();
    void Apply Volumetric Mode(TEnumAsByte<UDS_VolRT_Mode::Type> Mode);
    void Update Moon Parameters();
    void Find Real Sunset/Sunrise Times();
    void Apply Saved UDS And UDW State(FUDS_and_UDW_State State);
    void Create UDS and UDW State for Saving(FUDS_and_UDW_State& Packaged State);
    void Update Replicated Time();
    void Update Static Clouds();
    void OnRep_Replicated Time of Day();
    void Get Current Date and Time(FDateTime& Current Date and Time);
    void Check for Daylight Savings Time();
    void Increment Day();
    void Force Valid Day();
    void Approximate Real Sun Moon and Stars(int32 Month, int32 Day, int32 Year, double Time Of Day, double Time Zone, bool Only Calculate Sun, FVector& Sun Vector, FVector& Moon Vector, double& Real Phase, FVector& Phase Alignment, double& Celestial Orbit, FLinearColor& Celestial Yaw);
    void Set Date and Time(FDateTime Date Time);
    void Update Directional Light Rotations();
    void Recapture Sky Light();
    void Update Settings Based on Platform and Scalability();
    void Update Variables Controlled By Weather();
    void Construction Script Function(bool Run By Counterpart, bool Move Static Lights);
    void Set Cloud Timing();
    void Update Static Variables();
    void Set Time of Day using Time Code(FTimecode Time Code);
    void Get Time of Day in Real Time Format(FTimecode& Time);
    void Update Active Variables(bool Is Construction Script);
    void Set Sun and Moon Root Rotation();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Day Ended();
    void Restart Inside Cloud Fog();
    void Update Replicated ToD();
    void Timed Override with New Changes();
    void Force Startup();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void SetSettings(FUltraDynamicSkySettings Settings);
    void Gothic Hourly Event(int32 Hour);
    void Set Light Source Angles();
    void UpdateLightsRotation();
    void ExecuteUbergraph_Ultra_Dynamic_Sky(int32 EntryPoint);
    void Hourly__DelegateSignature(int32 Hour);
    void Midnight__DelegateSignature();
    void Sunrise__DelegateSignature();
    void Sunset__DelegateSignature();
}; // Size: 0x1D18

#endif
