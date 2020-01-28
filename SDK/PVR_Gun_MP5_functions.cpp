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

// Function Gun_MP5.Gun_MP5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_MP5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_MP5.Gun_MP5_C.UserConstructionScript");

	AGun_MP5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_MP5.Gun_MP5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_MP5_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_MP5.Gun_MP5_C.ReceiveBeginPlay");

	AGun_MP5_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_MP5.Gun_MP5_C.BndEvt__StockHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_MP5_C::BndEvt__StockHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_MP5.Gun_MP5_C.BndEvt__StockHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_MP5_C_BndEvt__StockHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_MP5.Gun_MP5_C.BndEvt__StockHandle_K2Node_ComponentBoundEvent_3_VRHandleOnVectorInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_MP5_C::BndEvt__StockHandle_K2Node_ComponentBoundEvent_3_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_MP5.Gun_MP5_C.BndEvt__StockHandle_K2Node_ComponentBoundEvent_3_VRHandleOnVectorInputReceivedSignature__DelegateSignature");

	AGun_MP5_C_BndEvt__StockHandle_K2Node_ComponentBoundEvent_3_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_MP5.Gun_MP5_C.ExecuteUbergraph_Gun_MP5
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_MP5_C::ExecuteUbergraph_Gun_MP5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_MP5.Gun_MP5_C.ExecuteUbergraph_Gun_MP5");

	AGun_MP5_C_ExecuteUbergraph_Gun_MP5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
