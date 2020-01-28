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

// Function BP_Mining.BP_Mining_C.ToggleRockMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Vis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::ToggleRockMesh(bool Vis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.ToggleRockMesh");

	ABP_Mining_C_ToggleRockMesh_Params params;
	params.Vis = Vis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.ToggleDM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::ToggleDM(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.ToggleDM");

	ABP_Mining_C_ToggleDM_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.TryMine_Server
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::TryMine_Server(class ABP_PavlovPawn_C* PavPawn, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.TryMine_Server");

	ABP_Mining_C_TryMine_Server_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (successful != nullptr)
		*successful = params.successful;
}


// Function BP_Mining.BP_Mining_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::SetState(TEnumAsByte<E_EscapeObjectiveState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.SetState");

	ABP_Mining_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void ABP_Mining_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.OnRep_State");

	ABP_Mining_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mining_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.UserConstructionScript");

	ABP_Mining_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Mining_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.ReceiveBeginPlay");

	ABP_Mining_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.OnStateChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::OnStateChange_Event(TEnumAsByte<E_EscapeObjectiveState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.OnStateChange_Event");

	ABP_Mining_C_OnStateChange_Event_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.Mine
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Mining_C::Mine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.Mine");

	ABP_Mining_C_Mine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.Timer_Respawn
// (BlueprintCallable, BlueprintEvent)

void ABP_Mining_C::Timer_Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.Timer_Respawn");

	ABP_Mining_C_Timer_Respawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.Respawn_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Mining_C::Respawn_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.Respawn_Event");

	ABP_Mining_C_Respawn_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.ExecuteUbergraph_BP_Mining
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::ExecuteUbergraph_BP_Mining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.ExecuteUbergraph_BP_Mining");

	ABP_Mining_C_ExecuteUbergraph_BP_Mining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.Respawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Mining_C::Respawn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.Respawn__DelegateSignature");

	ABP_Mining_C_Respawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mining.BP_Mining_C.OnStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mining_C::OnStateChange__DelegateSignature(TEnumAsByte<E_EscapeObjectiveState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mining.BP_Mining_C.OnStateChange__DelegateSignature");

	ABP_Mining_C_OnStateChange__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
