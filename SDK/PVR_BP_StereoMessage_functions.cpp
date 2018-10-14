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

// Function BP_StereoMessage.BP_StereoMessage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StereoMessage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StereoMessage.BP_StereoMessage_C.UserConstructionScript");

	ABP_StereoMessage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StereoMessage.BP_StereoMessage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StereoMessage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StereoMessage.BP_StereoMessage_C.ReceiveBeginPlay");

	ABP_StereoMessage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StereoMessage.BP_StereoMessage_C.ExecuteUbergraph_BP_StereoMessage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_StereoMessage_C::ExecuteUbergraph_BP_StereoMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StereoMessage.BP_StereoMessage_C.ExecuteUbergraph_BP_StereoMessage");

	ABP_StereoMessage_C_ExecuteUbergraph_BP_StereoMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
