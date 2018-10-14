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

// Function Gun_Kar98.Gun_Kar98_C.UpdateChamber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Kar98_C::UpdateChamber(bool Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.UpdateChamber");

	AGun_Kar98_C_UpdateChamber_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Kar98_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.UserConstructionScript");

	AGun_Kar98_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_Kar98_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (Parm, IsPlainOldData)
// struct FVector                 InputDelta                     (Parm, IsPlainOldData)

void AGun_Kar98_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature");

	AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_Kar98_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature");

	AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_Kar98_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.ReceiveBeginPlay");

	AGun_Kar98_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.OnChamberStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChamberIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Kar98_C::OnChamberStateChanged_Event_1(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.OnChamberStateChanged_Event_1");

	AGun_Kar98_C_OnChamberStateChanged_Event_1_Params params;
	params.ChamberIndex = ChamberIndex;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Kar98.Gun_Kar98_C.ExecuteUbergraph_Gun_Kar98
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun_Kar98_C::ExecuteUbergraph_Gun_Kar98(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Kar98.Gun_Kar98_C.ExecuteUbergraph_Gun_Kar98");

	AGun_Kar98_C_ExecuteUbergraph_Gun_Kar98_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
