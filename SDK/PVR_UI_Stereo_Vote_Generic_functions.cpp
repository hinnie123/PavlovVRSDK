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

// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Get_VotesHList_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Stereo_Vote_Generic_C::Get_VotesHList_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Get_VotesHList_Visibility_1"));

	UUI_Stereo_Vote_Generic_C_Get_VotesHList_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Get_bg_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Stereo_Vote_Generic_C::Get_bg_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Get_bg_Brush_1"));

	UUI_Stereo_Vote_Generic_C_Get_bg_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Stereo_Vote_Generic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Construct"));

	UUI_Stereo_Vote_Generic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Stereo_Vote_Generic_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Tick"));

	UUI_Stereo_Vote_Generic_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.ExecuteUbergraph_UI_Stereo_Vote_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Stereo_Vote_Generic_C::ExecuteUbergraph_UI_Stereo_Vote_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.ExecuteUbergraph_UI_Stereo_Vote_Generic"));

	UUI_Stereo_Vote_Generic_C_ExecuteUbergraph_UI_Stereo_Vote_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
