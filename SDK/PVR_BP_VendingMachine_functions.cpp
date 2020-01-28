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

// Function BP_VendingMachine.BP_VendingMachine_C.UseSoftGrabConstraint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_VendingMachine_C::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.UseSoftGrabConstraint");

	ABP_VendingMachine_C_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VendingMachine.BP_VendingMachine_C.InitVendingMachine_Server
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MinPrice                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPrice                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_VendingMachine_C::InitVendingMachine_Server(int MinPrice, int MaxPrice, TArray<struct FName>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.InitVendingMachine_Server");

	ABP_VendingMachine_C_InitVendingMachine_Server_Params params;
	params.MinPrice = MinPrice;
	params.MaxPrice = MaxPrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function BP_VendingMachine.BP_VendingMachine_C.PlaySpinSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::PlaySpinSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.PlaySpinSound");

	ABP_VendingMachine_C_PlaySpinSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.PayForSpin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::PayForSpin(class ABP_PavlovPawn_C* PavPawn, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.PayForSpin");

	ABP_VendingMachine_C_PayForSpin_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (successful != nullptr)
		*successful = params.successful;
}


// Function BP_VendingMachine.BP_VendingMachine_C.ResetPlayerCash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::ResetPlayerCash(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.ResetPlayerCash");

	ABP_VendingMachine_C_ResetPlayerCash_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.ShowPlayerCash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::ShowPlayerCash(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.ShowPlayerCash");

	ABP_VendingMachine_C_ShowPlayerCash_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.SetInUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InUse                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::SetInUse(bool InUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.SetInUse");

	ABP_VendingMachine_C_SetInUse_Params params;
	params.InUse = InUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.OnRep_CurrentItems
// (BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::OnRep_CurrentItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.OnRep_CurrentItems");

	ABP_VendingMachine_C_OnRep_CurrentItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.SetVendingItems
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::SetVendingItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.SetVendingItems");

	ABP_VendingMachine_C_SetVendingItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.UpdateCash
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::UpdateCash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.UpdateCash");

	ABP_VendingMachine_C_UpdateCash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.OnRep_UpdatePlayerCash
// (BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::OnRep_UpdatePlayerCash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.OnRep_UpdatePlayerCash");

	ABP_VendingMachine_C_OnRep_UpdatePlayerCash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::SpawnItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.SpawnItem");

	ABP_VendingMachine_C_SpawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.PlayNotEnoughCashSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::PlayNotEnoughCashSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.PlayNotEnoughCashSound");

	ABP_VendingMachine_C_PlayNotEnoughCashSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.OnRep_Cost
// (BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::OnRep_Cost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.OnRep_Cost");

	ABP_VendingMachine_C_OnRep_Cost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.HasEnoughCash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasEnough_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::HasEnoughCash(class ABP_PavlovPawn_C* PavPawn, bool* HasEnough_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.HasEnoughCash");

	ABP_VendingMachine_C_HasEnoughCash_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasEnough_ != nullptr)
		*HasEnough_ = params.HasEnough_;
}


// Function BP_VendingMachine.BP_VendingMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.UserConstructionScript");

	ABP_VendingMachine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_VendingMachine_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.Timeline_0__FinishedFunc");

	ABP_VendingMachine_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_VendingMachine_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.Timeline_0__UpdateFunc");

	ABP_VendingMachine_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.Grabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.Grabbed");

	ABP_VendingMachine_C_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.LootGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.LootGrabbed");

	ABP_VendingMachine_C_LootGrabbed_Params params;
	params.PavPawn = PavPawn;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VendingMachine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.ReceiveBeginPlay");

	ABP_VendingMachine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_VendingMachine_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_VendingMachine_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__PawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::BndEvt__PawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__PawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_VendingMachine_C_BndEvt__PawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.SpinVendingWheel
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::SpinVendingWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.SpinVendingWheel");

	ABP_VendingMachine_C_SpinVendingWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InputValueDegrees              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature");

	ABP_VendingMachine_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params params;
	params.InputValueDegrees = InputValueDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.UnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.UnGrabbed");

	ABP_VendingMachine_C_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.DidPlayerDie
// (BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::DidPlayerDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.DidPlayerDie");

	ABP_VendingMachine_C_DidPlayerDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.Reset Handle
// (BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_C::Reset_Handle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.Reset Handle");

	ABP_VendingMachine_C_Reset_Handle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine.BP_VendingMachine_C.ExecuteUbergraph_BP_VendingMachine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_C::ExecuteUbergraph_BP_VendingMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine.BP_VendingMachine_C.ExecuteUbergraph_BP_VendingMachine");

	ABP_VendingMachine_C_ExecuteUbergraph_BP_VendingMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
