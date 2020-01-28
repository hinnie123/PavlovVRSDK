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

// Function UI_Muting.UI_Muting_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Muting_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.Update");

	UUI_Muting_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Muting.UI_Muting_C.UpdatePlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_Moderation_Player_C*> Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APavlovPlayerState*> PlayerArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Muting_C::UpdatePlayers(TArray<class UUI_Moderation_Player_C*>* Players, TArray<class APavlovPlayerState*>* PlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.UpdatePlayers");

	UUI_Muting_C_UpdatePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;
}


// Function UI_Muting.UI_Muting_C.CreatePlayerWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_Moderation_Player_C*> TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVerticalBox*            List                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Muting_C::CreatePlayerWidgets(class UVerticalBox* List, TArray<class UUI_Moderation_Player_C*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.CreatePlayerWidgets");

	UUI_Muting_C_CreatePlayerWidgets_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function UI_Muting.UI_Muting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Muting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.Construct");

	UUI_Muting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Muting.UI_Muting_C.BndEvt__UI_ButtonSecondary_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Muting_C::BndEvt__UI_ButtonSecondary_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.BndEvt__UI_ButtonSecondary_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature");

	UUI_Muting_C_BndEvt__UI_ButtonSecondary_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Muting.UI_Muting_C.OnPlayerWidgetMuteChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Mute                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_Muting_C::OnPlayerWidgetMuteChanged(bool Mute, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.OnPlayerWidgetMuteChanged");

	UUI_Muting_C_OnPlayerWidgetMuteChanged_Params params;
	params.Mute = Mute;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Muting.UI_Muting_C.UpdateList
// (BlueprintCallable, BlueprintEvent)

void UUI_Muting_C::UpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.UpdateList");

	UUI_Muting_C_UpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Muting.UI_Muting_C.ExecuteUbergraph_UI_Muting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Muting_C::ExecuteUbergraph_UI_Muting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.ExecuteUbergraph_UI_Muting");

	UUI_Muting_C_ExecuteUbergraph_UI_Muting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Muting.UI_Muting_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Muting_C::OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Muting.UI_Muting_C.OnExit__DelegateSignature");

	UUI_Muting_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
