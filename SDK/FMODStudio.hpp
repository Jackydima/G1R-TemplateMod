#ifndef UE4SS_SDK_FMODStudio_HPP
#define UE4SS_SDK_FMODStudio_HPP

#include "FMODStudio_enums.hpp"

struct FCustomPoolSizes
{
    int32 Desktop;                                                                    // 0x0000 (size: 0x4)
    int32 Mobile;                                                                     // 0x0004 (size: 0x4)
    int32 PS4;                                                                        // 0x0008 (size: 0x4)
    int32 SWITCH;                                                                     // 0x000C (size: 0x4)
    int32 XBoxOne;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FFMODAssetLookupRow : public FTableRowBase
{
    FString PackageName;                                                              // 0x0008 (size: 0x10)
    FString AssetName;                                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FFMODAttenuationDetails
{
    uint8 bOverrideAttenuation;                                                       // 0x0000 (size: 0x1)
    float MinimumDistance;                                                            // 0x0004 (size: 0x4)
    float MaximumDistance;                                                            // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FFMODEventControlChannel : public FMovieSceneByteChannel
{
}; // Size: 0x108

struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
    FFMODEventControlChannel ControlKeys;                                             // 0x0020 (size: 0x108)

}; // Size: 0x130

struct FFMODEventInstance
{
}; // Size: 0x8

struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
}; // Size: 0x80

struct FFMODLocalizedBankRow : public FTableRowBase
{
    FString Path;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FFMODLocalizedBankTable : public FTableRowBase
{
    class UDataTable* Banks;                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFMODOcclusionDetails
{
    bool bEnableOcclusion;                                                            // 0x0000 (size: 0x1)
    TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;                             // 0x0001 (size: 0x1)
    bool bUseComplexCollisionForOcclusion;                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FFMODPlatformSettings
{
    int32 RealChannelCount;                                                           // 0x0000 (size: 0x4)
    int32 SampleRate;                                                                 // 0x0004 (size: 0x4)
    TEnumAsByte<EFMODSpeakerMode::Type> SpeakerMode;                                  // 0x0008 (size: 0x1)
    TEnumAsByte<EFMODOutput::Type> OutputType;                                        // 0x0009 (size: 0x1)
    int32 CustomPoolSize;                                                             // 0x000C (size: 0x4)
    TMap<TEnumAsByte<EFMODCodec::Type>, int32> Codecs;                                // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FFMODProjectLocale
{
    FString LocaleName;                                                               // 0x0000 (size: 0x10)
    FString LocaleCode;                                                               // 0x0010 (size: 0x10)
    bool bDefault;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

class AFMODAmbientSound : public AActor
{
    class UFMODAudioComponent* AudioComponent;                                        // 0x0290 (size: 0x8)

}; // Size: 0x298

class IAudioSnapshotRegion : public IInterface
{
}; // Size: 0x28

class UAlkimiaAudioSnapshotSubsystem : public UEngineSubsystem
{
    TArray<TScriptInterface<IAudioSnapshotRegion>> ActiveRegions;                     // 0x0030 (size: 0x10)

}; // Size: 0x40

class UFMODAnimNotifyPlay : public UAnimNotify
{
    uint8 bFollow;                                                                    // 0x0038 (size: 0x1)
    FString AttachName;                                                               // 0x0040 (size: 0x10)
    class UFMODEvent* Event;                                                          // 0x0050 (size: 0x8)

}; // Size: 0x58

class UFMODAsset : public UObject
{
    FGuid AssetGuid;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UFMODAudioComponent : public USceneComponent
{
    bool m_IsStaticAudio;                                                             // 0x0230 (size: 0x1)
    class UFMODEvent* Event;                                                          // 0x0238 (size: 0x8)
    TMap<FName, float> ParameterCache;                                                // 0x0240 (size: 0x50)
    FString ProgrammerSoundName;                                                      // 0x0290 (size: 0x10)
    uint8 bEnableTimelineCallbacks;                                                   // 0x02A0 (size: 0x1)
    uint8 bAutoDestroy;                                                               // 0x02A0 (size: 0x1)
    uint8 bStopWhenOwnerDestroyed;                                                    // 0x02A0 (size: 0x1)
    FFMODAudioComponentOnEventStopped OnEventStopped;                                 // 0x02A8 (size: 0x10)
    void OnEventStopped();
    FFMODAudioComponentOnSoundStopped OnSoundStopped;                                 // 0x02B8 (size: 0x10)
    void OnSoundStopped();
    FFMODAudioComponentOnTimelineMarker OnTimelineMarker;                             // 0x02C8 (size: 0x10)
    void OnTimelineMarker(FString Name, int32 position);
    FFMODAudioComponentOnTimelineBeat OnTimelineBeat;                                 // 0x02D8 (size: 0x10)
    void OnTimelineBeat(int32 Bar, int32 Beat, int32 position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower);
    FFMODAttenuationDetails AttenuationDetails;                                       // 0x02E8 (size: 0xC)
    FFMODOcclusionDetails OcclusionDetails;                                           // 0x02F4 (size: 0x3)

    void Stop();
    void SetVolume(float Volume);
    void SetTimelinePosition(int32 Time);
    void SetProperty(TEnumAsByte<EFMODEventProperty::Type> Property, float Value);
    void SetProgrammerSoundName(FString Value);
    void SetPitch(float Pitch);
    void SetPaused(bool Paused);
    void SetParameter(FName Name, float Value);
    void SetEvent(class UFMODEvent* NewEvent);
    void Release();
    void Play();
    void KeyOff();
    bool IsPlaying();
    int32 GetTimelinePosition();
    float GetProperty(TEnumAsByte<EFMODEventProperty::Type> Property);
    bool GetPaused();
    void GetParameterValue(FName Name, float& UserValue, float& FinalValue);
    float GetParameter(FName Name);
    int32 GetLength();
}; // Size: 0x400

class UFMODAudioLinkComponent : public USceneComponent
{
    class UFMODAudioLinkSettings* Settings;                                           // 0x0238 (size: 0x8)
    class USoundBase* Sound;                                                          // 0x0240 (size: 0x8)
    class UAudioComponent* AudioComponent;                                            // 0x0248 (size: 0x8)

}; // Size: 0x260

class UFMODAudioLinkSettings : public UAudioLinkSettingsAbstract
{
    TSoftObjectPtr<UFMODEvent> LinkEvent;                                             // 0x0038 (size: 0x28)
    bool bShouldClearBufferOnReceipt;                                                 // 0x0060 (size: 0x1)
    float ProducerToConsumerBufferRatio;                                              // 0x0064 (size: 0x4)
    float InitialSilenceFillRatio;                                                    // 0x0068 (size: 0x4)
    class UFMODEvent* LinkEventResolved;                                              // 0x0080 (size: 0x8)

}; // Size: 0x90

class UFMODBank : public UFMODAsset
{
}; // Size: 0x38

class UFMODBankLookup : public UObject
{
    class UDataTable* DataTable;                                                      // 0x0028 (size: 0x8)
    FString MasterBankPath;                                                           // 0x0030 (size: 0x10)
    FString MasterAssetsBankPath;                                                     // 0x0040 (size: 0x10)
    FString MasterStringsBankPath;                                                    // 0x0050 (size: 0x10)

}; // Size: 0x60

class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{

    void VCASetVolume(class UFMODVCA* Vca, float Volume);
    void UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
    void UnloadBankSampleData(class UFMODBank* Bank);
    void UnloadBank(class UFMODBank* Bank);
    void SetOutputDriverByName(FString NewDriverName);
    void SetOutputDriverByIndex(int32 NewDriverIndex);
    void SetLocale(FString Locale);
    void SetGlobalParameterByName(FName Name, float Value);
    class UFMODAudioComponent* PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy);
    FFMODEventInstance PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const FTransform& Location, bool bAutoPlay);
    FFMODEventInstance PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
    void MixerSuspend();
    void MixerResume();
    void LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
    void LoadBankSampleData(class UFMODBank* Bank);
    void LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
    bool IsBankLoaded(class UFMODBank* Bank);
    TArray<FString> GetOutputDrivers();
    void GetGlobalParameterValueByName(FName Name, float& UserValue, float& FinalValue);
    float GetGlobalParameterByName(FName Name);
    TArray<FFMODEventInstance> FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
    class UFMODEvent* FindEventByName(FString Name);
    class UFMODAsset* FindAssetByName(FString Name);
    void EventInstanceStop(FFMODEventInstance EventInstance, bool Release);
    void EventInstanceSetVolume(FFMODEventInstance EventInstance, float Volume);
    void EventInstanceSetTransform(FFMODEventInstance EventInstance, const FTransform& Location);
    void EventInstanceSetProperty(FFMODEventInstance EventInstance, TEnumAsByte<EFMODEventProperty::Type> Property, float Value);
    void EventInstanceSetPitch(FFMODEventInstance EventInstance, float Pitch);
    void EventInstanceSetPaused(FFMODEventInstance EventInstance, bool Paused);
    void EventInstanceSetParameter(FFMODEventInstance EventInstance, FName Name, float Value);
    void EventInstanceRelease(FFMODEventInstance EventInstance);
    void EventInstancePlay(FFMODEventInstance EventInstance);
    void EventInstanceKeyOff(FFMODEventInstance EventInstance);
    bool EventInstanceIsValid(FFMODEventInstance EventInstance);
    void EventInstanceGetParameterValue(FFMODEventInstance EventInstance, FName Name, float& UserValue, float& FinalValue);
    float EventInstanceGetParameter(FFMODEventInstance EventInstance, FName Name);
    void BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode);
    void BusSetVolume(class UFMODBus* Bus, float Volume);
    void BusSetPaused(class UFMODBus* Bus, bool bPaused);
    void BusSetMute(class UFMODBus* Bus, bool bMute);
}; // Size: 0x28

class UFMODBus : public UFMODAsset
{
}; // Size: 0x38

class UFMODEvent : public UFMODAsset
{
}; // Size: 0x38

class UFMODEventControlSection : public UMovieSceneSection
{
    FFMODEventControlChannel ControlKeys;                                             // 0x00F0 (size: 0x108)

}; // Size: 0x1F8

class UFMODEventControlTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ControlSections;                                // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UFMODPort : public UFMODAsset
{
}; // Size: 0x38

class UFMODSettings : public UObject
{
    bool bLoadAllBanks;                                                               // 0x0028 (size: 0x1)
    bool bLoadAllSampleData;                                                          // 0x0029 (size: 0x1)
    bool bEnableLiveUpdate;                                                           // 0x002A (size: 0x1)
    bool bEnableEditorLiveUpdate;                                                     // 0x002B (size: 0x1)
    FDirectoryPath BankOutputDirectory;                                               // 0x0030 (size: 0x10)
    TEnumAsByte<EFMODSpeakerMode::Type> OutputFormat;                                 // 0x0040 (size: 0x1)
    TEnumAsByte<EFMODOutput::Type> OutputType;                                        // 0x0041 (size: 0x1)
    TArray<FFMODProjectLocale> Locales;                                               // 0x0048 (size: 0x10)
    float Vol0VirtualLevel;                                                           // 0x0058 (size: 0x4)
    int32 SampleRate;                                                                 // 0x005C (size: 0x4)
    bool bMatchHardwareSampleRate;                                                    // 0x0060 (size: 0x1)
    int32 RealChannelCount;                                                           // 0x0064 (size: 0x4)
    int32 TotalChannelCount;                                                          // 0x0068 (size: 0x4)
    int32 DSPBufferLength;                                                            // 0x006C (size: 0x4)
    int32 DSPBufferCount;                                                             // 0x0070 (size: 0x4)
    int32 FileBufferSize;                                                             // 0x0074 (size: 0x4)
    int32 StudioUpdatePeriod;                                                         // 0x0078 (size: 0x4)
    FString InitialOutputDriverName;                                                  // 0x0080 (size: 0x10)
    bool bLockAllBuses;                                                               // 0x0090 (size: 0x1)
    FCustomPoolSizes MemoryPoolSizes;                                                 // 0x0094 (size: 0x14)
    int32 LiveUpdatePort;                                                             // 0x00A8 (size: 0x4)
    int32 EditorLiveUpdatePort;                                                       // 0x00AC (size: 0x4)
    int32 ReloadBanksDelay;                                                           // 0x00B0 (size: 0x4)
    bool bEnableAPIErrorLogging;                                                      // 0x00B4 (size: 0x1)
    bool bEnableMemoryTracking;                                                       // 0x00B5 (size: 0x1)
    TArray<FString> PluginFiles;                                                      // 0x00B8 (size: 0x10)
    FString ContentBrowserPrefix;                                                     // 0x00C8 (size: 0x10)
    FString ForcePlatformName;                                                        // 0x00D8 (size: 0x10)
    FString MasterBankName;                                                           // 0x00E8 (size: 0x10)
    FString SkipLoadBankName;                                                         // 0x00F8 (size: 0x10)
    FString StudioBankKey;                                                            // 0x0108 (size: 0x10)
    FString WavWriterPath;                                                            // 0x0118 (size: 0x10)
    TEnumAsByte<EFMODLogging> LoggingLevel;                                           // 0x0128 (size: 0x1)
    FString OcclusionParameter;                                                       // 0x0130 (size: 0x10)
    FString AmbientVolumeParameter;                                                   // 0x0140 (size: 0x10)
    FString AmbientLPFParameter;                                                      // 0x0150 (size: 0x10)
    bool bFMODAudioLinkEnabled;                                                       // 0x0160 (size: 0x1)
    TMap<TEnumAsByte<EFMODPlatforms::Type>, FFMODPlatformSettings> Platforms;         // 0x0168 (size: 0x50)

}; // Size: 0x1C8

class UFMODSnapshot : public UFMODEvent
{
}; // Size: 0x38

class UFMODSnapshotReverb : public UReverbEffect
{
    FGuid AssetGuid;                                                                  // 0x0060 (size: 0x10)

}; // Size: 0x70

class UFMODVCA : public UFMODAsset
{
}; // Size: 0x38

#endif
