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

// Function Bullet_Taser.Bullet_Taser_C.TryTasePlayer
struct ABullet_Taser_C_TryTasePlayer_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Bullet_Taser.Bullet_Taser_C.UserConstructionScript
struct ABullet_Taser_C_UserConstructionScript_Params
{
};

// Function Bullet_Taser.Bullet_Taser_C.ReceiveBeginPlay
struct ABullet_Taser_C_ReceiveBeginPlay_Params
{
};

// Function Bullet_Taser.Bullet_Taser_C.OnImpact
struct ABullet_Taser_C_OnImpact_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Bullet_Taser.Bullet_Taser_C.ExecuteUbergraph_Bullet_Taser
struct ABullet_Taser_C_ExecuteUbergraph_Bullet_Taser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
