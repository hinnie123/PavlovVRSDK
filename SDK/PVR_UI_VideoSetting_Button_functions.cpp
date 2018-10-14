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

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_VideoSetting_Button_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.GetText_1");

	UUI_VideoSetting_Button_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.Prev
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VideoSetting_Button_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.Prev");

	UUI_VideoSetting_Button_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.Next
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VideoSetting_Button_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.Next");

	UUI_VideoSetting_Button_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_VideoSetting_Button_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.OnMouseButtonDown");

	UUI_VideoSetting_Button_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_VideoSetting_Button_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.GetBrush_1");

	UUI_VideoSetting_Button_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.OnValudChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_VideoSetting_Button_C::OnValudChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.OnValudChanged__DelegateSignature");

	UUI_VideoSetting_Button_C_OnValudChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
