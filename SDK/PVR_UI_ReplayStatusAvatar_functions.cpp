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

// Function UI_ReplayStatusAvatar.UI_ReplayStatusAvatar_C.Get_Avatar_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_ReplayStatusAvatar_C::Get_Avatar_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayStatusAvatar.UI_ReplayStatusAvatar_C.Get_Avatar_Brush_1");

	UUI_ReplayStatusAvatar_C_Get_Avatar_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayStatusAvatar.UI_ReplayStatusAvatar_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ReplayStatusAvatar_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayStatusAvatar.UI_ReplayStatusAvatar_C.GetVisibility_1");

	UUI_ReplayStatusAvatar_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayStatusAvatar.UI_ReplayStatusAvatar_C.Get_Avatar_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ReplayStatusAvatar_C::Get_Avatar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayStatusAvatar.UI_ReplayStatusAvatar_C.Get_Avatar_Visibility_1");

	UUI_ReplayStatusAvatar_C_Get_Avatar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
