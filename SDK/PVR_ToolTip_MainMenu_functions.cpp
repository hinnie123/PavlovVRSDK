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

// Function ToolTip_MainMenu.ToolTip_MainMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_MainMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_MainMenu.ToolTip_MainMenu_C.UserConstructionScript");

	AToolTip_MainMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_MainMenu.ToolTip_MainMenu_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AToolTip_MainMenu_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_MainMenu.ToolTip_MainMenu_C.CustomEvent_1");

	AToolTip_MainMenu_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_MainMenu.ToolTip_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_MainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_MainMenu.ToolTip_MainMenu_C.ReceiveBeginPlay");

	AToolTip_MainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_MainMenu.ToolTip_MainMenu_C.ExecuteUbergraph_ToolTip_MainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_MainMenu_C::ExecuteUbergraph_ToolTip_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_MainMenu.ToolTip_MainMenu_C.ExecuteUbergraph_ToolTip_MainMenu");

	AToolTip_MainMenu_C_ExecuteUbergraph_ToolTip_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
