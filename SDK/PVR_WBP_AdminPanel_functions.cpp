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

// Function WBP_AdminPanel.WBP_AdminPanel_C.Get_KickButton_ColorAndOpacity_Bind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_AdminPanel_C::Get_KickButton_ColorAndOpacity_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.Get_KickButton_ColorAndOpacity_Bind");

	UWBP_AdminPanel_C_Get_KickButton_ColorAndOpacity_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerActionsEnabled_Bind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_AdminPanel_C::PlayerActionsEnabled_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerActionsEnabled_Bind");

	UWBP_AdminPanel_C_PlayerActionsEnabled_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.Remove Old Selections
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerEntry_C*      Selected_Widget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_AdminPanel_C::Remove_Old_Selections(class UWBP_PlayerEntry_C* Selected_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.Remove Old Selections");

	UWBP_AdminPanel_C_Remove_Old_Selections_Params params;
	params.Selected_Widget = Selected_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerActionIcons_Bind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_AdminPanel_C::PlayerActionIcons_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerActionIcons_Bind");

	UWBP_AdminPanel_C_PlayerActionIcons_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.FailedAdminAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::FailedAdminAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.FailedAdminAction");

	UWBP_AdminPanel_C_FailedAdminAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.ClearSelection");

	UWBP_AdminPanel_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.PopupRemoveInteraction_Bind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_AdminPanel_C::PopupRemoveInteraction_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.PopupRemoveInteraction_Bind");

	UWBP_AdminPanel_C_PopupRemoveInteraction_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.PopupVis_Bind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_AdminPanel_C::PopupVis_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.PopupVis_Bind");

	UWBP_AdminPanel_C_PopupVis_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.FindPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_AdminPanel_C::FindPlayerState(const struct FString& String_ID, bool* Found_, class APavlovPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.FindPlayerState");

	UWBP_AdminPanel_C_FindPlayerState_Params params;
	params.String_ID = String_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.GetPavGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APavlovGameState*        AsPavlov_Game_State            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_AdminPanel_C::GetPavGameState(class APavlovGameState** AsPavlov_Game_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.GetPavGameState");

	UWBP_AdminPanel_C_GetPavGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPavlov_Game_State != nullptr)
		*AsPavlov_Game_State = params.AsPavlov_Game_State;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.UpdatePlayerArray
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::UpdatePlayerArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.UpdatePlayerArray");

	UWBP_AdminPanel_C_UpdatePlayerArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__PlayerOptionsButton_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__PlayerOptionsButton_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__PlayerOptionsButton_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__PlayerOptionsButton_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.Show Popup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_AdminPanel_C::Show_Popup(const struct FString& Action, const struct FString& Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.Show Popup");

	UWBP_AdminPanel_C_Show_Popup_Params params;
	params.Action = Action;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.OnButtonClicked_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::OnButtonClicked_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.OnButtonClicked_Event_1");

	UWBP_AdminPanel_C_OnButtonClicked_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.OnButtonClicked_Event_2
// (BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::OnButtonClicked_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.OnButtonClicked_Event_2");

	UWBP_AdminPanel_C_OnButtonClicked_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__TeleportPlayerButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__TeleportPlayerButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__TeleportPlayerButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__TeleportPlayerButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__BanPlayerButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__BanPlayerButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__BanPlayerButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__BanPlayerButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.PerformAdminAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StringId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<E_AdminAction>     AdminAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AdminPanel_C::PerformAdminAction(const struct FString& StringId, TEnumAsByte<E_AdminAction> AdminAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.PerformAdminAction");

	UWBP_AdminPanel_C_PerformAdminAction_Params params;
	params.StringId = StringId;
	params.AdminAction = AdminAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__KillPlayerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__KillPlayerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__KillPlayerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__KillPlayerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerSelected_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PlayerEntry_C*      PlayerEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_AdminPanel_C::PlayerSelected_Event(const struct FString& SteamId, const struct FText& Name, class UWBP_PlayerEntry_C* PlayerEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerSelected_Event");

	UWBP_AdminPanel_C_PlayerSelected_Event_Params params;
	params.SteamId = SteamId;
	params.Name = Name;
	params.PlayerEntry = PlayerEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.Update Player List
// (BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::Update_Player_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.Update Player List");

	UWBP_AdminPanel_C_Update_Player_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AdminPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.Construct");

	UWBP_AdminPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__ChooseNextMapButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdminPanel_C::BndEvt__ChooseNextMapButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__ChooseNextMapButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UWBP_AdminPanel_C_BndEvt__ChooseNextMapButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.OpenMenu_Event
// (BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::OpenMenu_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.OpenMenu_Event");

	UWBP_AdminPanel_C_OpenMenu_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.ExecuteUbergraph_WBP_AdminPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AdminPanel_C::ExecuteUbergraph_WBP_AdminPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.ExecuteUbergraph_WBP_AdminPanel");

	UWBP_AdminPanel_C_ExecuteUbergraph_WBP_AdminPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.OpenMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::OpenMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.OpenMenu__DelegateSignature");

	UWBP_AdminPanel_C_OpenMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.AdminAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AdminAction>     AdminAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AdminPanel_C::AdminAction__DelegateSignature(TEnumAsByte<E_AdminAction> AdminAction, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.AdminAction__DelegateSignature");

	UWBP_AdminPanel_C_AdminAction__DelegateSignature_Params params;
	params.AdminAction = AdminAction;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanel.WBP_AdminPanel_C.Exit Menu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AdminPanel_C::Exit_Menu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanel.WBP_AdminPanel_C.Exit Menu__DelegateSignature");

	UWBP_AdminPanel_C_Exit_Menu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
