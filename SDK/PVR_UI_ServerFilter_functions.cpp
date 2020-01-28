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

// Function UI_ServerFilter.UI_ServerFilter_C.GetSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Selection                      (Parm, OutParm, ZeroConstructor)

void UUI_ServerFilter_C::GetSelection(struct FString* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.GetSelection");

	UUI_ServerFilter_C_GetSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function UI_ServerFilter.UI_ServerFilter_C.SetSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ServerFilter_C::SetSelection(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.SetSelection");

	UUI_ServerFilter_C_SetSelection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerFilter.UI_ServerFilter_C.Get_GameModeCombo_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerFilter_C::Get_GameModeCombo_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.Get_GameModeCombo_Visibility_1");

	UUI_ServerFilter_C_Get_GameModeCombo_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerFilter.UI_ServerFilter_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerFilter_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.GetVisibility_1");

	UUI_ServerFilter_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerFilter.UI_ServerFilter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ServerFilter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.Construct");

	UUI_ServerFilter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerFilter.UI_ServerFilter_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerFilter_C::BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature");

	UUI_ServerFilter_C_BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerFilter.UI_ServerFilter_C.ExecuteUbergraph_UI_ServerFilter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerFilter_C::ExecuteUbergraph_UI_ServerFilter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.ExecuteUbergraph_UI_ServerFilter");

	UUI_ServerFilter_C_ExecuteUbergraph_UI_ServerFilter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerFilter.UI_ServerFilter_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ServerFilter_C::OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerFilter.UI_ServerFilter_C.OnSelectionChanged__DelegateSignature");

	UUI_ServerFilter_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
