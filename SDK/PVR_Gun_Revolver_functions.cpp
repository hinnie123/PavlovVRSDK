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

// Function Gun_Revolver.Gun_Revolver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Revolver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.UserConstructionScript");

	AGun_Revolver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.OnMagBoltRelease_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Revolver_C::OnMagBoltRelease_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.OnMagBoltRelease_Event_1");

	AGun_Revolver_C_OnMagBoltRelease_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_Revolver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.ReceiveBeginPlay");

	AGun_Revolver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.OnRevolverCylinderChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOpen                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Revolver_C::OnRevolverCylinderChanged_Event_1(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.OnRevolverCylinderChanged_Event_1");

	AGun_Revolver_C_OnRevolverCylinderChanged_Event_1_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.OnGesturePerformedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Revolver_C::OnGesturePerformedDelegate(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.OnGesturePerformedDelegate");

	AGun_Revolver_C_OnGesturePerformedDelegate_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.SetupRemoval
// (BlueprintCallable, BlueprintEvent)

void AGun_Revolver_C::SetupRemoval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.SetupRemoval");

	AGun_Revolver_C_SetupRemoval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.OnDrop
// (Event, Public, BlueprintEvent)

void AGun_Revolver_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.OnDrop");

	AGun_Revolver_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.OnSnapTriggerReset
// (Event, Public, BlueprintEvent)

void AGun_Revolver_C::OnSnapTriggerReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.OnSnapTriggerReset");

	AGun_Revolver_C_OnSnapTriggerReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.OnSpawnUnloaded
// (Event, Public, BlueprintEvent)

void AGun_Revolver_C::OnSpawnUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.OnSpawnUnloaded");

	AGun_Revolver_C_OnSpawnUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.SetupClose
// (BlueprintCallable, BlueprintEvent)

void AGun_Revolver_C::SetupClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.SetupClose");

	AGun_Revolver_C_SetupClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Revolver.Gun_Revolver_C.ExecuteUbergraph_Gun_Revolver
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Revolver_C::ExecuteUbergraph_Gun_Revolver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Revolver.Gun_Revolver_C.ExecuteUbergraph_Gun_Revolver");

	AGun_Revolver_C_ExecuteUbergraph_Gun_Revolver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
