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

// Function ToolTip_Locomotion.ToolTip_Locomotion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Locomotion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Locomotion.ToolTip_Locomotion_C.UserConstructionScript");

	AToolTip_Locomotion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Locomotion.ToolTip_Locomotion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_Locomotion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Locomotion.ToolTip_Locomotion_C.ReceiveBeginPlay");

	AToolTip_Locomotion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Locomotion.ToolTip_Locomotion_C.ExecuteUbergraph_ToolTip_Locomotion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Locomotion_C::ExecuteUbergraph_ToolTip_Locomotion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Locomotion.ToolTip_Locomotion_C.ExecuteUbergraph_ToolTip_Locomotion");

	AToolTip_Locomotion_C_ExecuteUbergraph_ToolTip_Locomotion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
