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

// Function BP_BotAIController.BP_BotAIController_C.CheckBomb
struct ABP_BotAIController_C_CheckBomb_Params
{
};

// Function BP_BotAIController.BP_BotAIController_C.GetBehaviorByGameMode
struct ABP_BotAIController_C_GetBehaviorByGameMode_Params
{
	class UBehaviorTree*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BotAIController.BP_BotAIController_C.ReloadWeapon
struct ABP_BotAIController_C_ReloadWeapon_Params
{
};

// Function BP_BotAIController.BP_BotAIController_C.AreControllersFoes
struct ABP_BotAIController_C_AreControllersFoes_Params
{
	class AController*                                 A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Foe;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BotAIController.BP_BotAIController_C.UserConstructionScript
struct ABP_BotAIController_C_UserConstructionScript_Params
{
};

// Function BP_BotAIController.BP_BotAIController_C.OnKill_Event_1
struct ABP_BotAIController_C_OnKill_Event_1_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BotAIController.BP_BotAIController_C.OnUnpossess
struct ABP_BotAIController_C_OnUnpossess_Params
{
	class APawn**                                      UnpossessedPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BotAIController.BP_BotAIController_C.OnPossess
struct ABP_BotAIController_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BotAIController.BP_BotAIController_C.ReceiveBeginPlay
struct ABP_BotAIController_C_ReceiveBeginPlay_Params
{
};

// Function BP_BotAIController.BP_BotAIController_C.ExecuteUbergraph_BP_BotAIController
struct ABP_BotAIController_C_ExecuteUbergraph_BP_BotAIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
