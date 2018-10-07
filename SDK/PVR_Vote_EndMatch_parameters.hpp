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

// Function Vote_EndMatch.Vote_EndMatch_C.CreateContentWidget
struct AVote_EndMatch_C_CreateContentWidget_Params
{
	class UUserWidget*                                 Content;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vote_EndMatch.Vote_EndMatch_C.UserConstructionScript
struct AVote_EndMatch_C_UserConstructionScript_Params
{
};

// Function Vote_EndMatch.Vote_EndMatch_C.OnVoteEnded
struct AVote_EndMatch_C_OnVoteEnded_Params
{
	bool*                                              bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vote_EndMatch.Vote_EndMatch_C.ExecuteUbergraph_Vote_EndMatch
struct AVote_EndMatch_C_ExecuteUbergraph_Vote_EndMatch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
