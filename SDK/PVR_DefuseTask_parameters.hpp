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

// Function DefuseTask.DefuseTask_C.CanDefuse
struct UDefuseTask_C_CanDefuse_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DefuseTask.DefuseTask_C.ReceiveExecuteAI
struct UDefuseTask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefuseTask.DefuseTask_C.ExecuteUbergraph_DefuseTask
struct UDefuseTask_C_ExecuteUbergraph_DefuseTask_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
