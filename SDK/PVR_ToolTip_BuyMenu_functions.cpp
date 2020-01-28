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

// Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_BuyMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.UserConstructionScript");

	AToolTip_BuyMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_BuyMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.ReceiveBeginPlay");

	AToolTip_BuyMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AToolTip_BuyMenu_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.CustomEvent_1");

	AToolTip_BuyMenu_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.ExecuteUbergraph_ToolTip_BuyMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_BuyMenu_C::ExecuteUbergraph_ToolTip_BuyMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_BuyMenu.ToolTip_BuyMenu_C.ExecuteUbergraph_ToolTip_BuyMenu");

	AToolTip_BuyMenu_C_ExecuteUbergraph_ToolTip_BuyMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
