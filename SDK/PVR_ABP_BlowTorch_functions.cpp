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

// Function ABP_BlowTorch.ABP_BlowTorch_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BlowTorch_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BlowTorch.ABP_BlowTorch_C.BlueprintUpdateAnimation");

	UABP_BlowTorch_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BlowTorch.ABP_BlowTorch_C.Turn Off Valve
// (BlueprintCallable, BlueprintEvent)

void UABP_BlowTorch_C::Turn_Off_Valve()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BlowTorch.ABP_BlowTorch_C.Turn Off Valve");

	UABP_BlowTorch_C_Turn_Off_Valve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BlowTorch.ABP_BlowTorch_C.SetValveAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ValveAlpha                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BlowTorch_C::SetValveAlpha(float ValveAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BlowTorch.ABP_BlowTorch_C.SetValveAlpha");

	UABP_BlowTorch_C_SetValveAlpha_Params params;
	params.ValveAlpha = ValveAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BlowTorch.ABP_BlowTorch_C.ExecuteUbergraph_ABP_BlowTorch
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BlowTorch_C::ExecuteUbergraph_ABP_BlowTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BlowTorch.ABP_BlowTorch_C.ExecuteUbergraph_ABP_BlowTorch");

	UABP_BlowTorch_C_ExecuteUbergraph_ABP_BlowTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
