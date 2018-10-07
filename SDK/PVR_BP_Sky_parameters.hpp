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

// Function BP_Sky.BP_Sky_C.UserConstructionScript
struct ABP_Sky_C_UserConstructionScript_Params
{
};

// Function BP_Sky.BP_Sky_C.ReceiveTick
struct ABP_Sky_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky.BP_Sky_C.ExecuteUbergraph_BP_Sky
struct ABP_Sky_C_ExecuteUbergraph_BP_Sky_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
