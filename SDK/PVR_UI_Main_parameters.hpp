#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Main.UI_Main_C.GetVoteInstance
struct UUI_Main_C_GetVoteInstance_Params
{
	class AVote*                                       Vote;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.CloseMenu
struct UUI_Main_C_CloseMenu_Params
{
};

// Function UI_Main.UI_Main_C.ToModeration
struct UUI_Main_C_ToModeration_Params
{
};

// Function UI_Main.UI_Main_C.CreateMapBrowser
struct UUI_Main_C_CreateMapBrowser_Params
{
	class UUI_Workshop_C*                              Broqwser;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.ToMultiplayer
struct UUI_Main_C_ToMultiplayer_Params
{
};

// Function UI_Main.UI_Main_C.GetMapString
struct UUI_Main_C_GetMapString_Params
{
	struct FString                                     Map;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Main.UI_Main_C.GetDifficultyText
struct UUI_Main_C_GetDifficultyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Main.UI_Main_C.GetGameModeText
struct UUI_Main_C_GetGameModeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Main.UI_Main_C.GetOnlineVisibilityInverse
struct UUI_Main_C_GetOnlineVisibilityInverse_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.ToMain
struct UUI_Main_C_ToMain_Params
{
};

// Function UI_Main.UI_Main_C.Get_SizeBox_10_Visibility_1
struct UUI_Main_C_Get_SizeBox_10_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.GetOnlineVisibility
struct UUI_Main_C_GetOnlineVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.Construct
struct UUI_Main_C_Construct_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_47_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_47_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__PlayOnlineButton_K2Node_ComponentBoundEvent_53_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__PlayOnlineButton_K2Node_ComponentBoundEvent_53_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__PlayOfflineButton_K2Node_ComponentBoundEvent_62_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__PlayOfflineButton_K2Node_ComponentBoundEvent_62_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_48_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_48_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_101_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_101_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__UI_Settings_K2Node_ComponentBoundEvent_188_OnExit__DelegateSignature
struct UUI_Main_C_BndEvt__UI_Settings_K2Node_ComponentBoundEvent_188_OnExit__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__UI_Multiplayer_K2Node_ComponentBoundEvent_30_OnExit__DelegateSignature
struct UUI_Main_C_BndEvt__UI_Multiplayer_K2Node_ComponentBoundEvent_30_OnExit__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__SwitchTeam_K2Node_ComponentBoundEvent_44_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__SwitchTeam_K2Node_ComponentBoundEvent_44_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__OfflinePlayGo_K2Node_ComponentBoundEvent_382_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__OfflinePlayGo_K2Node_ComponentBoundEvent_382_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__OfflineBack_K2Node_ComponentBoundEvent_428_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__OfflineBack_K2Node_ComponentBoundEvent_428_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
struct UUI_Main_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.OnCommit_Event_1
struct UUI_Main_C_OnCommit_Event_1_Params
{
	struct FName                                       MapUniqueId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Canceled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.BndEvt__VoteMuteButton_K2Node_ComponentBoundEvent_285_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__VoteMuteButton_K2Node_ComponentBoundEvent_285_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__BackModerationButton_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__BackModerationButton_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_711_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_711_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_726_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_726_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__UI_Muting_K2Node_ComponentBoundEvent_195_OnExit__DelegateSignature
struct UUI_Main_C_BndEvt__UI_Muting_K2Node_ComponentBoundEvent_195_OnExit__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__UI_Kick_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature
struct UUI_Main_C_BndEvt__UI_Kick_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__UI_Kick_K2Node_ComponentBoundEvent_1_OnVoteInstigated__DelegateSignature
struct UUI_Main_C_BndEvt__UI_Kick_K2Node_ComponentBoundEvent_1_OnVoteInstigated__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__ReturnLobbyButton_K2Node_ComponentBoundEvent_54_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__ReturnLobbyButton_K2Node_ComponentBoundEvent_54_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.OnMenuToggled
struct UUI_Main_C_OnMenuToggled_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_785_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_785_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_806_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_806_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__AbstainButton_K2Node_ComponentBoundEvent_828_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__AbstainButton_K2Node_ComponentBoundEvent_828_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.OnVoteEnd
struct UUI_Main_C_OnVoteEnd_Params
{
	class AVote*                                       Vote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Main.UI_Main_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_134_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__Suicide_K2Node_ComponentBoundEvent_134_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.BndEvt__TutorialButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UUI_Main_C_BndEvt__TutorialButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Main.UI_Main_C.ExecuteUbergraph_UI_Main
struct UUI_Main_C_ExecuteUbergraph_UI_Main_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
