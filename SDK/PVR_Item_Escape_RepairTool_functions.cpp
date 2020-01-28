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

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetHandleRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HandleRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TurnOff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::SetHandleRotation(float HandleRotation, bool TurnOff, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetHandleRotation");

	AItem_Escape_RepairTool_C_SetHandleRotation_Params params;
	params.HandleRotation = HandleRotation;
	params.TurnOff = TurnOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetTriggerDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TriggerDown                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::SetTriggerDown(bool TriggerDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetTriggerDown");

	AItem_Escape_RepairTool_C_SetTriggerDown_Params params;
	params.TriggerDown = TriggerDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopTorchFX
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::StopTorchFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopTorchFX");

	AItem_Escape_RepairTool_C_StopTorchFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayTorchFX
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::PlayTorchFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayTorchFX");

	AItem_Escape_RepairTool_C_PlayTorchFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayRepairingSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::PlayRepairingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayRepairingSound");

	AItem_Escape_RepairTool_C_PlayRepairingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TryUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayError                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::TryUseItem(class UObject** Object, bool* PlayError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TryUseItem");

	AItem_Escape_RepairTool_C_TryUseItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayError != nullptr)
		*PlayError = params.PlayError;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TryRepair_Client
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::TryRepair_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TryRepair_Client");

	AItem_Escape_RepairTool_C_TryRepair_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnRep_RepairTicks
// (BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::OnRep_RepairTicks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnRep_RepairTicks");

	AItem_Escape_RepairTool_C_OnRep_RepairTicks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TickRepair
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::TickRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TickRepair");

	AItem_Escape_RepairTool_C_TickRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopGasSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::StopGasSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopGasSound");

	AItem_Escape_RepairTool_C_StopGasSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopTorchSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::StopTorchSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopTorchSound");

	AItem_Escape_RepairTool_C_StopTorchSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayGasSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::PlayGasSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayGasSound");

	AItem_Escape_RepairTool_C_PlayGasSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetGasVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::SetGasVolume(float VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetGasVolume");

	AItem_Escape_RepairTool_C_SetGasVolume_Params params;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayTorchSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::PlayTorchSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayTorchSound");

	AItem_Escape_RepairTool_C_PlayTorchSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayFlintStrikeSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::PlayFlintStrikeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayFlintStrikeSound");

	AItem_Escape_RepairTool_C_PlayFlintStrikeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.CanGetPickedBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AItem_Escape_RepairTool_C::CanGetPickedBy(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.CanGetPickedBy");

	AItem_Escape_RepairTool_C_CanGetPickedBy_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.UserConstructionScript");

	AItem_Escape_RepairTool_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Repair Objective
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EscapeObjective_C*   EscapeObjective                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::Repair_Objective(class ABP_EscapeObjective_C* EscapeObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Repair Objective");

	AItem_Escape_RepairTool_C_Repair_Objective_Params params;
	params.EscapeObjective = EscapeObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Use
// (Event, Public, BlueprintEvent)

void AItem_Escape_RepairTool_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Use");

	AItem_Escape_RepairTool_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.RepairLock
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Escape_Lock_C*       Escape_Lock                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::RepairLock(class ABP_Escape_Lock_C* Escape_Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.RepairLock");

	AItem_Escape_RepairTool_C_RepairLock_Params params;
	params.Escape_Lock = Escape_Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InputValueDegrees              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature");

	AItem_Escape_RepairTool_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params params;
	params.InputValueDegrees = InputValueDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Used");

	AItem_Escape_RepairTool_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnPick");

	AItem_Escape_RepairTool_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnDrop
// (Event, Public, BlueprintEvent)

void AItem_Escape_RepairTool_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnDrop");

	AItem_Escape_RepairTool_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AItem_Escape_RepairTool_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	AItem_Escape_RepairTool_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AItem_Escape_RepairTool_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature");

	AItem_Escape_RepairTool_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.RepairObjective
// (BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::RepairObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.RepairObjective");

	AItem_Escape_RepairTool_C_RepairObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Start RepairingObjective
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AItem_Escape_RepairTool_C::Start_RepairingObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Start RepairingObjective");

	AItem_Escape_RepairTool_C_Start_RepairingObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AItem_Escape_RepairTool_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.ReceiveDestroyed");

	AItem_Escape_RepairTool_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.ExecuteUbergraph_Item_Escape_RepairTool
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_RepairTool_C::ExecuteUbergraph_Item_Escape_RepairTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.ExecuteUbergraph_Item_Escape_RepairTool");

	AItem_Escape_RepairTool_C_ExecuteUbergraph_Item_Escape_RepairTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
