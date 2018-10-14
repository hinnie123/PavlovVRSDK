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

// Function Gun_AWP.Gun_AWP_C.SetScopeCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AWP_C::SetScopeCapture(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.SetScopeCapture");

	AGun_AWP_C_SetScopeCapture_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AWP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.UserConstructionScript");

	AGun_AWP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AWP_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.OnPick");

	AGun_AWP_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.OnDrop
// (Event, Public, BlueprintEvent)

void AGun_AWP_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.OnDrop");

	AGun_AWP_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_AWP_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_AWP_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.OnUnderExploitChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bUnderExploit                  (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AWP_C::OnUnderExploitChanged(bool* bUnderExploit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.OnUnderExploitChanged");

	AGun_AWP_C_OnUnderExploitChanged_Params params;
	params.bUnderExploit = bUnderExploit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (Parm, IsPlainOldData)
// struct FVector                 InputDelta                     (Parm, IsPlainOldData)

void AGun_AWP_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature");

	AGun_AWP_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_AWP_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature");

	AGun_AWP_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_AWP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.ReceiveBeginPlay");

	AGun_AWP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.OnChamberStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChamberIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AWP_C::OnChamberStateChanged_Event_1(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.OnChamberStateChanged_Event_1");

	AGun_AWP_C_OnChamberStateChanged_Event_1_Params params;
	params.ChamberIndex = ChamberIndex;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AWP.Gun_AWP_C.ExecuteUbergraph_Gun_AWP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AWP_C::ExecuteUbergraph_Gun_AWP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AWP.Gun_AWP_C.ExecuteUbergraph_Gun_AWP");

	AGun_AWP_C_ExecuteUbergraph_Gun_AWP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
