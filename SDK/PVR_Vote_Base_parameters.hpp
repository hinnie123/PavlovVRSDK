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

// Function Vote_Base.Vote_Base_C.CreateContentWidget
struct AVote_Base_C_CreateContentWidget_Params
{
	class UUserWidget*                                 Content;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Vote_Base.Vote_Base_C.UserConstructionScript
struct AVote_Base_C_UserConstructionScript_Params
{
};

// Function Vote_Base.Vote_Base_C.ReceiveBeginPlay
struct AVote_Base_C_ReceiveBeginPlay_Params
{
};

// Function Vote_Base.Vote_Base_C.OnVoteEnded
struct AVote_Base_C_OnVoteEnded_Params
{
	bool*                                              bSucceeded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vote_Base.Vote_Base_C.ExecuteUbergraph_Vote_Base
struct AVote_Base_C_ExecuteUbergraph_Vote_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
