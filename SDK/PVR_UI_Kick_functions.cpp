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

// Function UI_Kick.UI_Kick_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Kick_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.Update");

	UUI_Kick_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.UpdatePlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_Moderation_Player_C*> Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APavlovPlayerState*> PlayerArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Kick_C::UpdatePlayers(TArray<class UUI_Moderation_Player_C*>* Players, TArray<class APavlovPlayerState*>* PlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.UpdatePlayers");

	UUI_Kick_C_UpdatePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;
}


// Function UI_Kick.UI_Kick_C.CreatePlayerWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_Moderation_Player_C*> TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVerticalBox*            List                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Kick_C::CreatePlayerWidgets(class UVerticalBox* List, TArray<class UUI_Moderation_Player_C*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.CreatePlayerWidgets");

	UUI_Kick_C_CreatePlayerWidgets_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function UI_Kick.UI_Kick_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Kick_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.Construct");

	UUI_Kick_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.OnPlayerWidgetSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_Kick_C::OnPlayerWidgetSelectionChanged(bool Selected, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.OnPlayerWidgetSelectionChanged");

	UUI_Kick_C_OnPlayerWidgetSelectionChanged_Params params;
	params.Selected = Selected;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.UpdateList
// (BlueprintCallable, BlueprintEvent)

void UUI_Kick_C::UpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.UpdateList");

	UUI_Kick_C_UpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_30_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Kick_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_30_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_30_OnButtonClicked__DelegateSignature");

	UUI_Kick_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_30_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.BndEvt__VoteButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Kick_C::BndEvt__VoteButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.BndEvt__VoteButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature");

	UUI_Kick_C_BndEvt__VoteButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.ExecuteUbergraph_UI_Kick
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Kick_C::ExecuteUbergraph_UI_Kick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.ExecuteUbergraph_UI_Kick");

	UUI_Kick_C_ExecuteUbergraph_UI_Kick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.OnVoteInstigated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Kick_C::OnVoteInstigated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.OnVoteInstigated__DelegateSignature");

	UUI_Kick_C_OnVoteInstigated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Kick.UI_Kick_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Kick_C::OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Kick.UI_Kick_C.OnExit__DelegateSignature");

	UUI_Kick_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
