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

// Function BP_BRDoor.BP_BRDoor_C.UseSoftGrabConstraint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BRDoor_C::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.UseSoftGrabConstraint");

	ABP_BRDoor_C_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BRDoor.BP_BRDoor_C.PlayCloseSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BRDoor_C::PlayCloseSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.PlayCloseSound");

	ABP_BRDoor_C_PlayCloseSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.PlayOpenSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BRDoor_C::PlayOpenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.PlayOpenSound");

	ABP_BRDoor_C_PlayOpenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.CanMoveDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanMove                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::CanMoveDoor(bool* CanMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.CanMoveDoor");

	ABP_BRDoor_C_CanMoveDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;
}


// Function BP_BRDoor.BP_BRDoor_C.OnRep_DoorState
// (BlueprintCallable, BlueprintEvent)

void ABP_BRDoor_C::OnRep_DoorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.OnRep_DoorState");

	ABP_BRDoor_C_OnRep_DoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.SetDoorState_Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DoorState>       DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::SetDoorState_Server(TEnumAsByte<E_DoorState> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.SetDoorState_Server");

	ABP_BRDoor_C_SetDoorState_Server_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BRDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.UserConstructionScript");

	ABP_BRDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.MoveDoor_Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_BRDoor_C::MoveDoor_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.MoveDoor_Timeline__FinishedFunc");

	ABP_BRDoor_C_MoveDoor_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.MoveDoor_Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_BRDoor_C::MoveDoor_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.MoveDoor_Timeline__UpdateFunc");

	ABP_BRDoor_C_MoveDoor_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.UnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.UnGrabbed");

	ABP_BRDoor_C_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BRDoor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.ReceiveBeginPlay");

	ABP_BRDoor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.OnDoorStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DoorState>       DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::OnDoorStateChanged_Event(TEnumAsByte<E_DoorState> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.OnDoorStateChanged_Event");

	ABP_BRDoor_C_OnDoorStateChanged_Event_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.MoveDoor
// (BlueprintCallable, BlueprintEvent)

void ABP_BRDoor_C::MoveDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.MoveDoor");

	ABP_BRDoor_C_MoveDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.Grabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.Grabbed");

	ABP_BRDoor_C_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.LootGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.LootGrabbed");

	ABP_BRDoor_C_LootGrabbed_Params params;
	params.PavPawn = PavPawn;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BRDoor_C::BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BRDoor_C_BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_BRDoor.BP_BRDoor_C.ExecuteUbergraph_BP_BRDoor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::ExecuteUbergraph_BP_BRDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.ExecuteUbergraph_BP_BRDoor");

	ABP_BRDoor_C_ExecuteUbergraph_BP_BRDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRDoor.BP_BRDoor_C.OnDoorStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DoorState>       DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRDoor_C::OnDoorStateChanged__DelegateSignature(TEnumAsByte<E_DoorState> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDoor.BP_BRDoor_C.OnDoorStateChanged__DelegateSignature");

	ABP_BRDoor_C_OnDoorStateChanged__DelegateSignature_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
