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

// Function Gun_AutoSniper.Gun_AutoSniper_C.SetScopeCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Capture                        (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AutoSniper_C::SetScopeCapture(bool Capture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AutoSniper.Gun_AutoSniper_C.SetScopeCapture"));

	AGun_AutoSniper_C_SetScopeCapture_Params params;
	params.Capture = Capture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoSniper.Gun_AutoSniper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AutoSniper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AutoSniper.Gun_AutoSniper_C.UserConstructionScript"));

	AGun_AutoSniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoSniper.Gun_AutoSniper_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AutoSniper_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AutoSniper.Gun_AutoSniper_C.OnPick"));

	AGun_AutoSniper_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoSniper.Gun_AutoSniper_C.OnDrop
// (Event, Public, BlueprintEvent)

void AGun_AutoSniper_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AutoSniper.Gun_AutoSniper_C.OnDrop"));

	AGun_AutoSniper_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoSniper.Gun_AutoSniper_C.OnUnderExploitChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bUnderExploit                  (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AutoSniper_C::OnUnderExploitChanged(bool* bUnderExploit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AutoSniper.Gun_AutoSniper_C.OnUnderExploitChanged"));

	AGun_AutoSniper_C_OnUnderExploitChanged_Params params;
	params.bUnderExploit = bUnderExploit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoSniper.Gun_AutoSniper_C.ExecuteUbergraph_Gun_AutoSniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AutoSniper_C::ExecuteUbergraph_Gun_AutoSniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AutoSniper.Gun_AutoSniper_C.ExecuteUbergraph_Gun_AutoSniper"));

	AGun_AutoSniper_C_ExecuteUbergraph_Gun_AutoSniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
