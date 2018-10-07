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

// Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalPlayerEffects_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.UserConstructionScript"));

	ABP_GlobalPlayerEffects_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GlobalPlayerEffects_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ReceiveBeginPlay"));

	ABP_GlobalPlayerEffects_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ExecuteUbergraph_BP_GlobalPlayerEffects
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlobalPlayerEffects_C::ExecuteUbergraph_BP_GlobalPlayerEffects(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ExecuteUbergraph_BP_GlobalPlayerEffects"));

	ABP_GlobalPlayerEffects_C_ExecuteUbergraph_BP_GlobalPlayerEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
