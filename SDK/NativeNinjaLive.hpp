#ifndef UE4SS_SDK_NativeNinjaLive_HPP
#define UE4SS_SDK_NativeNinjaLive_HPP

class ANativeNinjaLiveActor : public AActor
{

    int32 Scalability_GetRenderTargetDownsampleFactor();
    void HandleScalabilitySettingsChanged();
}; // Size: 0x290

class ANativeVolumeSmokeContainer : public AActor
{
}; // Size: 0x290

class UNativeNinjaLiveComponent : public UActorComponent
{
}; // Size: 0xA0

class UNativeVolumeSmokeComponent : public UActorComponent
{
}; // Size: 0xA0

#endif
