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

// Function UI_LobbySetting.UI_LobbySetting_C.SetSelectionByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbySetting_C::SetSelectionByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.SetSelectionByIndex"));

	UUI_LobbySetting_C_SetSelectionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.GetSelectionIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LobbySetting_C::GetSelectionIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.GetSelectionIndex"));

	UUI_LobbySetting_C_GetSelectionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_LobbySetting.UI_LobbySetting_C.GetSelectedValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor)

void UUI_LobbySetting_C::GetSelectedValue(struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.GetSelectedValue"));

	UUI_LobbySetting_C_GetSelectedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function UI_LobbySetting.UI_LobbySetting_C.SetSelectionByValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)

void UUI_LobbySetting_C::SetSelectionByValue(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.SetSelectionByValue"));

	UUI_LobbySetting_C_SetSelectionByValue_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.On_Combo_GenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UUI_LobbySetting_C::On_Combo_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.On_Combo_GenerateWidget_1"));

	UUI_LobbySetting_C_On_Combo_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbySetting.UI_LobbySetting_C.BuildCombo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_LobbySetting_C::BuildCombo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.BuildCombo"));

	UUI_LobbySetting_C_BuildCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.SetSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UUI_LobbySetting_C::SetSelection(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.SetSelection"));

	UUI_LobbySetting_C_SetSelection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.Get_GameModeCombo_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LobbySetting_C::Get_GameModeCombo_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.Get_GameModeCombo_Visibility_1"));

	UUI_LobbySetting_C_Get_GameModeCombo_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbySetting.UI_LobbySetting_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LobbySetting_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.GetVisibility_1"));

	UUI_LobbySetting_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbySetting.UI_LobbySetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LobbySetting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.Construct"));

	UUI_LobbySetting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbySetting_C::BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature"));

	UUI_LobbySetting_C_BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UUI_LobbySetting_C::BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature"));

	UUI_LobbySetting_C_BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.ExecuteUbergraph_UI_LobbySetting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbySetting_C::ExecuteUbergraph_UI_LobbySetting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.ExecuteUbergraph_UI_LobbySetting"));

	UUI_LobbySetting_C_ExecuteUbergraph_UI_LobbySetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbySetting.UI_LobbySetting_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)

void UUI_LobbySetting_C::OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbySetting.UI_LobbySetting_C.OnSelectionChanged__DelegateSignature"));

	UUI_LobbySetting_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
