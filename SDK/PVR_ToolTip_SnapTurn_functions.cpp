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

// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_SnapTurn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.UserConstructionScript"));

	AToolTip_SnapTurn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_SnapTurn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.ReceiveBeginPlay"));

	AToolTip_SnapTurn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SnapTurn_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.OnDestroyed_Event_1"));

	AToolTip_SnapTurn_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.OnSnapTurn_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SnapTurn_C::OnSnapTurn_Event_1(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.OnSnapTurn_Event_1"));

	AToolTip_SnapTurn_C_OnSnapTurn_Event_1_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.ExecuteUbergraph_ToolTip_SnapTurn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SnapTurn_C::ExecuteUbergraph_ToolTip_SnapTurn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.ExecuteUbergraph_ToolTip_SnapTurn"));

	AToolTip_SnapTurn_C_ExecuteUbergraph_ToolTip_SnapTurn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
