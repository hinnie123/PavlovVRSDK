#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WaypointMoveTo.WaypointMoveTo_C.MoveToWaypoint
struct UWaypointMoveTo_C_MoveToWaypoint_Params
{
};

// Function WaypointMoveTo.WaypointMoveTo_C.GetMoveLocation
struct UWaypointMoveTo_C_GetMoveLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WaypointMoveTo.WaypointMoveTo_C.ReceiveExecuteAI
struct UWaypointMoveTo_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaypointMoveTo.WaypointMoveTo_C.ReceiveTickAI
struct UWaypointMoveTo_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaypointMoveTo.WaypointMoveTo_C.ExecuteUbergraph_WaypointMoveTo
struct UWaypointMoveTo_C_ExecuteUbergraph_WaypointMoveTo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
