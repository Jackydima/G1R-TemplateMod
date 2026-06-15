#ifndef UE4SS_SDK_YouTrackBugTracker_HPP
#define UE4SS_SDK_YouTrackBugTracker_HPP

struct FLbtYouTrack_BaseBundle : public FLbtYouTrack_Bundle
{
}; // Size: 0x18

struct FLbtYouTrack_BaseStruct
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtYouTrack_BaseStructTransientId
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtYouTrack_BuildBundle : public FLbtYouTrack_BaseBundle
{
    TArray<FLbtYouTrack_BuildBundleElement> Values;                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_BuildBundleElement : public FLbtYouTrack_BundleElement
{
    FDateTime AssembleDate;                                                           // 0x0088 (size: 0x8)

}; // Size: 0x90

struct FLbtYouTrack_Bundle : public FLbtYouTrack_BaseStruct
{
    bool IsUpdateable;                                                                // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FLbtYouTrack_BundleElement : public FLbtYouTrack_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FLbtYouTrack_Bundle Bundle;                                                       // 0x0020 (size: 0x18)
    FString Description;                                                              // 0x0038 (size: 0x10)
    int32 Ordinal;                                                                    // 0x0048 (size: 0x4)
    FLbtYouTrack_FieldStyle Color;                                                    // 0x0050 (size: 0x30)
    bool HasRunningJob;                                                               // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FLbtYouTrack_CreateProject : public FLbtYouTrack_BaseStructTransientId
{
    int32 StartingNumber;                                                             // 0x0010 (size: 0x4)
    FString ShortName;                                                                // 0x0018 (size: 0x10)
    FString Description;                                                              // 0x0028 (size: 0x10)
    FLbtYouTrack_User Leader;                                                         // 0x0038 (size: 0x78)
    bool Archived;                                                                    // 0x00B0 (size: 0x1)
    bool Template;                                                                    // 0x00B1 (size: 0x1)
    FString Name;                                                                     // 0x00B8 (size: 0x10)

}; // Size: 0xC8

struct FLbtYouTrack_CustomField : public FLbtYouTrack_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FLbtYouTrack_FieldType FieldType;                                                 // 0x0020 (size: 0x10)
    bool IsUpdateable;                                                                // 0x0030 (size: 0x1)
    class ULbtYouTrack_CustomFieldDefaults* FieldDefaults;                            // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FLbtYouTrack_EnumBundle : public FLbtYouTrack_BaseBundle
{
    TArray<FLbtYouTrack_EnumBundleElement> Values;                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_EnumBundleElement : public FLbtYouTrack_LocalizableBundleElement
{
}; // Size: 0x88

struct FLbtYouTrack_Error
{
    FString Error;                                                                    // 0x0000 (size: 0x10)
    FString error_description;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtYouTrack_FieldStyle : public FLbtYouTrack_BaseStruct
{
    FString Background;                                                               // 0x0010 (size: 0x10)
    FString Foreground;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtYouTrack_FieldType : public FLbtYouTrack_BaseStruct
{
}; // Size: 0x10

struct FLbtYouTrack_FrontendConfig
{
    FString Version;                                                                  // 0x0000 (size: 0x10)
    FString Build;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtYouTrack_Issue : public FLbtYouTrack_BaseStruct
{
    FString IdReadable;                                                               // 0x0010 (size: 0x10)
    uint64 Created;                                                                   // 0x0020 (size: 0x8)
    uint64 Updated;                                                                   // 0x0028 (size: 0x8)
    uint64 Resolved;                                                                  // 0x0030 (size: 0x8)
    int32 NumberInProject;                                                            // 0x0038 (size: 0x4)
    FLbtYouTrack_Project Project;                                                     // 0x0040 (size: 0x50)
    FString Summary;                                                                  // 0x0090 (size: 0x10)
    FString Description;                                                              // 0x00A0 (size: 0x10)
    FLbtYouTrack_User Reporter;                                                       // 0x00B0 (size: 0x78)
    FLbtYouTrack_User Updater;                                                        // 0x0128 (size: 0x78)
    int32 Votes;                                                                      // 0x01A0 (size: 0x4)
    TArray<FLbtYouTrack_IssueComment> Comments;                                       // 0x01A8 (size: 0x10)
    int32 commentsCount;                                                              // 0x01B8 (size: 0x4)
    TArray<class ULbtYouTrack_IssueCustomField*> CustomFields;                        // 0x01C0 (size: 0x10)
    TArray<FLbtYouTrack_IssueAttachment> Attachments;                                 // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FLbtYouTrack_IssueAttachment : public FLbtYouTrack_BaseStructTransientId
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FLbtYouTrack_User Author;                                                         // 0x0020 (size: 0x78)
    uint64 Created;                                                                   // 0x0098 (size: 0x8)
    uint64 Updated;                                                                   // 0x00A0 (size: 0x8)
    uint64 Size;                                                                      // 0x00A8 (size: 0x8)
    FString Extension;                                                                // 0x00B0 (size: 0x10)
    FString Charset;                                                                  // 0x00C0 (size: 0x10)
    FString MimeType;                                                                 // 0x00D0 (size: 0x10)
    FString MetaData;                                                                 // 0x00E0 (size: 0x10)
    bool Draft;                                                                       // 0x00F0 (size: 0x1)
    bool Removed;                                                                     // 0x00F1 (size: 0x1)
    FString Base64Content;                                                            // 0x00F8 (size: 0x10)
    FString URL;                                                                      // 0x0108 (size: 0x10)
    FString ThumbnailURL;                                                             // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FLbtYouTrack_IssueComment : public FLbtYouTrack_BaseStructTransientId
{
    FString Text;                                                                     // 0x0010 (size: 0x10)
    FString TextPreview;                                                              // 0x0020 (size: 0x10)
    uint64 Created;                                                                   // 0x0030 (size: 0x8)
    uint64 Updated;                                                                   // 0x0038 (size: 0x8)
    FLbtYouTrack_User Author;                                                         // 0x0040 (size: 0x78)
    bool Deleted;                                                                     // 0x00B8 (size: 0x1)

}; // Size: 0xC0

struct FLbtYouTrack_LicenseResponse : public FLbtYouTrack_BaseStruct
{
    FString UserName;                                                                 // 0x0010 (size: 0x10)
    FString License;                                                                  // 0x0020 (size: 0x10)
    FString Error;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtYouTrack_LocalizableBundleElement : public FLbtYouTrack_BundleElement
{
}; // Size: 0x88

struct FLbtYouTrack_OwnedBundle : public FLbtYouTrack_BaseBundle
{
    TArray<FLbtYouTrack_OwnedBundleElement> Values;                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_OwnedBundleElement : public FLbtYouTrack_BundleElement
{
    FLbtYouTrack_User User;                                                           // 0x0088 (size: 0x78)

}; // Size: 0x100

struct FLbtYouTrack_PeriodValue : public FLbtYouTrack_BaseStructTransientId
{
    int32 Minutes;                                                                    // 0x0010 (size: 0x4)
    FString Presentation;                                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_Project : public FLbtYouTrack_BaseStruct
{
    int32 StartingNumber;                                                             // 0x0010 (size: 0x4)
    FString ShortName;                                                                // 0x0018 (size: 0x10)
    FString Description;                                                              // 0x0028 (size: 0x10)
    bool Archived;                                                                    // 0x0038 (size: 0x1)
    bool Template;                                                                    // 0x0039 (size: 0x1)
    FString Name;                                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FLbtYouTrack_ProjectCustomField_Struct : public FLbtYouTrack_BaseStruct
{
    FLbtYouTrack_CustomField Field;                                                   // 0x0010 (size: 0x40)
    FLbtYouTrack_Project Project;                                                     // 0x0050 (size: 0x50)
    bool CanBeEmpty;                                                                  // 0x00A0 (size: 0x1)
    FString EmptyFieldText;                                                           // 0x00A8 (size: 0x10)
    int32 Ordinal;                                                                    // 0x00B8 (size: 0x4)
    bool IsPublic;                                                                    // 0x00BC (size: 0x1)
    FString Type;                                                                     // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FLbtYouTrack_StateBundle : public FLbtYouTrack_BaseBundle
{
    TArray<FLbtYouTrack_StateBundleElement> Values;                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_StateBundleElement : public FLbtYouTrack_LocalizableBundleElement
{
    bool IsResolved;                                                                  // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FLbtYouTrack_TextFieldValue : public FLbtYouTrack_BaseStructTransientId
{
    FString Text;                                                                     // 0x0010 (size: 0x10)
    FString MarkdownText;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtYouTrack_User : public FLbtYouTrack_BaseStruct
{
    FString Login;                                                                    // 0x0010 (size: 0x10)
    FString FullName;                                                                 // 0x0020 (size: 0x10)
    FString Email;                                                                    // 0x0030 (size: 0x10)
    FString JabberAccountName;                                                        // 0x0040 (size: 0x10)
    FString RingId;                                                                   // 0x0050 (size: 0x10)
    bool Guest;                                                                       // 0x0060 (size: 0x1)
    bool Online;                                                                      // 0x0061 (size: 0x1)
    bool Banned;                                                                      // 0x0062 (size: 0x1)
    FString AvatarUrl;                                                                // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FLbtYouTrack_UserBundle : public FLbtYouTrack_Bundle
{
    TArray<FLbtYouTrack_User> AggregatedUsers;                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_UserGroup : public FLbtYouTrack_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtYouTrack_VersionBundle : public FLbtYouTrack_BaseBundle
{
    TArray<FLbtYouTrack_VersionBundleElement> Values;                                 // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtYouTrack_VersionBundleElement : public FLbtYouTrack_BundleElement
{
    bool Archived;                                                                    // 0x0088 (size: 0x1)
    uint64 ReleaseDate;                                                               // 0x0090 (size: 0x8)
    bool Released;                                                                    // 0x0098 (size: 0x1)

}; // Size: 0xA0

class ULbtYouTrack_BaseClass : public ULbtJsonBaseObject
{
    FString ID;                                                                       // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtYouTrack_BaseClassTransientId : public ULbtJsonBaseObject
{
    FString ID;                                                                       // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtYouTrack_BuildBundleCustomFieldDefaults : public ULbtYouTrack_BundleCustomFieldDefaults
{
    FLbtYouTrack_BuildBundle Bundle;                                                  // 0x0068 (size: 0x28)
    TArray<FLbtYouTrack_BuildBundleElement> DefaultValues;                            // 0x0090 (size: 0x10)

}; // Size: 0xA0

class ULbtYouTrack_BuildProjectCustomField : public ULbtYouTrack_BundleProjectCustomField
{
    FLbtYouTrack_BuildBundle Bundle;                                                  // 0x00F8 (size: 0x28)
    TArray<FLbtYouTrack_BuildBundleElement> DefaultValues;                            // 0x0120 (size: 0x10)

}; // Size: 0x130

class ULbtYouTrack_BundleCustomFieldDefaults : public ULbtYouTrack_CustomFieldDefaults
{
}; // Size: 0x68

class ULbtYouTrack_BundleProjectCustomField : public ULbtYouTrack_ProjectCustomField
{
}; // Size: 0xF8

class ULbtYouTrack_CustomFieldDefaults : public ULbtYouTrack_BaseClass
{
    bool CanBeEmpty;                                                                  // 0x0048 (size: 0x1)
    FString EmptyFieldText;                                                           // 0x0050 (size: 0x10)
    bool IsPublic;                                                                    // 0x0060 (size: 0x1)

}; // Size: 0x68

class ULbtYouTrack_DateIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    uint64 Value;                                                                     // 0x0060 (size: 0x8)

}; // Size: 0x68

class ULbtYouTrack_DateTimeIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    uint64 Value;                                                                     // 0x0060 (size: 0x8)

}; // Size: 0x68

class ULbtYouTrack_EmptyIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    class UObject* Value;                                                             // 0x0060 (size: 0x8)

}; // Size: 0x68

class ULbtYouTrack_EnumBundleCustomFieldDefaults : public ULbtYouTrack_BundleCustomFieldDefaults
{
    FLbtYouTrack_EnumBundle Bundle;                                                   // 0x0068 (size: 0x28)
    TArray<FLbtYouTrack_EnumBundleElement> DefaultValues;                             // 0x0090 (size: 0x10)

}; // Size: 0xA0

class ULbtYouTrack_EnumProjectCustomField : public ULbtYouTrack_BundleProjectCustomField
{
    FLbtYouTrack_EnumBundle Bundle;                                                   // 0x00F8 (size: 0x28)
    TArray<FLbtYouTrack_EnumBundleElement> DefaultValues;                             // 0x0120 (size: 0x10)

}; // Size: 0x130

class ULbtYouTrack_FloatIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    float Value;                                                                      // 0x0060 (size: 0x4)

}; // Size: 0x68

class ULbtYouTrack_GroupProjectCustomField : public ULbtYouTrack_ProjectCustomField
{
    TArray<FLbtYouTrack_UserGroup> DefaultValues;                                     // 0x00F8 (size: 0x10)

}; // Size: 0x108

class ULbtYouTrack_IntIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    int32 Value;                                                                      // 0x0060 (size: 0x4)

}; // Size: 0x68

class ULbtYouTrack_IssueCustomField : public ULbtYouTrack_BaseClassTransientId
{
    FString Name;                                                                     // 0x0048 (size: 0x10)
    class ULbtYouTrack_ProjectCustomField* ProjectCustomField;                        // 0x0058 (size: 0x8)

}; // Size: 0x60

class ULbtYouTrack_LimitedVisibility : public ULbtYouTrack_Visibility
{
    FString ID;                                                                       // 0x0028 (size: 0x10)
    TArray<FLbtYouTrack_UserGroup> PermittedGroups;                                   // 0x0038 (size: 0x10)
    TArray<FLbtYouTrack_User> PermittedUsers;                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

class ULbtYouTrack_MultiBuildIssueCustomField : public ULbtYouTrack_MultiValueIssueCustomField
{
    TArray<FLbtYouTrack_BuildBundleElement> Value;                                    // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_MultiEnumIssueCustomField : public ULbtYouTrack_MultiValueIssueCustomField
{
    TArray<FLbtYouTrack_EnumBundleElement> Value;                                     // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_MultiGroupIssueCustomField : public ULbtYouTrack_MultiValueIssueCustomField
{
    TArray<FLbtYouTrack_UserGroup> Value;                                             // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_MultiOwnedIssueCustomField : public ULbtYouTrack_MultiValueIssueCustomField
{
    TArray<FLbtYouTrack_OwnedBundleElement> Value;                                    // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_MultiUserIssueCustomField : public ULbtYouTrack_MultiValueIssueCustomField
{
    TArray<FLbtYouTrack_User> Value;                                                  // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_MultiValueIssueCustomField : public ULbtYouTrack_IssueCustomField
{
}; // Size: 0x60

class ULbtYouTrack_MultiVersionIssueCustomField : public ULbtYouTrack_MultiValueIssueCustomField
{
    TArray<FLbtYouTrack_VersionBundleElement> Value;                                  // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_OwnedBundleCustomFieldDefaults : public ULbtYouTrack_BundleCustomFieldDefaults
{
    FLbtYouTrack_OwnedBundle Bundle;                                                  // 0x0068 (size: 0x28)
    TArray<FLbtYouTrack_OwnedBundleElement> DefaultValues;                            // 0x0090 (size: 0x10)

}; // Size: 0xA0

class ULbtYouTrack_OwnedProjectCustomField : public ULbtYouTrack_BundleProjectCustomField
{
    FLbtYouTrack_OwnedBundle Bundle;                                                  // 0x00F8 (size: 0x28)
    TArray<FLbtYouTrack_OwnedBundleElement> DefaultValues;                            // 0x0120 (size: 0x10)

}; // Size: 0x130

class ULbtYouTrack_PeriodIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    FLbtYouTrack_PeriodValue Value;                                                   // 0x0060 (size: 0x28)

}; // Size: 0x88

class ULbtYouTrack_PeriodProjectCustomField : public ULbtYouTrack_ProjectCustomField
{
}; // Size: 0xF8

class ULbtYouTrack_ProjectCustomField : public ULbtYouTrack_BaseClass
{
    FLbtYouTrack_CustomField Field;                                                   // 0x0048 (size: 0x40)
    FLbtYouTrack_Project Project;                                                     // 0x0088 (size: 0x50)
    bool CanBeEmpty;                                                                  // 0x00D8 (size: 0x1)
    FString EmptyFieldText;                                                           // 0x00E0 (size: 0x10)
    int32 Ordinal;                                                                    // 0x00F0 (size: 0x4)
    bool IsPublic;                                                                    // 0x00F4 (size: 0x1)

}; // Size: 0xF8

class ULbtYouTrack_SimpleIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    FString Value;                                                                    // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_SimpleProjectCustomField : public ULbtYouTrack_ProjectCustomField
{
}; // Size: 0xF8

class ULbtYouTrack_SingleBuildIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_BuildBundleElement Value;                                            // 0x0060 (size: 0x90)

}; // Size: 0xF0

class ULbtYouTrack_SingleEnumIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_EnumBundleElement Value;                                             // 0x0060 (size: 0x88)

}; // Size: 0xE8

class ULbtYouTrack_SingleGroupIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_UserGroup Value;                                                     // 0x0060 (size: 0x20)

}; // Size: 0x80

class ULbtYouTrack_SingleOwnedIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_OwnedBundleElement Value;                                            // 0x0060 (size: 0x100)

}; // Size: 0x160

class ULbtYouTrack_SingleUserIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_User Value;                                                          // 0x0060 (size: 0x78)

}; // Size: 0xD8

class ULbtYouTrack_SingleValueIssueCustomField : public ULbtYouTrack_IssueCustomField
{
}; // Size: 0x60

class ULbtYouTrack_SingleVersionIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_VersionBundleElement Value;                                          // 0x0060 (size: 0xA0)

}; // Size: 0x100

class ULbtYouTrack_StateBundleCustomFieldDefaults : public ULbtYouTrack_BundleCustomFieldDefaults
{
    FLbtYouTrack_StateBundle Bundle;                                                  // 0x0068 (size: 0x28)
    TArray<FLbtYouTrack_StateBundleElement> DefaultValues;                            // 0x0090 (size: 0x10)

}; // Size: 0xA0

class ULbtYouTrack_StateIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
    FLbtYouTrack_StateBundleElement Value;                                            // 0x0060 (size: 0x90)

}; // Size: 0xF0

class ULbtYouTrack_StateMachineIssueCustomField : public ULbtYouTrack_SingleValueIssueCustomField
{
}; // Size: 0x60

class ULbtYouTrack_StateProjectCustomField : public ULbtYouTrack_BundleProjectCustomField
{
    FLbtYouTrack_StateBundle Bundle;                                                  // 0x00F8 (size: 0x28)
    TArray<FLbtYouTrack_StateBundleElement> DefaultValues;                            // 0x0120 (size: 0x10)

}; // Size: 0x130

class ULbtYouTrack_StringIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    FString Value;                                                                    // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtYouTrack_TextIssueCustomField : public ULbtYouTrack_IssueCustomField
{
    FLbtYouTrack_TextFieldValue Value;                                                // 0x0060 (size: 0x30)

}; // Size: 0x90

class ULbtYouTrack_TextProjectCustomField : public ULbtYouTrack_SimpleProjectCustomField
{
}; // Size: 0xF8

class ULbtYouTrack_UnlimitedVisibility : public ULbtYouTrack_Visibility
{
}; // Size: 0x28

class ULbtYouTrack_UserCustomFieldDefaults : public ULbtYouTrack_CustomFieldDefaults
{
    FLbtYouTrack_UserBundle Bundle;                                                   // 0x0068 (size: 0x28)
    TArray<FLbtYouTrack_User> DefaultValues;                                          // 0x0090 (size: 0x10)

}; // Size: 0xA0

class ULbtYouTrack_UserProjectCustomField : public ULbtYouTrack_BundleProjectCustomField
{
    FLbtYouTrack_UserBundle Bundle;                                                   // 0x00F8 (size: 0x28)
    TArray<FLbtYouTrack_User> DefaultValues;                                          // 0x0120 (size: 0x10)

}; // Size: 0x130

class ULbtYouTrack_VersionBundleCustomFieldDefaults : public ULbtYouTrack_BundleCustomFieldDefaults
{
    FLbtYouTrack_VersionBundle Bundle;                                                // 0x0068 (size: 0x28)
    TArray<FLbtYouTrack_VersionBundleElement> DefaultValues;                          // 0x0090 (size: 0x10)

}; // Size: 0xA0

class ULbtYouTrack_VersionProjectCustomField : public ULbtYouTrack_BundleProjectCustomField
{
    FLbtYouTrack_VersionBundle Bundle;                                                // 0x00F8 (size: 0x28)
    TArray<FLbtYouTrack_VersionBundleElement> DefaultValues;                          // 0x0120 (size: 0x10)

}; // Size: 0x130

class ULbtYouTrack_Visibility : public UObject
{
}; // Size: 0x28

class UYouTrackBugTrackerSettings : public UBugTrackerProviderSettings
{
}; // Size: 0x28

#endif
