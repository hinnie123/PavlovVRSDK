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

// Function BP_SpectatorTag.BP_SpectatorTag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpectatorTag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorTag.BP_SpectatorTag_C.UserConstructionScript");

	ABP_SpectatorTag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorTag.BP_SpectatorTag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorTag_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorTag.BP_SpectatorTag_C.ReceiveBeginPlay");

	ABP_SpectatorTag_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorTag.BP_SpectatorTag_C.OnFadeOut
// (Event, Public, BlueprintEvent)

void ABP_SpectatorTag_C::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorTag.BP_SpectatorTag_C.OnFadeOut");

	ABP_SpectatorTag_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorTag.BP_SpectatorTag_C.ExecuteUbergraph_BP_SpectatorTag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpectatorTag_C::ExecuteUbergraph_BP_SpectatorTag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorTag.BP_SpectatorTag_C.ExecuteUbergraph_BP_SpectatorTag");

	ABP_SpectatorTag_C_ExecuteUbergraph_BP_SpectatorTag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
