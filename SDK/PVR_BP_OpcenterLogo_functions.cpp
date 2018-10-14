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

// Function BP_OpcenterLogo.BP_OpcenterLogo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OpcenterLogo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpcenterLogo.BP_OpcenterLogo_C.UserConstructionScript");

	ABP_OpcenterLogo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpcenterLogo.BP_OpcenterLogo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OpcenterLogo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpcenterLogo.BP_OpcenterLogo_C.ReceiveBeginPlay");

	ABP_OpcenterLogo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpcenterLogo.BP_OpcenterLogo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OpcenterLogo_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpcenterLogo.BP_OpcenterLogo_C.ReceiveTick");

	ABP_OpcenterLogo_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpcenterLogo.BP_OpcenterLogo_C.ExecuteUbergraph_BP_OpcenterLogo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OpcenterLogo_C::ExecuteUbergraph_BP_OpcenterLogo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpcenterLogo.BP_OpcenterLogo_C.ExecuteUbergraph_BP_OpcenterLogo");

	ABP_OpcenterLogo_C_ExecuteUbergraph_BP_OpcenterLogo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
