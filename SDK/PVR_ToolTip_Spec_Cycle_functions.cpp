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

// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Spec_Cycle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.UserConstructionScript"));

	AToolTip_Spec_Cycle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_Spec_Cycle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.ReceiveBeginPlay"));

	AToolTip_Spec_Cycle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.OnControllerTriggerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bTriggered                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Spec_Cycle_C::OnControllerTriggerChanged(bool bTriggered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.OnControllerTriggerChanged"));

	AToolTip_Spec_Cycle_C_OnControllerTriggerChanged_Params params;
	params.bTriggered = bTriggered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Spec_Cycle_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.OnDestroyed_Event_1"));

	AToolTip_Spec_Cycle_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.ExecuteUbergraph_ToolTip_Spec_Cycle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Spec_Cycle_C::ExecuteUbergraph_ToolTip_Spec_Cycle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.ExecuteUbergraph_ToolTip_Spec_Cycle"));

	AToolTip_Spec_Cycle_C_ExecuteUbergraph_ToolTip_Spec_Cycle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
