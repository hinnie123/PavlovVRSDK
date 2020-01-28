// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vote_KickPlayer.Vote_KickPlayer_C.CreateContentWidget
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Content                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVote_KickPlayer_C::CreateContentWidget(class UUserWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_KickPlayer.Vote_KickPlayer_C.CreateContentWidget");

	AVote_KickPlayer_C_CreateContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function Vote_KickPlayer.Vote_KickPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVote_KickPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_KickPlayer.Vote_KickPlayer_C.UserConstructionScript");

	AVote_KickPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vote_KickPlayer.Vote_KickPlayer_C.OnVoteEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bSucceeded                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVote_KickPlayer_C::OnVoteEnded(bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_KickPlayer.Vote_KickPlayer_C.OnVoteEnded");

	AVote_KickPlayer_C_OnVoteEnded_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vote_KickPlayer.Vote_KickPlayer_C.ExecuteUbergraph_Vote_KickPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVote_KickPlayer_C::ExecuteUbergraph_Vote_KickPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_KickPlayer.Vote_KickPlayer_C.ExecuteUbergraph_Vote_KickPlayer");

	AVote_KickPlayer_C_ExecuteUbergraph_Vote_KickPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
