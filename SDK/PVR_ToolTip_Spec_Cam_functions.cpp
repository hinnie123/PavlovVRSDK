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

// Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Spec_Cam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.UserConstructionScript");

	AToolTip_Spec_Cam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_Spec_Cam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.ReceiveBeginPlay");

	AToolTip_Spec_Cam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AToolTip_Spec_Cam_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.CustomEvent_1");

	AToolTip_Spec_Cam_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.ExecuteUbergraph_ToolTip_Spec_Cam
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Spec_Cam_C::ExecuteUbergraph_ToolTip_Spec_Cam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Spec_Cam.ToolTip_Spec_Cam_C.ExecuteUbergraph_ToolTip_Spec_Cam");

	AToolTip_Spec_Cam_C_ExecuteUbergraph_ToolTip_Spec_Cam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
