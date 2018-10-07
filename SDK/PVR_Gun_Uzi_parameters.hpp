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

// Function Gun_Uzi.Gun_Uzi_C.UserConstructionScript
struct AGun_Uzi_C_UserConstructionScript_Params
{
};

// Function Gun_Uzi.Gun_Uzi_C.ReceiveTick
struct AGun_Uzi_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Uzi.Gun_Uzi_C.ExecuteUbergraph_Gun_Uzi
struct AGun_Uzi_C_ExecuteUbergraph_Gun_Uzi_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
