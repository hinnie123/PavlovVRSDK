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

// Function UI_VideoSetting.UI_VideoSetting_C.Get_SliderWidget_Value_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_VideoSetting_C::Get_SliderWidget_Value_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.Get_SliderWidget_Value_1"));

	UUI_VideoSetting_C_Get_SliderWidget_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting.UI_VideoSetting_C.Get_SettingButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_VideoSetting_C::Get_SettingButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.Get_SettingButton_Visibility_1"));

	UUI_VideoSetting_C_Get_SettingButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting.UI_VideoSetting_C.Get_SliderWidget_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_VideoSetting_C::Get_SliderWidget_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.Get_SliderWidget_Visibility_1"));

	UUI_VideoSetting_C_Get_SliderWidget_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting.UI_VideoSetting_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoSetting_C::SetValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.SetValue"));

	UUI_VideoSetting_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoSetting.UI_VideoSetting_C.GetValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_VideoSetting_C::GetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.GetValue"));

	UUI_VideoSetting_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function UI_VideoSetting.UI_VideoSetting_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_VideoSetting_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.GetBrush_1"));

	UUI_VideoSetting_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VideoSetting.UI_VideoSetting_C.BndEvt__SettingButton_K2Node_ComponentBoundEvent_0_OnValudChanged__DelegateSignature
// (BlueprintEvent)

void UUI_VideoSetting_C::BndEvt__SettingButton_K2Node_ComponentBoundEvent_0_OnValudChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.BndEvt__SettingButton_K2Node_ComponentBoundEvent_0_OnValudChanged__DelegateSignature"));

	UUI_VideoSetting_C_BndEvt__SettingButton_K2Node_ComponentBoundEvent_0_OnValudChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoSetting.UI_VideoSetting_C.BndEvt__SliderWidget_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoSetting_C::BndEvt__SliderWidget_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.BndEvt__SliderWidget_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature"));

	UUI_VideoSetting_C_BndEvt__SliderWidget_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoSetting.UI_VideoSetting_C.ExecuteUbergraph_UI_VideoSetting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoSetting_C::ExecuteUbergraph_UI_VideoSetting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.ExecuteUbergraph_UI_VideoSetting"));

	UUI_VideoSetting_C_ExecuteUbergraph_UI_VideoSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoSetting.UI_VideoSetting_C.OnValueChaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_VideoSetting_C::OnValueChaged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_VideoSetting.UI_VideoSetting_C.OnValueChaged__DelegateSignature"));

	UUI_VideoSetting_C_OnValueChaged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
