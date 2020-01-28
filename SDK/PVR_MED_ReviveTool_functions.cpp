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

// Function MED_ReviveTool.MED_ReviveTool_C.CanUse_Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMED_ReviveTool_C::CanUse_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.CanUse_Client");

	AMED_ReviveTool_C_CanUse_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MED_ReviveTool.MED_ReviveTool_C.CheckUseCount
// (Public, BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::CheckUseCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.CheckUseCount");

	AMED_ReviveTool_C_CheckUseCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.ClearUseTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::ClearUseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.ClearUseTimer");

	AMED_ReviveTool_C_ClearUseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.GetAnimBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_Syringe_C*          ABP_Syringe                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::GetAnimBP(class UABP_Syringe_C** ABP_Syringe)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.GetAnimBP");

	AMED_ReviveTool_C_GetAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ABP_Syringe != nullptr)
		*ABP_Syringe = params.ABP_Syringe;
}


// Function MED_ReviveTool.MED_ReviveTool_C.TryRevive_Server
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::TryRevive_Server(class ABP_PavlovPawn_C* PavPawn, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.TryRevive_Server");

	AMED_ReviveTool_C_TryRevive_Server_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function MED_ReviveTool.MED_ReviveTool_C.TryRevive_Client
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::TryRevive_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.TryRevive_Client");

	AMED_ReviveTool_C_TryRevive_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.UserConstructionScript");

	AMED_ReviveTool_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.Use
// (Event, Public, BlueprintEvent)

void AMED_ReviveTool_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.Use");

	AMED_ReviveTool_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.Physicalize");

	AMED_ReviveTool_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.Revive_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::Revive_Server(class ABP_PavlovPawn_C* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.Revive_Server");

	AMED_ReviveTool_C_Revive_Server_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.Used");

	AMED_ReviveTool_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.OnPick");

	AMED_ReviveTool_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.OnDrop
// (Event, Public, BlueprintEvent)

void AMED_ReviveTool_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.OnDrop");

	AMED_ReviveTool_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.TryUseReviveTool
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::TryUseReviveTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.TryUseReviveTool");

	AMED_ReviveTool_C_TryUseReviveTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.CheckReviveUse
// (BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::CheckReviveUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.CheckReviveUse");

	AMED_ReviveTool_C_CheckReviveUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.PlayReviveSound_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMED_ReviveTool_C::PlayReviveSound_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.PlayReviveSound_Multi");

	AMED_ReviveTool_C_PlayReviveSound_Multi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_ReviveTool.MED_ReviveTool_C.ExecuteUbergraph_MED_ReviveTool
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_ReviveTool_C::ExecuteUbergraph_MED_ReviveTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_ReviveTool.MED_ReviveTool_C.ExecuteUbergraph_MED_ReviveTool");

	AMED_ReviveTool_C_ExecuteUbergraph_MED_ReviveTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
