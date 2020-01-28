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

// Function BP_EscapeObjective.BP_EscapeObjective_C.ToggleDestructibleMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::ToggleDestructibleMesh(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.ToggleDestructibleMesh");

	ABP_EscapeObjective_C_ToggleDestructibleMesh_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.ToggleEscapeMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::ToggleEscapeMesh(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.ToggleEscapeMesh");

	ABP_EscapeObjective_C_ToggleEscapeMesh_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.PlayDestroySound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::PlayDestroySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.PlayDestroySound");

	ABP_EscapeObjective_C_PlayDestroySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.SetRepairMeshVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::SetRepairMeshVis(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.SetRepairMeshVis");

	ABP_EscapeObjective_C_SetRepairMeshVis_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.PlayTouchSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::PlayTouchSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.PlayTouchSound");

	ABP_EscapeObjective_C_PlayTouchSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.CanRepairObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanRepair                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::CanRepairObjective(bool* CanRepair)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.CanRepairObjective");

	ABP_EscapeObjective_C_CanRepairObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRepair != nullptr)
		*CanRepair = params.CanRepair;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.SetBoxCollisionResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionResponse> NewResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::SetBoxCollisionResponse(TEnumAsByte<ECollisionResponse> NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.SetBoxCollisionResponse");

	ABP_EscapeObjective_C_SetBoxCollisionResponse_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.TryDestroyObjective_Server
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::TryDestroyObjective_Server(class UObject* Object, bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.TryDestroyObjective_Server");

	ABP_EscapeObjective_C_TryDestroyObjective_Server_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.CanDestroyObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AVRItem*                 VRItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDestroy                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::CanDestroyObjective(class AVRItem* VRItem, bool* CanDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.CanDestroyObjective");

	ABP_EscapeObjective_C_CanDestroyObjective_Params params;
	params.VRItem = VRItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDestroy != nullptr)
		*CanDestroy = params.CanDestroy;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.SetObjectiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> EscapeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::SetObjectiveState(TEnumAsByte<E_EscapeObjectiveState> EscapeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.SetObjectiveState");

	ABP_EscapeObjective_C_SetObjectiveState_Params params;
	params.EscapeState = EscapeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.OnRep_EscapeState
// (BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::OnRep_EscapeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.OnRep_EscapeState");

	ABP_EscapeObjective_C_OnRep_EscapeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.UserConstructionScript");

	ABP_EscapeObjective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.OnEscapeStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> EscapeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::OnEscapeStateChanged_Event(TEnumAsByte<E_EscapeObjectiveState> EscapeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.OnEscapeStateChanged_Event");

	ABP_EscapeObjective_C_OnEscapeStateChanged_Event_Params params;
	params.EscapeState = EscapeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.DestroyObjective_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::DestroyObjective_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.DestroyObjective_Server");

	ABP_EscapeObjective_C_DestroyObjective_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.ResetObjective_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::ResetObjective_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.ResetObjective_Event");

	ABP_EscapeObjective_C_ResetObjective_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EscapeObjective_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.ReceiveBeginPlay");

	ABP_EscapeObjective_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.PlayRepairSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::PlayRepairSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.PlayRepairSound");

	ABP_EscapeObjective_C_PlayRepairSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.Init Client
// (BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::Init_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.Init Client");

	ABP_EscapeObjective_C_Init_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.ExecuteUbergraph_BP_EscapeObjective
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::ExecuteUbergraph_BP_EscapeObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.ExecuteUbergraph_BP_EscapeObjective");

	ABP_EscapeObjective_C_ExecuteUbergraph_BP_EscapeObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.ResetObjective__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EscapeObjective_C::ResetObjective__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.ResetObjective__DelegateSignature");

	ABP_EscapeObjective_C_ResetObjective__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EscapeObjective.BP_EscapeObjective_C.OnEscapeStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> EscapeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EscapeObjective_C::OnEscapeStateChanged__DelegateSignature(TEnumAsByte<E_EscapeObjectiveState> EscapeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EscapeObjective.BP_EscapeObjective_C.OnEscapeStateChanged__DelegateSignature");

	ABP_EscapeObjective_C_OnEscapeStateChanged__DelegateSignature_Params params;
	params.EscapeState = EscapeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
