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

// Function BP_BloodSplat.BP_BloodSplat_C.UserConstructionScript
struct ABP_BloodSplat_C_UserConstructionScript_Params
{
};

// Function BP_BloodSplat.BP_BloodSplat_C.ReceiveBeginPlay
struct ABP_BloodSplat_C_ReceiveBeginPlay_Params
{
};

// Function BP_BloodSplat.BP_BloodSplat_C.ReceiveTick
struct ABP_BloodSplat_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BloodSplat.BP_BloodSplat_C.ExecuteUbergraph_BP_BloodSplat
struct ABP_BloodSplat_C_ExecuteUbergraph_BP_BloodSplat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
