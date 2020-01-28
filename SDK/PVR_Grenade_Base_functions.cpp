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

// Function Grenade_Base.Grenade_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Base.Grenade_Base_C.UserConstructionScript");

	AGrenade_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Base.Grenade_Base_C.BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Base_C::BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Base.Grenade_Base_C.BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature");

	AGrenade_Base_C_BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Base.Grenade_Base_C.Cycle
// (Event, Public, BlueprintEvent)

void AGrenade_Base_C::Cycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Base.Grenade_Base_C.Cycle");

	AGrenade_Base_C_Cycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Base.Grenade_Base_C.OnDetonation
// (Event, Public, BlueprintEvent)

void AGrenade_Base_C::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Base.Grenade_Base_C.OnDetonation");

	AGrenade_Base_C_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Base.Grenade_Base_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Base_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Base.Grenade_Base_C.Physicalize");

	AGrenade_Base_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Base.Grenade_Base_C.ExecuteUbergraph_Grenade_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Base_C::ExecuteUbergraph_Grenade_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Base.Grenade_Base_C.ExecuteUbergraph_Grenade_Base");

	AGrenade_Base_C_ExecuteUbergraph_Grenade_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
