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

// Function UI_Checkbox.UI_Checkbox_C.SetChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Checkbox_C::SetChecked(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.SetChecked"));

	UUI_Checkbox_C_SetChecked_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.IsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Checked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Checkbox_C::IsChecked(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.IsChecked"));

	UUI_Checkbox_C_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Checked != nullptr)
		*Checked = params.Checked;
}


// Function UI_Checkbox.UI_Checkbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Checkbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.Construct"));

	UUI_Checkbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Checkbox_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.OnMouseEnter"));

	UUI_Checkbox_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Checkbox_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.OnMouseLeave"));

	UUI_Checkbox_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Checkbox_C::BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature"));

	UUI_Checkbox_C_BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.OnCheckStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Checkbox_C::OnCheckStateChanged_Event(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.OnCheckStateChanged_Event"));

	UUI_Checkbox_C_OnCheckStateChanged_Event_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.ExecuteUbergraph_UI_Checkbox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Checkbox_C::ExecuteUbergraph_UI_Checkbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.ExecuteUbergraph_UI_Checkbox"));

	UUI_Checkbox_C_ExecuteUbergraph_UI_Checkbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Checkbox.UI_Checkbox_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Checkbox_C::OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Checkbox.UI_Checkbox_C.OnCheckStateChanged__DelegateSignature"));

	UUI_Checkbox_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
