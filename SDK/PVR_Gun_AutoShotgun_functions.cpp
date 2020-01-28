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

// Function Gun_AutoShotgun.Gun_AutoShotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AutoShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AutoShotgun.Gun_AutoShotgun_C.UserConstructionScript");

	AGun_AutoShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoShotgun.Gun_AutoShotgun_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_AutoShotgun_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AutoShotgun.Gun_AutoShotgun_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_AutoShotgun_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoShotgun.Gun_AutoShotgun_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AutoShotgun_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AutoShotgun.Gun_AutoShotgun_C.OnPick");

	AGun_AutoShotgun_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoShotgun.Gun_AutoShotgun_C.OnDrop
// (Event, Public, BlueprintEvent)

void AGun_AutoShotgun_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AutoShotgun.Gun_AutoShotgun_C.OnDrop");

	AGun_AutoShotgun_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AutoShotgun.Gun_AutoShotgun_C.ExecuteUbergraph_Gun_AutoShotgun
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AutoShotgun_C::ExecuteUbergraph_Gun_AutoShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AutoShotgun.Gun_AutoShotgun_C.ExecuteUbergraph_Gun_AutoShotgun");

	AGun_AutoShotgun_C_ExecuteUbergraph_Gun_AutoShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
