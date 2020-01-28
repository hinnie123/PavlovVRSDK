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

// Function ABP_Lockpick.ABP_Lockpick_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Lockpick_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Lockpick.ABP_Lockpick_C.BlueprintUpdateAnimation");

	UABP_Lockpick_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Lockpick.ABP_Lockpick_C.SetOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Lockpick_C::SetOpen(bool Open_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Lockpick.ABP_Lockpick_C.SetOpen");

	UABP_Lockpick_C_SetOpen_Params params;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Lockpick.ABP_Lockpick_C.ExecuteUbergraph_ABP_Lockpick
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Lockpick_C::ExecuteUbergraph_ABP_Lockpick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Lockpick.ABP_Lockpick_C.ExecuteUbergraph_ABP_Lockpick");

	UABP_Lockpick_C_ExecuteUbergraph_ABP_Lockpick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
