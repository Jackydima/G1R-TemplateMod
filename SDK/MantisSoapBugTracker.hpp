#ifndef UE4SS_SDK_MantisSoapBugTracker_HPP
#define UE4SS_SDK_MantisSoapBugTracker_HPP

struct FMantisConnect_AccountData : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString RealName;                                                                 // 0x0020 (size: 0x10)
    FString Email;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMantisConnect_AttachmentData : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FString Filename;                                                                 // 0x0010 (size: 0x10)
    int32 Size;                                                                       // 0x0020 (size: 0x4)
    FString ContentType;                                                              // 0x0028 (size: 0x10)
    FDateTime DateSubmitted;                                                          // 0x0038 (size: 0x8)
    FString DownloadUrl;                                                              // 0x0040 (size: 0x10)
    int32 UserId;                                                                     // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FMantisConnect_AuthorizeBase : public FMantisConnect_StructBase
{
    FString UserName;                                                                 // 0x0008 (size: 0x10)
    FString Password;                                                                 // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMantisConnect_CustomFieldDefinitionData : public FMantisConnect_StructBase
{
    FMantisConnect_ObjectRef Field;                                                   // 0x0008 (size: 0x20)
    int32 Type;                                                                       // 0x0028 (size: 0x4)
    FString PossibleValues;                                                           // 0x0030 (size: 0x10)
    FString DefaultValue;                                                             // 0x0040 (size: 0x10)
    FString ValidRegexp;                                                              // 0x0050 (size: 0x10)
    int32 AccessLevelR;                                                               // 0x0060 (size: 0x4)
    int32 AccessLevelRw;                                                              // 0x0064 (size: 0x4)
    int32 LengthMin;                                                                  // 0x0068 (size: 0x4)
    int32 LengthMax;                                                                  // 0x006C (size: 0x4)
    bool Advanced;                                                                    // 0x0070 (size: 0x1)
    bool DisplayReport;                                                               // 0x0071 (size: 0x1)
    bool DisplayUpdate;                                                               // 0x0072 (size: 0x1)
    bool DisplayResolved;                                                             // 0x0073 (size: 0x1)
    bool DisplayClosed;                                                               // 0x0074 (size: 0x1)
    bool RequireReport;                                                               // 0x0075 (size: 0x1)
    bool RequireUpdate;                                                               // 0x0076 (size: 0x1)
    bool RequireResolved;                                                             // 0x0077 (size: 0x1)
    bool RequireClosed;                                                               // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FMantisConnect_CustomFieldValueForIssueData : public FMantisConnect_StructBase
{
    FMantisConnect_ObjectRef Field;                                                   // 0x0008 (size: 0x20)
    FString Value;                                                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMantisConnect_EnumAccessLevels : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_EnumAccessLevelsResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ObjectRef> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_EnumPriorities : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_EnumPrioritiesResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ObjectRef> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_EnumReproducibilities : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_EnumReproducibilitiesResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ObjectRef> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_EnumResolutions : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_EnumResolutionsResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ObjectRef> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_EnumSeverities : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_EnumSeveritiesResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ObjectRef> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_EnumStatus : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_EnumStatusResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ObjectRef> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_Fault : public FMantisConnect_StructBase
{
    FString FaultCode;                                                                // 0x0008 (size: 0x10)
    FString FaultString;                                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMantisConnect_HistoryData : public FMantisConnect_StructBase
{
    int32 Date;                                                                       // 0x0008 (size: 0x4)
    int32 UserId;                                                                     // 0x000C (size: 0x4)
    FString UserName;                                                                 // 0x0010 (size: 0x10)
    FString Field;                                                                    // 0x0020 (size: 0x10)
    int32 Type;                                                                       // 0x0030 (size: 0x4)
    FString OldValue;                                                                 // 0x0038 (size: 0x10)
    FString NewValue;                                                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FMantisConnect_IssueAdd : public FMantisConnect_AuthorizeBase
{
    FMantisConnect_IssueData Issue;                                                   // 0x0028 (size: 0x2F8)

}; // Size: 0x320

struct FMantisConnect_IssueAddResponse : public FMantisConnect_StructBase
{
    int32 Return;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMantisConnect_IssueAttachmentAdd : public FMantisConnect_AuthorizeBase
{
    int32 IssueId;                                                                    // 0x0028 (size: 0x4)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    FString FileType;                                                                 // 0x0040 (size: 0x10)
    FString Content;                                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMantisConnect_IssueAttachmentAddResponse : public FMantisConnect_StructBase
{
    int32 Return;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMantisConnect_IssueAttachmentDelete : public FMantisConnect_AuthorizeBase
{
    int32 IssueAttachmentId;                                                          // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_IssueAttachmentDeleteResponse : public FMantisConnect_StructBase
{
    bool Return;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMantisConnect_IssueAttachmentGet : public FMantisConnect_AuthorizeBase
{
    int32 IssueAttachmentId;                                                          // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_IssueAttachmentGetResponse : public FMantisConnect_StructBase
{
    FString Return;                                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_IssueData : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FMantisConnect_ObjectRef ViewState;                                               // 0x0010 (size: 0x20)
    FDateTime LastUpdated;                                                            // 0x0030 (size: 0x8)
    FMantisConnect_ObjectRef Project;                                                 // 0x0038 (size: 0x20)
    FString Category;                                                                 // 0x0058 (size: 0x10)
    FMantisConnect_ObjectRef Priority;                                                // 0x0068 (size: 0x20)
    FMantisConnect_ObjectRef Severity;                                                // 0x0088 (size: 0x20)
    FMantisConnect_ObjectRef Status;                                                  // 0x00A8 (size: 0x20)
    FMantisConnect_AccountData Reporter;                                              // 0x00C8 (size: 0x40)
    FString Summary;                                                                  // 0x0108 (size: 0x10)
    FString Version;                                                                  // 0x0118 (size: 0x10)
    FString Build;                                                                    // 0x0128 (size: 0x10)
    FString Platform;                                                                 // 0x0138 (size: 0x10)
    FString Os;                                                                       // 0x0148 (size: 0x10)
    FString OsBuild;                                                                  // 0x0158 (size: 0x10)
    FMantisConnect_ObjectRef Reproducibility;                                         // 0x0168 (size: 0x20)
    FDateTime DateSubmitted;                                                          // 0x0188 (size: 0x8)
    int32 SponsorshipTotal;                                                           // 0x0190 (size: 0x4)
    FMantisConnect_AccountData Handler;                                               // 0x0198 (size: 0x40)
    FMantisConnect_ObjectRef Projection;                                              // 0x01D8 (size: 0x20)
    FMantisConnect_ObjectRef Eta;                                                     // 0x01F8 (size: 0x20)
    FMantisConnect_ObjectRef Resolution;                                              // 0x0218 (size: 0x20)
    FString FixedInVersion;                                                           // 0x0238 (size: 0x10)
    FString TargetVersion;                                                            // 0x0248 (size: 0x10)
    FString Description;                                                              // 0x0258 (size: 0x10)
    FString StepsToReproduce;                                                         // 0x0268 (size: 0x10)
    FString AdditionalInformation;                                                    // 0x0278 (size: 0x10)
    TArray<FMantisConnect_AttachmentData> Attachments;                                // 0x0288 (size: 0x10)
    TArray<FMantisConnect_RelationshipData> Relationships;                            // 0x0298 (size: 0x10)
    TArray<FMantisConnect_IssueNoteData> Notes;                                       // 0x02A8 (size: 0x10)
    TArray<FMantisConnect_CustomFieldValueForIssueData> CustomFields;                 // 0x02B8 (size: 0x10)
    FDateTime DueDate;                                                                // 0x02C8 (size: 0x8)
    TArray<FMantisConnect_AccountData> Monitors;                                      // 0x02D0 (size: 0x10)
    bool Sticky;                                                                      // 0x02E0 (size: 0x1)
    TArray<FMantisConnect_ObjectRef> Tags;                                            // 0x02E8 (size: 0x10)

}; // Size: 0x2F8

struct FMantisConnect_IssueDelete : public FMantisConnect_AuthorizeBase
{
    int32 IssueId;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_IssueDeleteResponse : public FMantisConnect_StructBase
{
    bool Return;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMantisConnect_IssueGet : public FMantisConnect_AuthorizeBase
{
    int32 IssueId;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_IssueGetHistory : public FMantisConnect_AuthorizeBase
{
    int32 IssueId;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_IssueGetHistoryResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_HistoryData> Return;                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_IssueGetResponse : public FMantisConnect_StructBase
{
    FMantisConnect_IssueData Return;                                                  // 0x0008 (size: 0x2F8)

}; // Size: 0x300

struct FMantisConnect_IssueNoteAdd : public FMantisConnect_AuthorizeBase
{
    int32 IssueId;                                                                    // 0x0028 (size: 0x4)
    FMantisConnect_IssueNoteData Note;                                                // 0x0030 (size: 0xA8)

}; // Size: 0xD8

struct FMantisConnect_IssueNoteAddResponse : public FMantisConnect_StructBase
{
    int32 Return;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMantisConnect_IssueNoteData : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FMantisConnect_AccountData Reporter;                                              // 0x0010 (size: 0x40)
    FString Text;                                                                     // 0x0050 (size: 0x10)
    FMantisConnect_ObjectRef ViewState;                                               // 0x0060 (size: 0x20)
    FDateTime DateSubmitted;                                                          // 0x0080 (size: 0x8)
    FDateTime LastModified;                                                           // 0x0088 (size: 0x8)
    int32 TimeTracking;                                                               // 0x0090 (size: 0x4)
    int32 NoteType;                                                                   // 0x0094 (size: 0x4)
    FString NoteAttr;                                                                 // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FMantisConnect_IssueNoteDelete : public FMantisConnect_AuthorizeBase
{
    int32 IssueNoteId;                                                                // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_IssueNoteDeleteResponse : public FMantisConnect_StructBase
{
    bool Return;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMantisConnect_IssueUpdate : public FMantisConnect_AuthorizeBase
{
    int32 IssueId;                                                                    // 0x0028 (size: 0x4)
    FMantisConnect_IssueData Issue;                                                   // 0x0030 (size: 0x2F8)

}; // Size: 0x328

struct FMantisConnect_IssueUpdateResponse : public FMantisConnect_StructBase
{
    bool Return;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMantisConnect_Login : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_LoginResponse : public FMantisConnect_StructBase
{
    FMantisConnect_UserData Return;                                                   // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FMantisConnect_ObjectRef : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMantisConnect_ProjectAdd : public FMantisConnect_AuthorizeBase
{
    FMantisConnect_ProjectData Project;                                               // 0x0028 (size: 0xD0)

}; // Size: 0xF8

struct FMantisConnect_ProjectAddResponse : public FMantisConnect_StructBase
{
    int32 Return;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMantisConnect_ProjectData : public FMantisConnect_ProjectDataBase
{
    TArray<FMantisConnect_ProjectData1> Subprojects;                                  // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FMantisConnect_ProjectData1 : public FMantisConnect_ProjectDataBase
{
    TArray<FMantisConnect_ProjectData2> Subprojects;                                  // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FMantisConnect_ProjectData2 : public FMantisConnect_ProjectDataBase
{
    TArray<FMantisConnect_ProjectData3> Subprojects;                                  // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FMantisConnect_ProjectData3 : public FMantisConnect_ProjectDataBase
{
    TArray<FMantisConnect_ProjectData4> Subprojects;                                  // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FMantisConnect_ProjectData4 : public FMantisConnect_ProjectDataBase
{
    TArray<FMantisConnect_ProjectData5> Subprojects;                                  // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FMantisConnect_ProjectData5 : public FMantisConnect_ProjectDataBase
{
    TArray<FMantisConnect_ProjectDataBase> Subprojects;                               // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FMantisConnect_ProjectDataBase : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FMantisConnect_ObjectRef Status;                                                  // 0x0020 (size: 0x20)
    bool Enabled;                                                                     // 0x0040 (size: 0x1)
    FMantisConnect_ObjectRef ViewState;                                               // 0x0048 (size: 0x20)
    FMantisConnect_ObjectRef AccessMin;                                               // 0x0068 (size: 0x20)
    FString FilePath;                                                                 // 0x0088 (size: 0x10)
    FString Description;                                                              // 0x0098 (size: 0x10)
    bool InheritGlobal;                                                               // 0x00A8 (size: 0x1)

}; // Size: 0xC0

struct FMantisConnect_ProjectGetCategories : public FMantisConnect_AuthorizeBase
{
    int32 ProjectID;                                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_ProjectGetCategoriesResponse : public FMantisConnect_StructBase
{
    TArray<FString> Return;                                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_ProjectGetCustomFields : public FMantisConnect_AuthorizeBase
{
    int32 ProjectID;                                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_ProjectGetCustomFieldsResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_CustomFieldDefinitionData> Return;                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_ProjectGetIdFromName : public FMantisConnect_AuthorizeBase
{
    FString ProjectName;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMantisConnect_ProjectGetIdFromNameResponse : public FMantisConnect_StructBase
{
    int32 Return;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMantisConnect_ProjectGetIssues : public FMantisConnect_AuthorizeBase
{
    int32 ProjectID;                                                                  // 0x0028 (size: 0x4)
    int32 PageNumber;                                                                 // 0x002C (size: 0x4)
    int32 PerPage;                                                                    // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FMantisConnect_ProjectGetIssuesResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_IssueData> Return;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_ProjectGetUsers : public FMantisConnect_AuthorizeBase
{
    int32 ProjectID;                                                                  // 0x0028 (size: 0x4)
    int32 Access;                                                                     // 0x002C (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_ProjectGetUsersResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_AccountData> Return;                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_ProjectGetVersions : public FMantisConnect_AuthorizeBase
{
    int32 ProjectID;                                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMantisConnect_ProjectGetVersionsResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ProjectVersionData> Return;                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_ProjectVersionData : public FMantisConnect_StructBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Description;                                                              // 0x0018 (size: 0x10)
    bool Released;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FMantisConnect_ProjectsGetUserAccessible : public FMantisConnect_AuthorizeBase
{
}; // Size: 0x28

struct FMantisConnect_ProjectsGetUserAccessibleResponse : public FMantisConnect_StructBase
{
    TArray<FMantisConnect_ProjectData> Return;                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMantisConnect_RelationshipData : public FMantisConnect_StructBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FMantisConnect_ObjectRef Type;                                                    // 0x0010 (size: 0x20)
    int32 TargetId;                                                                   // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FMantisConnect_StructBase
{
}; // Size: 0x8

struct FMantisConnect_UserData : public FMantisConnect_StructBase
{
    FMantisConnect_AccountData AccountData;                                           // 0x0008 (size: 0x40)
    int32 AccessLevel;                                                                // 0x0048 (size: 0x4)
    FString Timezone;                                                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMantisConnect_Version : public FMantisConnect_StructBase
{
}; // Size: 0x8

struct FMantisConnect_VersionResponse : public FMantisConnect_StructBase
{
    FString Return;                                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

class UMantisSettings : public UBugTrackerProviderSettings
{
    FString Info;                                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
