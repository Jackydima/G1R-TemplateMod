#ifndef UE4SS_SDK_TrelloBugTracker_HPP
#define UE4SS_SDK_TrelloBugTracker_HPP

struct FLbtTrello_Action : public FLbtTrello_BaseStruct
{
    FString IdMemberCreator;                                                          // 0x0010 (size: 0x10)
    FString Type;                                                                     // 0x0020 (size: 0x10)
    FString Date;                                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtTrello_AllValues_Read
{
    FString Text;                                                                     // 0x0000 (size: 0x10)
    bool Checked;                                                                     // 0x0010 (size: 0x1)
    FString Date;                                                                     // 0x0018 (size: 0x10)
    float Number;                                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FLbtTrello_ArchiveCard
{
    bool Closed;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FLbtTrello_Attachment : public FLbtTrello_BaseStruct
{
    int32 Bytes;                                                                      // 0x0010 (size: 0x4)
    FString Date;                                                                     // 0x0018 (size: 0x10)
    FString IdMember;                                                                 // 0x0028 (size: 0x10)
    bool IsUpload;                                                                    // 0x0038 (size: 0x1)
    FString MimeType;                                                                 // 0x0040 (size: 0x10)
    FString Name;                                                                     // 0x0050 (size: 0x10)
    FString URL;                                                                      // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FLbtTrello_BaseStruct
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_BaseStructTransientId
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_Board : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Desc;                                                                     // 0x0020 (size: 0x10)
    bool Closed;                                                                      // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FLbtTrello_BoardCustomField : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString ModelType;                                                                // 0x0020 (size: 0x10)
    FString Type;                                                                     // 0x0030 (size: 0x10)
    TArray<FLbtTrello_ListOption> Options;                                            // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FLbtTrello_Card : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Desc;                                                                     // 0x0020 (size: 0x10)
    int32 IdShort;                                                                    // 0x0030 (size: 0x4)
    FString URL;                                                                      // 0x0038 (size: 0x10)
    bool Closed;                                                                      // 0x0048 (size: 0x1)
    FString DateLastActivity;                                                         // 0x0050 (size: 0x10)
    FString Start;                                                                    // 0x0060 (size: 0x10)
    FString Due;                                                                      // 0x0070 (size: 0x10)
    bool DueComplete;                                                                 // 0x0080 (size: 0x1)
    FString IdBoard;                                                                  // 0x0088 (size: 0x10)
    FString IdList;                                                                   // 0x0098 (size: 0x10)
    TArray<FString> IdMembers;                                                        // 0x00A8 (size: 0x10)
    TArray<FString> IdLabels;                                                         // 0x00B8 (size: 0x10)
    TArray<FLbtTrello_Checklist> Checklists;                                          // 0x00C8 (size: 0x10)
    float Pos;                                                                        // 0x00D8 (size: 0x4)
    int32 TotalCards;                                                                 // 0x00DC (size: 0x4)
    TArray<FLbtTrello_Attachment> Attachments;                                        // 0x00E0 (size: 0x10)
    TArray<FLbtTrello_CommentAction> Actions;                                         // 0x00F0 (size: 0x10)
    TArray<FLbtTrello_CardCustomField_Read> CustomFieldItems;                         // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FLbtTrello_CardCustomField
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString ModelType;                                                                // 0x0010 (size: 0x10)
    FString IdCustomField;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_CardCustomField_Checkbox
{
    FLbtTrello_ValueCheckbox Value;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_CardCustomField_Date
{
    FLbtTrello_ValueDate Value;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_CardCustomField_Empty
{
    FString IDValue;                                                                  // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtTrello_CardCustomField_List
{
    FString IDValue;                                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_CardCustomField_Number
{
    FLbtTrello_ValueNumber Value;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_CardCustomField_Read : public FLbtTrello_CardCustomField
{
    FString IDValue;                                                                  // 0x0030 (size: 0x10)
    FLbtTrello_AllValues_Read Value;                                                  // 0x0040 (size: 0x30)

}; // Size: 0x88

struct FLbtTrello_CardCustomField_Text
{
    FLbtTrello_ValueText Value;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_Checklist : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    TArray<FLbtTrello_ChecklistItem> CheckItems;                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_ChecklistItem : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString State;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_Comment
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_CommentAction : public FLbtTrello_Action
{
    FLbtTrello_CommentActionData Data;                                                // 0x0040 (size: 0x50)

}; // Size: 0x90

struct FLbtTrello_CommentActionData : public FLbtTrello_Action
{
    FString Text;                                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FLbtTrello_CreateBoard
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Desc;                                                                     // 0x0010 (size: 0x10)
    bool DefaultLists;                                                                // 0x0020 (size: 0x1)
    bool DefaultLabels;                                                               // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FLbtTrello_CreateChecklist : public FLbtTrello_BaseStructTransientId
{
    FString IdCard;                                                                   // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    FString Pos;                                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtTrello_CreateChecklistItem : public FLbtTrello_BaseStructTransientId
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    bool Checked;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FLbtTrello_CreateLabel
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString IdBoard;                                                                  // 0x0010 (size: 0x10)
    FString Color;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_CreateList
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString IdBoard;                                                                  // 0x0010 (size: 0x10)
    FString Pos;                                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_EditChecklist : public FLbtTrello_BaseStructTransientId
{
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtTrello_Error
{
    FString Error;                                                                    // 0x0000 (size: 0x10)
    FString Message;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtTrello_Label : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Color;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_List : public FLbtTrello_BaseStruct
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    bool Closed;                                                                      // 0x0020 (size: 0x1)
    int32 Pos;                                                                        // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FLbtTrello_ListOption : public FLbtTrello_BaseStruct
{
    FLbtTrello_ValueText Value;                                                       // 0x0010 (size: 0x10)
    FString Color;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtTrello_Member : public FLbtTrello_BaseStruct
{
    FString UserName;                                                                 // 0x0010 (size: 0x10)
    FString FullName;                                                                 // 0x0020 (size: 0x10)
    FString Email;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtTrello_SetChecklistItemName : public FLbtTrello_BaseStructTransientId
{
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtTrello_SetChecklistItemState : public FLbtTrello_BaseStructTransientId
{
    FString State;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtTrello_UploadAttachment
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString File;                                                                     // 0x0010 (size: 0x10)
    FString MimeType;                                                                 // 0x0020 (size: 0x10)
    FString URL;                                                                      // 0x0030 (size: 0x10)
    bool SetCover;                                                                    // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FLbtTrello_ValueCheckbox
{
    FString Checked;                                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_ValueDate
{
    FString Date;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_ValueNumber
{
    FString Number;                                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtTrello_ValueText
{
    FString Text;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

class UTrelloBugTrackerSettings : public UBugTrackerProviderSettings
{
    bool bSetAttachedImageAsCover;                                                    // 0x0028 (size: 0x1)
    bool bArchiveIssuesInsteadDelete;                                                 // 0x0029 (size: 0x1)

}; // Size: 0x30

#endif
