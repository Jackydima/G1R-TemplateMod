#ifndef UE4SS_SDK_Ultra_Dynamic_Weather_HPP
#define UE4SS_SDK_Ultra_Dynamic_Weather_HPP

class AUltra_Dynamic_Weather_C : public AGothicUltraDynamicWeatherAS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UUDS_PlayerOcclusion_C* Player Occlusion;                                   // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Rainbow;                                              // 0x03A8 (size: 0x8)
    class UAudioComponent* LightRain_Y-;                                              // 0x03B0 (size: 0x8)
    class UAudioComponent* LightRain_Y+;                                              // 0x03B8 (size: 0x8)
    class UAudioComponent* LightRain_X-;                                              // 0x03C0 (size: 0x8)
    class UAudioComponent* LightRain_X+;                                              // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Dust_Particles;                                          // 0x03D0 (size: 0x8)
    class UNiagaraComponent* Wind_Debris_Particles;                                   // 0x03D8 (size: 0x8)
    class UNiagaraComponent* Snow_Particles;                                          // 0x03E0 (size: 0x8)
    class UPostProcessComponent* ScreenDroplets;                                      // 0x03E8 (size: 0x8)
    class UAudioComponent* Wind_X+;                                                   // 0x03F0 (size: 0x8)
    class UAudioComponent* Rain_Y-;                                                   // 0x03F8 (size: 0x8)
    class UAudioComponent* Rain_Y+;                                                   // 0x0400 (size: 0x8)
    class UAudioComponent* Rain_X-;                                                   // 0x0408 (size: 0x8)
    class UAudioComponent* Rain_X+;                                                   // 0x0410 (size: 0x8)
    class UAudioComponent* Wind_Y-;                                                   // 0x0418 (size: 0x8)
    class UAudioComponent* Wind_Y+;                                                   // 0x0420 (size: 0x8)
    class UAudioComponent* Wind_X-;                                                   // 0x0428 (size: 0x8)
    class USceneComponent* SpatializedAudioRoot;                                      // 0x0430 (size: 0x8)
    class UPostProcessComponent* Post_Process_Wind_Fog;                               // 0x0438 (size: 0x8)
    class URandom_Weather_Variation_C* Random_Weather_Variation;                      // 0x0440 (size: 0x8)
    class UAudioComponent* Wind_Whistling;                                            // 0x0448 (size: 0x8)
    class UAudioComponent* DistantThunder_Cue;                                        // 0x0450 (size: 0x8)
    class UNiagaraComponent* Obscured_Lightning;                                      // 0x0458 (size: 0x8)
    class UDirectionalLightComponent* Lightning Light;                                // 0x0460 (size: 0x8)
    class UBillboardComponent* Root;                                                  // 0x0468 (size: 0x8)
    class UNiagaraComponent* Rain_Particles;                                          // 0x0470 (size: 0x8)
    class AUltra_Dynamic_Sky_C* UltraDynamicSky;                                      // 0x0478 (size: 0x8)
    bool Use Cinematics Settings;                                                     // 0x0480 (size: 0x1)
    class UUDS_Weather_Settings_C* Weather;                                           // 0x0488 (size: 0x8)
    double Cloud Coverage;                                                            // 0x0490 (size: 0x8)
    double Fog;                                                                       // 0x0498 (size: 0x8)
    double Wind Intensity;                                                            // 0x04A0 (size: 0x8)
    double Gothic Wind Intensity;                                                     // 0x04A8 (size: 0x8)
    double Rain;                                                                      // 0x04B0 (size: 0x8)
    double Snow;                                                                      // 0x04B8 (size: 0x8)
    double Thunder/Lightning;                                                         // 0x04C0 (size: 0x8)
    double Dust;                                                                      // 0x04C8 (size: 0x8)
    double Exponential Fog Starting Distance;                                         // 0x04D0 (size: 0x8)
    double Volumetric Fog Starting Distance;                                          // 0x04D8 (size: 0x8)
    double Base Fog Density;                                                          // 0x04E0 (size: 0x8)
    double Material Wetness;                                                          // 0x04E8 (size: 0x8)
    double Material Snow Coverage;                                                    // 0x04F0 (size: 0x8)
    double Wind Direction;                                                            // 0x04F8 (size: 0x8)
    double Lerp to New Settings;                                                      // 0x0500 (size: 0x8)
    double Lerp to Static Settings;                                                   // 0x0508 (size: 0x8)
    double Transition In Time;                                                        // 0x0510 (size: 0x8)
    int32 Transition State;                                                           // 0x0518 (size: 0x4)
    double Timer;                                                                     // 0x0520 (size: 0x8)
    bool Particle Collision Enabled;                                                  // 0x0528 (size: 0x1)
    double Ceiling Check Height;                                                      // 0x0530 (size: 0x8)
    double Spawn Direction Forward Bias;                                              // 0x0538 (size: 0x8)
    double Spawn Box Height;                                                          // 0x0540 (size: 0x8)
    double Max Spawn Distance;                                                        // 0x0548 (size: 0x8)
    double Spawn Distance Distribution;                                               // 0x0550 (size: 0x8)
    double Minimum Particle Distance;                                                 // 0x0558 (size: 0x8)
    FVector World Spawn Offset;                                                       // 0x0560 (size: 0x18)
    double Camera Forward Spawn Offset;                                               // 0x0578 (size: 0x8)
    bool Use Water Level;                                                             // 0x0580 (size: 0x1)
    double Water Level;                                                               // 0x0588 (size: 0x8)
    TEnumAsByte<ECollisionChannel> Weather Particle Collision Channel;                // 0x0590 (size: 0x1)
    bool Enable Rain Particles;                                                       // 0x0591 (size: 0x1)
    double Max Rain Particle Spawn Rate;                                              // 0x0598 (size: 0x8)
    double Rain GPU Particle Spawn Multiplier;                                        // 0x05A0 (size: 0x8)
    double Rain Drops Scale;                                                          // 0x05A8 (size: 0x8)
    FLinearColor Rain Particle Color Multiplier;                                      // 0x05B0 (size: 0x10)
    double Rain Drops Alpha;                                                          // 0x05C0 (size: 0x8)
    double Rain Refraction Intensity;                                                 // 0x05C8 (size: 0x8)
    double Rain Ambient Light Intensity;                                              // 0x05D0 (size: 0x8)
    bool Render Raindrop Decals;                                                      // 0x05D8 (size: 0x1)
    double Splash Frequency;                                                          // 0x05E0 (size: 0x8)
    double Splash Particles Scale;                                                    // 0x05E8 (size: 0x8)
    double Max Duplicate Splash Range;                                                // 0x05F0 (size: 0x8)
    bool Enable Snow Particles;                                                       // 0x05F8 (size: 0x1)
    double Max Snow Particle Spawn Rate;                                              // 0x0600 (size: 0x8)
    double Snow GPU Particle Spawn Multiplier;                                        // 0x0608 (size: 0x8)
    double Snow Flakes Scale;                                                         // 0x0610 (size: 0x8)
    double Snow Flakes Alpha;                                                         // 0x0618 (size: 0x8)
    double Snow Ambient Light Intensity;                                              // 0x0620 (size: 0x8)
    FLinearColor Snow Particle Color Multiplier;                                      // 0x0628 (size: 0x10)
    bool Snow Flakes Stick to Surfaces;                                               // 0x0638 (size: 0x1)
    double Snow Flakes Stick Time;                                                    // 0x0640 (size: 0x8)
    bool Spawn Lightning Flashes;                                                     // 0x0648 (size: 0x1)
    double Lightning Flash Interval (Min);                                            // 0x0650 (size: 0x8)
    double Lightning Flash Interval (Max);                                            // 0x0658 (size: 0x8)
    double Lightning Flash_Timing_Randomization;                                      // 0x0660 (size: 0x8)
    FLinearColor Lightning Effect Color;                                              // 0x0668 (size: 0x10)
    bool Lightning Flash Light Source;                                                // 0x0678 (size: 0x1)
    FLinearColor Lightning Flash Light Source Color;                                  // 0x067C (size: 0x10)
    double Maximum Lightning Flash Light Intensity;                                   // 0x0690 (size: 0x8)
    bool Lightning Flashes Cast Shadows;                                              // 0x0698 (size: 0x1)
    bool Lightning Flashes Cast Light Shaft Bloom;                                    // 0x0699 (size: 0x1)
    double Lightning Flash Light Shaft Intensity;                                     // 0x06A0 (size: 0x8)
    double Lightning Flash Minimum Distance;                                          // 0x06A8 (size: 0x8)
    double Lightning Flash Maximum Distance;                                          // 0x06B0 (size: 0x8)
    bool Enable Obscured Lightning;                                                   // 0x06B8 (size: 0x1)
    double Obscured Lightning Spawn Rate;                                             // 0x06C0 (size: 0x8)
    double Lightning Height Offset;                                                   // 0x06C8 (size: 0x8)
    bool Enable Fog Particles;                                                        // 0x06D0 (size: 0x1)
    double Max Fog Particle Percentage (Rain);                                        // 0x06D8 (size: 0x8)
    double Max Fog Particle Percentage (Snow);                                        // 0x06E0 (size: 0x8)
    double Max Fog Particle Percentage (Dust);                                        // 0x06E8 (size: 0x8)
    double Fog Particle Intensity (Rain);                                             // 0x06F0 (size: 0x8)
    double Fog Particle Intensity (Snow);                                             // 0x06F8 (size: 0x8)
    double Fog Particle Intensity (Dust);                                             // 0x0700 (size: 0x8)
    double Fog Particles Draw Distance;                                               // 0x0708 (size: 0x8)
    class AWindDirectionalSource* Wind Directional Source Actor (for SpeedTree);      // 0x0710 (size: 0x8)
    double Max Material Wetness;                                                      // 0x0718 (size: 0x8)
    double Max Material Snow Coverage;                                                // 0x0720 (size: 0x8)
    double Max Dust Coverage;                                                         // 0x0728 (size: 0x8)
    bool Material Effects Take Time to Change;                                        // 0x0730 (size: 0x1)
    double Time for Materials to Get Wet;                                             // 0x0738 (size: 0x8)
    double Time for Materials to Dry Out;                                             // 0x0740 (size: 0x8)
    double Time for Materials to Gather Snow;                                         // 0x0748 (size: 0x8)
    double Time for Snow to Melt;                                                     // 0x0750 (size: 0x8)
    double Time for Materials to Gather Dust;                                         // 0x0758 (size: 0x8)
    double Amount of Snow to Turn to Wetness when Melted;                             // 0x0760 (size: 0x8)
    double Wind Force Scale;                                                          // 0x0768 (size: 0x8)
    double Snow Delta;                                                                // 0x0770 (size: 0x8)
    bool Use Random Weather Variation;                                                // 0x0778 (size: 0x1)
    bool Start With a Random Weather Type;                                            // 0x0779 (size: 0x1)
    double Weather Type Change Minimum Interval;                                      // 0x0780 (size: 0x8)
    double Weather Type Change Maximum Interval;                                      // 0x0788 (size: 0x8)
    double Transition Length;                                                         // 0x0790 (size: 0x8)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Spring);       // 0x0798 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Summer);       // 0x07E8 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Autumn);       // 0x0838 (size: 0x50)
    TMap<UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Winter);       // 0x0888 (size: 0x50)
    bool Blend Season Probabilities;                                                  // 0x08D8 (size: 0x1)
    bool Avoid Extreme Cloud Coverage Shifts;                                         // 0x08D9 (size: 0x1)
    bool Avoid Repeating Weather Types;                                               // 0x08DA (size: 0x1)
    bool Avoid Changing Directly from Snow to Rain (Or Vice Versa);                   // 0x08DB (size: 0x1)
    double Extreme Cloud Coverage Shift Theshold;                                     // 0x08E0 (size: 0x8)
    bool Enable Rain Sounds;                                                          // 0x08E8 (size: 0x1)
    double Rain Volume;                                                               // 0x08F0 (size: 0x8)
    bool Enable Distant Thunder Sounds;                                               // 0x08F8 (size: 0x1)
    double Distant Thunder Volume;                                                    // 0x0900 (size: 0x8)
    bool Enable Close Thunder Sounds;                                                 // 0x0908 (size: 0x1)
    double Close Thunder Volume;                                                      // 0x0910 (size: 0x8)
    double Close Thunder Delay Per KM;                                                // 0x0918 (size: 0x8)
    bool Enable Wind Sounds;                                                          // 0x0920 (size: 0x1)
    double Wind Volume;                                                               // 0x0928 (size: 0x8)
    double Wind Whistling Volume;                                                     // 0x0930 (size: 0x8)
    double Intended Cloud Speed;                                                      // 0x0938 (size: 0x8)
    double Intended Cloud Coverage;                                                   // 0x0940 (size: 0x8)
    double Intended Cloud Direction;                                                  // 0x0948 (size: 0x8)
    double Cloud Speed Multiplier;                                                    // 0x0950 (size: 0x8)
    bool Runtime;                                                                     // 0x0958 (size: 0x1)
    double Fog Particle Camera Offset;                                                // 0x0960 (size: 0x8)
    double Wind Directional Source Intensity Scale;                                   // 0x0968 (size: 0x8)
    double Lightning Bolt Length;                                                     // 0x0970 (size: 0x8)
    double Lightning Flash Minimum Length;                                            // 0x0978 (size: 0x8)
    double Lightning Flash Maximum Length;                                            // 0x0980 (size: 0x8)
    bool Replicate Lightning Direction;                                               // 0x0988 (size: 0x1)
    double Lightning Flash Max Angle from Forward;                                    // 0x0990 (size: 0x8)
    double Lightning Flash Length;                                                    // 0x0998 (size: 0x8)
    bool Flashing Lightning;                                                          // 0x09A0 (size: 0x1)
    FTimerHandle Lightning Flash Timer;                                               // 0x09A8 (size: 0x8)
    class UCurveFloat* Lightning Flash Curve;                                         // 0x09B0 (size: 0x8)
    TEnumAsByte<UDS_TemperatureType::Type> Temperature Scale;                         // 0x09B8 (size: 0x1)
    double Base Summer Temperature;                                                   // 0x09C0 (size: 0x8)
    double Base Autumn Temperature;                                                   // 0x09C8 (size: 0x8)
    double Base Winter Temperature;                                                   // 0x09D0 (size: 0x8)
    double Base Spring Temerature;                                                    // 0x09D8 (size: 0x8)
    double Nighttime Factor;                                                          // 0x09E0 (size: 0x8)
    double Overcast Factor;                                                           // 0x09E8 (size: 0x8)
    double Raining Factor;                                                            // 0x09F0 (size: 0x8)
    double Morning/Evening Factor;                                                    // 0x09F8 (size: 0x8)
    double Snowing Factor;                                                            // 0x0A00 (size: 0x8)
    double Random Factor;                                                             // 0x0A08 (size: 0x8)
    double Interior Temperature;                                                      // 0x0A10 (size: 0x8)
    double Interior Insulation;                                                       // 0x0A18 (size: 0x8)
    double Minimum Valid Temperature;                                                 // 0x0A20 (size: 0x8)
    double Maximum Valid Temperature;                                                 // 0x0A28 (size: 0x8)
    double Max Cloud Speed;                                                           // 0x0A30 (size: 0x8)
    bool Enable Dynamic Landscape Weather Effects;                                    // 0x0A38 (size: 0x1)
    double Weather Speed;                                                             // 0x0A40 (size: 0x8)
    TEnumAsByte<UDS_ControlPointMode::Type> Control Point Location Source;            // 0x0A48 (size: 0x1)
    FVector Custom Control Point Location;                                            // 0x0A50 (size: 0x18)
    double Render Target Area for Dynamic Snow/Dust;                                  // 0x0A68 (size: 0x8)
    double Render Target Area for Dynamic Puddles;                                    // 0x0A70 (size: 0x8)
    double Snow Depth;                                                                // 0x0A78 (size: 0x8)
    double Dust Depth;                                                                // 0x0A80 (size: 0x8)
    bool Apply Dynamic Trails to Snow;                                                // 0x0A88 (size: 0x1)
    bool Apply Dynamic Trails to Dust;                                                // 0x0A89 (size: 0x1)
    double Snow/Dust Z Normal Cutoff;                                                 // 0x0A90 (size: 0x8)
    double Snow/Dust Z Normal Falloff;                                                // 0x0A98 (size: 0x8)
    double Snow/Dust Texture Scale;                                                   // 0x0AA0 (size: 0x8)
    double Snow/Dust Parallax Sample Scale;                                           // 0x0AA8 (size: 0x8)
    double Snow/Dust Compression Brush Spread;                                        // 0x0AB0 (size: 0x8)
    double Snow/Dust Compression Brush Scatter;                                       // 0x0AB8 (size: 0x8)
    double Snow/Dust Compression Brush Size Scatter;                                  // 0x0AC0 (size: 0x8)
    double Snow/Dust Compression Fade Speed Idle;                                     // 0x0AC8 (size: 0x8)
    double Snow/Dust Compression Fade Speed Active;                                   // 0x0AD0 (size: 0x8)
    double Max Snow/Dust Compression Brush Size;                                      // 0x0AD8 (size: 0x8)
    double Snow/Dust Compression Normal Map Intensity;                                // 0x0AE0 (size: 0x8)
    double Pixel Normal Snow/Dust Buildup;                                            // 0x0AE8 (size: 0x8)
    int32 Frames Per Update;                                                          // 0x0AF0 (size: 0x4)
    bool Increasing Material Snow Coverage;                                           // 0x0AF4 (size: 0x1)
    FVector Player Pawn Location;                                                     // 0x0AF8 (size: 0x18)
    FVector Player Camera Location;                                                   // 0x0B10 (size: 0x18)
    FVector Control Point Location;                                                   // 0x0B28 (size: 0x18)
    bool Apply Interaction Ripples to Puddles;                                        // 0x0B40 (size: 0x1)
    double Puddles Z Normal Cutoff;                                                   // 0x0B48 (size: 0x8)
    double Puddles Z Normal Falloff;                                                  // 0x0B50 (size: 0x8)
    double Puddle Coverage;                                                           // 0x0B58 (size: 0x8)
    double Base Wetness when Raining;                                                 // 0x0B60 (size: 0x8)
    double Base Wetness when Clear;                                                   // 0x0B68 (size: 0x8)
    double Puddle Sharpness;                                                          // 0x0B70 (size: 0x8)
    double Water Roughness;                                                           // 0x0B78 (size: 0x8)
    double Ripple Spread;                                                             // 0x0B80 (size: 0x8)
    double Ripple Fade Speed;                                                         // 0x0B88 (size: 0x8)
    double Puddle Normals Intensity;                                                  // 0x0B90 (size: 0x8)
    TArray<class UPhysicalMaterial*> Physical Materials which enable DLWE Interactions on non-Landscapes; // 0x0B98 (size: 0x10)
    TEnumAsByte<EObjectTypeQuery> Landscape Object Type;                              // 0x0BA8 (size: 0x1)
    TArray<class UPhysicalMaterial*> Physical Materials which disable Snow/Dust Sounds and Particles; // 0x0BB0 (size: 0x10)
    TArray<class UPhysicalMaterial*> Physical Materials which disable Puddle Sounds and Particles; // 0x0BC0 (size: 0x10)
    double Variation Clouds Scale;                                                    // 0x0BD0 (size: 0x8)
    bool Enable WOV Material Effect Target;                                           // 0x0BD8 (size: 0x1)
    double WOV Target Size;                                                           // 0x0BE0 (size: 0x8)
    double WOV Target Update Threshold (Inside Volume);                               // 0x0BE8 (size: 0x8)
    double WOV Target Update Threshold (Outside Volume);                              // 0x0BF0 (size: 0x8)
    TArray<class AWeather_Override_Volume_C*> Weather Override Volumes;               // 0x0BF8 (size: 0x10)
    int32 Mask Target Resolution;                                                     // 0x0C08 (size: 0x4)
    double Tiling Ripples Scale;                                                      // 0x0C10 (size: 0x8)
    bool Use Custom Lightning Location;                                               // 0x0C18 (size: 0x1)
    FVector Custom Lightning Location;                                                // 0x0C20 (size: 0x18)
    bool Using Global Weather State;                                                  // 0x0C38 (size: 0x1)
    bool Resetting Particle Emitters;                                                 // 0x0C39 (size: 0x1)
    double Current Max Interact Distance;                                             // 0x0C40 (size: 0x8)
    bool Mobile;                                                                      // 0x0C48 (size: 0x1)
    FVector Custom Lightning Target;                                                  // 0x0C50 (size: 0x18)
    double Current Lightning Intensity;                                               // 0x0C68 (size: 0x8)
    FVector Current Lightning Location;                                               // 0x0C70 (size: 0x18)
    double Current Lightning Angle;                                                   // 0x0C88 (size: 0x8)
    TScriptInterface<class IGothicUltraDynamicOverrideVolume> Current Weather Override Volume; // 0x0C90 (size: 0x10)
    int32 WOV Target Resolution;                                                      // 0x0CA0 (size: 0x4)
    bool Currently in a Weather Override Volume;                                      // 0x0CA4 (size: 0x1)
    TArray<double> DLWE Brush Size Buffer;                                            // 0x0CA8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> Ripple Brushes;                           // 0x0CB8 (size: 0x10)
    TArray<class ALandscape*> Landscape Actors;                                       // 0x0CC8 (size: 0x10)
    TSoftObjectPtr<UTextureRenderTarget2D> DLWE_MaskTarget;                           // 0x0CD8 (size: 0x28)
    FVector DLWE_RenderTarget_Center;                                                 // 0x0D00 (size: 0x18)
    FVector DLWE_Recenter_Offset;                                                     // 0x0D18 (size: 0x18)
    int32 DLWE Frame Count;                                                           // 0x0D30 (size: 0x4)
    TEnumAsByte<UDS_DLWE_Mode::Type> Current DLWE Mode;                               // 0x0D34 (size: 0x1)
    TArray<FVector2D> Cloud Reference Array;                                          // 0x0D38 (size: 0x10)
    TArray<class UTextureRenderTarget2D*> Render Targets to Release Next Frame;       // 0x0D48 (size: 0x10)
    TArray<FVector> DLWE_Brush_Locations_Buffer;                                      // 0x0D58 (size: 0x10)
    TArray<double> DLWE Brush Strength Buffer;                                        // 0x0D68 (size: 0x10)
    bool Use Occlusion to Attenuate Sounds in Interiors;                              // 0x0D78 (size: 0x1)
    double Max Attenuation;                                                           // 0x0D80 (size: 0x8)
    double Min LPF Frequency;                                                         // 0x0D88 (size: 0x8)
    TEnumAsByte<UDS_Occlusion_Mode::Type> Occlusion Sampling Mode;                    // 0x0D90 (size: 0x1)
    double Max Interior Trace Distance;                                               // 0x0D98 (size: 0x8)
    double Sound Occlusion Update Period;                                             // 0x0DA0 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> Occlusion Trace Channel;                             // 0x0DA8 (size: 0x1)
    bool Enable Post Process Wind Fog;                                                // 0x0DA9 (size: 0x1)
    double PPWF Intensity from Fog;                                                   // 0x0DB0 (size: 0x8)
    TArray<class UAudioComponent*> Rain Sound Components;                             // 0x0DB8 (size: 0x10)
    TArray<class UAudioComponent*> Wind Sound Components;                             // 0x0DC8 (size: 0x10)
    double PPWF Intensity from Rain;                                                  // 0x0DD8 (size: 0x8)
    double PPWF Intensity from Snow;                                                  // 0x0DE0 (size: 0x8)
    double PPWF Intensity from Dust;                                                  // 0x0DE8 (size: 0x8)
    double PPWF Fade Distance;                                                        // 0x0DF0 (size: 0x8)
    double PPWF Max Sample Distance;                                                  // 0x0DF8 (size: 0x8)
    double PPWF Sample Step Distance;                                                 // 0x0E00 (size: 0x8)
    double PPWF 3D Noise Scale;                                                       // 0x0E08 (size: 0x8)
    class UMaterialInstanceDynamic* Post Process Wind Fog MID;                        // 0x0E10 (size: 0x8)
    double Time Random Offset;                                                        // 0x0E18 (size: 0x8)
    bool Enable Wind Direction Variation;                                             // 0x0E20 (size: 0x1)
    double Maximum Wind Direction Variation;                                          // 0x0E28 (size: 0x8)
    double Current Wind Direction;                                                    // 0x0E30 (size: 0x8)
    double Variation Speed;                                                           // 0x0E38 (size: 0x8)
    double Wind Variation Time;                                                       // 0x0E40 (size: 0x8)
    bool Run By Counterpart;                                                          // 0x0E48 (size: 0x1)
    int32 Current Tick Set;                                                           // 0x0E4C (size: 0x4)
    bool Spread_Out Tick Behaviors Over 3 Frames;                                     // 0x0E50 (size: 0x1)
    bool Initialized;                                                                 // 0x0E51 (size: 0x1)
    TMap<FName, TEnumAsByte<UDS_PropertyType::Type>> Properties;                      // 0x0E58 (size: 0x50)
    FVector Occlusion Location;                                                       // 0x0EA8 (size: 0x18)
    bool Use Camera Location for Occlusion;                                           // 0x0EC0 (size: 0x1)
    double Snow Coverage Lights Up Height Fog;                                        // 0x0EC8 (size: 0x8)
    FUltra_Dynamic_Weather_CStarted Raining Started Raining;                          // 0x0ED0 (size: 0x10)
    void Started Raining();
    FUltra_Dynamic_Weather_CStarted Snowing Started Snowing;                          // 0x0EE0 (size: 0x10)
    void Started Snowing();
    FUltra_Dynamic_Weather_CFinished Raining Finished Raining;                        // 0x0EF0 (size: 0x10)
    void Finished Raining();
    FUltra_Dynamic_Weather_CFinished Snowing Finished Snowing;                        // 0x0F00 (size: 0x10)
    void Finished Snowing();
    FUltra_Dynamic_Weather_CGetting Cloudy Getting Cloudy;                            // 0x0F10 (size: 0x10)
    void Getting Cloudy();
    FUltra_Dynamic_Weather_CClouds Clearing Clouds Clearing;                          // 0x0F20 (size: 0x10)
    void Clouds Clearing();
    bool ED_Raining;                                                                  // 0x0F30 (size: 0x1)
    bool ED_Snowy;                                                                    // 0x0F31 (size: 0x1)
    bool ED_Cloudy;                                                                   // 0x0F32 (size: 0x1)
    double WOV Temperature Offset;                                                    // 0x0F38 (size: 0x8)
    bool Enable Screen Droplets;                                                      // 0x0F40 (size: 0x1)
    double Screen Center Strength;                                                    // 0x0F48 (size: 0x8)
    double Screen Edge Strength;                                                      // 0x0F50 (size: 0x8)
    double Camera Facing Rain Bias;                                                   // 0x0F58 (size: 0x8)
    double Droplet Tiling;                                                            // 0x0F60 (size: 0x8)
    double Blur Radius;                                                               // 0x0F68 (size: 0x8)
    class UMaterialInstanceDynamic* Screen Droplets MID;                              // 0x0F70 (size: 0x8)
    double Drips Intensity;                                                           // 0x0F78 (size: 0x8)
    double Drops Intensity;                                                           // 0x0F80 (size: 0x8)
    double Drops Time;                                                                // 0x0F88 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> Screen Droplets Parent Material;               // 0x0F90 (size: 0x28)
    FVector Player Camera Forward Vector;                                             // 0x0FB8 (size: 0x18)
    bool Rain System Spawning;                                                        // 0x0FD0 (size: 0x1)
    bool Obscured Lightning System Spawning;                                          // 0x0FD1 (size: 0x1)
    bool Current Weather State Changed;                                               // 0x0FD2 (size: 0x1)
    double Unoccluded Rain Volume;                                                    // 0x0FD8 (size: 0x8)
    bool Current Material State Changed;                                              // 0x0FE0 (size: 0x1)
    bool First Tick;                                                                  // 0x0FE1 (size: 0x1)
    bool Override with New Changes;                                                   // 0x0FE2 (size: 0x1)
    bool Enable Dust Particles;                                                       // 0x0FE3 (size: 0x1)
    double Max Dust Particle Spawn Rate;                                              // 0x0FE8 (size: 0x8)
    double Dust Particle Scale;                                                       // 0x0FF0 (size: 0x8)
    FLinearColor Dust Particle Color;                                                 // 0x0FF8 (size: 0x10)
    double Dust Particle Alpha;                                                       // 0x1008 (size: 0x8)
    bool Cut Off Particles Above Volumetric Cloud Layer;                              // 0x1010 (size: 0x1)
    bool Enable Wind Debris;                                                          // 0x1011 (size: 0x1)
    double Wind Debris Amount;                                                        // 0x1018 (size: 0x8)
    double Debris Scale;                                                              // 0x1020 (size: 0x8)
    double Debris Particle Alpha;                                                     // 0x1028 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Wind Debris Atlas;                                     // 0x1030 (size: 0x28)
    class UTextureRenderTarget2D* Weather Mask Brush Target;                          // 0x1058 (size: 0x8)
    FVector2D Weather Brush Target Corner;                                            // 0x1060 (size: 0x10)
    int32 Weather Mask Target Size;                                                   // 0x1070 (size: 0x4)
    int32 Weather Mask Brush Target Resolution;                                       // 0x1074 (size: 0x4)
    TArray<class AWeather_Mask_Brush_C*> All Weather Mask Brushes;                    // 0x1078 (size: 0x10)
    bool Weather Mask Target in Use;                                                  // 0x1088 (size: 0x1)
    FVector2D Weather Brush Target Center;                                            // 0x1090 (size: 0x10)
    double Weather Mask Target Half Size;                                             // 0x10A0 (size: 0x8)
    double Weather Mask Projection Value;                                             // 0x10A8 (size: 0x8)
    TArray<class AWeather_Mask_Brush_C*> DLWE Relevant Weather Mask Brushes;          // 0x10B0 (size: 0x10)
    FVector Weather Brush Target Root Position;                                       // 0x10C0 (size: 0x18)
    bool Triggered Starting Dispatchers;                                              // 0x10D8 (size: 0x1)
    class UUDS_Weather_Settings_C* Old Weather State;                                 // 0x10E0 (size: 0x8)
    class UUDS_Weather_Settings_C* Global Weather State;                              // 0x10E8 (size: 0x8)
    class UUDS_Weather_Settings_C* Local Weather State;                               // 0x10F0 (size: 0x8)
    double Replicated Material Wetness;                                               // 0x10F8 (size: 0x8)
    double Replicated Material Snow;                                                  // 0x1100 (size: 0x8)
    class UUDS_Weather_Settings_C* Last Local Weather State;                          // 0x1108 (size: 0x8)
    double Intended Fog;                                                              // 0x1110 (size: 0x8)
    bool Snow System Spawning;                                                        // 0x1118 (size: 0x1)
    bool Wind Debris System Spawning;                                                 // 0x1119 (size: 0x1)
    double Intended Dust;                                                             // 0x1120 (size: 0x8)
    bool Dust System Spawning;                                                        // 0x1128 (size: 0x1)
    double Material Dust Coverage;                                                    // 0x1130 (size: 0x8)
    double Replicated Material Dust;                                                  // 0x1138 (size: 0x8)
    int32 DLWE Snow Mode;                                                             // 0x1140 (size: 0x4)
    TEnumAsByte<UDS_SeasonMode::Type> Season Mode;                                    // 0x1144 (size: 0x1)
    double Season;                                                                    // 0x1148 (size: 0x8)
    TArray<double> Individual Seasons;                                                // 0x1150 (size: 0x10)
    TArray<class UAudioComponent*> Light Rain Sound Components;                       // 0x1160 (size: 0x10)
    double Unoccluded Light Rain Volume;                                              // 0x1170 (size: 0x8)
    double Old Cloud Coverage;                                                        // 0x1178 (size: 0x8)
    double Old Rain;                                                                  // 0x1180 (size: 0x8)
    double Old Wind Intensity;                                                        // 0x1188 (size: 0x8)
    double Old Snow;                                                                  // 0x1190 (size: 0x8)
    double Old Thunder/Lightning;                                                     // 0x1198 (size: 0x8)
    double Old Fog;                                                                   // 0x11A0 (size: 0x8)
    double Old Dust;                                                                  // 0x11A8 (size: 0x8)
    double Old Material Wetness;                                                      // 0x11B0 (size: 0x8)
    double Old Material Snow Coverage;                                                // 0x11B8 (size: 0x8)
    double Old Material Dust Coverage;                                                // 0x11C0 (size: 0x8)
    class UUDS_Weather_Settings_C* Manual Weather State;                              // 0x11C8 (size: 0x8)
    double Old Lerp to Static Settings;                                               // 0x11D0 (size: 0x8)
    TSoftObjectPtr<USoundBase> Wind Cue Sound;                                        // 0x11D8 (size: 0x28)
    TSoftObjectPtr<USoundBase> Rain Cue Sound;                                        // 0x1200 (size: 0x28)
    TSoftObjectPtr<USoundBase> Light Rain Cue Sound;                                  // 0x1228 (size: 0x28)
    TSoftObjectPtr<USoundBase> Distant Thunder Cue Sound;                             // 0x1250 (size: 0x28)
    TSoftObjectPtr<USoundBase> Wind Whistling Cue Sound;                              // 0x1278 (size: 0x28)
    TSoftObjectPtr<UTexture2D> Clouds Diverse Texture;                                // 0x12A0 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> Rain Particle Niagara System;                      // 0x12C8 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> Snow Particle Niagara System;                      // 0x12F0 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> Dust Particle Niagara System;                      // 0x1318 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> Wind Debris Niagara System;                        // 0x1340 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> Obscured Lightning Niagara System;                 // 0x1368 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Post Process Wind Fog Parent Material;         // 0x1390 (size: 0x28)
    FUltra_Dynamic_Weather_CDust/Sand Forming Dust/Sand Forming;                      // 0x13B8 (size: 0x10)
    void Dust/Sand Forming();
    FUltra_Dynamic_Weather_CDust/Sand Clearing Dust/Sand Clearing;                    // 0x13C8 (size: 0x10)
    void Dust/Sand Clearing();
    bool ED_Dusty;                                                                    // 0x13D8 (size: 0x1)
    bool Enable Rainbow;                                                              // 0x13D9 (size: 0x1)
    double Max Rainbow Strength;                                                      // 0x13E0 (size: 0x8)
    double Strength from Rain;                                                        // 0x13E8 (size: 0x8)
    double Strength from Fog;                                                         // 0x13F0 (size: 0x8)
    double Strength in any Weather;                                                   // 0x13F8 (size: 0x8)
    double Time to Last After Rain/Fog;                                               // 0x1400 (size: 0x8)
    double Current Rainbow Visibility;                                                // 0x1408 (size: 0x8)
    double Mask Rainbow Above Clouds;                                                 // 0x1410 (size: 0x8)
    double Mask Rainbow Below Water;                                                  // 0x1418 (size: 0x8)
    TEnumAsByte<UDS_Weather_Display_Names::Type> ED_CurrentWeather;                   // 0x1420 (size: 0x1)
    FUltra_Dynamic_Weather_CWeather Display Name Changed Weather Display Name Changed; // 0x1428 (size: 0x10)
    void Weather Display Name Changed(TEnumAsByte<UDS_Weather_Display_Names::Type> Weather Name);
    bool Support Virtual Heightfield Mesh;                                            // 0x1438 (size: 0x1)
    class ARuntimeVirtualTextureVolume* VHFM Runtime Virtual Texture Volume;          // 0x1440 (size: 0x8)
    double VHFM Invalidate Long Range Distance;                                       // 0x1448 (size: 0x8)
    double VHFM Invalidate Long Range Threshold;                                      // 0x1450 (size: 0x8)
    double VHFM Invalidate Mid Range Distance;                                        // 0x1458 (size: 0x8)
    double VHFM Invalidate Mid Range Threshold;                                       // 0x1460 (size: 0x8)
    double VHFM Invalidate Short Range Distance;                                      // 0x1468 (size: 0x8)
    double VHFM Invalidate Short Range Threshold;                                     // 0x1470 (size: 0x8)
    FVector VHFM Invalidate Long Range Buffer;                                        // 0x1478 (size: 0x18)
    FVector VHFM Invalidate Mid Range Buffer;                                         // 0x1490 (size: 0x18)
    FVector VHFM Invalidate Short Range Buffer;                                       // 0x14A8 (size: 0x18)
    TArray<double> Cached Floats Old;                                                 // 0x14C0 (size: 0x10)
    TArray<double> Cached Floats New;                                                 // 0x14D0 (size: 0x10)
    TArray<FVector> Cached Vectors Old;                                               // 0x14E0 (size: 0x10)
    TArray<FVector> Cached Vectors New;                                               // 0x14F0 (size: 0x10)
    double Cache Alpha;                                                               // 0x1500 (size: 0x8)
    bool Filling Starting Cache;                                                      // 0x1508 (size: 0x1)
    TArray<bool> Cached Value Changing;                                               // 0x1510 (size: 0x10)
    double Cache Period;                                                              // 0x1520 (size: 0x8)
    double Cached Wind Direction;                                                     // 0x1528 (size: 0x8)
    bool Fog Particles Active;                                                        // 0x1530 (size: 0x1)
    FVector Cached Rain Velocity;                                                     // 0x1538 (size: 0x18)
    FVector Last Recenter Check Location;                                             // 0x1550 (size: 0x18)
    double Current Local Weather Change Speed;                                        // 0x1568 (size: 0x8)
    FUltra_Dynamic_Weather_CUpdate DLWE State Update DLWE State;                      // 0x1570 (size: 0x10)
    void Update DLWE State(TEnumAsByte<UDS_DLWE_Mode::Type> Current Mode, FVector Render Target Center, FVector Mapping Space);
    class USoundMix* Outdoor Sound Mix Modifier;                                      // 0x1580 (size: 0x8)
    double Max Attenuation for UDS Outdoor Sound;                                     // 0x1588 (size: 0x8)
    double Update Season Interval;                                                    // 0x1590 (size: 0x8)
    FUDS_and_UDW_State State Being Applied;                                           // 0x1598 (size: 0x178)
    TSoftObjectPtr<UTextureRenderTarget2D> Weather Volume Target;                     // 0x1710 (size: 0x28)
    class UMaterialInstanceDynamic* WOV_Target_Brush_MID;                             // 0x1738 (size: 0x8)
    FVector2D WOV Target Corner Position;                                             // 0x1740 (size: 0x10)
    FVector Weather Override Volume Target Location;                                  // 0x1750 (size: 0x18)
    bool WOV Material Effect Target Active;                                           // 0x1768 (size: 0x1)
    bool Shutting Down;                                                               // 0x1769 (size: 0x1)
    bool Weather Override Volume Contributing Snow Coverage;                          // 0x176A (size: 0x1)
    class UTextureRenderTarget2D* Mask Buffer Target;                                 // 0x1770 (size: 0x8)
    FString UDS Version;                                                              // 0x1778 (size: 0x10)
    class UUDS_VersionInfo_C* UDS Version Info;                                       // 0x1788 (size: 0x8)
    int32 Anti Aliasing Method;                                                       // 0x1790 (size: 0x4)
    int32 Season Day Offset;                                                          // 0x1794 (size: 0x4)
    TArray<class AWeather_Mask_Projection_Box_C*> All Weather Mask Projection Boxes;  // 0x1798 (size: 0x10)
    TArray<class AWeather_Mask_Projection_Box_C*> DLWE Relevant Projection Boxes;     // 0x17A8 (size: 0x10)
    TArray<class AWeather_Override_Volume_C*> WOV References to Remove;               // 0x17B8 (size: 0x10)
    TArray<class AWeather_Mask_Brush_C*> Mask Brush References to Remove;             // 0x17C8 (size: 0x10)
    TArray<class AWeather_Mask_Projection_Box_C*> Projection Box References to Remove; // 0x17D8 (size: 0x10)
    FVector Editor WOV Target Root;                                                   // 0x17E8 (size: 0x18)
    FVector Editor Mask Target Root;                                                  // 0x1800 (size: 0x18)
    FVector2D WOV Wind Direction;                                                     // 0x1818 (size: 0x10)
    FVector Current Lightning Target Offset;                                          // 0x1828 (size: 0x18)
    double Cache Current Timer;                                                       // 0x1840 (size: 0x8)
    bool Update All Cached Properties;                                                // 0x1848 (size: 0x1)
    TSoftObjectPtr<UMaterial> Splash Material Decal;                                  // 0x1850 (size: 0x28)
    TSoftObjectPtr<UMaterial> Splash Material Translucent;                            // 0x1878 (size: 0x28)
    TEnumAsByte<UDS_Project_Mode::Type> Project Mode;                                 // 0x18A0 (size: 0x1)
    bool UDS Needs Updating;                                                          // 0x18A1 (size: 0x1)
    bool Not Limiting Construction;                                                   // 0x18A2 (size: 0x1)
    double Last Construction Script Time;                                             // 0x18A8 (size: 0x8)
    bool Show Trace Debugs;                                                           // 0x18B0 (size: 0x1)
    class UMaterialInstanceDynamic* Rainbow MID;                                      // 0x18B8 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> Rainbow Material 2D;                           // 0x18C0 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Rainbow Material Volumetric;                   // 0x18E8 (size: 0x28)
    TEnumAsByte<E_Biome::Type> Current Biome;                                         // 0x1910 (size: 0x1)
    TArray<class ABP_Fog_Override_Zone_C*> Fog Override Volumes;                      // 0x1918 (size: 0x10)
    class UUDS_Weather_Settings_C* Fog Override Volume Preset;                        // 0x1928 (size: 0x8)
    TMap<ABP_Fog_Override_Zone_C*, double> Current Override Volumes;                  // 0x1930 (size: 0x50)
    double Lights Volumetric Fog Multiplier;                                          // 0x1980 (size: 0x8)
    FUltra_Dynamic_Weather_CUpdated Current Preset Updated Current Preset;            // 0x1988 (size: 0x10)
    void Updated Current Preset(class UUDS_Weather_Settings_C* Settings);
    TArray<TScriptInterface<IBPI_WeatherSettingsReceiver_C>> WeatherSettingsReceiver; // 0x1998 (size: 0x10)
    int32 LightsUpdatePerFrame;                                                       // 0x19A8 (size: 0x4)
    int32 CurrentWeatherReceiverIndex;                                                // 0x19AC (size: 0x4)
    bool Override Current Settings;                                                   // 0x19B0 (size: 0x1)
    class UUDS_Weather_Settings_C* Gothic Override Weather State;                     // 0x19B8 (size: 0x8)
    double Current Fog Volume Alpha;                                                  // 0x19C0 (size: 0x8)
    double Sun Volumetric Scattering Intensity;                                       // 0x19C8 (size: 0x8)
    double Fog Volume Weather Alpha;                                                  // 0x19D0 (size: 0x8)
    int32 Fog Override Volume Index;                                                  // 0x19D8 (size: 0x4)
    int32 Max Override Volume Check Per Frame;                                        // 0x19DC (size: 0x4)
    TArray<class ABP_Fog_Override_Zone_C*> Fog Volumes Zones In Range;                // 0x19E0 (size: 0x10)
    EWeather Last Known Weather;                                                      // 0x19F0 (size: 0x1)
    double Weather Raining;                                                           // 0x19F8 (size: 0x8)
    double Extra Fog Start In Override Zone;                                          // 0x1A00 (size: 0x8)
    TEnumAsByte<ECollisionChannel> Weather Particle Collision Channel For Water;      // 0x1A08 (size: 0x1)
    class ABP_Wind_Particles_C* Wind System;                                          // 0x1A10 (size: 0x8)
    bool Fog Volumes Should Stop Raining;                                             // 0x1A18 (size: 0x1)
    int32 Biggest Fog Override Priority;                                              // 0x1A1C (size: 0x4)
    TMap<int32, FS_OverrideVolumeGroup> Sorted Fogs By Priority;                      // 0x1A20 (size: 0x50)
    bool Allow Spawning Thunders;                                                     // 0x1A70 (size: 0x1)
    bool Allow Dropplets Visuals;                                                     // 0x1A71 (size: 0x1)
    TArray<double> No Occlusion Profile;                                              // 0x1A78 (size: 0x10)
    float Thunder Echo Delay Min;                                                     // 0x1A88 (size: 0x4)
    float Thunder Echo Delay Max;                                                     // 0x1A8C (size: 0x4)

    void Get Rainbow MID(bool& Rainbow Enabled, class UMaterialInstanceDynamic*& Mid);
    void Get Intended Water Level(bool& Using Water Level, double& Water Level);
    void Get Weather Particle Collision Channel(TEnumAsByte<ECollisionChannel>& Channel);
    void Get Close Thunder Sound Occlusion(double& Volume, double& LPF);
    void Get State for Saving(FUDS_and_UDW_State& UDW State);
    void Get Intended Cloud Direction(double& Intended Cloud Direction);
    void Get Intended Cloud Speed(double& Intended Cloud Speed);
    TArray<class AActor*> GetAllFogVolumes();
    TArray<TScriptInterface<IGothicUltraDynamicOverrideFog>> GetOverrideFogs();
    TArray<TScriptInterface<IGothicUltraDynamicOverrideVolume>> GetOverrideVolumes();
    void Update Current Fog Overrides By Priority();
    void Remove Custom Fog Override(class ABP_Fog_Override_Zone_C* Volume);
    void Add Custom Fog Override(class ABP_Fog_Override_Zone_C* Volume);
    void GetWindParticles(class ABP_Wind_Particles_C*& Wind Particles);
    void GetLocalWeather(class UUDS_Weather_Settings_C*& Weather);
    void Set Cloudy Amount();
    void Gothic Override Current Settings();
    void UnregisterWeatherSettingsReceiver(TScriptInterface<class IBPI_WeatherSettingsReceiver_C> Receiver);
    void RegisterWeatherSettingsReceiver(TScriptInterface<class IBPI_WeatherSettingsReceiver_C> Receiver);
    void Get Current Fog Overrides by Priority(int32& Max Priority, TMap<int32, FS_OverrideVolumeGroup>& Sorted Fogs);
    void Copy Fog Settings To Weather Settings(class UUDS_Weather_Settings_C* Weather Settings, class UPDA_Fog_Settings_C* Fog Settings);
    void To Gameplay Weather(EWeather Weather, EWeatherEvent& Weather Event);
    void Is Weather Rainning(EWeather Weather, bool& Is Rainning);
    void Notify Weather Transition();
    void Update Current Biome();
    void Check to Turn on UDS Rainbow();
    void Check To Limit Construction();
    double Scale Cache Period();
    void Increment Cache Timer();
    void Update Obscured Lightning Glow();
    void Lerp Yaw Angles(double Angle A, double Angle B, double Alpha, double& Out);
    double Combined Wind Direction();
    void Lightning Bolt Target Offset(FVector& Out);
    void Remove Old Drawing Actors();
    void Report Removal of Drawing Actor(class AActor* Actor);
    void Query Project Settings();
    void Check UDS Version();
    void Apply Max to Material Effects(class UUDS_Weather_Settings_C* Weather, double& Snow Coverage, double& Wetness, double& Dust);
    void Check to Recenter Weather Override Volume Target();
    void Update WOV Target Coordinates(bool Use Editor Location);
    void Initialize Weather Override Volume Target();
    void Draw Weather Override Volume Target();
    void Update Outdoor Sound Mix();
    void Make Outdoor Sound Mix();
    void Update DLWE Component States();
    FVector PPWF Velocity();
    void Add Weather Override Volume to Array(class AWeather_Override_Volume_C* Weather Override Volume);
    void Get Starting Fog Override Areas();
    void Get Starting Weather Override Volumes();
    void Cached Wind Rotation(FRotator& rot);
    void Is Cached Property Changing(TEnumAsByte<UDW_CachedProperties::Type> Property, bool& Yes);
    void Update Current Global and Local Weather State();
    void Global Lightning Timer();
    void Size Cache Arrays();
    void Set Cache Alpha();
    void Get Cached Vector(TEnumAsByte<UDW_CachedProperties::Type> Property, FVector& Value);
    void Cache Vector(TEnumAsByte<UDW_CachedProperties::Type> Property, FVector Set Value);
    void Cache Float(TEnumAsByte<UDW_CachedProperties::Type> Property, double Set Value);
    void Get Cached Float(TEnumAsByte<UDW_CachedProperties::Type> Property, double& Value);
    void Cache Properties();
    void Current PPWF Intensity(double& Out);
    void Lightning Flash Location(FVector& Loc);
    void Lightning World Height(double& Height);
    void Invalidate VHFM Level(double Threshold, double Distance, FVector& Buffer, FVector Current, bool& Continue);
    void Invalidate VHFM With Material States();
    void Update Rainbow Intensity();
    void Set Up Rainbow();
    void Initialize Occlusion();
    void Sample Current Sound Occlusion Values(double& Non-Directional Occlusion, double& X+ Occlusion, double& Y+ Occlusion, double& X- Occlusion, double& Y- Occlusion);
    void Get Display Name for Current Weather(FString& As String, TEnumAsByte<UDS_Weather_Display_Names::Type>& As Enumerator);
    void Load Required Assets();
    void Make Manual State();
    void Light Rain Sound Intensity(double& Int);
    void Update Season();
    void Update Fog Particle Parameters(class UFXSystemComponent* Target, double Max Particle Percentage, double Weather Intensity, double Particle Intensity);
    void Update Active Dust Parameters();
    void Update Active Wind Debris Parameters();
    void Update Active Snow Parameters();
    void Update Active Rain Parameters();
    void Update Old State With Replicated Variables();
    void Set Replicated Old Weather State();
    void Compare Weather States(class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double& Difference);
    void Copy Weather State(class UUDS_Weather_Settings_C* Source, class UUDS_Weather_Settings_C* Target, bool Set Material Effects);
    void Create Weather State Objects();
    void Lerp Between Weather States(class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double Alpha, class UUDS_Weather_Settings_C* Target State, bool Set Material Effects, bool Use Bias for Material Effects);
    void Currently Dusty(bool& Yes);
    void Sort Brushes by Height(TArray<class AWeather_Mask_Brush_C*>& Brushes, TArray<class AWeather_Mask_Brush_C*>& Sorted Brushes);
    void Close Thunder Sound Delay(double& Delay);
    void Approximate Weather Mask Brush Effect(class AWeather_Mask_Brush_C* Brush, FVector2D Location, double Height, double& Out, bool& Cancel);
    void Check to Redraw Weather Mask Target();
    void Initialize Weather Mask Target();
    void Draw Weather Mask Brush Target(bool Use Editor Location);
    void Delta Time with Tick Set(double& Delta);
    void Currently Cloudy(bool& Yes);
    void Currently Snowing(bool& Yes);
    void Currently Raining(bool& Yes);
    void Wind Rotation(FRotator& rot);
    void Is Point in DLWE Space(FVector Point, bool& Yes);
    void Does DLWE Need Recentering(bool& Needs X Axis Recenter, bool& Needs Y Axis Recenter);
    void DLWE Render Target Area(double& Area);
    void DLWE Compression Brush(FVector Location, double Size, int32 Resolution, double spread, FVector2D& Corner Position, FVector2D& Brush Size);
    void DLWE_Render Target Mapping(FLinearColor& Mapping);
    void Distant Thunder Sound Intensity(double& Int);
    void Wind Whistling Sound Intensity(double& Int);
    void Wind Sound Intensity(double& Int);
    void Rain Sound Intensity(double& Int);
    void Lightning Distance Range(double& Range);
    void Current Rain Snow Spawn Rate(double Intensity, double Spawn Rate, double Wind Bonus, double& Rate);
    void Current Dust Velocity(FVector& Velocity);
    void Current Wind Debris Velocity(FVector& Velocity);
    void Current Snow Velocity(FVector& Velocity);
    void Current Rain Velocity(FVector& Velocity);
    void Set Shared Weather Particle Parameters(class UNiagaraComponent* System);
    void Sort Weather Override Volumes();
    void Update Screen Droplets();
    void Start Screen Droplets();
    void Check for Events to Dispatch();
    void Test Actor for Weather Exposure(class AActor* Actor, bool Test Colliding Components Only, double& Rain Exposure, double& Snow Exposure, double& Wind Exposure, double& Dust Exposure);
    void Update Audio Component Activity(class UAudioComponent* Tested Component, TArray<class UAudioComponent*>& Affected Components, double Current Sound Intensity, double Start Randomization, bool Enable Bool);
    void Update Enabled Sound Components();
    void Update Post Process Wind Fog();
    void Set up Post Process Wind Fog();
    void Current Lightning Period and Status(double Thunder/Lightning, double& Period, bool& Enabled);
    void Update Material Effect Parameters();
    void Get Updated Control Point Location();
    void Apply Current / Local Weather();
    void Check Point for Puddles Snow Or Dust(FVector Location, FVector Ground Normal, class UPhysicalMaterial* Physical Material, double& Puddle Depth, double& Snow Depth, double& Dust Depth);
    void Create Cloud Reference Array();
    void Recycle Render Targets();
    void Update DLWE Puddle Ripples();
    void Ripple DLWE Puddle(FVector Location, double Size, double Strength);
    void Check to change DLWE Mode();
    void Recenter DLWE Render Target(class UTextureRenderTarget2D* Render Target, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor Clear Color, class UMaterialInterface* EdgeFade Material, int32 Resolution, bool Draw Edge Fade);
    void Fade DLWE Target Over Time();
    void Update DLWE Snow Compressions();
    void Compress DLWE Snow(FVector Location, double Size);
    void Check for DLWE Recenter();
    void Update DLWE Parameters();
    void Start / Update DLWE Targets(bool First Run);
    void Get Current Temperature(bool Apply Interior Temperature, double& Celsius, double& Fahrenheit);
    void Filter Probability Map(TMap<UUDS_Weather_Settings_C*, double> Probability Map, class UUDS_Weather_Settings_C* Current Random Type, TMap<UUDS_Weather_Settings_C*, double>& Filtered Probability Map);
    void ConstructionScript_Function(bool Run By Counterpart);
    void Audio Update();
    void Update Current Material Effects();
    void Print Current Status To Screen();
    void Update Static Variables();
    void Update Active Variables();
    void UserConstructionScript();
    void Destroy Close Thunder Component(class USceneComponent* Component);
    void Change Weather(class UUDS_Weather_Settings_C* New Weather Type, double Time to Transition to New Weather (Seconds), bool Reset Particle Emitters);
    void Clients Transition Start();
    void Reset All Emitters();
    void Change to Random Weather(double Time to Transition to Random Weather (Seconds), bool Reset Particle Emitters);
    void Force All Clients Cache();
    void Set Season();
    void Update Weather Settings from UDS(double Cloud Coverage, double Fog, double Dust);
    void Apply State(FUDS_and_UDW_State State);
    void Update Material Effects();
    void Timed Override with New Changes();
    void Hard Refresh Cached Properties();
    void Set Project Mode(TEnumAsByte<UDS_Project_Mode::Type> Mode);
    void Update Rainbow();
    void Set Up Rainbow MID();
    void Flash Lightning(double Angle, bool Use Custom Lightning Location, FVector Custom Lightning Location, FVector Custom Target Location);
    void End Lightning Flash();
    void Tick Lightning Flash();
    void Local Lightning Internal(TScriptInterface<class IGothicUltraDynamicOverrideVolume> Volume, double Angle);
    void Global Lightning Internal(double Angle);
    void ReceiveTick(float DeltaSeconds);
    void Force Tick();
    void Initialize Weather();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Ultra_Dynamic_Weather(int32 EntryPoint);
    void Updated Current Preset__DelegateSignature(class UUDS_Weather_Settings_C* Settings);
    void Update DLWE State__DelegateSignature(TEnumAsByte<UDS_DLWE_Mode::Type> Current Mode, FVector Render Target Center, FVector Mapping Space);
    void Weather Display Name Changed__DelegateSignature(TEnumAsByte<UDS_Weather_Display_Names::Type> Weather Name);
    void Dust/Sand Clearing__DelegateSignature();
    void Dust/Sand Forming__DelegateSignature();
    void Clouds Clearing__DelegateSignature();
    void Getting Cloudy__DelegateSignature();
    void Finished Snowing__DelegateSignature();
    void Finished Raining__DelegateSignature();
    void Started Snowing__DelegateSignature();
    void Started Raining__DelegateSignature();
}; // Size: 0x1A90

#endif
