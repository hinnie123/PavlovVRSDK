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

// Function BP_PavlovGhost.BP_PavlovGhost_C.SetVRScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhost_C::SetVRScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.SetVRScale");

	ABP_PavlovGhost_C_SetVRScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovGhost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.UserConstructionScript");

	ABP_PavlovGhost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.GhostViewFadeOut__FinishedFunc
// (BlueprintEvent)

void ABP_PavlovGhost_C::GhostViewFadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.GhostViewFadeOut__FinishedFunc");

	ABP_PavlovGhost_C_GhostViewFadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.GhostViewFadeOut__UpdateFunc
// (BlueprintEvent)

void ABP_PavlovGhost_C::GhostViewFadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.GhostViewFadeOut__UpdateFunc");

	ABP_PavlovGhost_C_GhostViewFadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovGhost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.ReceiveBeginPlay");

	ABP_PavlovGhost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.OnTraveledToSpectatorRoom
// (Event, Protected, BlueprintEvent)

void ABP_PavlovGhost_C::OnTraveledToSpectatorRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.OnTraveledToSpectatorRoom");

	ABP_PavlovGhost_C_OnTraveledToSpectatorRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhost_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.OnDestroyed_Event_1");

	ABP_PavlovGhost_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhost_C::BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature");

	ABP_PavlovGhost_C_BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.OnGraceTimeEnded
// (Event, Public, BlueprintEvent)

void ABP_PavlovGhost_C::OnGraceTimeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.OnGraceTimeEnded");

	ABP_PavlovGhost_C_OnGraceTimeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.OnTeamIdChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhost_C::OnTeamIdChanged(int* TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.OnTeamIdChanged");

	ABP_PavlovGhost_C_OnTeamIdChanged_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.OnPreTeleport
// (Event, Public, BlueprintEvent)

void ABP_PavlovGhost_C::OnPreTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.OnPreTeleport");

	ABP_PavlovGhost_C_OnPreTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.OnTeleport
// (Event, Public, BlueprintEvent)

void ABP_PavlovGhost_C::OnTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.OnTeleport");

	ABP_PavlovGhost_C_OnTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhost.BP_PavlovGhost_C.ExecuteUbergraph_BP_PavlovGhost
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhost_C::ExecuteUbergraph_BP_PavlovGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovGhost.BP_PavlovGhost_C.ExecuteUbergraph_BP_PavlovGhost");

	ABP_PavlovGhost_C_ExecuteUbergraph_BP_PavlovGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
