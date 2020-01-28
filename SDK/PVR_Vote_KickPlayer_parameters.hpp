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

// Function Vote_KickPlayer.Vote_KickPlayer_C.CreateContentWidget
struct AVote_KickPlayer_C_CreateContentWidget_Params
{
	class UUserWidget*                                 Content;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Vote_KickPlayer.Vote_KickPlayer_C.UserConstructionScript
struct AVote_KickPlayer_C_UserConstructionScript_Params
{
};

// Function Vote_KickPlayer.Vote_KickPlayer_C.OnVoteEnded
struct AVote_KickPlayer_C_OnVoteEnded_Params
{
	bool*                                              bSucceeded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vote_KickPlayer.Vote_KickPlayer_C.ExecuteUbergraph_Vote_KickPlayer
struct AVote_KickPlayer_C_ExecuteUbergraph_Vote_KickPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
