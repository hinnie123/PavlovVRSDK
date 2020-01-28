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

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.On_Combo_GenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUI_WorkshopCombo_C::On_Combo_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.On_Combo_GenerateWidget_1");

	UUI_WorkshopCombo_C_On_Combo_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.BuildCombo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_WorkshopCombo_C::BuildCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.BuildCombo");

	UUI_WorkshopCombo_C_BuildCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.SetSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_WorkshopCombo_C::SetSelection(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.SetSelection");

	UUI_WorkshopCombo_C_SetSelection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.Get_GameModeCombo_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WorkshopCombo_C::Get_GameModeCombo_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.Get_GameModeCombo_Visibility_1");

	UUI_WorkshopCombo_C_Get_GameModeCombo_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WorkshopCombo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.GetVisibility_1");

	UUI_WorkshopCombo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WorkshopCombo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.Construct");

	UUI_WorkshopCombo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopCombo_C::BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature");

	UUI_WorkshopCombo_C_BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UUI_WorkshopCombo_C::BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature");

	UUI_WorkshopCombo_C_BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.ExecuteUbergraph_UI_WorkshopCombo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopCombo_C::ExecuteUbergraph_UI_WorkshopCombo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.ExecuteUbergraph_UI_WorkshopCombo");

	UUI_WorkshopCombo_C_ExecuteUbergraph_UI_WorkshopCombo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopCombo.UI_WorkshopCombo_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_WorkshopCombo_C::OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopCombo.UI_WorkshopCombo_C.OnSelectionChanged__DelegateSignature");

	UUI_WorkshopCombo_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
