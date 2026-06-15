#ifndef UE4SS_SDK_BFGDataExtensions_HPP
#define UE4SS_SDK_BFGDataExtensions_HPP

struct FBFGCharacterDefinitionReference
{
    class USkeletalMesh* m_FallbackMesh;                                              // 0x0000 (size: 0x8)
    UClass* m_CharacterDefinitionClass;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FBFGClassAndStructReference
{
    class UObject* m_StructBase;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBFGDataExtensionDefaultSettingGroup
{
    FString m_FriendlyName;                                                           // 0x0000 (size: 0x10)
    FBFGClassAndStructReference m_Struct;                                             // 0x0010 (size: 0x8)
    FString m_ErrorMessage;                                                           // 0x0018 (size: 0x10)
    TArray<FBFGPropertyValueReference> m_SettingsTable;                               // 0x0028 (size: 0x10)
    TArray<FBFGPropertyValueReference> m_IgnoreList;                                  // 0x0038 (size: 0x10)
    TArray<TSoftClassPtr<UObject>> m_IgnoreHierarchyListForValidator;                 // 0x0048 (size: 0x10)
    FName m_ValidatorExclusionTag;                                                    // 0x0058 (size: 0x8)
    TArray<class UClass*> m_ManualCDOUpdate;                                          // 0x0060 (size: 0x10)
    bool m_UpdateCDOInitialize;                                                       // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FBFGDataTableRowInputActionNameMapping : public FTableRowBase
{
    class UInputAction* pInputAction;                                                 // 0x0008 (size: 0x8)
    FText m_LocalizedActionName;                                                      // 0x0010 (size: 0x10)
    bool m_SupportsUserMapping;                                                       // 0x0020 (size: 0x1)
    TArray<int32> m_MappingIndicesKeyboard;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FBFGDataTableRowReference
{
    FName m_RowName;                                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBFGDataTableRowString : public FTableRowBase
{
    FText m_strString;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBFGDynamicEnumReference
{
    FName m_EnumEntryName;                                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBFGFunctionReference
{
    FName m_FunctionName;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBFGPropertyValueReference
{
    FName m_PropertyName;                                                             // 0x0000 (size: 0x8)
    FString m_OptionalValue;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

class UBFGDefaultSettings : public UDeveloperSettings
{
    TArray<FBFGDataExtensionDefaultSettingGroup> m_Entries;                           // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
