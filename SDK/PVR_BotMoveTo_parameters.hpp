#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BotMoveTo.BotMoveTo_C.GetRandomLocation
struct UBotMoveTo_C_GetRandomLocation_Params
{
	class AVRPawn*                                     PawnSelf;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BotMoveTo.BotMoveTo_C.GetMoveLocation
struct UBotMoveTo_C_GetMoveLocation_Params
{
	class APavlovPawn*                                 PawnSelf;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BotMoveTo.BotMoveTo_C.GetControllerAndGun
struct UBotMoveTo_C_GetControllerAndGun_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGun_Base_C*                                 Gun;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AVRItemController*                           Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BotMoveTo.BotMoveTo_C.OnFail_D8AD614E42922E19A998A988427840D0
struct UBotMoveTo_C_OnFail_D8AD614E42922E19A998A988427840D0_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotMoveTo.BotMoveTo_C.OnSuccess_D8AD614E42922E19A998A988427840D0
struct UBotMoveTo_C_OnSuccess_D8AD614E42922E19A998A988427840D0_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotMoveTo.BotMoveTo_C.ReceiveExecuteAI
struct UBotMoveTo_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotMoveTo.BotMoveTo_C.ExecuteUbergraph_BotMoveTo
struct UBotMoveTo_C_ExecuteUbergraph_BotMoveTo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
