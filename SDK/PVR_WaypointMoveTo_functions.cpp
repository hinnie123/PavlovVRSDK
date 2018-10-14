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

// Function WaypointMoveTo.WaypointMoveTo_C.MoveToWaypoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWaypointMoveTo_C::MoveToWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMoveTo.WaypointMoveTo_C.MoveToWaypoint");

	UWaypointMoveTo_C_MoveToWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointMoveTo.WaypointMoveTo_C.GetMoveLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UWaypointMoveTo_C::GetMoveLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMoveTo.WaypointMoveTo_C.GetMoveLocation");

	UWaypointMoveTo_C_GetMoveLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function WaypointMoveTo.WaypointMoveTo_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UWaypointMoveTo_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMoveTo.WaypointMoveTo_C.ReceiveExecuteAI");

	UWaypointMoveTo_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointMoveTo.WaypointMoveTo_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UWaypointMoveTo_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMoveTo.WaypointMoveTo_C.ReceiveTickAI");

	UWaypointMoveTo_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointMoveTo.WaypointMoveTo_C.ExecuteUbergraph_WaypointMoveTo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWaypointMoveTo_C::ExecuteUbergraph_WaypointMoveTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMoveTo.WaypointMoveTo_C.ExecuteUbergraph_WaypointMoveTo");

	UWaypointMoveTo_C_ExecuteUbergraph_WaypointMoveTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
