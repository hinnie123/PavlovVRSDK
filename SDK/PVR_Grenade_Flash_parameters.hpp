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

// Function Grenade_Flash.Grenade_Flash_C.UserConstructionScript
struct AGrenade_Flash_C_UserConstructionScript_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.OnDetonation
struct AGrenade_Flash_C_OnDetonation_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.ReceiveBeginPlay
struct AGrenade_Flash_C_ReceiveBeginPlay_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.OnPlayerAffectedByFlass
struct AGrenade_Flash_C_OnPlayerAffectedByFlass_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_Flash.Grenade_Flash_C.ExecuteUbergraph_Grenade_Flash
struct AGrenade_Flash_C_ExecuteUbergraph_Grenade_Flash_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
