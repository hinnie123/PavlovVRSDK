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

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.MainHandHaptics
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_BoltCutters_C::MainHandHaptics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.MainHandHaptics");

	AItem_Escape_BoltCutters_C_MainHandHaptics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Close                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::PlayCloseAnim(bool Close)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlayCloseAnim");

	AItem_Escape_BoltCutters_C_PlayCloseAnim_Params params;
	params.Close = Close;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.SetOpenAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OpenAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::SetOpenAlpha(float OpenAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.SetOpenAlpha");

	AItem_Escape_BoltCutters_C_SetOpenAlpha_Params params;
	params.OpenAlpha = OpenAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.CheckFenceTouch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::CheckFenceTouch(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.CheckFenceTouch");

	AItem_Escape_BoltCutters_C_CheckFenceTouch_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlaySnipSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_BoltCutters_C::PlaySnipSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlaySnipSound");

	AItem_Escape_BoltCutters_C_PlaySnipSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.TryUseItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayError                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::TryUseItem(class UObject** Object, bool* PlayError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.TryUseItem");

	AItem_Escape_BoltCutters_C_TryUseItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayError != nullptr)
		*PlayError = params.PlayError;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_BoltCutters_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.UserConstructionScript");

	AItem_Escape_BoltCutters_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AItem_Escape_BoltCutters_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature");

	AItem_Escape_BoltCutters_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AItem_Escape_BoltCutters_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature");

	AItem_Escape_BoltCutters_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InputValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature(float InputValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature");

	AItem_Escape_BoltCutters_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature_Params params;
	params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.Use
// (Event, Public, BlueprintEvent)

void AItem_Escape_BoltCutters_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.Use");

	AItem_Escape_BoltCutters_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.Used");

	AItem_Escape_BoltCutters_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AItem_Escape_BoltCutters_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AItem_Escape_BoltCutters_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.DestroyObjective_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EscapeObjective_C**  EscapeObjective                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::DestroyObjective_Server(class ABP_EscapeObjective_C** EscapeObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.DestroyObjective_Server");

	AItem_Escape_BoltCutters_C_DestroyObjective_Server_Params params;
	params.EscapeObjective = EscapeObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlaySnipFX_Multi
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AItem_Escape_BoltCutters_C::PlaySnipFX_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlaySnipFX_Multi");

	AItem_Escape_BoltCutters_C_PlaySnipFX_Multi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.OnPick");

	AItem_Escape_BoltCutters_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.OnDrop
// (Event, Public, BlueprintEvent)

void AItem_Escape_BoltCutters_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.OnDrop");

	AItem_Escape_BoltCutters_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.ExecuteUbergraph_Item_Escape_BoltCutters
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_BoltCutters_C::ExecuteUbergraph_Item_Escape_BoltCutters(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.ExecuteUbergraph_Item_Escape_BoltCutters");

	AItem_Escape_BoltCutters_C_ExecuteUbergraph_Item_Escape_BoltCutters_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
