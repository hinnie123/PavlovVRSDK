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

// Function UI_ServerSettings.UI_ServerSettings_C.GetWeapobFilterEnum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StringEnum                     (Parm, ZeroConstructor)
// EWeaponFilter                  Enum                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ServerSettings_C::GetWeapobFilterEnum(const struct FString& StringEnum, EWeaponFilter* Enum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_ServerSettings.UI_ServerSettings_C.GetWeapobFilterEnum"));

	UUI_ServerSettings_C_GetWeapobFilterEnum_Params params;
	params.StringEnum = StringEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enum != nullptr)
		*Enum = params.Enum;
}


// Function UI_ServerSettings.UI_ServerSettings_C.UpdateSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSettings         Settings                       (Parm)
// struct FString                 GameMode                       (Parm, ZeroConstructor)

void UUI_ServerSettings_C::UpdateSettings(const struct FServerSettings& Settings, const struct FString& GameMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_ServerSettings.UI_ServerSettings_C.UpdateSettings"));

	UUI_ServerSettings_C_UpdateSettings_Params params;
	params.Settings = Settings;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerSettings.UI_ServerSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ServerSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_ServerSettings.UI_ServerSettings_C.Construct"));

	UUI_ServerSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerSettings.UI_ServerSettings_C.BndEvt__applyBtn_K2Node_ComponentBoundEvent_104_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ServerSettings_C::BndEvt__applyBtn_K2Node_ComponentBoundEvent_104_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_ServerSettings.UI_ServerSettings_C.BndEvt__applyBtn_K2Node_ComponentBoundEvent_104_OnButtonClicked__DelegateSignature"));

	UUI_ServerSettings_C_BndEvt__applyBtn_K2Node_ComponentBoundEvent_104_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerSettings.UI_ServerSettings_C.ExecuteUbergraph_UI_ServerSettings
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerSettings_C::ExecuteUbergraph_UI_ServerSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_ServerSettings.UI_ServerSettings_C.ExecuteUbergraph_UI_ServerSettings"));

	UUI_ServerSettings_C_ExecuteUbergraph_UI_ServerSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerSettings.UI_ServerSettings_C.OnSettingsApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSettings         Settings                       (Parm)

void UUI_ServerSettings_C::OnSettingsApply__DelegateSignature(const struct FServerSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_ServerSettings.UI_ServerSettings_C.OnSettingsApply__DelegateSignature"));

	UUI_ServerSettings_C_OnSettingsApply__DelegateSignature_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
