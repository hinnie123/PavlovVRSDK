// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vote_Base.Vote_Base_C.CreateContentWidget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Content                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVote_Base_C::CreateContentWidget(class UUserWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_Base.Vote_Base_C.CreateContentWidget");

	AVote_Base_C_CreateContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function Vote_Base.Vote_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVote_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_Base.Vote_Base_C.UserConstructionScript");

	AVote_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vote_Base.Vote_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVote_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_Base.Vote_Base_C.ReceiveBeginPlay");

	AVote_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vote_Base.Vote_Base_C.OnVoteEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void AVote_Base_C::OnVoteEnded(bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_Base.Vote_Base_C.OnVoteEnded");

	AVote_Base_C_OnVoteEnded_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vote_Base.Vote_Base_C.ExecuteUbergraph_Vote_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVote_Base_C::ExecuteUbergraph_Vote_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vote_Base.Vote_Base_C.ExecuteUbergraph_Vote_Base");

	AVote_Base_C_ExecuteUbergraph_Vote_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
