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

// Function Gun_AUG.Gun_AUG_C.SetScopeCapture
struct AGun_AUG_C_SetScopeCapture_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AUG.Gun_AUG_C.UserConstructionScript
struct AGun_AUG_C_UserConstructionScript_Params
{
};

// Function Gun_AUG.Gun_AUG_C.OnPick
struct AGun_AUG_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AUG.Gun_AUG_C.OnDrop
struct AGun_AUG_C_OnDrop_Params
{
};

// Function Gun_AUG.Gun_AUG_C.ReceiveTick
struct AGun_AUG_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AUG.Gun_AUG_C.ExecuteUbergraph_Gun_AUG
struct AGun_AUG_C_ExecuteUbergraph_Gun_AUG_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
