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

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminKillPlayer
struct ABP_PavlovPlayerController_C_AdminKillPlayer_Params
{
	class APavlovPlayerState*                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminTeleportPlayer
struct ABP_PavlovPlayerController_C_AdminTeleportPlayer_Params
{
	class APavlovPlayerState*                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.UserConstructionScript
struct ABP_PavlovPlayerController_C_UserConstructionScript_Params
{
};

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ReceiveBeginPlay
struct ABP_PavlovPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.OnBuyingChanged_Event_1
struct ABP_PavlovPlayerController_C_OnBuyingChanged_Event_1_Params
{
	bool                                               bBuying;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminAction
struct ABP_PavlovPlayerController_C_AdminAction_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_AdminAction>                         Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ExecuteUbergraph_BP_PavlovPlayerController
struct ABP_PavlovPlayerController_C_ExecuteUbergraph_BP_PavlovPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
