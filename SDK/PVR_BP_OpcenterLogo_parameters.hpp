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

// Function BP_OpcenterLogo.BP_OpcenterLogo_C.UserConstructionScript
struct ABP_OpcenterLogo_C_UserConstructionScript_Params
{
};

// Function BP_OpcenterLogo.BP_OpcenterLogo_C.ReceiveBeginPlay
struct ABP_OpcenterLogo_C_ReceiveBeginPlay_Params
{
};

// Function BP_OpcenterLogo.BP_OpcenterLogo_C.ReceiveTick
struct ABP_OpcenterLogo_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OpcenterLogo.BP_OpcenterLogo_C.ExecuteUbergraph_BP_OpcenterLogo
struct ABP_OpcenterLogo_C_ExecuteUbergraph_BP_OpcenterLogo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
