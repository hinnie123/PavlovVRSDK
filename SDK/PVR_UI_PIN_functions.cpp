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

// Function UI_PIN.UI_PIN_C.UpdateLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_PIN_C::UpdateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.UpdateLabel");

	UUI_PIN_C_UpdateLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PIN.UI_PIN_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PIN_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.Construct");

	UUI_PIN_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_0_OnConfirm__DelegateSignature
// (BlueprintEvent)

void UUI_PIN_C::BndEvt__NumPad_K2Node_ComponentBoundEvent_0_OnConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_0_OnConfirm__DelegateSignature");

	UUI_PIN_C_BndEvt__NumPad_K2Node_ComponentBoundEvent_0_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_1_OnErase__DelegateSignature
// (BlueprintEvent)

void UUI_PIN_C::BndEvt__NumPad_K2Node_ComponentBoundEvent_1_OnErase__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_1_OnErase__DelegateSignature");

	UUI_PIN_C_BndEvt__NumPad_K2Node_ComponentBoundEvent_1_OnErase__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_2_OnDigit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Digit                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PIN_C::BndEvt__NumPad_K2Node_ComponentBoundEvent_2_OnDigit__DelegateSignature(int Digit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_2_OnDigit__DelegateSignature");

	UUI_PIN_C_BndEvt__NumPad_K2Node_ComponentBoundEvent_2_OnDigit__DelegateSignature_Params params;
	params.Digit = Digit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PIN.UI_PIN_C.ExecuteUbergraph_UI_PIN
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PIN_C::ExecuteUbergraph_UI_PIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.ExecuteUbergraph_UI_PIN");

	UUI_PIN_C_ExecuteUbergraph_UI_PIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PIN.UI_PIN_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PinString                      (Parm, ZeroConstructor)

void UUI_PIN_C::OnConfirm__DelegateSignature(const struct FString& PinString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PIN.UI_PIN_C.OnConfirm__DelegateSignature");

	UUI_PIN_C_OnConfirm__DelegateSignature_Params params;
	params.PinString = PinString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
