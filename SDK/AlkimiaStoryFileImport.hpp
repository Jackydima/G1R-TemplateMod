#ifndef UE4SS_SDK_AlkimiaStoryFileImport_HPP
#define UE4SS_SDK_AlkimiaStoryFileImport_HPP

#include "AlkimiaStoryFileImport_enums.hpp"

struct FAlkimiaLanguageSet
{
    FName SetName;                                                                    // 0x0000 (size: 0x8)
    FString DisplayText;                                                              // 0x0008 (size: 0x10)
    TArray<FName> LanguagePriority;                                                   // 0x0018 (size: 0x10)
    bool bHasVoiceOver;                                                               // 0x0028 (size: 0x1)
    int32 BinkAudioTrack;                                                             // 0x002C (size: 0x4)

}; // Size: 0x30

struct FAlkimiaStoryMountPoint
{
    FString MountPoint;                                                               // 0x0000 (size: 0x10)
    FString MountPath;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

class UAlkimiaLocalizationSubsystem : public UEngineSubsystem
{
    TArray<FAlkimiaStoryMountPoint> MountPoints;                                      // 0x0030 (size: 0x10)
    TArray<FString> FacialAnimContentPath;                                            // 0x0040 (size: 0x10)
    FSoftObjectPath FallbackFacialAnimation;                                          // 0x0050 (size: 0x20)
    TArray<FAlkimiaLanguageSet> LanguageSets;                                         // 0x0070 (size: 0x10)
    TArray<FName> AlwaysPrependToLanguageSet;                                         // 0x0080 (size: 0x10)
    TArray<FName> AlwaysAppendToLanguageSet;                                          // 0x0090 (size: 0x10)
    FName ActiveDisplayLanguageSet;                                                   // 0x00A0 (size: 0x8)
    FName ActiveVoiceOverLanguageSet;                                                 // 0x00A8 (size: 0x8)
    FName ForcedDisplayLanguageSet;                                                   // 0x00B0 (size: 0x8)
    FName ForcedVoiceOverLanguageSet;                                                 // 0x00B8 (size: 0x8)
    FName DefaultLanguageSet;                                                         // 0x00C0 (size: 0x8)
    FName DefaultLanguageSet_Fallback;                                                // 0x00C8 (size: 0x8)
    TMap<class FName, class FName> CultureToLanguageSetMapping;                       // 0x00D0 (size: 0x50)
    TArray<FString> TextIDSuffixPriority;                                             // 0x0120 (size: 0x10)

    void WaitUntilPreloadAudioForTextIDCompleted(FString TextID);
    void SetDisplayLanguages(const TArray<FName>& languages);
    void SetAvailableLanguageSets(const TArray<FAlkimiaLanguageSet>& LanguageSets);
    void SetAddLanguageNameToTextsForTesting(bool bAddLanguageNameForDisplayLanguage);
    bool SetActiveVoiceOverLanguageSet(FName SetName);
    bool SetActiveDisplayLanguageSet(FName SetName);
    void RequestReloadLocalization();
    void RequestPreloadAudioForTextID(const class UObject* Requester, FString Text);
    void RequestPreloadAudioForText(const class UObject* Requester, FText Text);
    void ReloadLocalization();
    void ReleasePreloadedAudioForTextID(const class UObject* Requester, FString Text);
    void ReleasePreloadedAudioForText(const class UObject* Requester, FText Text);
    bool IsLoadInProgress();
    bool HasLocalizedTextForIdInLanguage(FString ID, FName Language);
    bool HasLocalizedTextForId(FString ID, FName Language);
    TArray<FName> GetVOLanguages();
    FText GetTextFromTag(const FGameplayTag& GameplayTag, const FString Suffix);
    FString GetTextAsString(FString ID, FName Language);
    FText GetText(FString ID);
    TSet<FName> GetSupportedLanguages();
    TSoftObjectPtr<UAnimSequenceBase> GetFacialAnimationForText(const FText& Text);
    TArray<FName> GetDisplayLanguages();
    TArray<FAlkimiaLanguageSet> GetAvailableLanguageSets();
    FString GetAudioPathForTextIdInLanguage(FString ID, FName Language);
    FString GetAudioPathForTextId(FString ID);
    FString GetAudioPathForText(const FText& Text);
    FAlkimiaLanguageSet GetActiveVoiceOverLanguageSet();
    FAlkimiaLanguageSet GetActiveDisplayLanguageSet();
    void EnsureTextDBFinishedLoading();
    FString BP_GetTextMetadataByName(const FText& Text, FName metadataName);
}; // Size: 0x130

class UAlkimiaStoryAssets : public UObject
{

    bool PrepareStoryAssetForLoad(const FSoftObjectPath& StoryAssetSoftPath);
    bool IsStoryAssetLoaded(const FSoftObjectPath& StoryAssetSoftPath);
}; // Size: 0xC8

class UConversationDebuggerSubsystem : public UEngineSubsystem
{
    bool bEnableStoryDebuggerOnStart;                                                 // 0x0068 (size: 0x1)

    void SetGlobalVariables(const TMap<class FName, class FString>& VariablesByName);
    void SetCharacterKnowledge(FName CharacterName, const TArray<FName>& Knowledge);
    bool IsConnected();
    FString GetConnectionStatus();
}; // Size: 0x70

#endif
