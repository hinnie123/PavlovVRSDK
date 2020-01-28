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

// Function Grenade_Flash.Grenade_Flash_C.GetFlashEffectiveness
struct AGrenade_Flash_C_GetFlashEffectiveness_Params
{
	struct FTransform                                  Flashed_Comp_Trans;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Flash_Origin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Grenade_Flash.Grenade_Flash_C.DetonateFlash
struct AGrenade_Flash_C_DetonateFlash_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.UserConstructionScript
struct AGrenade_Flash_C_UserConstructionScript_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.OnPlayerAffectedByFlass
struct AGrenade_Flash_C_OnPlayerAffectedByFlass_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_Flash.Grenade_Flash_C.ReceiveBeginPlay
struct AGrenade_Flash_C_ReceiveBeginPlay_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.OnDetonation
struct AGrenade_Flash_C_OnDetonation_Params
{
};

// Function Grenade_Flash.Grenade_Flash_C.OnPlayerFlashed
struct AGrenade_Flash_C_OnPlayerFlashed_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Effectiveness;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_Flash.Grenade_Flash_C.ExecuteUbergraph_Grenade_Flash
struct AGrenade_Flash_C_ExecuteUbergraph_Grenade_Flash_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
