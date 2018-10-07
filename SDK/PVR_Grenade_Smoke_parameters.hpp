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

// Function Grenade_Smoke.Grenade_Smoke_C.OnRep_bSmokeActive
struct AGrenade_Smoke_C_OnRep_bSmokeActive_Params
{
};

// Function Grenade_Smoke.Grenade_Smoke_C.UserConstructionScript
struct AGrenade_Smoke_C_UserConstructionScript_Params
{
};

// Function Grenade_Smoke.Grenade_Smoke_C.StartSmoke
struct AGrenade_Smoke_C_StartSmoke_Params
{
};

// Function Grenade_Smoke.Grenade_Smoke_C.SpawnSingleParticle
struct AGrenade_Smoke_C_SpawnSingleParticle_Params
{
	struct FVector                                     LocalOffset;                                              // (Parm, IsPlainOldData)
};

// Function Grenade_Smoke.Grenade_Smoke_C.OnDetonation
struct AGrenade_Smoke_C_OnDetonation_Params
{
};

// Function Grenade_Smoke.Grenade_Smoke_C.ReceiveBeginPlay
struct AGrenade_Smoke_C_ReceiveBeginPlay_Params
{
};

// Function Grenade_Smoke.Grenade_Smoke_C.ReceiveTick
struct AGrenade_Smoke_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_Smoke.Grenade_Smoke_C.ExecuteUbergraph_Grenade_Smoke
struct AGrenade_Smoke_C_ExecuteUbergraph_Grenade_Smoke_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
