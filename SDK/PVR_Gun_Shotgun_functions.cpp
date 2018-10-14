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

// Function Gun_Shotgun.Gun_Shotgun_C.UnlockPump
// (Public, BlueprintCallable, BlueprintEvent)

void AGun_Shotgun_C::UnlockPump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.UnlockPump");

	AGun_Shotgun_C_UnlockPump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.LockPump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LockRatio                      (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::LockPump(float LockRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.LockPump");

	AGun_Shotgun_C_LockPump_Params params;
	params.LockRatio = LockRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.ShouldPumpByTrigger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::ShouldPumpByTrigger(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.ShouldPumpByTrigger");

	AGun_Shotgun_C_ShouldPumpByTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function Gun_Shotgun.Gun_Shotgun_C.ToggleReloadHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::ToggleReloadHandle(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.ToggleReloadHandle");

	AGun_Shotgun_C_ToggleReloadHandle_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.PlayPumpHaptic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHapticFeedbackEffect_Base* HapticEffect                   (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::PlayPumpHaptic(class UHapticFeedbackEffect_Base* HapticEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.PlayPumpHaptic");

	AGun_Shotgun_C_PlayPumpHaptic_Params params;
	params.HapticEffect = HapticEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.UserConstructionScript");

	AGun_Shotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_Shotgun_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_Shotgun_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_Shotgun_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature");

	AGun_Shotgun_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_Shotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.ReceiveBeginPlay");

	AGun_Shotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.ReceiveTick");

	AGun_Shotgun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.OnPumpDelta
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::OnPumpDelta(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.OnPumpDelta");

	AGun_Shotgun_C_OnPumpDelta_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.OnTwoHandGripChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::OnTwoHandGripChanged(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.OnTwoHandGripChanged");

	AGun_Shotgun_C_OnTwoHandGripChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.OnActionChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Shotgun_C::OnActionChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.OnActionChanged_Event_1");

	AGun_Shotgun_C_OnActionChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.OnOpenAction_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Shotgun_C::OnOpenAction_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.OnOpenAction_Event_1");

	AGun_Shotgun_C_OnOpenAction_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Shotgun_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.CustomEvent_1");

	AGun_Shotgun_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Shotgun.Gun_Shotgun_C.ExecuteUbergraph_Gun_Shotgun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Shotgun_C::ExecuteUbergraph_Gun_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Shotgun.Gun_Shotgun_C.ExecuteUbergraph_Gun_Shotgun");

	AGun_Shotgun_C_ExecuteUbergraph_Gun_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
