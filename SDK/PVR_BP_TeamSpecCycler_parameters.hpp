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

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.SpecIndex
struct UBP_TeamSpecCycler_C_SpecIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.PushCurrent
struct UBP_TeamSpecCycler_C_PushCurrent_Params
{
};

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.CyclePrev
struct UBP_TeamSpecCycler_C_CyclePrev_Params
{
};

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.CycleNext
struct UBP_TeamSpecCycler_C_CycleNext_Params
{
};

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.Cycle
struct UBP_TeamSpecCycler_C_Cycle_Params
{
	bool                                               Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.OnDrySpecPlayer__DelegateSignature
struct UBP_TeamSpecCycler_C_OnDrySpecPlayer__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.OnSpecPlayer__DelegateSignature
struct UBP_TeamSpecCycler_C_OnSpecPlayer__DelegateSignature_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
