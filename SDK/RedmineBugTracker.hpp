#ifndef UE4SS_SDK_RedmineBugTracker_HPP
#define UE4SS_SDK_RedmineBugTracker_HPP

#include "RedmineBugTracker_enums.hpp"

struct FLbtRedmine_AddNote
{
    FLbtRedmine_Journal Issue;                                                        // 0x0000 (size: 0x58)

}; // Size: 0x58

struct FLbtRedmine_AttachFile_Request
{
    FLbtRedmine_Uploads Issue;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtRedmine_Attachment
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Filename;                                                                 // 0x0010 (size: 0x10)
    int32 FileSize;                                                                   // 0x0020 (size: 0x4)
    FString Content_type;                                                             // 0x0028 (size: 0x10)
    FString Description;                                                              // 0x0038 (size: 0x10)
    FString Content_url;                                                              // 0x0048 (size: 0x10)
    FLbtRedmine_ObjectId Author;                                                      // 0x0058 (size: 0x20)
    FString Created_On;                                                               // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FLbtRedmine_CreateIssue_Request
{
    FLbtRedmine_IssueWrite Issue;                                                     // 0x0000 (size: 0x100)

}; // Size: 0x100

struct FLbtRedmine_CustomField
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    bool Multiple;                                                                    // 0x0020 (size: 0x1)
    FLbtJsonValueWrapper Value;                                                       // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FLbtRedmine_CustomFieldDef
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    ELbtRedmine_FieldFormat Format;                                                   // 0x0011 (size: 0x1)
    FString Name;                                                                     // 0x0018 (size: 0x10)
    FString Description;                                                              // 0x0028 (size: 0x10)
    FName Customized_Type;                                                            // 0x0038 (size: 0x8)
    FName Field_Format;                                                               // 0x0040 (size: 0x8)
    FString Regexp;                                                                   // 0x0048 (size: 0x10)
    int32 Min_Length;                                                                 // 0x0058 (size: 0x4)
    int32 Max_Length;                                                                 // 0x005C (size: 0x4)
    bool Is_Required;                                                                 // 0x0060 (size: 0x1)
    bool Multiple;                                                                    // 0x0061 (size: 0x1)
    bool Is_Filter;                                                                   // 0x0062 (size: 0x1)
    bool Searchable;                                                                  // 0x0063 (size: 0x1)
    FString Default_Value;                                                            // 0x0068 (size: 0x10)
    TArray<FLbtRedmine_CustomFieldPosibleValues> Possible_Values;                     // 0x0080 (size: 0x10)
    FLbtMultiValueEnumString UserRole;                                                // 0x0098 (size: 0x30)
    FLbtMultiValueEnumString VersionStatus;                                           // 0x00C8 (size: 0x30)

}; // Size: 0xF8

struct FLbtRedmine_CustomFieldPosibleValues
{
    FString Value;                                                                    // 0x0000 (size: 0x10)
    FString Label;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtRedmine_Error
{
    TArray<FString> Errors;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtRedmine_GetIssue_Response
{
    FLbtRedmine_IssueRead Issue;                                                      // 0x0000 (size: 0x1F0)

}; // Size: 0x1F0

struct FLbtRedmine_GetIssues_Response : public FLbtRedmine_Page
{
    TArray<FLbtRedmine_IssueRead> Issues;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtRedmine_GetMemberships_Response : public FLbtRedmine_Page
{
    TArray<FLbtRedmine_Membership> Memberships;                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtRedmine_IssueBase
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    int32 Done_Ratio;                                                                 // 0x0010 (size: 0x4)
    FString Estimated_Hours;                                                          // 0x0018 (size: 0x10)
    FString Subject;                                                                  // 0x0028 (size: 0x10)
    FString Description;                                                              // 0x0038 (size: 0x10)
    FString Start_Date;                                                               // 0x0048 (size: 0x10)
    FString Due_Date;                                                                 // 0x0058 (size: 0x10)
    bool Is_Private;                                                                  // 0x0068 (size: 0x1)
    TArray<FLbtRedmine_CustomField> Custom_Fields;                                    // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FLbtRedmine_IssueCategory : public FLbtRedmine_ObjectId
{
    FLbtRedmine_ObjectId Project;                                                     // 0x0020 (size: 0x20)
    FLbtRedmine_ObjectId Assigned_To;                                                 // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FLbtRedmine_IssueRead : public FLbtRedmine_IssueBase
{
    FLbtRedmine_ObjectId Project;                                                     // 0x0080 (size: 0x20)
    FLbtRedmine_ObjectId Parent;                                                      // 0x00A0 (size: 0x20)
    FLbtRedmine_ObjectId Tracker;                                                     // 0x00C0 (size: 0x20)
    FLbtRedmine_ObjectId Status;                                                      // 0x00E0 (size: 0x20)
    FLbtRedmine_ObjectId Priority;                                                    // 0x0100 (size: 0x20)
    FLbtRedmine_ObjectId Fixed_Version;                                               // 0x0120 (size: 0x20)
    FLbtRedmine_ObjectId Category;                                                    // 0x0140 (size: 0x20)
    FLbtRedmine_ObjectId Assigned_To;                                                 // 0x0160 (size: 0x20)
    FLbtRedmine_ObjectId Author;                                                      // 0x0180 (size: 0x20)
    FString Created_On;                                                               // 0x01A0 (size: 0x10)
    FString Closed_On;                                                                // 0x01B0 (size: 0x10)
    FString Updated_On;                                                               // 0x01C0 (size: 0x10)
    TArray<FLbtRedmine_Attachment> Attachments;                                       // 0x01D0 (size: 0x10)
    TArray<FLbtRedmine_Journal> Journals;                                             // 0x01E0 (size: 0x10)

}; // Size: 0x1F0

struct FLbtRedmine_IssueWrite : public FLbtRedmine_IssueBase
{
    FString Project_Id;                                                               // 0x0080 (size: 0x10)
    FString Parent_Id;                                                                // 0x0090 (size: 0x10)
    FString Tracker_Id;                                                               // 0x00A0 (size: 0x10)
    FString Status_Id;                                                                // 0x00B0 (size: 0x10)
    FString Priority_Id;                                                              // 0x00C0 (size: 0x10)
    FString Fixed_Version_Id;                                                         // 0x00D0 (size: 0x10)
    FString Category_Id;                                                              // 0x00E0 (size: 0x10)
    FString Assigned_To_Id;                                                           // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FLbtRedmine_Journal
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FLbtRedmine_ObjectId User;                                                        // 0x0010 (size: 0x20)
    FString Notes;                                                                    // 0x0030 (size: 0x10)
    FString Created_On;                                                               // 0x0040 (size: 0x10)
    bool Private_Notes;                                                               // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FLbtRedmine_Membership
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FLbtRedmine_ObjectId Project;                                                     // 0x0010 (size: 0x20)
    FLbtRedmine_ObjectId User;                                                        // 0x0030 (size: 0x20)
    TArray<FLbtRedmine_ObjectId> Roles;                                               // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FLbtRedmine_ObjectId
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtRedmine_Page
{
    int32 Total_Count;                                                                // 0x0000 (size: 0x4)
    int32 Offset;                                                                     // 0x0004 (size: 0x4)
    int32 Limit;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLbtRedmine_Priority : public FLbtRedmine_ObjectId
{
    bool Is_Default;                                                                  // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FLbtRedmine_Project : public FLbtRedmine_ObjectId
{
    FString Identifier;                                                               // 0x0020 (size: 0x10)
    FString Description;                                                              // 0x0030 (size: 0x10)
    FLbtRedmine_ObjectId Parent;                                                      // 0x0040 (size: 0x20)
    FString Status;                                                                   // 0x0060 (size: 0x10)
    bool IsPublic;                                                                    // 0x0070 (size: 0x1)
    FString CreatedOn;                                                                // 0x0078 (size: 0x10)
    FString UpdatedOn;                                                                // 0x0088 (size: 0x10)
    TArray<FLbtRedmine_ObjectId> Issue_Custom_Fields;                                 // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FLbtRedmine_Role : public FLbtRedmine_ObjectId
{
    bool Assignable;                                                                  // 0x0020 (size: 0x1)
    FString Issues_Visibility;                                                        // 0x0028 (size: 0x10)
    FString Time_Entries_Visibility;                                                  // 0x0038 (size: 0x10)
    FString Users_Visibility;                                                         // 0x0048 (size: 0x10)
    TArray<FName> Permissions;                                                        // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FLbtRedmine_Status : public FLbtRedmine_ObjectId
{
    bool Is_Closed;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FLbtRedmine_Tracker : public FLbtRedmine_ObjectId
{
    FString Description;                                                              // 0x0020 (size: 0x10)
    FLbtRedmine_ObjectId Default_Status;                                              // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FLbtRedmine_UpdateIssue_Request
{
    FLbtRedmine_IssueWrite Issue;                                                     // 0x0000 (size: 0x100)

}; // Size: 0x100

struct FLbtRedmine_UploadFile_Response
{
    FLbtRedmine_UploadResult Upload;                                                  // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FLbtRedmine_UploadResult
{
    FString Token;                                                                    // 0x0000 (size: 0x10)
    FString Filename;                                                                 // 0x0010 (size: 0x10)
    FString Content_type;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtRedmine_Uploads
{
    TArray<FLbtRedmine_UploadResult> Uploads;                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtRedmine_User
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Login;                                                                    // 0x0010 (size: 0x10)
    bool Admin;                                                                       // 0x0020 (size: 0x1)
    FString Firstname;                                                                // 0x0028 (size: 0x10)
    FString LastName;                                                                 // 0x0038 (size: 0x10)
    FString Mail;                                                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLbtRedmine_UserMy : public FLbtRedmine_User
{
}; // Size: 0x58

struct FLbtRedmine_Version : public FLbtRedmine_ObjectId
{
    FLbtRedmine_ObjectId Project;                                                     // 0x0020 (size: 0x20)
    FString Description;                                                              // 0x0040 (size: 0x10)
    FName Status;                                                                     // 0x0050 (size: 0x8)
    FString Due_Date;                                                                 // 0x0058 (size: 0x10)

}; // Size: 0x68

class URedmineBugTrackerSettings : public UBugTrackerProviderSettings
{
    FLbtEnumString Tracker;                                                           // 0x0028 (size: 0x30)
    TArray<FLbtRedmine_CustomFieldDef> CustomFields;                                  // 0x0058 (size: 0x10)

}; // Size: 0x68

#endif
