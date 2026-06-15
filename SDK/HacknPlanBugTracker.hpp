#ifndef UE4SS_SDK_HacknPlanBugTracker_HPP
#define UE4SS_SDK_HacknPlanBugTracker_HPP

struct FLbtHacknPlan_BaseStruct
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtHacknPlan_BaseStructTransientId
{
    FString ID;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtHacknPlan_Board
{
    int32 BoardId;                                                                    // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Color;                                                                    // 0x0018 (size: 0x10)
    bool IsDedault;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FLbtHacknPlan_Error
{
    FString Error;                                                                    // 0x0000 (size: 0x10)
    FString Message;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtHacknPlan_GetAttachmentsResult : public FLbtHacknPlan_PageResult
{
    TArray<FLbtHacknPlan_WorkItemAttachment> Items;                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtHacknPlan_GetCommentsResult : public FLbtHacknPlan_PageResult
{
    TArray<FLbtHacknPlan_WorkItemCommmnt> Items;                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtHacknPlan_GetWorkItemsResult : public FLbtHacknPlan_PageResult
{
    TArray<FLbtHacknPlan_WorkItem> Items;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLbtHacknPlan_PageResult
{
    int32 TotalCount;                                                                 // 0x0000 (size: 0x4)
    int32 Offset;                                                                     // 0x0004 (size: 0x4)
    int32 Limit;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLbtHacknPlan_Project : public FLbtHacknPlan_BaseStructTransientId
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)
    FString ClosingDate;                                                              // 0x0030 (size: 0x10)
    FLbtHacknPlan_ProjectModuleConfig ModuleConfig;                                   // 0x0040 (size: 0x1B)
    FString CostMetric;                                                               // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FLbtHacknPlan_ProjectCategory
{
    int32 CategoryId;                                                                 // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Color;                                                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLbtHacknPlan_ProjectFile
{
    int32 ProjectID;                                                                  // 0x0000 (size: 0x4)
    int32 FileId;                                                                     // 0x0004 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString URL;                                                                      // 0x0018 (size: 0x10)
    int32 Size;                                                                       // 0x0028 (size: 0x4)
    bool IsImage;                                                                     // 0x002C (size: 0x1)

}; // Size: 0x30

struct FLbtHacknPlan_ProjectImportanceLevel
{
    int32 ImportanceLevelId;                                                          // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Color;                                                                    // 0x0018 (size: 0x10)
    bool IsDefault;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FLbtHacknPlan_ProjectModuleConfig
{
    bool WorkItems;                                                                   // 0x0000 (size: 0x1)
    bool WorkItemCategories;                                                          // 0x0001 (size: 0x1)
    bool WorkItemDates;                                                               // 0x0002 (size: 0x1)
    bool WorkItemCosts;                                                               // 0x0003 (size: 0x1)
    bool WorkItemSubIssues;                                                           // 0x0004 (size: 0x1)
    bool WorkItemDependencies;                                                        // 0x0005 (size: 0x1)
    bool WorkItemAttachments;                                                         // 0x0006 (size: 0x1)
    bool WorkItemComments;                                                            // 0x0007 (size: 0x1)
    bool WorkItemTags;                                                                // 0x0008 (size: 0x1)
    bool GameDesignModel;                                                             // 0x0009 (size: 0x1)
    bool GameDesignModelTypes;                                                        // 0x000A (size: 0x1)
    bool GameDesignModelDates;                                                        // 0x000B (size: 0x1)
    bool GameDesignModelAttachments;                                                  // 0x000C (size: 0x1)
    bool GameDesignModelComments;                                                     // 0x000D (size: 0x1)
    bool Calendar;                                                                    // 0x000E (size: 0x1)
    bool BurndownChart;                                                               // 0x000F (size: 0x1)
    bool GanttChart;                                                                  // 0x0010 (size: 0x1)
    bool Metrics;                                                                     // 0x0011 (size: 0x1)
    bool Activity;                                                                    // 0x0012 (size: 0x1)
    bool Notifications;                                                               // 0x0013 (size: 0x1)
    bool ForceWorkItemDesignElement;                                                  // 0x0014 (size: 0x1)
    bool ForceWorkItemBoard;                                                          // 0x0015 (size: 0x1)
    bool ForceWorkItemEstimatedCost;                                                  // 0x0016 (size: 0x1)
    bool ForceWorkItemDueDate;                                                        // 0x0017 (size: 0x1)
    bool ForceWorkItemDescription;                                                    // 0x0018 (size: 0x1)
    bool ForceWorkItemUser;                                                           // 0x0019 (size: 0x1)
    bool ForceWorkItemTag;                                                            // 0x001A (size: 0x1)

}; // Size: 0x1B

struct FLbtHacknPlan_ProjectStage
{
    int32 StageId;                                                                    // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Color;                                                                    // 0x0018 (size: 0x10)
    FString Status;                                                                   // 0x0028 (size: 0x10)
    bool IsUnblocker;                                                                 // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FLbtHacknPlan_ProjectTag
{
    int32 TagId;                                                                      // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    bool DisplayIconOnly;                                                             // 0x0018 (size: 0x1)
    FString Color;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLbtHacknPlan_ProjectTemplateOptions
{
    int32 TemplateProjectId;                                                          // 0x0000 (size: 0x4)
    bool CopyUsers;                                                                   // 0x0004 (size: 0x1)
    bool CopyGameDesignModel;                                                         // 0x0005 (size: 0x1)
    bool CopyBoards;                                                                  // 0x0006 (size: 0x1)
    bool CopyWorkItems;                                                               // 0x0007 (size: 0x1)

}; // Size: 0x8

struct FLbtHacknPlan_ProjectUser
{
    FLbtHacknPlan_User User;                                                          // 0x0000 (size: 0x40)
    bool IsAdmin;                                                                     // 0x0040 (size: 0x1)
    bool IsGuest;                                                                     // 0x0041 (size: 0x1)
    bool IsActive;                                                                    // 0x0042 (size: 0x1)
    FString Color;                                                                    // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLbtHacknPlan_SubtaskUpdateCompleted
{
    bool IsCompleted;                                                                 // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FLbtHacknPlan_SubtaskUpdateTitle
{
    FString title;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLbtHacknPlan_User : public FLbtHacknPlan_BaseStruct
{
    FString UserName;                                                                 // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    FString Email;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLbtHacknPlan_WorkItem
{
    int32 ProjectID;                                                                  // 0x0000 (size: 0x4)
    int32 WorkItemId;                                                                 // 0x0004 (size: 0x4)
    int32 ParentStoryId;                                                              // 0x0008 (size: 0x4)
    bool IsStory;                                                                     // 0x000C (size: 0x1)
    FString title;                                                                    // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)
    FLbtHacknPlan_ProjectCategory Category;                                           // 0x0030 (size: 0x28)
    int32 CategoryId;                                                                 // 0x0058 (size: 0x4)
    FLbtHacknPlan_ProjectStage Stage;                                                 // 0x0060 (size: 0x40)
    int32 StageId;                                                                    // 0x00A0 (size: 0x4)
    float EstimatedCost;                                                              // 0x00A4 (size: 0x4)
    float LoggedCost;                                                                 // 0x00A8 (size: 0x4)
    float StoryIssuesEstimatedCost;                                                   // 0x00AC (size: 0x4)
    float StoryIssuesLoggedCost;                                                      // 0x00B0 (size: 0x4)
    int32 BoardIndex;                                                                 // 0x00B4 (size: 0x4)
    int32 DesignElementIndex;                                                         // 0x00B8 (size: 0x4)
    FString StartDate;                                                                // 0x00C0 (size: 0x10)
    FString DueDate;                                                                  // 0x00D0 (size: 0x10)
    FString UpdateDate;                                                               // 0x00E0 (size: 0x10)
    FString ClosingDate;                                                              // 0x00F0 (size: 0x10)
    FString CreationDate;                                                             // 0x0100 (size: 0x10)
    FLbtHacknPlan_User User;                                                          // 0x0110 (size: 0x40)
    FLbtHacknPlan_Board Board;                                                        // 0x0150 (size: 0x30)
    class UObject* BoardId;                                                           // 0x0180 (size: 0x8)
    TArray<FLbtHacknPlan_ProjectUser> AssignedUsers;                                  // 0x0188 (size: 0x10)
    TArray<FLbtHacknPlan_ProjectTag> Tags;                                            // 0x0198 (size: 0x10)
    FLbtHacknPlan_ProjectImportanceLevel ImportanceLevel;                             // 0x01A8 (size: 0x30)
    int32 ImportanceLevelId;                                                          // 0x01D8 (size: 0x4)

}; // Size: 0x1E0

struct FLbtHacknPlan_WorkItemAttachment
{
    int32 AttachmentId;                                                               // 0x0000 (size: 0x4)
    FLbtHacknPlan_ProjectFile File;                                                   // 0x0008 (size: 0x30)
    FLbtHacknPlan_User User;                                                          // 0x0038 (size: 0x40)
    FString CreationDate;                                                             // 0x0078 (size: 0x10)
    bool IsCardPicture;                                                               // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FLbtHacknPlan_WorkItemCommmnt
{
    int32 CommentId;                                                                  // 0x0000 (size: 0x4)
    FString Text;                                                                     // 0x0008 (size: 0x10)
    FLbtHacknPlan_User User;                                                          // 0x0018 (size: 0x40)
    FString CreationDate;                                                             // 0x0058 (size: 0x10)
    FString UpdateDate;                                                               // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FLbtHacknPlan_WorkItemSubtask
{
    int32 SubTaskId;                                                                  // 0x0000 (size: 0x4)
    FString title;                                                                    // 0x0008 (size: 0x10)
    bool IsCompleted;                                                                 // 0x0018 (size: 0x1)
    int32 Index;                                                                      // 0x001C (size: 0x4)
    FString CreationDate;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

class UHacknPlanBugTrackerSettings : public UBugTrackerProviderSettings
{
    bool bSetAttachedImageAsCover;                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

#endif
