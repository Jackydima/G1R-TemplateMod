#ifndef UE4SS_SDK_JiraBugTracker_HPP
#define UE4SS_SDK_JiraBugTracker_HPP

struct FLbtJira_AttachmentMetadata : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Filename;                                                                 // 0x0020 (size: 0x10)
    FLbtJira_User Author;                                                             // 0x0030 (size: 0x88)
    FDateTime Created;                                                                // 0x00B8 (size: 0x8)
    int64 Size;                                                                       // 0x00C0 (size: 0x8)
    FString MimeType;                                                                 // 0x00C8 (size: 0x10)
    FString Content;                                                                  // 0x00D8 (size: 0x10)
    FString Thumbnail;                                                                // 0x00E8 (size: 0x10)

}; // Size: 0xF8

struct FLbtJira_BaseStruct
{
    FString Self;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_Comment : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FLbtJira_UserDetails Author;                                                      // 0x0020 (size: 0x88)
    FLbtJira_Document Body;                                                           // 0x00A8 (size: 0x28)
    FDateTime Created;                                                                // 0x00D0 (size: 0x8)
    FDateTime Updated;                                                                // 0x00D8 (size: 0x8)

}; // Size: 0xE0

struct FLbtJira_ContainerOfWorkflowSchemeAssociations
{
    TArray<FLbtJira_WorkflowSchemeAssociations> Values;                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_CreateSubtask : public FLbtJira_BaseStruct
{
    FLbtJira_CreateSubtaskFields Fields;                                              // 0x0010 (size: 0x40)

}; // Size: 0x50

struct FLbtJira_CreateSubtaskFields
{
    FString Summary;                                                                  // 0x0000 (size: 0x10)
    FLbtJira_CreateSubtaskProject Project;                                            // 0x0010 (size: 0x10)
    FLbtJira_CreateSubtaskProject Issuetype;                                          // 0x0020 (size: 0x10)
    FLbtJira_CreateSubtaskProject Parent;                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_CreateSubtaskProject
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_CreatedIssue : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Key;                                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtJira_CustomFieldOption
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_DefaultWorkflow
{
    bool UpdateDraftIfNeeded;                                                         // 0x0000 (size: 0x1)
    FString Workflow;                                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FLbtJira_DoTransitionIssue
{
    FLbtJira_IssueTransition Transition;                                              // 0x0000 (size: 0xC8)

}; // Size: 0xC8

struct FLbtJira_Document
{
    FString Type;                                                                     // 0x0000 (size: 0x10)
    TArray<class ULbtJira_DocumentNode*> Content;                                     // 0x0010 (size: 0x10)
    int32 Version;                                                                    // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FLbtJira_DocumentNode_DateAttrs
{
    FString Timestamp;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_DocumentNode_EmojiAttrs
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_DocumentNode_ExpandAttrs
{
    FString title;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_DocumentNode_InlineCardAttrs
{
    FString URL;                                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_DocumentNode_MentionAttrs
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_DocumentNode_StatusAttrs
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_EnumIssueFieldValue : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtJira_EpicBean : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Key;                                                                      // 0x0020 (size: 0x10)
    TMap<class FName, class FString> Fields;                                          // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FLbtJira_EpicSearchResults : public FLbtJira_PageBean
{
    TArray<FLbtJira_EpicBean> Issues;                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_Error
{
    FString Error;                                                                    // 0x0000 (size: 0x10)
    FString error_description;                                                        // 0x0010 (size: 0x10)
    TArray<FString> ErrorMessages;                                                    // 0x0020 (size: 0x10)
    TMap<class FString, class FString> Errors;                                        // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FLbtJira_Field : public FLbtJira_BaseStruct
{
    FName ID;                                                                         // 0x0010 (size: 0x8)
    FString Name;                                                                     // 0x0018 (size: 0x10)
    FLbtJira_JsonTypeBean Schema;                                                     // 0x0028 (size: 0x28)
    FString Desctiption;                                                              // 0x0050 (size: 0x10)
    FString Key;                                                                      // 0x0060 (size: 0x10)
    bool IsLocked;                                                                    // 0x0070 (size: 0x1)
    bool IsUnscreenable;                                                              // 0x0071 (size: 0x1)
    FString SearcherKey;                                                              // 0x0078 (size: 0x10)
    int64 ScreensCount;                                                               // 0x0088 (size: 0x8)
    int64 ContextsCount;                                                              // 0x0090 (size: 0x8)

}; // Size: 0x98

struct FLbtJira_FieldDetails
{
    bool Custom;                                                                      // 0x0000 (size: 0x1)
    FName ID;                                                                         // 0x0004 (size: 0x8)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    bool Navigable;                                                                   // 0x0020 (size: 0x1)
    bool Orderable;                                                                   // 0x0021 (size: 0x1)
    FLbtJira_JsonTypeBean Schema;                                                     // 0x0028 (size: 0x28)
    bool Searchable;                                                                  // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FLbtJira_FieldMetadata
{
    TArray<FLbtJsonValueWrapper> AllowedValues;                                       // 0x0000 (size: 0x10)
    FString AutoCompleteUrl;                                                          // 0x0010 (size: 0x10)
    FString Configuration;                                                            // 0x0020 (size: 0x10)
    FLbtJsonValueWrapper DefaultValue;                                                // 0x0030 (size: 0x18)
    bool HasDefaultValue;                                                             // 0x0048 (size: 0x1)
    FString Key;                                                                      // 0x0050 (size: 0x10)
    FString Name;                                                                     // 0x0060 (size: 0x10)
    TArray<FString> Operations;                                                       // 0x0070 (size: 0x10)
    bool Required;                                                                    // 0x0080 (size: 0x1)
    FLbtJira_JsonTypeBean Schema;                                                     // 0x0088 (size: 0x28)

}; // Size: 0xB0

struct FLbtJira_GroupDetails
{
    FString GroupId;                                                                  // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_IssueBean : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Key;                                                                      // 0x0020 (size: 0x10)
    FLbtJira_IssueUpdateMetadata Editmeta;                                            // 0x0030 (size: 0x50)
    TArray<FLbtJira_IssueTransition> Transitions;                                     // 0x0080 (size: 0x10)
    TMap<class FName, class FLbtJsonValueWrapper> Fields;                             // 0x0090 (size: 0x50)

}; // Size: 0xE0

struct FLbtJira_IssueCreateMetadata
{
    TArray<FLbtJira_ProjectIssueCreateMetadata> Projects;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_IssueTransition
{
    FString Expand;                                                                   // 0x0000 (size: 0x10)
    bool bHasScreen;                                                                  // 0x0010 (size: 0x1)
    FString ID;                                                                       // 0x0018 (size: 0x10)
    bool IsAvailable;                                                                 // 0x0028 (size: 0x1)
    bool IsConditional;                                                               // 0x0029 (size: 0x1)
    bool IsGlobal;                                                                    // 0x002A (size: 0x1)
    bool IsInitial;                                                                   // 0x002B (size: 0x1)
    bool Looped;                                                                      // 0x002C (size: 0x1)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    FLbtJira_StatusDetails To;                                                        // 0x0040 (size: 0x88)

}; // Size: 0xC8

struct FLbtJira_IssueTypeDetails : public FLbtJira_BaseStruct
{
    int32 HierarchyLevel;                                                             // 0x0010 (size: 0x4)
    FString ID;                                                                       // 0x0018 (size: 0x10)
    FString Name;                                                                     // 0x0028 (size: 0x10)
    bool Subtask;                                                                     // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FLbtJira_IssueTypeIssueCreateMetadata : public FLbtJira_BaseStruct
{
    TMap<class FName, class FLbtJira_FieldMetadata> Fields;                           // 0x0010 (size: 0x50)
    FString Name;                                                                     // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FLbtJira_IssueTypeScreenScheme
{
    FString Description;                                                              // 0x0000 (size: 0x10)
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtJira_IssueTypeScreenSchemeItem
{
    FString IssueTypeId;                                                              // 0x0000 (size: 0x10)
    FString IssueTypeScreenSchemeId;                                                  // 0x0010 (size: 0x10)
    FString ScreenSchemeId;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtJira_IssueTypeScreenSchemesProjects
{
    FLbtJira_IssueTypeScreenScheme IssueTypeScreenScheme;                             // 0x0000 (size: 0x30)
    TArray<FString> ProjectIds;                                                       // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_IssueTypeWithStatus : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    bool Subtask;                                                                     // 0x0030 (size: 0x1)
    TArray<FLbtJira_StatusDetails> Statuses;                                          // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLbtJira_IssueTypeWorkflowMapping
{
    FString Issuetype;                                                                // 0x0000 (size: 0x10)
    FString Workflow;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_IssueUpdateMetadata
{
    TMap<class FName, class FLbtJira_FieldMetadata> Fields;                           // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FLbtJira_JsonTypeBean
{
    FName Type;                                                                       // 0x0000 (size: 0x8)
    FName Items;                                                                      // 0x0008 (size: 0x8)
    FName System;                                                                     // 0x0010 (size: 0x8)
    FName Custom;                                                                     // 0x0018 (size: 0x8)
    int64 CustomId;                                                                   // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FLbtJira_PageBean : public FLbtJira_BaseStruct
{
    int32 MaxResult;                                                                  // 0x0010 (size: 0x4)
    int64 StartAt;                                                                    // 0x0018 (size: 0x8)
    int64 Total;                                                                      // 0x0020 (size: 0x8)
    bool IsLast;                                                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FLbtJira_PageBeanField : public FLbtJira_PageBean
{
    TArray<FLbtJira_Field> Values;                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanGroupDetails : public FLbtJira_PageBean
{
    TArray<FLbtJira_GroupDetails> Values;                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanIssueTypeScreenScheme : public FLbtJira_PageBean
{
    TArray<FLbtJira_IssueTypeScreenScheme> Values;                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanIssueTypeScreenSchemeItem : public FLbtJira_PageBean
{
    TArray<FLbtJira_IssueTypeScreenSchemeItem> Values;                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanIssueTypeScreenSchemesProjects : public FLbtJira_PageBean
{
    TArray<FLbtJira_IssueTypeScreenSchemesProjects> Values;                           // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanProject : public FLbtJira_PageBean
{
    TArray<FLbtJira_Project> Values;                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanResolutionJsonBean : public FLbtJira_PageBean
{
    TArray<FLbtJira_ResolutionJsonBean> Values;                                       // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanScreenScheme : public FLbtJira_PageBean
{
    TArray<FLbtJira_ScreenScheme> Values;                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanString : public FLbtJira_PageBean
{
    TArray<FString> Values;                                                           // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBeanWorkflow : public FLbtJira_PageBean
{
    TArray<FLbtJira_Workflow> Values;                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageBean_Priority : public FLbtJira_PageBean
{
    TArray<FLbtJira_Priority> Values;                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_PageOfComments : public FLbtJira_PageBean
{
    TArray<FLbtJira_Comment> Comments;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_Priority : public FLbtJira_BaseStruct
{
    FString StatusColor;                                                              // 0x0010 (size: 0x10)
    FString Desctiption;                                                              // 0x0020 (size: 0x10)
    FString IconUrl;                                                                  // 0x0030 (size: 0x10)
    FString Name;                                                                     // 0x0040 (size: 0x10)
    FString ID;                                                                       // 0x0050 (size: 0x10)
    bool IsDefault;                                                                   // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FLbtJira_Project : public FLbtJira_BaseStruct
{
    bool Archived;                                                                    // 0x0010 (size: 0x1)
    bool Deleted;                                                                     // 0x0011 (size: 0x1)
    FString ID;                                                                       // 0x0018 (size: 0x10)
    FString Key;                                                                      // 0x0028 (size: 0x10)
    FString Description;                                                              // 0x0038 (size: 0x10)
    FString Name;                                                                     // 0x0048 (size: 0x10)
    bool Simplified;                                                                  // 0x0058 (size: 0x1)
    FString Style;                                                                    // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FLbtJira_ProjectComponent
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_ProjectDetails
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString ProjectTypeKey;                                                           // 0x0020 (size: 0x10)
    FString Self;                                                                     // 0x0030 (size: 0x10)
    bool Simplified;                                                                  // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FLbtJira_ProjectIssueCreateMetadata : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    TArray<FLbtJira_IssueTypeIssueCreateMetadata> IssueTypes;                         // 0x0020 (size: 0x10)
    FString Key;                                                                      // 0x0030 (size: 0x10)
    FString Name;                                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FLbtJira_ProjectIssueSecurityLevels
{
    TArray<FLbtJira_SecurityLevel> Levles;                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_ResolutionJsonBean : public FLbtJira_BaseStruct
{
    FString Desctiption;                                                              // 0x0010 (size: 0x10)
    FString IconUrl;                                                                  // 0x0020 (size: 0x10)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    FString ID;                                                                       // 0x0040 (size: 0x10)
    bool IsDefault;                                                                   // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FLbtJira_Scope
{
    FLbtJira_ProjectDetails Project;                                                  // 0x0000 (size: 0x48)
    FString Type;                                                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLbtJira_ScreenScheme
{
    FString Description;                                                              // 0x0000 (size: 0x10)
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FLbtJira_PageBeanIssueTypeScreenScheme IssueTypeScreenSchemes;                    // 0x0020 (size: 0x40)
    FString Name;                                                                     // 0x0060 (size: 0x10)
    FLbtJira_ScreenTypes Screens;                                                     // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FLbtJira_ScreenTypes
{
    int32 Create;                                                                     // 0x0000 (size: 0x4)
    int32 Default;                                                                    // 0x0004 (size: 0x4)
    int32 Edit;                                                                       // 0x0008 (size: 0x4)
    int32 View;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FLbtJira_ScreenableField
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FLbtJira_ScreenableTab
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_SearchResults : public FLbtJira_PageBean
{
    TArray<FLbtJira_IssueBean> Issues;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtJira_SecurityLevel
{
    FString Description;                                                              // 0x0000 (size: 0x10)
    FString ID;                                                                       // 0x0010 (size: 0x10)
    bool IsDefault;                                                                   // 0x0020 (size: 0x1)
    FString IssueSecuritySchemeId;                                                    // 0x0028 (size: 0x10)
    FString Name;                                                                     // 0x0038 (size: 0x10)
    FString Self;                                                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLbtJira_SecurityScheme
{
    int32 DefaultSecurityLevelId;                                                     // 0x0000 (size: 0x4)
    FString Description;                                                              // 0x0008 (size: 0x10)
    int32 ID;                                                                         // 0x0018 (size: 0x4)
    TArray<FLbtJira_SecurityLevel> Levels;                                            // 0x0020 (size: 0x10)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    FString Self;                                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FLbtJira_ServerInformation
{
    FString BaseUrl;                                                                  // 0x0000 (size: 0x10)
    FString Version;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_StatusCategory : public FLbtJira_BaseStruct
{
    int64 ID;                                                                         // 0x0010 (size: 0x8)
    FString Key;                                                                      // 0x0018 (size: 0x10)
    FString ColorName;                                                                // 0x0028 (size: 0x10)
    FString Name;                                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLbtJira_StatusDetails : public FLbtJira_BaseStruct
{
    FString Description;                                                              // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    FString ID;                                                                       // 0x0030 (size: 0x10)
    FLbtJira_StatusCategory StatusCategory;                                           // 0x0040 (size: 0x48)

}; // Size: 0x88

struct FLbtJira_Subtask : public FLbtJira_BaseStruct
{
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Key;                                                                      // 0x0020 (size: 0x10)
    FLbtJira_SubtaskFields Fields;                                                    // 0x0030 (size: 0x150)

}; // Size: 0x180

struct FLbtJira_SubtaskFields : public FLbtJira_BaseStruct
{
    FString Summary;                                                                  // 0x0010 (size: 0x10)
    FLbtJira_StatusDetails Status;                                                    // 0x0020 (size: 0x88)
    FLbtJira_Priority Prioryty;                                                       // 0x00A8 (size: 0x68)
    FLbtJira_IssueTypeDetails Issuetype;                                              // 0x0110 (size: 0x40)

}; // Size: 0x150

struct FLbtJira_SubtaskTransitions
{
    FString Expand;                                                                   // 0x0000 (size: 0x10)
    TArray<FLbtJira_IssueTransition> Transitions;                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtJira_Transition
{
    FString Description;                                                              // 0x0000 (size: 0x10)
    TArray<FString> From;                                                             // 0x0010 (size: 0x10)
    FString ID;                                                                       // 0x0020 (size: 0x10)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    FString To;                                                                       // 0x0040 (size: 0x10)
    FString Type;                                                                     // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FLbtJira_User : public FLbtJira_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Key;                                                                      // 0x0020 (size: 0x10)
    FString AccountId;                                                                // 0x0030 (size: 0x10)
    FString EmailAddress;                                                             // 0x0040 (size: 0x10)
    FString DisplayName;                                                              // 0x0050 (size: 0x10)
    bool Active;                                                                      // 0x0060 (size: 0x1)
    FString Timezone;                                                                 // 0x0068 (size: 0x10)
    FString Locale;                                                                   // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FLbtJira_UserDetails : public FLbtJira_User
{
}; // Size: 0x88

struct FLbtJira_Version : public FLbtJira_BaseStruct
{
    FString Expand;                                                                   // 0x0010 (size: 0x10)
    FString ID;                                                                       // 0x0020 (size: 0x10)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    FString Description;                                                              // 0x0040 (size: 0x10)
    bool Archived;                                                                    // 0x0050 (size: 0x1)
    bool Released;                                                                    // 0x0051 (size: 0x1)
    FString StartDay;                                                                 // 0x0058 (size: 0x10)
    FString ReleaseDay;                                                               // 0x0068 (size: 0x10)
    bool Overdue;                                                                     // 0x0078 (size: 0x1)
    int64 ProjectID;                                                                  // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FLbtJira_Workflow
{
    TArray<FLbtJira_Transition> Transitions;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtJira_WorkflowScheme : public FLbtJira_PageBean
{
    bool Draft;                                                                       // 0x0030 (size: 0x1)
    int32 ID;                                                                         // 0x0034 (size: 0x4)
    FString LastModified;                                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLbtJira_WorkflowSchemeAssociations
{
    TArray<FString> ProjectIds;                                                       // 0x0000 (size: 0x10)
    FLbtJira_WorkflowScheme WorkflowScheme;                                           // 0x0010 (size: 0x48)

}; // Size: 0x58

class UJiraBugTrackerSettings : public UBugTrackerProviderSettings
{
    FLbtEnumString Issuetype;                                                         // 0x0028 (size: 0x30)
    bool bAllowAdminFeutures;                                                         // 0x0058 (size: 0x1)
    TArray<FString> MissingClassicProjectFields;                                      // 0x0060 (size: 0x10)

}; // Size: 0x70

class ULbtJira_BaseClass : public ULbtJsonBaseObject
{
    FString Self;                                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode : public UObject
{
    FString Type;                                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class ULbtJira_DocumentNode_Block : public ULbtJira_DocumentNode
{
    TArray<class ULbtJira_DocumentNode*> Content;                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode_Blockquote : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_BulletList : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_CodeBlock : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Date : public ULbtJira_DocumentNode_Inline
{
    FLbtJira_DocumentNode_DateAttrs Attrs;                                            // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode_Emoji : public ULbtJira_DocumentNode_Inline
{
    FLbtJira_DocumentNode_EmojiAttrs Attrs;                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode_Expand : public ULbtJira_DocumentNode_Block
{
    FLbtJira_DocumentNode_ExpandAttrs Attrs;                                          // 0x0048 (size: 0x10)

}; // Size: 0x58

class ULbtJira_DocumentNode_HardBreak : public ULbtJira_DocumentNode_Inline
{
}; // Size: 0x38

class ULbtJira_DocumentNode_Heading : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Inline : public ULbtJira_DocumentNode
{
}; // Size: 0x38

class ULbtJira_DocumentNode_InlineCard : public ULbtJira_DocumentNode_Inline
{
    FLbtJira_DocumentNode_InlineCardAttrs Attrs;                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode_ListItem : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Mention : public ULbtJira_DocumentNode_Inline
{
    FLbtJira_DocumentNode_MentionAttrs Attrs;                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode_OrderedList : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Panel : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Paragraph : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Rule : public ULbtJira_DocumentNode_Block
{
}; // Size: 0x48

class ULbtJira_DocumentNode_Status : public ULbtJira_DocumentNode_Inline
{
    FLbtJira_DocumentNode_StatusAttrs Attrs;                                          // 0x0038 (size: 0x10)

}; // Size: 0x48

class ULbtJira_DocumentNode_Text : public ULbtJira_DocumentNode_Inline
{
    FString Text;                                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
