#ifndef UE4SS_SDK_BPL_WindDeterministicMovement_HPP
#define UE4SS_SDK_BPL_WindDeterministicMovement_HPP

class UBPL_WindDeterministicMovement_C : public UBlueprintFunctionLibrary
{

    void HasWindEnabled(class UMeshComponent* Mesh Component, class UObject* __WorldContext, bool& IsActive);
    void Wind System Single Material Setup(class UMaterialInstanceDynamic* Material Instance Dynamic, FS_SimpleWindStruct Wind Struct, class UObject* __WorldContext);
    void Sample Wind Attributes from String(class UMeshComponent* Mesh Component, class UObject* __WorldContext, double& PhaseIntensity, double& StrengthIntensity, double& WindSpeed, double& WindSpeedOnRain, double& WindStormExtraIntensity);
    void Wind System Materials Setup(class UMeshComponent* Mesh Component, FS_SimpleWindStruct WindStruct, class UObject* __WorldContext);
    void Wind Tangent(bool ByPass Z, class UObject* __WorldContext, FVector& Wind Tangent);
    void Wind Direction(bool ByPassZ, class UObject* __WorldContext, FVector& Wind Direction);
    void Wind Algorithm(double Value, class UObject* __WorldContext, double& Result);
    void Wind Strength(double Strength Intensity, bool Use Strength Intensity Only, class UObject* __WorldContext, double& Strength);
    void Deterministic Wind Intensity(double Seed, double Phase Weight, double Phase Intensity, double Wind Speed, class UObject* __WorldContext, double& WindResult);
    void Oscilation with Wind(FVector Joint Distance, double Seed, double Time Delay, double Phase Weight, double Phase Intensity, double Wind Speed, double Rotate Strength, double Strength Intensity, bool ByPass Z, bool Use Strength Intensity Only, double Wind Weight, FVector RightVector, class UObject* __WorldContext, FVector& Offset Position, FRotator& Rotation);
    void Displacement with Wind(double Seed, double Phase Weight, double Phase Intensity, double Wind Speed, bool Bypass Z Axis, bool Use Strength Intensity Only, double Strength Intensity, double Weight, class UObject* __WorldContext, FVector& Offset Position);
}; // Size: 0x28

#endif
