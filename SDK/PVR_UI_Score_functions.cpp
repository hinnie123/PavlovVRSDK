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

// Function UI_Score.UI_Score_C.SetScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_C::SetScore(float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score.UI_Score_C.SetScore");

	UUI_Score_C_SetScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score.UI_Score_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Score_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score.UI_Score_C.Construct");

	UUI_Score_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score.UI_Score_C.ExecuteUbergraph_UI_Score
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_C::ExecuteUbergraph_UI_Score(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score.UI_Score_C.ExecuteUbergraph_UI_Score");

	UUI_Score_C_ExecuteUbergraph_UI_Score_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
