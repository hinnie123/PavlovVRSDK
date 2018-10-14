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

// Function UI_NumPad.UI_NumPad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NumPad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NumPad.UI_NumPad_C.Construct");

	UUI_NumPad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NumPad.UI_NumPad_C.OnKeyClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NumPad_C::OnKeyClicked(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NumPad.UI_NumPad_C.OnKeyClicked");

	UUI_NumPad_C_OnKeyClicked_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NumPad.UI_NumPad_C.ExecuteUbergraph_UI_NumPad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NumPad_C::ExecuteUbergraph_UI_NumPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NumPad.UI_NumPad_C.ExecuteUbergraph_UI_NumPad");

	UUI_NumPad_C_ExecuteUbergraph_UI_NumPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NumPad.UI_NumPad_C.OnDigit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Digit                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NumPad_C::OnDigit__DelegateSignature(int Digit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NumPad.UI_NumPad_C.OnDigit__DelegateSignature");

	UUI_NumPad_C_OnDigit__DelegateSignature_Params params;
	params.Digit = Digit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NumPad.UI_NumPad_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_NumPad_C::OnConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NumPad.UI_NumPad_C.OnConfirm__DelegateSignature");

	UUI_NumPad_C_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NumPad.UI_NumPad_C.OnErase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_NumPad_C::OnErase__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NumPad.UI_NumPad_C.OnErase__DelegateSignature");

	UUI_NumPad_C_OnErase__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
