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

// Function BP_BloodSplatDecal.BP_BloodSplatDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BloodSplatDecal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplatDecal.BP_BloodSplatDecal_C.UserConstructionScript");

	ABP_BloodSplatDecal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplatDecal.BP_BloodSplatDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BloodSplatDecal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplatDecal.BP_BloodSplatDecal_C.ReceiveBeginPlay");

	ABP_BloodSplatDecal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplatDecal.BP_BloodSplatDecal_C.ExecuteUbergraph_BP_BloodSplatDecal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodSplatDecal_C::ExecuteUbergraph_BP_BloodSplatDecal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplatDecal.BP_BloodSplatDecal_C.ExecuteUbergraph_BP_BloodSplatDecal");

	ABP_BloodSplatDecal_C_ExecuteUbergraph_BP_BloodSplatDecal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
