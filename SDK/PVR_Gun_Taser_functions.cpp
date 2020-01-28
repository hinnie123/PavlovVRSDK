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

// Function Gun_Taser.Gun_Taser_C.SetBarrelState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOpen                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::SetBarrelState(bool bOpen, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.SetBarrelState");

	AGun_Taser_C_SetBarrelState_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function Gun_Taser.Gun_Taser_C.SetAnimTriggerdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TriggerDown                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::SetAnimTriggerdown(bool TriggerDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.SetAnimTriggerdown");

	AGun_Taser_C_SetAnimTriggerdown_Params params;
	params.TriggerDown = TriggerDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UABP_Taser_C*            ABPTaser                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::GetAnimInstance(bool* Successful_, class UABP_Taser_C** ABPTaser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.GetAnimInstance");

	AGun_Taser_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
	if (ABPTaser != nullptr)
		*ABPTaser = params.ABPTaser;
}


// Function Gun_Taser.Gun_Taser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Taser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.UserConstructionScript");

	AGun_Taser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_Taser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.ReceiveBeginPlay");

	AGun_Taser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.OnMagBoltRelease_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Taser_C::OnMagBoltRelease_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.OnMagBoltRelease_Event_1");

	AGun_Taser_C_OnMagBoltRelease_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.OnChamberStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChamberIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::OnChamberStateChanged_Event_1(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.OnChamberStateChanged_Event_1");

	AGun_Taser_C_OnChamberStateChanged_Event_1_Params params;
	params.ChamberIndex = ChamberIndex;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.Use
// (Event, Public, BlueprintEvent)

void AGun_Taser_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.Use");

	AGun_Taser_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.Used");

	AGun_Taser_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.OnPick");

	AGun_Taser_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Taser.Gun_Taser_C.ExecuteUbergraph_Gun_Taser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Taser_C::ExecuteUbergraph_Gun_Taser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Taser.Gun_Taser_C.ExecuteUbergraph_Gun_Taser");

	AGun_Taser_C_ExecuteUbergraph_Gun_Taser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
