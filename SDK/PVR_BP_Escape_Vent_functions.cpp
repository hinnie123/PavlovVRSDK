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

// Function BP_Escape_Vent.BP_Escape_Vent_C.TryDestroyObjective_Server
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Vent_C::TryDestroyObjective_Server(class UObject** Object, bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Vent.BP_Escape_Vent_C.TryDestroyObjective_Server");

	ABP_Escape_Vent_C_TryDestroyObjective_Server_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function BP_Escape_Vent.BP_Escape_Vent_C.CanDestroyObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AVRItem**                VRItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDestroy                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Vent_C::CanDestroyObjective(class AVRItem** VRItem, bool* CanDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Vent.BP_Escape_Vent_C.CanDestroyObjective");

	ABP_Escape_Vent_C_CanDestroyObjective_Params params;
	params.VRItem = VRItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDestroy != nullptr)
		*CanDestroy = params.CanDestroy;
}


// Function BP_Escape_Vent.BP_Escape_Vent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Escape_Vent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Vent.BP_Escape_Vent_C.UserConstructionScript");

	ABP_Escape_Vent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Vent.BP_Escape_Vent_C.SetRepairMeshVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Vent_C::SetRepairMeshVis(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Vent.BP_Escape_Vent_C.SetRepairMeshVis");

	ABP_Escape_Vent_C_SetRepairMeshVis_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Escape_Vent.BP_Escape_Vent_C.ExecuteUbergraph_BP_Escape_Vent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Escape_Vent_C::ExecuteUbergraph_BP_Escape_Vent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Escape_Vent.BP_Escape_Vent_C.ExecuteUbergraph_BP_Escape_Vent");

	ABP_Escape_Vent_C_ExecuteUbergraph_BP_Escape_Vent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
