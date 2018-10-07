#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Workshop.UI_Workshop_C.Get_PageLabel_Text_1
struct UUI_Workshop_C_Get_PageLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Workshop.UI_Workshop_C.GetPageRange
struct UUI_Workshop_C_GetPageRange_Params
{
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirxtIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LastIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.SetVote
struct UUI_Workshop_C_SetVote_Params
{
	EWorkshopVoteType                                  VoteType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.SetMapList
struct UUI_Workshop_C_SetMapList_Params
{
	struct FString                                     ItemToFind;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Workshop.UI_Workshop_C.SetProgressToMap
struct UUI_Workshop_C_SetProgressToMap_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.GetMapInList
struct UUI_Workshop_C_GetMapInList_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_WorkshopMap_C*                           Map;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.ClearMaps
struct UUI_Workshop_C_ClearMaps_Params
{
};

// Function UI_Workshop.UI_Workshop_C.UpdateProperties
struct UUI_Workshop_C_UpdateProperties_Params
{
};

// Function UI_Workshop.UI_Workshop_C.UpdateWorkshopMapList
struct UUI_Workshop_C_UpdateWorkshopMapList_Params
{
};

// Function UI_Workshop.UI_Workshop_C.Select
struct UUI_Workshop_C_Select_Params
{
	struct FName                                       MapId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.UpdateInstalledMapList
struct UUI_Workshop_C_UpdateInstalledMapList_Params
{
};

// Function UI_Workshop.UI_Workshop_C.Construct
struct UUI_Workshop_C_Construct_Params
{
};

// Function UI_Workshop.UI_Workshop_C.OnMapClicked
struct UUI_Workshop_C_OnMapClicked_Params
{
	class UUI_WorkshopMap_C*                           Map;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__SelectBtn_K2Node_ComponentBoundEvent_19_OnButtonClicked__DelegateSignature
struct UUI_Workshop_C_BndEvt__SelectBtn_K2Node_ComponentBoundEvent_19_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_21_OnButtonClicked__DelegateSignature
struct UUI_Workshop_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_21_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.OnSubscriptionChanged
struct UUI_Workshop_C_OnSubscriptionChanged_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSubscribed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__UI_WorkshopCombo_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature
struct UUI_Workshop_C_BndEvt__UI_WorkshopCombo_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

// Function UI_Workshop.UI_Workshop_C.OnCustomMapQueryCompleted_Event_1
struct UUI_Workshop_C_OnCustomMapQueryCompleted_Event_1_Params
{
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__UnSubButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
struct UUI_Workshop_C_BndEvt__UnSubButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature
struct UUI_Workshop_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.OnDownloadBegin_Event_1
struct UUI_Workshop_C_OnDownloadBegin_Event_1_Params
{
};

// Function UI_Workshop.UI_Workshop_C.OnDownloadProgress_Event_1
struct UUI_Workshop_C_OnDownloadProgress_Event_1_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.OnCustomMapDownloadCompleted_Event_1
struct UUI_Workshop_C_OnCustomMapDownloadCompleted_Event_1_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function UI_Workshop.UI_Workshop_C.OnPreviewLoaded_Event_1
struct UUI_Workshop_C_OnPreviewLoaded_Event_1_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__VoteUpBtn_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
struct UUI_Workshop_C_BndEvt__VoteUpBtn_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__VoteDownBtn_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature
struct UUI_Workshop_C_BndEvt__VoteDownBtn_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.OnRequestUserVote_Event_1
struct UUI_Workshop_C_OnRequestUserVote_Event_1_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWorkshopVoteType                                  VoteType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__PageNext_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature
struct UUI_Workshop_C_BndEvt__PageNext_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.BndEvt__PagePrev_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature
struct UUI_Workshop_C_BndEvt__PagePrev_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Workshop.UI_Workshop_C.OnGetMapListAdvancedResult_Event_2
struct UUI_Workshop_C_OnGetMapListAdvancedResult_Event_2_Params
{
};

// Function UI_Workshop.UI_Workshop_C.ExecuteUbergraph_UI_Workshop
struct UUI_Workshop_C_ExecuteUbergraph_UI_Workshop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Workshop.UI_Workshop_C.OnCommit__DelegateSignature
struct UUI_Workshop_C_OnCommit__DelegateSignature_Params
{
	struct FName                                       MapUniqueId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Canceled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
