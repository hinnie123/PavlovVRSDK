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

// Function BP_MGSRTarget.BP_MGSRTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MGSRTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.UserConstructionScript");

	ABP_MGSRTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MGSRTarget_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.Timeline_0__FinishedFunc");

	ABP_MGSRTarget_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MGSRTarget_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.Timeline_0__UpdateFunc");

	ABP_MGSRTarget_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MGSRTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.ReceiveBeginPlay");

	ABP_MGSRTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.MG Hit
// (BlueprintCallable, BlueprintEvent)

void ABP_MGSRTarget_C::MG_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.MG Hit");

	ABP_MGSRTarget_C_MG_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.MGOverRotate
// (BlueprintCallable, BlueprintEvent)

void ABP_MGSRTarget_C::MGOverRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.MGOverRotate");

	ABP_MGSRTarget_C_MGOverRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.OnHitCMP_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MGSRTarget_C::OnHitCMP_Event(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.OnHitCMP_Event");

	ABP_MGSRTarget_C_OnHitCMP_Event_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.Reset Can Score
// (BlueprintCallable, BlueprintEvent)

void ABP_MGSRTarget_C::Reset_Can_Score()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.Reset Can Score");

	ABP_MGSRTarget_C_Reset_Can_Score_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.ResetMiniGameTarget_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_MGSRTarget_C::ResetMiniGameTarget_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.ResetMiniGameTarget_Event");

	ABP_MGSRTarget_C_ResetMiniGameTarget_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.Reset Hit Rotate
// (BlueprintCallable, BlueprintEvent)

void ABP_MGSRTarget_C::Reset_Hit_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.Reset Hit Rotate");

	ABP_MGSRTarget_C_Reset_Hit_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGSRTarget.BP_MGSRTarget_C.ExecuteUbergraph_BP_MGSRTarget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MGSRTarget_C::ExecuteUbergraph_BP_MGSRTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGSRTarget.BP_MGSRTarget_C.ExecuteUbergraph_BP_MGSRTarget");

	ABP_MGSRTarget_C_ExecuteUbergraph_BP_MGSRTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
