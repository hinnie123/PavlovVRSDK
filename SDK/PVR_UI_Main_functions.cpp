// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Main.UI_Main_C.GetVoteInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AVote*                   Vote                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Main_C::GetVoteInstance(class AVote** Vote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.GetVoteInstance");

	UUI_Main_C_GetVoteInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vote != nullptr)
		*Vote = params.Vote;
}


// Function UI_Main.UI_Main_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Main_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.CloseMenu");

	UUI_Main_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.ToModeration
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Main_C::ToModeration()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.ToModeration");

	UUI_Main_C_ToModeration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.CreateMapBrowser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Workshop_C*          Broqwser                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Main_C::CreateMapBrowser(class UUI_Workshop_C** Broqwser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.CreateMapBrowser");

	UUI_Main_C_CreateMapBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Broqwser != nullptr)
		*Broqwser = params.Broqwser;
}


// Function UI_Main.UI_Main_C.ToMultiplayer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Main_C::ToMultiplayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.ToMultiplayer");

	UUI_Main_C_ToMultiplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.GetMapString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Map                            (Parm, OutParm, ZeroConstructor)

void UUI_Main_C::GetMapString(struct FString* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.GetMapString");

	UUI_Main_C_GetMapString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function UI_Main.UI_Main_C.GetDifficultyText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Main_C::GetDifficultyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.GetDifficultyText");

	UUI_Main_C_GetDifficultyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Main.UI_Main_C.GetGameModeText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Main_C::GetGameModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.GetGameModeText");

	UUI_Main_C_GetGameModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Main.UI_Main_C.GetOnlineVisibilityInverse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Main_C::GetOnlineVisibilityInverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.GetOnlineVisibilityInverse");

	UUI_Main_C_GetOnlineVisibilityInverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Main.UI_Main_C.ToMain
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Main_C::ToMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.ToMain");

	UUI_Main_C_ToMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.Get_SizeBox_10_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Main_C::Get_SizeBox_10_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.Get_SizeBox_10_Visibility_1");

	UUI_Main_C_Get_SizeBox_10_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Main.UI_Main_C.GetOnlineVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Main_C::GetOnlineVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.GetOnlineVisibility");

	UUI_Main_C_GetOnlineVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Main.UI_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.Construct");

	UUI_Main_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_47_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_47_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_47_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_47_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__PlayOnlineButton_K2Node_ComponentBoundEvent_53_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__PlayOnlineButton_K2Node_ComponentBoundEvent_53_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__PlayOnlineButton_K2Node_ComponentBoundEvent_53_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__PlayOnlineButton_K2Node_ComponentBoundEvent_53_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__PlayOfflineButton_K2Node_ComponentBoundEvent_62_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__PlayOfflineButton_K2Node_ComponentBoundEvent_62_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__PlayOfflineButton_K2Node_ComponentBoundEvent_62_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__PlayOfflineButton_K2Node_ComponentBoundEvent_62_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_48_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_48_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_48_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_48_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_101_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_101_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_101_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_101_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__UI_Settings_K2Node_ComponentBoundEvent_188_OnExit__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__UI_Settings_K2Node_ComponentBoundEvent_188_OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__UI_Settings_K2Node_ComponentBoundEvent_188_OnExit__DelegateSignature");

	UUI_Main_C_BndEvt__UI_Settings_K2Node_ComponentBoundEvent_188_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__UI_Multiplayer_K2Node_ComponentBoundEvent_30_OnExit__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__UI_Multiplayer_K2Node_ComponentBoundEvent_30_OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__UI_Multiplayer_K2Node_ComponentBoundEvent_30_OnExit__DelegateSignature");

	UUI_Main_C_BndEvt__UI_Multiplayer_K2Node_ComponentBoundEvent_30_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__SwitchTeam_K2Node_ComponentBoundEvent_44_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__SwitchTeam_K2Node_ComponentBoundEvent_44_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__SwitchTeam_K2Node_ComponentBoundEvent_44_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__SwitchTeam_K2Node_ComponentBoundEvent_44_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__OfflinePlayGo_K2Node_ComponentBoundEvent_382_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__OfflinePlayGo_K2Node_ComponentBoundEvent_382_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__OfflinePlayGo_K2Node_ComponentBoundEvent_382_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__OfflinePlayGo_K2Node_ComponentBoundEvent_382_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__OfflineBack_K2Node_ComponentBoundEvent_428_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__OfflineBack_K2Node_ComponentBoundEvent_428_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__OfflineBack_K2Node_ComponentBoundEvent_428_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__OfflineBack_K2Node_ComponentBoundEvent_428_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature");

	UUI_Main_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.OnCommit_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MapUniqueId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Canceled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Main_C::OnCommit_Event_1(const struct FName& MapUniqueId, bool Canceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.OnCommit_Event_1");

	UUI_Main_C_OnCommit_Event_1_Params params;
	params.MapUniqueId = MapUniqueId;
	params.Canceled = Canceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__VoteMuteButton_K2Node_ComponentBoundEvent_285_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__VoteMuteButton_K2Node_ComponentBoundEvent_285_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__VoteMuteButton_K2Node_ComponentBoundEvent_285_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__VoteMuteButton_K2Node_ComponentBoundEvent_285_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__BackModerationButton_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__BackModerationButton_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__BackModerationButton_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__BackModerationButton_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_711_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_711_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_711_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_711_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_726_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__MuteButton_K2Node_ComponentBoundEvent_726_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_726_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_726_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__UI_Muting_K2Node_ComponentBoundEvent_195_OnExit__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__UI_Muting_K2Node_ComponentBoundEvent_195_OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__UI_Muting_K2Node_ComponentBoundEvent_195_OnExit__DelegateSignature");

	UUI_Main_C_BndEvt__UI_Muting_K2Node_ComponentBoundEvent_195_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__UI_Kick_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__UI_Kick_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__UI_Kick_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature");

	UUI_Main_C_BndEvt__UI_Kick_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__UI_Kick_K2Node_ComponentBoundEvent_1_OnVoteInstigated__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__UI_Kick_K2Node_ComponentBoundEvent_1_OnVoteInstigated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__UI_Kick_K2Node_ComponentBoundEvent_1_OnVoteInstigated__DelegateSignature");

	UUI_Main_C_BndEvt__UI_Kick_K2Node_ComponentBoundEvent_1_OnVoteInstigated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__ReturnLobbyButton_K2Node_ComponentBoundEvent_54_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__ReturnLobbyButton_K2Node_ComponentBoundEvent_54_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__ReturnLobbyButton_K2Node_ComponentBoundEvent_54_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__ReturnLobbyButton_K2Node_ComponentBoundEvent_54_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.OnMenuToggled
// (BlueprintCallable, BlueprintEvent)

void UUI_Main_C::OnMenuToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.OnMenuToggled");

	UUI_Main_C_OnMenuToggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_785_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_785_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_785_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_785_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_806_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_806_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_806_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_806_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__AbstainButton_K2Node_ComponentBoundEvent_828_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__AbstainButton_K2Node_ComponentBoundEvent_828_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__AbstainButton_K2Node_ComponentBoundEvent_828_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__AbstainButton_K2Node_ComponentBoundEvent_828_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.OnVoteEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVote*                   Vote                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Main_C::OnVoteEnd(class AVote* Vote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.OnVoteEnd");

	UUI_Main_C_OnVoteEnd_Params params;
	params.Vote = Vote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_134_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__Suicide_K2Node_ComponentBoundEvent_134_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_134_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__Suicide_K2Node_ComponentBoundEvent_134_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.BndEvt__TutorialButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Main_C::BndEvt__TutorialButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.BndEvt__TutorialButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UUI_Main_C_BndEvt__TutorialButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Main.UI_Main_C.ExecuteUbergraph_UI_Main
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Main_C::ExecuteUbergraph_UI_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Main.UI_Main_C.ExecuteUbergraph_UI_Main");

	UUI_Main_C_ExecuteUbergraph_UI_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
