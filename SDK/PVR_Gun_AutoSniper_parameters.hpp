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

// Function Gun_AutoSniper.Gun_AutoSniper_C.SetScopeCapture
struct AGun_AutoSniper_C_SetScopeCapture_Params
{
	bool                                               Capture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AutoSniper.Gun_AutoSniper_C.UserConstructionScript
struct AGun_AutoSniper_C_UserConstructionScript_Params
{
};

// Function Gun_AutoSniper.Gun_AutoSniper_C.OnPick
struct AGun_AutoSniper_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AutoSniper.Gun_AutoSniper_C.OnDrop
struct AGun_AutoSniper_C_OnDrop_Params
{
};

// Function Gun_AutoSniper.Gun_AutoSniper_C.OnUnderExploitChanged
struct AGun_AutoSniper_C_OnUnderExploitChanged_Params
{
	bool*                                              bUnderExploit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AutoSniper.Gun_AutoSniper_C.ExecuteUbergraph_Gun_AutoSniper
struct AGun_AutoSniper_C_ExecuteUbergraph_Gun_AutoSniper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
