#ifndef UE4SS_SDK_Ultra_Dynamic_Weather_Interface_HPP
#define UE4SS_SDK_Ultra_Dynamic_Weather_Interface_HPP

class IUltra_Dynamic_Weather_Interface_C : public IInterface
{

    void Set Up Rainbow MID();
    void Get Rainbow MID(bool& Rainbow Enabled, class UMaterialInstanceDynamic*& Mid);
    void Get Intended Water Level(bool& Using Water Level, double& Water Level);
    void Update Rainbow();
    void Set Project Mode(TEnumAsByte<UDS_Project_Mode::Type> Mode);
    void Get Weather Particle Collision Channel(TEnumAsByte<ECollisionChannel>& Channel);
    void Hard Refresh Cached Properties();
    void Destroy Close Thunder Component(class USceneComponent* Component);
    void Get Close Thunder Sound Occlusion(double& Volume, double& LPF);
    void Update Material Effects();
    void Apply State(FUDS_and_UDW_State State);
    void Get State for Saving(FUDS_and_UDW_State& UDW State);
    void Get Intended Cloud Direction(double& Intended Cloud Direction);
    void Get Intended Cloud Speed(double& Intended Cloud Speed);
    void Update Weather Settings from UDS(double Cloud Coverage, double Fog, double Dust);
    void Initialize Weather();
    void Set Season();
}; // Size: 0x28

#endif
