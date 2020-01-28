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

// Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.UpdateIcons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSettings         ServerSettings                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ServerSettingsIcons_C::UpdateIcons(const struct FServerSettings& ServerSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.UpdateIcons");

	UUI_ServerSettingsIcons_C_UpdateIcons_Params params;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ServerSettingsIcons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.Construct");

	UUI_ServerSettingsIcons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.ExecuteUbergraph_UI_ServerSettingsIcons
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerSettingsIcons_C::ExecuteUbergraph_UI_ServerSettingsIcons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.ExecuteUbergraph_UI_ServerSettingsIcons");

	UUI_ServerSettingsIcons_C_ExecuteUbergraph_UI_ServerSettingsIcons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
