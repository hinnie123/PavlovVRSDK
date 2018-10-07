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

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_DamageCauser_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_KillfeedEntry_C::Get_DamageCauser_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_DamageCauser_Brush_1"));

	UUI_KillfeedEntry_C_Get_DamageCauser_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_DamageCauserBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_KillfeedEntry_C::Get_DamageCauserBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_DamageCauserBox_Visibility_1"));

	UUI_KillfeedEntry_C_Get_DamageCauserBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_Headshot_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_KillfeedEntry_C::Get_Headshot_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_Headshot_Visibility_1"));

	UUI_KillfeedEntry_C_Get_Headshot_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_Skull_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_KillfeedEntry_C::Get_Skull_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_Skull_Visibility_1"));

	UUI_KillfeedEntry_C_Get_Skull_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_VictimLabel_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_KillfeedEntry_C::Get_VictimLabel_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_VictimLabel_ColorAndOpacity_1"));

	UUI_KillfeedEntry_C_Get_VictimLabel_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_KillerLabel_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_KillfeedEntry_C::Get_KillerLabel_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_KillerLabel_ColorAndOpacity_1"));

	UUI_KillfeedEntry_C_Get_KillerLabel_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_KillfeedEntry_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.GetColorAndOpacity_1"));

	UUI_KillfeedEntry_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillfeedEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.Tick"));

	UUI_KillfeedEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillfeedEntry.UI_KillfeedEntry_C.ExecuteUbergraph_UI_KillfeedEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillfeedEntry_C::ExecuteUbergraph_UI_KillfeedEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_KillfeedEntry.UI_KillfeedEntry_C.ExecuteUbergraph_UI_KillfeedEntry"));

	UUI_KillfeedEntry_C_ExecuteUbergraph_UI_KillfeedEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
