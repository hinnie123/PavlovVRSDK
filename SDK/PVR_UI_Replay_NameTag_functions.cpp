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

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Replay_NameTag_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Replay_NameTag.UI_Replay_NameTag_C.GetColorAndOpacity_1");

	UUI_Replay_NameTag_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Replay_NameTag.UI_Replay_NameTag_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Replay_NameTag_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Replay_NameTag.UI_Replay_NameTag_C.GetBrush_1");

	UUI_Replay_NameTag_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Replay_NameTag.UI_Replay_NameTag_C.Get_playerName_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_Replay_NameTag_C::Get_playerName_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Replay_NameTag.UI_Replay_NameTag_C.Get_playerName_ColorAndOpacity_1");

	UUI_Replay_NameTag_C_Get_playerName_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Replay_NameTag.UI_Replay_NameTag_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Replay_NameTag_C::SetPlayerState(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Replay_NameTag.UI_Replay_NameTag_C.SetPlayerState");

	UUI_Replay_NameTag_C_SetPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Replay_NameTag.UI_Replay_NameTag_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Replay_NameTag_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Replay_NameTag.UI_Replay_NameTag_C.Tick");

	UUI_Replay_NameTag_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Replay_NameTag.UI_Replay_NameTag_C.ExecuteUbergraph_UI_Replay_NameTag
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Replay_NameTag_C::ExecuteUbergraph_UI_Replay_NameTag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Replay_NameTag.UI_Replay_NameTag_C.ExecuteUbergraph_UI_Replay_NameTag");

	UUI_Replay_NameTag_C_ExecuteUbergraph_UI_Replay_NameTag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
