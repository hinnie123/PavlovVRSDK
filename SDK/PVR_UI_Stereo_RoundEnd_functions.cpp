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

// Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.Get_FG_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Stereo_RoundEnd_C::Get_FG_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.Get_FG_Brush_1");

	UUI_Stereo_RoundEnd_C_Get_FG_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.IsWinner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Winner                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Stereo_RoundEnd_C::IsWinner(bool* Winner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.IsWinner");

	UUI_Stereo_RoundEnd_C_IsWinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Winner != nullptr)
		*Winner = params.Winner;
}


// Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.Get_bg_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Stereo_RoundEnd_C::Get_bg_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.Get_bg_Brush_1");

	UUI_Stereo_RoundEnd_C_Get_bg_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Stereo_RoundEnd_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.CustomEvent_1");

	UUI_Stereo_RoundEnd_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Stereo_RoundEnd_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.Construct");

	UUI_Stereo_RoundEnd_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.ExecuteUbergraph_UI_Stereo_RoundEnd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Stereo_RoundEnd_C::ExecuteUbergraph_UI_Stereo_RoundEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_RoundEnd.UI_Stereo_RoundEnd_C.ExecuteUbergraph_UI_Stereo_RoundEnd");

	UUI_Stereo_RoundEnd_C_ExecuteUbergraph_UI_Stereo_RoundEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
