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

// Function BP_Escape_Lock.BP_Escape_Lock_C.LockpickOverlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::LockpickOverlap(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.LockpickOverlap");

	ABP_Escape_Lock_C_LockpickOverlap_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.PlayLockpickSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Lock1_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::PlayLockpickSound(bool Lock1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.PlayLockpickSound");

	ABP_Escape_Lock_C_PlayLockpickSound_Params params;
	params.Lock1_ = Lock1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.CanGrab?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::CanGrab_(bool* CanGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.CanGrab?");

	ABP_Escape_Lock_C_CanGrab__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanGrab != nullptr)
		*CanGrab = params.CanGrab;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.EvaluateUnlockDegrees
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Degrees                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handle1_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::EvaluateUnlockDegrees(float Degrees, bool Handle1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.EvaluateUnlockDegrees");

	ABP_Escape_Lock_C_EvaluateUnlockDegrees_Params params;
	params.Degrees = Degrees;
	params.Handle1_ = Handle1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.Unlock_Client
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handle1_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::Unlock_Client(bool Handle1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.Unlock_Client");

	ABP_Escape_Lock_C_Unlock_Client_Params params;
	params.Handle1_ = Handle1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.ShowLocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::ShowLocks(bool Hidden_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.ShowLocks");

	ABP_Escape_Lock_C_ShowLocks_Params params;
	params.Hidden_ = Hidden_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.EscapeStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::EscapeStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.EscapeStateChanged");

	ABP_Escape_Lock_C_EscapeStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.CanRepair
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanRepair_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::CanRepair(bool* CanRepair_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.CanRepair");

	ABP_Escape_Lock_C_CanRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRepair_ != nullptr)
		*CanRepair_ = params.CanRepair_;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.CanLockpick?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVRItem*                 VRItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanLockpick                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::CanLockpick_(class AVRItem* VRItem, bool* CanLockpick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.CanLockpick?");

	ABP_Escape_Lock_C_CanLockpick__Params params;
	params.VRItem = VRItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanLockpick != nullptr)
		*CanLockpick = params.CanLockpick;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.MovingDoor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::MovingDoor(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.MovingDoor");

	ABP_Escape_Lock_C_MovingDoor_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.SetObjectiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EscapeObjectiveState> EscapeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::SetObjectiveState(TEnumAsByte<E_EscapeObjectiveState> EscapeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.SetObjectiveState");

	ABP_Escape_Lock_C_SetObjectiveState_Params params;
	params.EscapeState = EscapeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.OnRep_EscapeState
// (BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::OnRep_EscapeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.OnRep_EscapeState");

	ABP_Escape_Lock_C_OnRep_EscapeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.UserConstructionScript");

	ABP_Escape_Lock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.MoveDoor__FinishedFunc
// (BlueprintEvent)

void ABP_Escape_Lock_C::MoveDoor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.MoveDoor__FinishedFunc");

	ABP_Escape_Lock_C_MoveDoor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.MoveDoor__UpdateFunc
// (BlueprintEvent)

void ABP_Escape_Lock_C::MoveDoor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.MoveDoor__UpdateFunc");

	ABP_Escape_Lock_C_MoveDoor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Escape_Lock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.ReceiveBeginPlay");

	ABP_Escape_Lock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.ResetObjective_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::ResetObjective_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.ResetObjective_Event");

	ABP_Escape_Lock_C_ResetObjective_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.LockpickEscape_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::LockpickEscape_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.LockpickEscape_Server");

	ABP_Escape_Lock_C_LockpickEscape_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.OpenDoor
// (BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.OpenDoor");

	ABP_Escape_Lock_C_OpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.CloseDoor
// (BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::CloseDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.CloseDoor");

	ABP_Escape_Lock_C_CloseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.PlayRepairSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::PlayRepairSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.PlayRepairSound");

	ABP_Escape_Lock_C_PlayRepairSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InputValueDegrees              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params params;
	params.InputValueDegrees = InputValueDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void ABP_Escape_Lock_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void ABP_Escape_Lock_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void ABP_Escape_Lock_C::BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void ABP_Escape_Lock_C::BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InputValueDegrees              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params params;
	params.InputValueDegrees = InputValueDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Escape_Lock_C::BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Escape_Lock_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Escape_Lock.BP_Escape_Lock_C.ExecuteUbergraph_BP_Escape_Lock
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Lock_C::ExecuteUbergraph_BP_Escape_Lock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.ExecuteUbergraph_BP_Escape_Lock");

	ABP_Escape_Lock_C_ExecuteUbergraph_BP_Escape_Lock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Lock.BP_Escape_Lock_C.ResetObjective__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Escape_Lock_C::ResetObjective__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Lock.BP_Escape_Lock_C.ResetObjective__DelegateSignature");

	ABP_Escape_Lock_C_ResetObjective__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
