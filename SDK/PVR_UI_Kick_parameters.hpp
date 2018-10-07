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

// Function UI_Kick.UI_Kick_C.Update
struct UUI_Kick_C_Update_Params
{
};

// Function UI_Kick.UI_Kick_C.UpdatePlayers
struct UUI_Kick_C_UpdatePlayers_Params
{
	TArray<class UUI_Moderation_Player_C*>             Players;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APavlovPlayerState*>                  PlayerArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Kick.UI_Kick_C.CreatePlayerWidgets
struct UUI_Kick_C_CreatePlayerWidgets_Params
{
	TArray<class UUI_Moderation_Player_C*>             TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVerticalBox*                                List;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Kick.UI_Kick_C.Construct
struct UUI_Kick_C_Construct_Params
{
};

// Function UI_Kick.UI_Kick_C.OnPlayerWidgetSelectionChanged
struct UUI_Kick_C_OnPlayerWidgetSelectionChanged_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function UI_Kick.UI_Kick_C.UpdateList
struct UUI_Kick_C_UpdateList_Params
{
};

// Function UI_Kick.UI_Kick_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_30_OnButtonClicked__DelegateSignature
struct UUI_Kick_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_30_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Kick.UI_Kick_C.BndEvt__VoteButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature
struct UUI_Kick_C_BndEvt__VoteButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Kick.UI_Kick_C.ExecuteUbergraph_UI_Kick
struct UUI_Kick_C_ExecuteUbergraph_UI_Kick_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Kick.UI_Kick_C.OnVoteInstigated__DelegateSignature
struct UUI_Kick_C_OnVoteInstigated__DelegateSignature_Params
{
};

// Function UI_Kick.UI_Kick_C.OnExit__DelegateSignature
struct UUI_Kick_C_OnExit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
