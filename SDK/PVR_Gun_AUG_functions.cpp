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

// Function Gun_AUG.Gun_AUG_C.SetScopeCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AUG_C::SetScopeCapture(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AUG.Gun_AUG_C.SetScopeCapture");

	AGun_AUG_C_SetScopeCapture_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AUG.Gun_AUG_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AUG_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AUG.Gun_AUG_C.UserConstructionScript");

	AGun_AUG_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AUG.Gun_AUG_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AUG_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AUG.Gun_AUG_C.OnPick");

	AGun_AUG_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AUG.Gun_AUG_C.OnDrop
// (Event, Public, BlueprintEvent)

void AGun_AUG_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AUG.Gun_AUG_C.OnDrop");

	AGun_AUG_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AUG.Gun_AUG_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AUG_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AUG.Gun_AUG_C.ReceiveTick");

	AGun_AUG_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AUG.Gun_AUG_C.ExecuteUbergraph_Gun_AUG
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AUG_C::ExecuteUbergraph_Gun_AUG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AUG.Gun_AUG_C.ExecuteUbergraph_Gun_AUG");

	AGun_AUG_C_ExecuteUbergraph_Gun_AUG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
