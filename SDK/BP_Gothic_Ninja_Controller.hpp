#ifndef UE4SS_SDK_BP_Gothic_Ninja_Controller_HPP
#define UE4SS_SDK_BP_Gothic_Ninja_Controller_HPP

class ABP_Gothic_Ninja_Controller_C : public ANativeNinjaLiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class APawn* Attached Pawn;                                                       // 0x02A0 (size: 0x8)
    class UMaterialInstanceDynamic* DisplacementMaterial;                             // 0x02A8 (size: 0x8)
    class UMaterialInstanceDynamic* SimulationDMI;                                    // 0x02B0 (size: 0x8)
    bool HasPlayerChanged;                                                            // 0x02B8 (size: 0x1)
    FVector ManualOffset;                                                             // 0x02C0 (size: 0x18)
    double Snap Distance;                                                             // 0x02D8 (size: 0x8)
    double SnapDistanceMultiplier;                                                    // 0x02E0 (size: 0x8)
    double UVScale;                                                                   // 0x02E8 (size: 0x8)
    FVector Interactive Extends;                                                      // 0x02F0 (size: 0x18)
    TArray<class UTextureRenderTarget2D*> TexturesToDisplace;                         // 0x0308 (size: 0x10)
    class UMaterialInterface* Similation Material;                                    // 0x0318 (size: 0x8)
    TMap<class AActor*, class bool> Ninjas;                                           // 0x0320 (size: 0x50)
    class UTextureRenderTarget2D* TemporalBuffer;                                     // 0x0370 (size: 0x8)
    class UMaterialInstanceDynamic* CopyMID;                                          // 0x0378 (size: 0x8)
    class ANinjaLive_C* NinjaLiveWind;                                                // 0x0380 (size: 0x8)
    TMap<class UPrimitiveComponent*, class FVector> Positions;                        // 0x0388 (size: 0x50)
    double Wind Movement Distance;                                                    // 0x03D8 (size: 0x8)
    double Wind Affect Radius;                                                        // 0x03E0 (size: 0x8)
    class UMaterialInstanceDynamic* WindSimulationMID;                                // 0x03E8 (size: 0x8)
    class UMaterialInstanceDynamic* DampenWindSimulationMID;                          // 0x03F0 (size: 0x8)
    double Wind Dampen Factor;                                                        // 0x03F8 (size: 0x8)
    class UTextureRenderTarget2D* SimpleWindBuffer;                                   // 0x0400 (size: 0x8)
    class UMaterialInstanceDynamic* SpellWindSimulationMID;                           // 0x0408 (size: 0x8)
    TArray<FS_WindSpellSettings> WindSpellSettings;                                   // 0x0410 (size: 0x10)
    bool UseSimpleWind;                                                               // 0x0420 (size: 0x1)
    double Simple Wind Spells Delay;                                                  // 0x0428 (size: 0x8)
    FBP_Gothic_Ninja_Controller_COnPlayerPawnChanged OnPlayerPawnChanged;             // 0x0430 (size: 0x10)
    void OnPlayerPawnChanged(class APawn* Pawn);
    class UTextureRenderTarget2D* SimpleWindTemporalBuffer;                           // 0x0440 (size: 0x8)
    FVector2D InitialSimpleWindResolution;                                            // 0x0448 (size: 0x10)

    void ReconfigureSimpleWindTargets();
    void Update Launched Wind Spells();
    void Update Simple Wind Simulation();
    void Displace Textures With Delta(FVector Delta);
    void Draw Simulation Internal(float Simulation Index, class UTextureRenderTarget2D* Texture);
    void Launch Slice Grass Attack(class UBP_CustomWindInteractor_C* Data, class AActor* Spawner);
    void Launch Slice Grass Attack Raw(class UBP_CustomWindInteractor_C* Data, FVector Origin, FVector Forward);
    void Internal Draw Data Simulation(class UBP_CustomWindInteractor_C* Data, FVector Origin, FVector Direction, class UTextureRenderTarget2D* Timers, class UTextureRenderTarget2D* VelocityDensity, class UTextureRenderTarget2D* Height, bool Custom Height Data, double Custom Value, bool Can Override Previous Timer, double Custom Total Time);
    void Attach Actor to Player(class AActor* Target, class AActor* ParentActor);
    void Launch Wind Spell(class UBP_CustomWindInteractor_C* Data, class AActor* Spawner, TEnumAsByte<E_SpellInteractionType::Type> SpellType);
    void Launch Wind Spell Raw(class UBP_CustomWindInteractor_C* Data, FVector Origin, FVector Direction, TEnumAsByte<E_SpellInteractionType::Type> SpellType);
    void Attach Ninjas To Player();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void HandleScalabilitySettingsChanged();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Gothic_Ninja_Controller(int32 EntryPoint);
    void OnPlayerPawnChanged__DelegateSignature(class APawn* Pawn);
}; // Size: 0x458

#endif
