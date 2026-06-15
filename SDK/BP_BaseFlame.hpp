#ifndef UE4SS_SDK_BP_BaseFlame_HPP
#define UE4SS_SDK_BP_BaseFlame_HPP

class ABP_BaseFlame_C : public ABaseFlameActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0968 (size: 0x8)
    class UBoxComponent* DamageBox;                                                   // 0x0970 (size: 0x8)
    class UFireVisualComponentAS* FireVisualComponentAS;                              // 0x0978 (size: 0x8)
    class UGothicAudioComponent* AudioComponent;                                      // 0x0980 (size: 0x8)
    class ULogicalLightsourceComponent* LogicalLightSource;                           // 0x0988 (size: 0x8)
    class UStaticMeshComponent* SmokePlane;                                           // 0x0990 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0998 (size: 0x8)
    class UStaticMeshComponent* SM_Refraction;                                        // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* EmissiveLight;                                        // 0x09A8 (size: 0x8)
    class UBoxComponent* Spells Collision;                                            // 0x09B0 (size: 0x8)
    class UStaticMeshComponent* FirePlane;                                            // 0x09B8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x09C0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x09C8 (size: 0x8)
    bool IsIgnited;                                                                   // 0x09D0 (size: 0x1)
    FS_TorchData FlameData;                                                           // 0x09D8 (size: 0x58)
    bool Is Emissive Light Active;                                                    // 0x0A30 (size: 0x1)
    class UMaterialInterface* Emissive Light Material;                                // 0x0A38 (size: 0x8)
    class UMaterialInterface* Disabled Emissive Light Material;                       // 0x0A40 (size: 0x8)
    TMap<class USceneComponent*, class bool> ToggleComponents;                        // 0x0A48 (size: 0x50)
    FBP_BaseFlame_COnSwitchOn OnSwitchOn;                                             // 0x0A98 (size: 0x10)
    void OnSwitchOn();
    FBP_BaseFlame_COnSwitchOff OnSwitchOff;                                           // 0x0AA8 (size: 0x10)
    void OnSwitchOff();
    class UMaterialInstanceDynamic* Attenuated Light MID;                             // 0x0AB8 (size: 0x8)
    TArray<class ULocalLightComponent*> Light Components;                             // 0x0AC0 (size: 0x10)
    class UMaterialInterface* Attenuated Light Function;                              // 0x0AD0 (size: 0x8)
    double CurrentMultiplier;                                                         // 0x0AD8 (size: 0x8)
    ELogicalLightsourceType Logical Light Light Source Type;                          // 0x0AE0 (size: 0x1)
    double Logical Light Radius Factor;                                               // 0x0AE8 (size: 0x8)
    double Logical Light Intensity Factor;                                            // 0x0AF0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> Tinklin MIDs;                             // 0x0AF8 (size: 0x10)
    FBP_BaseFlame_COnAttenuatedOverTime OnAttenuatedOverTime;                         // 0x0B08 (size: 0x10)
    void OnAttenuatedOverTime();
    double TransitionTime;                                                            // 0x0B18 (size: 0x8)
    double RestoreTransitionTime;                                                     // 0x0B20 (size: 0x8)
    double LerpTimer;                                                                 // 0x0B28 (size: 0x8)
    double TotalTimeAttenuated;                                                       // 0x0B30 (size: 0x8)
    FBP_BaseFlame_CUpdateAttenuationCall UpdateAttenuationCall;                       // 0x0B38 (size: 0x10)
    void UpdateAttenuationCall();
    class UNiagaraSystem* HitNiagaraParticles;                                        // 0x0B48 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> Fire MIDs;                                // 0x0B50 (size: 0x10)
    class UCurveFloat* InteractionAttenuated;                                         // 0x0B60 (size: 0x8)
    TMap<class UPrimitiveComponent*, class FVector> FirePlanesScales;                 // 0x0B68 (size: 0x50)
    FFireAttenuationSettings BaseAttenuation;                                         // 0x0BB8 (size: 0x50)
    FFireAttenuationSettings PreviousAttenuation;                                     // 0x0C08 (size: 0x50)
    FFireAttenuationSettings CurrentAttenuation;                                      // 0x0C58 (size: 0x50)
    FFireAttenuationSettings DesiredAttenuation;                                      // 0x0CA8 (size: 0x50)
    bool AutoReset;                                                                   // 0x0CF8 (size: 0x1)
    FVector DesiredFireScale;                                                         // 0x0D00 (size: 0x18)
    FVector DesiredFireRotation;                                                      // 0x0D18 (size: 0x18)
    class UNiagaraSystem* FromAttenuatedToBase;                                       // 0x0D30 (size: 0x8)
    class UNiagaraSystem* OverflowingNiagaraParticles;                                // 0x0D38 (size: 0x8)
    class UNiagaraSystem* FromOverflowingToBase;                                      // 0x0D40 (size: 0x8)
    class UNiagaraSystem* RestoreToBaseParticles;                                     // 0x0D48 (size: 0x8)
    class UNiagaraSystem* SpellNiagaraParticles;                                      // 0x0D50 (size: 0x8)
    bool IsActive;                                                                    // 0x0D58 (size: 0x1)
    FVector Impact Direction;                                                         // 0x0D60 (size: 0x18)
    bool StopParticlesSpawn;                                                          // 0x0D78 (size: 0x1)
    bool Debug;                                                                       // 0x0D79 (size: 0x1)
    bool IsInitialized;                                                               // 0x0D7A (size: 0x1)
    bool IsConstructor;                                                               // 0x0D7B (size: 0x1)
    bool IsLightActive;                                                               // 0x0D7C (size: 0x1)
    bool CanDoDamage;                                                                 // 0x0D7D (size: 0x1)
    TArray<class AGothicCharacter*> CharactersBurning;                                // 0x0D80 (size: 0x10)
    FGameplayEffectContext_HitResponse EffectContext;                                 // 0x0D90 (size: 0x128)
    TSubclassOf<class UWeaponDefinition> Weapon Data;                                 // 0x0EB8 (size: 0x8)
    class AUltra_Dynamic_Weather_C* WeatherController;                                // 0x0EC0 (size: 0x8)
    bool IsFireActive;                                                                // 0x0EC8 (size: 0x1)
    FGameplayTag FXLitGameplayTag;                                                    // 0x0ECC (size: 0x8)
    FGameplayTag FXExtinguishGameplayTag;                                             // 0x0ED4 (size: 0x8)
    bool IsUnderRoof;                                                                 // 0x0EDC (size: 0x1)
    class UFMODEvent* LargeFireAttenuatedLoopAudio;                                   // 0x0EE0 (size: 0x8)
    bool IsInWeatherAttenuation;                                                      // 0x0EE8 (size: 0x1)
    class UFMODEvent* MediumFireLoopAudio;                                            // 0x0EF0 (size: 0x8)
    class UFMODEvent* LargeFireLoopAudio;                                             // 0x0EF8 (size: 0x8)
    class UFMODEvent* SmallFireLoopAudio2;                                            // 0x0F00 (size: 0x8)
    bool CanPlaySounds;                                                               // 0x0F08 (size: 0x1)
    class AGothicCharacter* OverlappingBeginChar;                                     // 0x0F10 (size: 0x8)
    TMap<class AActor*, class FActiveGameplayEffectHandle> DamagedActors;             // 0x0F18 (size: 0x50)
    class AGothicCharacter* OverlappingEndChar;                                       // 0x0F68 (size: 0x8)

    void GetActorScale3DAverage(double& AverageScale);
    void CheckFireSizeBasedOnScale();
    void SetCurrentSoundLoopBasedOnCurrentSize();
    void AttenuateAudio(bool AttenuateDown);
    void SetCurrentSoundBasedOnCurrentSize();
    void UpdateFire();
    void Get or Created Dynamic Material Instances(class UMeshComponent* Mesh, TArray<class UMaterialInstanceDynamic*>& MIDs);
    void BP_Switchoff(bool PlaySound, bool PlayParticles);
    void BP_Switchon(bool PlaySound, bool PlayParticles);
    void Activate Damage(bool Active);
    void HasFireOn(bool& Result);
    void GetUltraDynamicWeather(class AUltra_Dynamic_Weather_C*& Weather);
    void CustomLazyInitialize();
    void GetAttenuableMeshes(TArray<class UPrimitiveComponent*>& Meshes);
    void LazyInitialize();
    void Applylessflame();
    void Applymoreflame();
    void Receivefireimpacthit(FVector Direction);
    void RotateFirePlanes(double ScaleFactor);
    void SetSettings(FFireAttenuationSettings Settings);
    void RemoveLightFunction();
    void AddLightFunction();
    void InterpolateTo(double Delta Time, bool& IsFinished);
    void ScaleFirePlanes(double ScaleFactor);
    void RegisterFireSources(TArray<class UPrimitiveComponent*>& FirePrimitives);
    void GatherFireSources(TArray<class UPrimitiveComponent*>& Fire Planes);
    void SetAttenuationLevel(FFireAttenuationSettings Settings, FFireAttenuationSettings base, bool IsInstant, bool ShouldAutoReset, double ResetTime, double TransitionTime, class UNiagaraSystem* RestoreParticles, double RestoreTransitionTime, FVector ImpactDirection, bool IsInWeatherAttenuation);
    void RestoreToBase();
    void Attenuatebyspell();
    void Attenuatehigh();
    void Attenuatemid();
    void Attenuatelow();
    void ConfigureLogicalLight();
    void Updated Volumetric Scattering(class UUDS_Weather_Settings_C* WeatherSettings);
    void Attenuateoff();
    void Construct();
    void GatherInteractables(TArray<class USceneComponent*>& Interactables);
    void GatherLightSources(TArray<class ULocalLightComponent*>& Light Components);
    void RegisterToggleableComponent(TArray<class USceneComponent*>& SceneComponents);
    void Switchoff(bool isPlayer);
    void SwitchOn(bool isPlayer);
    void UserConstructionScript();
    void OnAttenuatedBySpell_Event();
    void SwitchOnIfNeeded();
    void Update Weather Settings(class UUDS_Weather_Settings_C* Settings);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void BndEvt__BP_BaseFlame_DamageBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_BaseFlame_DamageBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Custom Tick(float DeltaTime);
    void ExecuteUbergraph_BP_BaseFlame(int32 EntryPoint);
    void UpdateAttenuationCall__DelegateSignature();
    void OnAttenuatedOverTime__DelegateSignature();
    void OnSwitchOff__DelegateSignature();
    void OnSwitchOn__DelegateSignature();
}; // Size: 0xF70

#endif
