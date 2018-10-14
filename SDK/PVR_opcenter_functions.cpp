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

// Function opcenter.opcenter_C.OnInventoryUpdate_Event_1
// (BlueprintCallable, BlueprintEvent)

void Aopcenter_C::OnInventoryUpdate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.OnInventoryUpdate_Event_1");

	Aopcenter_C_OnInventoryUpdate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aopcenter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.ReceiveBeginPlay");

	Aopcenter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Aopcenter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.ReceiveTick");

	Aopcenter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.CheckAndSwapControllers
// (BlueprintCallable, BlueprintEvent)

void Aopcenter_C::CheckAndSwapControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.CheckAndSwapControllers");

	Aopcenter_C_CheckAndSwapControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void Aopcenter_C::BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	Aopcenter_C_BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.Setup Menu Checker
// (BlueprintCallable, BlueprintEvent)

void Aopcenter_C::Setup_Menu_Checker()
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.Setup Menu Checker");

	Aopcenter_C_Setup_Menu_Checker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void Aopcenter_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.CustomEvent_1");

	Aopcenter_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void Aopcenter_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.CustomEvent_2");

	Aopcenter_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function opcenter.opcenter_C.ExecuteUbergraph_opcenter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Aopcenter_C::ExecuteUbergraph_opcenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function opcenter.opcenter_C.ExecuteUbergraph_opcenter");

	Aopcenter_C_ExecuteUbergraph_opcenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
