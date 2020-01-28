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

// Function BP_MenuUniverse.BP_MenuUniverse_C.GetMainUIWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUI_Main_C*              UI_Main                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MenuUniverse_C::GetMainUIWidget(class UUI_Main_C** UI_Main)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuUniverse.BP_MenuUniverse_C.GetMainUIWidget");

	ABP_MenuUniverse_C_GetMainUIWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UI_Main != nullptr)
		*UI_Main = params.UI_Main;
}


// Function BP_MenuUniverse.BP_MenuUniverse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuUniverse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuUniverse.BP_MenuUniverse_C.UserConstructionScript");

	ABP_MenuUniverse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuUniverse.BP_MenuUniverse_C.OnViewTargetChangingFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 ViewTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuUniverse_C::OnViewTargetChangingFrom(class AActor** ViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuUniverse.BP_MenuUniverse_C.OnViewTargetChangingFrom");

	ABP_MenuUniverse_C_OnViewTargetChangingFrom_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuUniverse.BP_MenuUniverse_C.OnEnableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuUniverse_C::OnEnableChanged(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuUniverse.BP_MenuUniverse_C.OnEnableChanged");

	ABP_MenuUniverse_C_OnEnableChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuUniverse.BP_MenuUniverse_C.ExecuteUbergraph_BP_MenuUniverse
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuUniverse_C::ExecuteUbergraph_BP_MenuUniverse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuUniverse.BP_MenuUniverse_C.ExecuteUbergraph_BP_MenuUniverse");

	ABP_MenuUniverse_C_ExecuteUbergraph_BP_MenuUniverse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
