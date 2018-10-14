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

// Function UI_Wheel.UI_Wheel_C.Get_inner_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Wheel_C::Get_inner_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Wheel.UI_Wheel_C.Get_inner_ColorAndOpacity_1");

	UUI_Wheel_C_Get_inner_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Wheel.UI_Wheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Wheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Wheel.UI_Wheel_C.Construct");

	UUI_Wheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Wheel.UI_Wheel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Wheel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Wheel.UI_Wheel_C.Tick");

	UUI_Wheel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Wheel.UI_Wheel_C.OnWheelUpdate
// (BlueprintCallable, BlueprintEvent)

void UUI_Wheel_C::OnWheelUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Wheel.UI_Wheel_C.OnWheelUpdate");

	UUI_Wheel_C_OnWheelUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Wheel.UI_Wheel_C.ExecuteUbergraph_UI_Wheel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Wheel_C::ExecuteUbergraph_UI_Wheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Wheel.UI_Wheel_C.ExecuteUbergraph_UI_Wheel");

	UUI_Wheel_C_ExecuteUbergraph_UI_Wheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
