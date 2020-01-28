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

// Function BP_ExplotioNDecal.BP_ExplotionDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplotionDecal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplotioNDecal.BP_ExplotionDecal_C.UserConstructionScript");

	ABP_ExplotionDecal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplotioNDecal.BP_ExplotionDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplotionDecal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplotioNDecal.BP_ExplotionDecal_C.ReceiveBeginPlay");

	ABP_ExplotionDecal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplotioNDecal.BP_ExplotionDecal_C.ExecuteUbergraph_BP_ExplotionDecal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplotionDecal_C::ExecuteUbergraph_BP_ExplotionDecal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplotioNDecal.BP_ExplotionDecal_C.ExecuteUbergraph_BP_ExplotionDecal");

	ABP_ExplotionDecal_C_ExecuteUbergraph_BP_ExplotionDecal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
