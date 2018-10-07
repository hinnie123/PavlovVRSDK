// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Lobby.UI_Lobby_C.GetLabelFromMap
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)

void UUI_Lobby_C::GetLabelFromMap(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.GetLabelFromMap"));

	UUI_Lobby_C_GetLabelFromMap_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.GetMapFromLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)
// struct FString                 Map                            (Parm, OutParm, ZeroConstructor)

void UUI_Lobby_C::GetMapFromLabel(const struct FString& Selection, struct FString* Map)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.GetMapFromLabel"));

	UUI_Lobby_C_GetMapFromLabel_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function UI_Lobby.UI_Lobby_C.Get_ScaleBox_0_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Lobby_C::Get_ScaleBox_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.Get_ScaleBox_0_Visibility_1"));

	UUI_Lobby_C_Get_ScaleBox_0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Lobby.UI_Lobby_C.Get_ReadyStartButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Lobby_C::Get_ReadyStartButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.Get_ReadyStartButton_Visibility_1"));

	UUI_Lobby_C_Get_ReadyStartButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Lobby.UI_Lobby_C.LabelToTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUI_Lobby_C::LabelToTeam(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.LabelToTeam"));

	UUI_Lobby_C_LabelToTeam_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Lobby.UI_Lobby_C.TeamToLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UUI_Lobby_C::TeamToLabel(int TeamID, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.TeamToLabel"));

	UUI_Lobby_C_TeamToLabel_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function UI_Lobby.UI_Lobby_C.UpdateSettingsEditable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Editable                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::UpdateSettingsEditable(bool Editable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.UpdateSettingsEditable"));

	UUI_Lobby_C_UpdateSettingsEditable_Params params;
	params.Editable = Editable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.GameModeToLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUI_Lobby_C::GameModeToLabel(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.GameModeToLabel"));

	UUI_Lobby_C_GameModeToLabel_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Lobby.UI_Lobby_C.LabelToGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Label                          (Parm, ZeroConstructor)
// struct FString                 GameMode                       (Parm, OutParm, ZeroConstructor)

void UUI_Lobby_C::LabelToGameMode(const struct FString& Label, struct FString* GameMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.LabelToGameMode"));

	UUI_Lobby_C_LabelToGameMode_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameMode != nullptr)
		*GameMode = params.GameMode;
}


// Function UI_Lobby.UI_Lobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Lobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.Construct"));

	UUI_Lobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.UpdateMembers
// (BlueprintCallable, BlueprintEvent)

void UUI_Lobby_C::UpdateMembers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.UpdateMembers"));

	UUI_Lobby_C_UpdateMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__UI_ButtonSecondary_21_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__UI_ButtonSecondary_21_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__UI_ButtonSecondary_21_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature"));

	UUI_Lobby_C_BndEvt__UI_ButtonSecondary_21_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnEnterLobby_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFailed                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::OnEnterLobby_Event_1(bool bFailed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnEnterLobby_Event_1"));

	UUI_Lobby_C_OnEnterLobby_Event_1_Params params;
	params.bFailed = bFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.UpdateLobby
// (BlueprintCallable, BlueprintEvent)

void UUI_Lobby_C::UpdateLobby()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.UpdateLobby"));

	UUI_Lobby_C_UpdateLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingGameMode_K2Node_ComponentBoundEvent_131_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)

void UUI_Lobby_C::BndEvt__SettingGameMode_K2Node_ComponentBoundEvent_131_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__SettingGameMode_K2Node_ComponentBoundEvent_131_OnSelectionChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__SettingGameMode_K2Node_ComponentBoundEvent_131_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnLobbyUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Lobby_C::OnLobbyUpdated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnLobbyUpdated_Event_1"));

	UUI_Lobby_C_OnLobbyUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingTeam_K2Node_ComponentBoundEvent_42_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)

void UUI_Lobby_C::BndEvt__SettingTeam_K2Node_ComponentBoundEvent_42_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__SettingTeam_K2Node_ComponentBoundEvent_42_OnSelectionChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__SettingTeam_K2Node_ComponentBoundEvent_42_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxVoiceMute_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::BndEvt__CheckboxVoiceMute_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxVoiceMute_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__CheckboxVoiceMute_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxReady_K2Node_ComponentBoundEvent_112_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::BndEvt__CheckboxReady_K2Node_ComponentBoundEvent_112_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxReady_K2Node_ComponentBoundEvent_112_OnCheckStateChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__CheckboxReady_K2Node_ComponentBoundEvent_112_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__ReadyStartButton_K2Node_ComponentBoundEvent_143_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__ReadyStartButton_K2Node_ComponentBoundEvent_143_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__ReadyStartButton_K2Node_ComponentBoundEvent_143_OnButtonClicked__DelegateSignature"));

	UUI_Lobby_C_BndEvt__ReadyStartButton_K2Node_ComponentBoundEvent_143_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnLobbyStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELobbyState                    NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::OnLobbyStateChanged_Event_1(ELobbyState NewState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnLobbyStateChanged_Event_1"));

	UUI_Lobby_C_OnLobbyStateChanged_Event_1_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnLobbyStatusMessage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bError                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::OnLobbyStatusMessage_Event_1(const struct FString& Message, bool bError)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnLobbyStatusMessage_Event_1"));

	UUI_Lobby_C_OnLobbyStatusMessage_Event_1_Params params;
	params.Message = Message;
	params.bError = bError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxFriendsOnly_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::BndEvt__CheckboxFriendsOnly_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxFriendsOnly_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__CheckboxFriendsOnly_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingServer_K2Node_ComponentBoundEvent_30_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)

void UUI_Lobby_C::BndEvt__SettingServer_K2Node_ComponentBoundEvent_30_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__SettingServer_K2Node_ComponentBoundEvent_30_OnSelectionChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__SettingServer_K2Node_ComponentBoundEvent_30_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__cancelButton_K2Node_ComponentBoundEvent_106_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__cancelButton_K2Node_ComponentBoundEvent_106_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__cancelButton_K2Node_ComponentBoundEvent_106_OnButtonClicked__DelegateSignature"));

	UUI_Lobby_C_BndEvt__cancelButton_K2Node_ComponentBoundEvent_106_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__MapButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature"));

	UUI_Lobby_C_BndEvt__MapButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnCommit_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MapUniqueId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Canceled                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::OnCommit_Event_1(const struct FName& MapUniqueId, bool Canceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnCommit_Event_1"));

	UUI_Lobby_C_OnCommit_Event_1_Params params;
	params.MapUniqueId = MapUniqueId;
	params.Canceled = Canceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.UpdateMapDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MapId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapLabel                       (Parm, ZeroConstructor)

void UUI_Lobby_C::UpdateMapDisplay(const struct FName& MapId, const struct FString& MapLabel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.UpdateMapDisplay"));

	UUI_Lobby_C_UpdateMapDisplay_Params params;
	params.MapId = MapId;
	params.MapLabel = MapLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnDownloadBegin_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Lobby_C::OnDownloadBegin_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnDownloadBegin_Event_1"));

	UUI_Lobby_C_OnDownloadBegin_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnDownloadProgress_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::OnDownloadProgress_Event_1(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnDownloadProgress_Event_1"));

	UUI_Lobby_C_OnDownloadProgress_Event_1_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__CancelDowloadBtn_K2Node_ComponentBoundEvent_467_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__CancelDowloadBtn_K2Node_ComponentBoundEvent_467_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__CancelDowloadBtn_K2Node_ComponentBoundEvent_467_OnButtonClicked__DelegateSignature"));

	UUI_Lobby_C_BndEvt__CancelDowloadBtn_K2Node_ComponentBoundEvent_467_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckBots_K2Node_ComponentBoundEvent_63_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::BndEvt__CheckBots_K2Node_ComponentBoundEvent_63_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__CheckBots_K2Node_ComponentBoundEvent_63_OnCheckStateChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__CheckBots_K2Node_ComponentBoundEvent_63_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__RemovePin_K2Node_ComponentBoundEvent_508_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__RemovePin_K2Node_ComponentBoundEvent_508_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__RemovePin_K2Node_ComponentBoundEvent_508_OnButtonClickedEvent__DelegateSignature"));

	UUI_Lobby_C_BndEvt__RemovePin_K2Node_ComponentBoundEvent_508_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__SetPinButton_K2Node_ComponentBoundEvent_538_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__SetPinButton_K2Node_ComponentBoundEvent_538_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__SetPinButton_K2Node_ComponentBoundEvent_538_OnButtonClicked__DelegateSignature"));

	UUI_Lobby_C_BndEvt__SetPinButton_K2Node_ComponentBoundEvent_538_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__CompetitiveCheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::BndEvt__CompetitiveCheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__CompetitiveCheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature"));

	UUI_Lobby_C_BndEvt__CompetitiveCheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Lobby_C::BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature"));

	UUI_Lobby_C_BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.BndEvt__UI_ServerSettings_K2Node_ComponentBoundEvent_317_OnSettingsApply__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FServerSettings         Settings                       (Parm)

void UUI_Lobby_C::BndEvt__UI_ServerSettings_K2Node_ComponentBoundEvent_317_OnSettingsApply__DelegateSignature(const struct FServerSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.BndEvt__UI_ServerSettings_K2Node_ComponentBoundEvent_317_OnSettingsApply__DelegateSignature"));

	UUI_Lobby_C_BndEvt__UI_ServerSettings_K2Node_ComponentBoundEvent_317_OnSettingsApply__DelegateSignature_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby_C::ExecuteUbergraph_UI_Lobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby"));

	UUI_Lobby_C_ExecuteUbergraph_UI_Lobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnPinRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Lobby_C::OnPinRequest__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnPinRequest__DelegateSignature"));

	UUI_Lobby_C_OnPinRequest__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnMapChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Map                            (Parm, ZeroConstructor)

void UUI_Lobby_C::OnMapChanged__DelegateSignature(const struct FString& Map)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnMapChanged__DelegateSignature"));

	UUI_Lobby_C_OnMapChanged__DelegateSignature_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lobby.UI_Lobby_C.OnModalEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Lobby_C::OnModalEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Lobby.UI_Lobby_C.OnModalEnd__DelegateSignature"));

	UUI_Lobby_C_OnModalEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
