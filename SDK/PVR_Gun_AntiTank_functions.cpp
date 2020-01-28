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

// Function Gun_AntiTank.Gun_AntiTank_C.SpawnBoltSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*               Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::SpawnBoltSound(class USoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.SpawnBoltSound");

	AGun_AntiTank_C_SpawnBoltSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AntiTank_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.UserConstructionScript");

	AGun_AntiTank_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.OnNotifyEnd_0915690B41EC6BE8139B168874F8B9C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::OnNotifyEnd_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.OnNotifyEnd_0915690B41EC6BE8139B168874F8B9C3");

	AGun_AntiTank_C_OnNotifyEnd_0915690B41EC6BE8139B168874F8B9C3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.OnNotifyBegin_0915690B41EC6BE8139B168874F8B9C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::OnNotifyBegin_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.OnNotifyBegin_0915690B41EC6BE8139B168874F8B9C3");

	AGun_AntiTank_C_OnNotifyBegin_0915690B41EC6BE8139B168874F8B9C3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.OnInterrupted_0915690B41EC6BE8139B168874F8B9C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::OnInterrupted_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.OnInterrupted_0915690B41EC6BE8139B168874F8B9C3");

	AGun_AntiTank_C_OnInterrupted_0915690B41EC6BE8139B168874F8B9C3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.OnBlendOut_0915690B41EC6BE8139B168874F8B9C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::OnBlendOut_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.OnBlendOut_0915690B41EC6BE8139B168874F8B9C3");

	AGun_AntiTank_C_OnBlendOut_0915690B41EC6BE8139B168874F8B9C3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.OnCompleted_0915690B41EC6BE8139B168874F8B9C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::OnCompleted_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.OnCompleted_0915690B41EC6BE8139B168874F8B9C3");

	AGun_AntiTank_C_OnCompleted_0915690B41EC6BE8139B168874F8B9C3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_AntiTank_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_AntiTank_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature");

	AGun_AntiTank_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_AntiTank_C::BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature");

	AGun_AntiTank_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.Fired
// (Event, Public, BlueprintEvent)

void AGun_AntiTank_C::Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.Fired");

	AGun_AntiTank_C_Fired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_AntiTank_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.ReceiveBeginPlay");

	AGun_AntiTank_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AntiTank.Gun_AntiTank_C.ExecuteUbergraph_Gun_AntiTank
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AntiTank_C::ExecuteUbergraph_Gun_AntiTank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AntiTank.Gun_AntiTank_C.ExecuteUbergraph_Gun_AntiTank");

	AGun_AntiTank_C_ExecuteUbergraph_Gun_AntiTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
