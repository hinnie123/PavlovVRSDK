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

// Function ABP_Syringe.ABP_Syringe_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnimState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Syringe_C::SetState(int AnimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Syringe.ABP_Syringe_C.SetState");

	UABP_Syringe_C_SetState_Params params;
	params.AnimState = AnimState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Syringe.ABP_Syringe_C.ExecuteUbergraph_ABP_Syringe
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Syringe_C::ExecuteUbergraph_ABP_Syringe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Syringe.ABP_Syringe_C.ExecuteUbergraph_ABP_Syringe");

	UABP_Syringe_C_ExecuteUbergraph_ABP_Syringe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
