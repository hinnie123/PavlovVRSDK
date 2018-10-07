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

// Function BP_Watch.BP_Watch_C.OnKillConfirmationPush
struct UBP_Watch_C_OnKillConfirmationPush_Params
{
	class APavlovPlayerState**                         Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Watch.BP_Watch_C.ExecuteUbergraph_BP_Watch
struct UBP_Watch_C_ExecuteUbergraph_BP_Watch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
