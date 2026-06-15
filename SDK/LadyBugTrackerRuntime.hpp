#ifndef UE4SS_SDK_LadyBugTrackerRuntime_HPP
#define UE4SS_SDK_LadyBugTrackerRuntime_HPP

#include "LadyBugTrackerRuntime_enums.hpp"

struct FBugTrackerHideFieldsSettings
{
    FLbtEnumString Field;                                                             // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FBugTrackerProfileSettings
{
    TArray<FIssueFieldDefaultValue> DefaultValues;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FBugTrackerProjectData
{
}; // Size: 0x40

struct FBugTrackerWorkspaceData
{
}; // Size: 0x30

struct FFilterDefinition
{
    FString SimpleFilter;                                                             // 0x0000 (size: 0x10)
    TMap<class FName, class FLbtMultiValueEnumString> AdvancedFilters;                // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FIssueAttachment
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Filename;                                                                 // 0x0010 (size: 0x10)
    FString ContentType;                                                              // 0x0020 (size: 0x10)
    FString URL;                                                                      // 0x0030 (size: 0x10)
    FDateTime Submitted;                                                              // 0x0040 (size: 0x8)
    int32 Size;                                                                       // 0x0048 (size: 0x4)
    FString UserId;                                                                   // 0x0050 (size: 0x10)
    FString UserDisplayName;                                                          // 0x0060 (size: 0x10)
    bool bUpload;                                                                     // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FIssueChecklist
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    TArray<FIssueChecklistItem> Items;                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FIssueChecklistItem
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    bool Completed;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FIssueColumnDef
{
    FLbtEnumString FieldName;                                                         // 0x0000 (size: 0x30)
    int32 Width;                                                                      // 0x0030 (size: 0x4)
    int32 Order;                                                                      // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FIssueComment
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Text;                                                                     // 0x0010 (size: 0x10)
    FString Reporter;                                                                 // 0x0020 (size: 0x10)
    FString ReporterId;                                                               // 0x0030 (size: 0x10)
    FDateTime Submitted;                                                              // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FIssueCustomFieldDefinition
{
}; // Size: 0x68

struct FIssueField
{
    FName Name;                                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FIssueFieldContainer
{
    TArray<FIssueField_String> StringFields;                                          // 0x0000 (size: 0x10)
    TArray<FIssueField_MultilineString> MultilineStringFields;                        // 0x0010 (size: 0x10)
    TArray<FIssueField_Bool> BoolFields;                                              // 0x0020 (size: 0x10)
    TArray<FIssueField_Int> IntFields;                                                // 0x0030 (size: 0x10)
    TArray<FIssueField_Float> FloatFields;                                            // 0x0040 (size: 0x10)
    TArray<FIssueField_Enum> EnumFields;                                              // 0x0050 (size: 0x10)
    TArray<FIssueField_MultiValueEnum> MultiValueEnumFields;                          // 0x0060 (size: 0x10)
    TArray<FIssueField_DateAndTime> DateAndTimeFields;                                // 0x0070 (size: 0x10)
    TArray<FIssueField_StringEmptyText> StringEmptyTextFields;                        // 0x0080 (size: 0x10)
    TArray<FIssueField_MultilineStringEmptyText> MultilineStringEmptyTextFields;      // 0x0090 (size: 0x10)
    TArray<FIssueField_IntEmptyText> IntEmptyTextFields;                              // 0x00A0 (size: 0x10)
    TArray<FIssueField_FloatEmptyText> FloatEmptyTextFields;                          // 0x00B0 (size: 0x10)
    TArray<FIssueField_DateAndTimeEmptyText> DateAndTimeEmptyTextFields;              // 0x00C0 (size: 0x10)
    TArray<FIssueField_PeriodEmptyText> PeriodEmptyTextFields;                        // 0x00D0 (size: 0x10)

}; // Size: 0xE8

struct FIssueFieldDefaultValue
{
    FLbtEnumString FieldName;                                                         // 0x0000 (size: 0x30)
    FString Value;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FIssueFieldDefinition
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    EIssueFieldType Type;                                                             // 0x0028 (size: 0x1)
    FString DefaultValueAsString;                                                     // 0x0040 (size: 0x10)

}; // Size: 0x70

struct FIssueFieldValues
{
    TArray<FString> Values;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FIssueField_Bool : public FIssueField
{
    bool Value;                                                                       // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FIssueField_DateAndTime : public FIssueField
{
    FLbtDateAndTime Value;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIssueField_DateAndTimeEmptyText : public FIssueField
{
    FLbtDateAndTimeEmptyText Value;                                                   // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FIssueField_Enum : public FIssueField
{
    FLbtEnumString Value;                                                             // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FIssueField_Float : public FIssueField
{
    float Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FIssueField_FloatEmptyText : public FIssueField
{
    FLbtFloatEmptyText Value;                                                         // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FIssueField_Int : public FIssueField
{
    int32 Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FIssueField_IntEmptyText : public FIssueField
{
    FLbtIntEmptyText Value;                                                           // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FIssueField_MultiValueEnum : public FIssueField
{
    FLbtMultiValueEnumString Value;                                                   // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FIssueField_MultilineString : public FIssueField
{
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIssueField_MultilineStringEmptyText : public FIssueField
{
    FLbtMultilineStringEmptyText Value;                                               // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FIssueField_PeriodEmptyText : public FIssueField
{
    FLbtPeriodEmptyText Value;                                                        // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FIssueField_String : public FIssueField
{
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIssueField_StringEmptyText : public FIssueField
{
    FLbtStringEmptyText Value;                                                        // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FIssueHistory
{
}; // Size: 0x50

struct FIssueResource
{
    EIssueResourceState State;                                                        // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FIssueResource_Attachments : public FIssueResource
{
    TArray<FIssueAttachment> Items;                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIssueResource_Checklists : public FIssueResource
{
    TArray<FIssueChecklist> Items;                                                    // 0x0010 (size: 0x10)
    int32 TotalChecklistItems;                                                        // 0x0020 (size: 0x4)
    int32 CompletedChecklistItems;                                                    // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FIssueResource_Comments : public FIssueResource
{
    TArray<FIssueComment> Items;                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIssueResource_History : public FIssueResource
{
    TArray<FIssueHistory> Items;                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIssueUserData
{
}; // Size: 0x40

struct FLbtDateAndTime
{
    FDateTime DateTime;                                                               // 0x0000 (size: 0x8)
    bool bNoTime;                                                                     // 0x0008 (size: 0x1)
    ELbtDateAndTimeMode Mode;                                                         // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FLbtDateAndTimeEmptyText : public FLbtEmptyTextBase
{
    FLbtDateAndTime Value;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtEmptyTextBase
{
    FString EmptyText;                                                                // 0x0008 (size: 0x10)
    bool bIsEmpty;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FLbtEnumString
{
    FString Value;                                                                    // 0x0000 (size: 0x10)
    FName Definition;                                                                 // 0x0010 (size: 0x8)
    bool bCanBeEmpty;                                                                 // 0x0018 (size: 0x1)
    FString EmptyText;                                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtFloatEmptyText : public FLbtEmptyTextBase
{
    float Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FLbtIntEmptyText : public FLbtEmptyTextBase
{
    int32 Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FLbtJsonValueWrapper
{
}; // Size: 0x18

struct FLbtMultiValueEnumString
{
    TArray<FString> Values;                                                           // 0x0000 (size: 0x10)
    FName Definition;                                                                 // 0x0010 (size: 0x8)
    bool bCanBeEmpty;                                                                 // 0x0018 (size: 0x1)
    FString EmptyText;                                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtMultilineString
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtMultilineStringEmptyText : public FLbtEmptyTextBase
{
    FLbtMultilineString Value;                                                        // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtPeriod
{
    int32 Minutes;                                                                    // 0x0000 (size: 0x4)
    bool bWorkingDays;                                                                // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FLbtPeriodEmptyText : public FLbtEmptyTextBase
{
    FLbtPeriod Value;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FLbtStringEmptyText : public FLbtEmptyTextBase
{
    FString Value;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

class UBugTracker3DMarkerSettings : public UObject
{
    bool bShow;                                                                       // 0x0028 (size: 0x1)
    bool bShowLabel;                                                                  // 0x0029 (size: 0x1)
    FLbtEnumString ColorScheme;                                                       // 0x0030 (size: 0x30)
    FLinearColor LabelColor;                                                          // 0x0060 (size: 0x10)
    int32 MaxLabelLength;                                                             // 0x0070 (size: 0x4)
    bool bApplyFilter;                                                                // 0x0074 (size: 0x1)

}; // Size: 0x78

class UBugTrackerCmd : public UObject
{
}; // Size: 0x28

class UBugTrackerLibrary : public UBlueprintFunctionLibrary
{

    void SendFeedback(class ULBFeedbackData* Feedback, const FSendFeedbackOnSuccess& OnSuccess, const FSendFeedbackOnFail& OnFail);
    void SendAttachment(FString IssueId, FString FullPath, FString Filename, FString ContentMimeType, FString UserName, FString PasswordOrToken, FString OverrideProjectName, const FSendAttachmentOnSuccess& OnSuccess, const FSendAttachmentOnFail& OnFail);
    bool ReportIssueData(class UIssueData* Issue, const TArray<FString>& Attachments, bool bTakeScreenshots, bool bAttachLogs);
    bool ReportIssue(FString Summary, const TArray<FString>& Attachments, bool bTakeScreenshots, bool bAttachLogs);
    void GetIssues(FString UserName, FString PasswordOrToken, FString OverrideProjectName, const FGetIssuesOnSuccess& OnSuccess, const FGetIssuesOnFail& OnFail);
    void GetFieldValues(FString UserName, FString PasswordOrToken, FString OverrideProjectName, FName FieldName, const FGetFieldValuesOnSuccess& OnSuccess, const FGetFieldValuesOnFail& OnFail);
    FName GetBugTrackerName();
    class UIssueData* CreateIssue();
    class ULBFeedbackData* CreateFeedback(FString UserName, FString PasswordOrToken, FString OverrideProjectName);
}; // Size: 0x28

class UBugTrackerProviderSettings : public UObject
{
}; // Size: 0x28

class UBugTrackerSettings : public UObject
{
    FLbtEnumString Provider;                                                          // 0x0028 (size: 0x30)
    FString Host;                                                                     // 0x0058 (size: 0x10)
    FString WorkspaceName;                                                            // 0x0068 (size: 0x10)
    FString ProjectName;                                                              // 0x0078 (size: 0x10)
    FSoftClassPath ConstructorClass;                                                  // 0x0088 (size: 0x20)
    FBugTrackerProfileSettings DefaultProfile;                                        // 0x00A8 (size: 0x10)
    FBugTrackerProfileSettings EditorProfile;                                         // 0x00B8 (size: 0x10)
    FBugTrackerProfileSettings GameProfile;                                           // 0x00C8 (size: 0x10)
    FBugTrackerProfileSettings CrashProfile;                                          // 0x00D8 (size: 0x10)
    FBugTrackerProfileSettings FeedbackProfile;                                       // 0x00E8 (size: 0x10)
    TMap<class FString, class FString> MapRenameOldToNew;                             // 0x00F8 (size: 0x50)
    FLbtEnumString AssignToFieldName;                                                 // 0x0148 (size: 0x30)
    FLbtEnumString ChangeStatusFieldName;                                             // 0x0178 (size: 0x30)
    TArray<FIssueColumnDef> IssueListAdditionalColumns;                               // 0x01A8 (size: 0x10)
    TArray<FIssueColumnDef> PendingListAdditionalColumns;                             // 0x01B8 (size: 0x10)
    TArray<FBugTrackerHideFieldsSettings> HideFields;                                 // 0x01C8 (size: 0x10)
    bool bCollectEditorCrashes;                                                       // 0x01D8 (size: 0x1)
    bool bDebugLogHttpRequest;                                                        // 0x01D9 (size: 0x1)
    bool bDebugLogHttpRequestOnFail;                                                  // 0x01DA (size: 0x1)
    bool bDebugLogHttpResponse;                                                       // 0x01DB (size: 0x1)
    bool bDebugLogHttpResponseOnFail;                                                 // 0x01DC (size: 0x1)
    bool bHideConfidentialData;                                                       // 0x01DD (size: 0x1)
    bool bDebugLogPrettyJson;                                                         // 0x01DE (size: 0x1)

}; // Size: 0x1E8

class UBugTrackerUserSettings : public UObject
{
    FString UserName;                                                                 // 0x0028 (size: 0x10)
    FString Password;                                                                 // 0x0038 (size: 0x10)
    bool bRememberMe;                                                                 // 0x0048 (size: 0x1)
    FString EditImageTool;                                                            // 0x0050 (size: 0x10)
    bool bShowWelcomeScreen;                                                          // 0x0060 (size: 0x1)
    TMap<class FString, class FFilterDefinition> Filters;                             // 0x0068 (size: 0x50)

}; // Size: 0xB8

class UCreateFeedbackCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FCreateFeedbackCallbackProxyOnSuccess OnSuccess;                                  // 0x0030 (size: 0x10)
    void OnCreateFeedbackResult(class ULBFeedbackData* Feedback);
    FCreateFeedbackCallbackProxyOnFailure OnFailure;                                  // 0x0040 (size: 0x10)
    void OnCreateFeedbackResult(class ULBFeedbackData* Feedback);
    class ULBFeedbackData* Feedback;                                                  // 0x0050 (size: 0x8)

    class UCreateFeedbackCallbackProxy* CreateFeedbackAsync(FString UserName, FString PasswordOrToken, FString OverrideProjectName);
}; // Size: 0xA8

class UGetFieldValuesCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetFieldValuesCallbackProxyOnSuccess OnSuccess;                                  // 0x0030 (size: 0x10)
    void OnGetFieldValuesAsyncResult(FIssueFieldValues Values, FString Error);
    FGetFieldValuesCallbackProxyOnFailure OnFailure;                                  // 0x0040 (size: 0x10)
    void OnGetFieldValuesAsyncResult(FIssueFieldValues Values, FString Error);

    class UGetFieldValuesCallbackProxy* GetFieldValuesAsync(FString UserName, FString PasswordOrToken, FString OverrideProjectName, FName FieldName);
}; // Size: 0xA8

class UGetIssuesCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetIssuesCallbackProxyOnSuccess OnSuccess;                                       // 0x0030 (size: 0x10)
    void OnGetIssuesAsyncResult(class UIssuesCollection* IssuesCollection, FString Error);
    FGetIssuesCallbackProxyOnFailure OnFailure;                                       // 0x0040 (size: 0x10)
    void OnGetIssuesAsyncResult(class UIssuesCollection* IssuesCollection, FString Error);

    class UGetIssuesCallbackProxy* GetIssuesAsync(FString UserName, FString PasswordOrToken, FString OverrideProjectName);
}; // Size: 0xA0

class UIssueConstructor : public UObject
{

    FString GetLevelNameFromSreamingLevel(class ULevelStreaming* LevelStreaming);
    FString GetLevelName();
    bool GetCamera(FVector& Location, FRotator& Rotation);
    void ConstructIssue(class UIssueData* Issue, EIssueProfile Profile);
}; // Size: 0x28

class UIssueData : public UObject
{
    FIssueFieldContainer Fields;                                                      // 0x0028 (size: 0xE8)
    FIssueFieldContainer FieldsServer;                                                // 0x0110 (size: 0xE8)
    FString URL;                                                                      // 0x0200 (size: 0x10)
    bool bGoto;                                                                       // 0x0210 (size: 0x1)
    FDateTime LocalLastEditTime;                                                      // 0x0228 (size: 0x8)
    FIssueResource_Checklists Checklists;                                             // 0x0248 (size: 0x28)
    FIssueResource_Attachments Attachments;                                           // 0x0270 (size: 0x20)
    FIssueResource_Comments Comments;                                                 // 0x0290 (size: 0x20)
    FIssueResource_History History;                                                   // 0x02B0 (size: 0x20)

    void SetMultiValueEnumFieldValue(FName FieldName, const TArray<FString>& Value);
    void SetIntFieldValue(FName FieldName, int32 Value);
    void SetFloatFieldValue(FName FieldName, float Value);
    void SetFieldValue(FName FieldName, FString Value);
    void SetDateTimeFieldValue(FName FieldName, const FDateTime& Value);
    void SetDateAndTimeFieldValue(FName FieldName, const FLbtDateAndTime& Value);
    void SetCameraTransform(const FVector& Location, const FRotator& Rotation);
    void SetBoolFieldValue(FName FieldName, bool Value);
    bool IsFieldExist(FName FieldName);
    TArray<FString> GetMultiValueEnumFieldValue(FName FieldName);
    FString GetLevelName();
    int32 GetIntFieldValue(FName FieldName);
    float GetFloatFieldValue(FName FieldName);
    FString GetFieldValue(FName FieldName);
    FDateTime GetDateTimeFieldValue(FName FieldName);
    FLbtDateAndTime GetDateAndTimeFieldValue(FName FieldName);
    FTransform GetCameraTransform();
    bool GetBoolFieldValue(FName FieldName);
}; // Size: 0x2E0

class UIssuesCollection : public UObject
{
    TArray<class UIssueData*> Issues;                                                 // 0x0028 (size: 0x10)
    int32 TotalCount;                                                                 // 0x0048 (size: 0x4)
    bool bAllIssuesFetched;                                                           // 0x004C (size: 0x1)

}; // Size: 0x50

class ULBFeedbackData : public UIssueData
{
}; // Size: 0x330

class ULbtJsonBaseObject : public UObject
{
}; // Size: 0x38

class USendAttachmentCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FSendAttachmentCallbackProxyOnSuccess OnSuccess;                                  // 0x0030 (size: 0x10)
    void OnSendAttachmentResult(FString Error);
    FSendAttachmentCallbackProxyOnFailure OnFailure;                                  // 0x0040 (size: 0x10)
    void OnSendAttachmentResult(FString Error);

    class USendAttachmentCallbackProxy* SendAttachmentAsync(FString IssueId, FString FullPath, FString Filename, FString ContentMimeType, FString UserName, FString PasswordOrToken, FString OverrideProjectName);
}; // Size: 0xE0

class USendFeedbackCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FSendFeedbackCallbackProxyOnSuccess OnSuccess;                                    // 0x0030 (size: 0x10)
    void OnSendFeedbackResult(FString IssueId, FString Error);
    FSendFeedbackCallbackProxyOnFailure OnFailure;                                    // 0x0040 (size: 0x10)
    void OnSendFeedbackResult(FString IssueId, FString Error);
    class ULBFeedbackData* Feedback;                                                  // 0x0050 (size: 0x8)

    class USendFeedbackCallbackProxy* SendFeedbackAsync(class ULBFeedbackData* Feedback);
}; // Size: 0x58

#endif
