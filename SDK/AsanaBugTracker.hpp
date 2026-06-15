#ifndef UE4SS_SDK_AsanaBugTracker_HPP
#define UE4SS_SDK_AsanaBugTracker_HPP

struct FLbtAsana_AddIssueToSection
{
    FString Issue;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_AddRemoveTag
{
    FString Tag;                                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_Attachment
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FLbtAsana_User Created_By;                                                        // 0x0020 (size: 0x30)
    FDateTime Created_At;                                                             // 0x0050 (size: 0x8)
    FString Download_Url;                                                             // 0x0058 (size: 0x10)
    FString Host;                                                                     // 0x0068 (size: 0x10)
    int32 Size;                                                                       // 0x0078 (size: 0x4)
    FString View_Url;                                                                 // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FLbtAsana_BaseStruct
{
}; // Size: 0x1

struct FLbtAsana_Comment
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_ContentData
{
    FLbtJsonValueWrapper Data;                                                        // 0x0000 (size: 0x18)
    FLbtAsana_NextPage Next_Page;                                                     // 0x0018 (size: 0x30)

}; // Size: 0x48

struct FLbtAsana_CreateProject
{
    FString Default_view;                                                             // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Notes;                                                                    // 0x0020 (size: 0x10)
    FString Workspace;                                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtAsana_CreateSection
{
    FString Name;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_CustomField
{
    FName Gid;                                                                        // 0x0000 (size: 0x8)
    FString Currency_Code;                                                            // 0x0008 (size: 0x10)
    FLbtAsana_DateField Date_Value;                                                   // 0x0018 (size: 0x20)
    FString Description;                                                              // 0x0038 (size: 0x10)
    bool Enabled;                                                                     // 0x0048 (size: 0x1)
    TArray<FLbtAsana_EnumField> Enum_Options;                                         // 0x0050 (size: 0x10)
    FLbtAsana_EnumField Enum_Value;                                                   // 0x0060 (size: 0x38)
    FName Format;                                                                     // 0x0098 (size: 0x8)
    bool Has_Notifications_Enabled;                                                   // 0x00A0 (size: 0x1)
    bool Is_Formula_Field;                                                            // 0x00A1 (size: 0x1)
    bool Is_Global_To_Workspace;                                                      // 0x00A2 (size: 0x1)
    bool Is_Value_Read_Only;                                                          // 0x00A3 (size: 0x1)
    TArray<FLbtAsana_EnumField> Multi_Enum_Values;                                    // 0x00A8 (size: 0x10)
    FString Name;                                                                     // 0x00B8 (size: 0x10)
    FString Number_Value;                                                             // 0x00C8 (size: 0x10)
    TArray<FLbtAsana_User> People_Value;                                              // 0x00D8 (size: 0x10)
    int32 Precision;                                                                  // 0x00E8 (size: 0x4)
    FName Resource_Subtype;                                                           // 0x00EC (size: 0x8)
    FString Text_Value;                                                               // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FLbtAsana_CustomFieldSetting
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Resource_Type;                                                            // 0x0010 (size: 0x10)
    FLbtAsana_CustomField Custom_Field;                                               // 0x0020 (size: 0x108)

}; // Size: 0x128

struct FLbtAsana_DateField
{
    FString Date;                                                                     // 0x0000 (size: 0x10)
    FString Date_time;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtAsana_EnumField
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Color;                                                                    // 0x0020 (size: 0x10)
    bool Enabled;                                                                     // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FLbtAsana_Error
{
    TArray<FLbtAsana_ErrorItem> Errors;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_ErrorItem
{
    FString Message;                                                                  // 0x0000 (size: 0x10)
    FString Phrase;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtAsana_Issue
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    bool Completed;                                                                   // 0x0010 (size: 0x1)
    FDateTime Created_At;                                                             // 0x0018 (size: 0x8)
    FString Html_notes;                                                               // 0x0020 (size: 0x10)
    FDateTime Modified_At;                                                            // 0x0030 (size: 0x8)
    FString Name;                                                                     // 0x0038 (size: 0x10)
    FString Notes;                                                                    // 0x0048 (size: 0x10)
    int32 Num_Subtasks;                                                               // 0x0058 (size: 0x4)
    FString Resource_Subtype;                                                         // 0x0060 (size: 0x10)
    class ULbtAsana_UserObj* Assignee;                                                // 0x0070 (size: 0x8)
    FString Permalink_Url;                                                            // 0x0078 (size: 0x10)
    TArray<FLbtAsana_Attachment> Attachments;                                         // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FLbtAsana_IssueCreate : public FLbtAsana_IssueUpdate
{
    TArray<FString> Projects;                                                         // 0x0110 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x0120 (size: 0x10)
    TArray<FLbtAsana_MembershipCreate> Memberships;                                   // 0x0130 (size: 0x10)

}; // Size: 0x140

struct FLbtAsana_IssueGet : public FLbtAsana_Issue
{
    FString Due_at;                                                                   // 0x0098 (size: 0x10)
    FString Due_on;                                                                   // 0x00A8 (size: 0x10)
    FString Start_at;                                                                 // 0x00B8 (size: 0x10)
    FString Start_on;                                                                 // 0x00C8 (size: 0x10)
    TArray<FLbtAsana_Tag> Tags;                                                       // 0x00D8 (size: 0x10)
    TArray<FLbtAsana_Membership> Memberships;                                         // 0x00E8 (size: 0x10)
    TArray<FLbtAsana_CustomField> Custom_Fields;                                      // 0x00F8 (size: 0x10)
    TArray<FLbtAsana_Subtask> Subtasks;                                               // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FLbtAsana_IssueUpdate : public FLbtAsana_Issue
{
    FLbtJsonValueWrapper Due_at;                                                      // 0x0098 (size: 0x18)
    FLbtJsonValueWrapper Due_on;                                                      // 0x00B0 (size: 0x18)
    FLbtJsonValueWrapper Start_at;                                                    // 0x00C8 (size: 0x18)
    FLbtJsonValueWrapper Start_on;                                                    // 0x00E0 (size: 0x18)
    FLbtJsonValueWrapper Custom_Fields;                                               // 0x00F8 (size: 0x18)

}; // Size: 0x110

struct FLbtAsana_Membership
{
    FLbtAsana_Section Section;                                                        // 0x0000 (size: 0x20)
    FLbtAsana_Project Project;                                                        // 0x0020 (size: 0x78)

}; // Size: 0x98

struct FLbtAsana_MembershipCreate
{
    FString Section;                                                                  // 0x0000 (size: 0x10)
    FString Project;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtAsana_NextPage
{
    FString Offset;                                                                   // 0x0000 (size: 0x10)
    FString Path;                                                                     // 0x0010 (size: 0x10)
    FString Uri;                                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtAsana_Project
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    bool Archived;                                                                    // 0x0010 (size: 0x1)
    TArray<FLbtAsana_User> Members;                                                   // 0x0018 (size: 0x10)
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FString Notes;                                                                    // 0x0038 (size: 0x10)
    FLbtAsana_Workspace Workspace;                                                    // 0x0048 (size: 0x30)

}; // Size: 0x78

struct FLbtAsana_Section
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtAsana_SetCompletedSubtask
{
    bool Completed;                                                                   // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FLbtAsana_SetDateField
{
    FString Date;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_SetDateTimeField
{
    FString Date_time;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_SetNameSubtask
{
    FString Name;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtAsana_Story
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FDateTime Created_At;                                                             // 0x0010 (size: 0x8)
    FString Html_Text;                                                                // 0x0018 (size: 0x10)
    FName Resource_Subtype;                                                           // 0x0028 (size: 0x8)
    FString Text;                                                                     // 0x0030 (size: 0x10)
    FLbtAsana_User Created_By;                                                        // 0x0040 (size: 0x30)
    FString Type;                                                                     // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FLbtAsana_Subtask
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    bool Completed;                                                                   // 0x0010 (size: 0x1)
    FString Name;                                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtAsana_Tag
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Color;                                                                    // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtAsana_User
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Email;                                                                    // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtAsana_Workspace
{
    FString Gid;                                                                      // 0x0000 (size: 0x10)
    FString Resource_Type;                                                            // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

class UAsanaBugTrackerSettings : public UBugTrackerProviderSettings
{
}; // Size: 0x28

class ULbtAsana_UserObj : public UObject
{
    FString Gid;                                                                      // 0x0028 (size: 0x10)
    FString Email;                                                                    // 0x0038 (size: 0x10)
    FString Name;                                                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

#endif
