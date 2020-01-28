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

// Function MED_Painkillers.MED_Painkillers_C.ResetPainkillers
// (Public, BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::ResetPainkillers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.ResetPainkillers");

	AMED_Painkillers_C_ResetPainkillers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.UsePainkiller
// (Public, BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::UsePainkiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.UsePainkiller");

	AMED_Painkillers_C_UsePainkiller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.ClearUnusedPills
// (Public, BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::ClearUnusedPills()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.ClearUnusedPills");

	AMED_Painkillers_C_ClearUnusedPills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.GetPillSpawnLoc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMED_Painkillers_C::GetPillSpawnLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.GetPillSpawnLoc");

	AMED_Painkillers_C_GetPillSpawnLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MED_Painkillers.MED_Painkillers_C.TryEatPill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::TryEatPill(bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.TryEatPill");

	AMED_Painkillers_C_TryEatPill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function MED_Painkillers.MED_Painkillers_C.OnRep_#ofPills
// (BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::OnRep__ofPills()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.OnRep_#ofPills");

	AMED_Painkillers_C_OnRep__ofPills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.GetZRot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMED_Painkillers_C::GetZRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.GetZRot");

	AMED_Painkillers_C_GetZRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MED_Painkillers.MED_Painkillers_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.UserConstructionScript");

	AMED_Painkillers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.Spawn Pill
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::Spawn_Pill(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.Spawn Pill");

	AMED_Painkillers_C_Spawn_Pill_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.Play Sound FX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::Play_Sound_FX(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.Play Sound FX");

	AMED_Painkillers_C_Play_Sound_FX_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.Consume Pill
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::Consume_Pill()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.Consume Pill");

	AMED_Painkillers_C_Consume_Pill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.Use
// (Event, Public, BlueprintEvent)

void AMED_Painkillers_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.Use");

	AMED_Painkillers_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.UsePainkillerLoop
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::UsePainkillerLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.UsePainkillerLoop");

	AMED_Painkillers_C_UsePainkillerLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.TryUseTimer
// (BlueprintCallable, BlueprintEvent)

void AMED_Painkillers_C::TryUseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.TryUseTimer");

	AMED_Painkillers_C_TryUseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.Used");

	AMED_Painkillers_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.CloseLid
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::CloseLid(bool Open_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.CloseLid");

	AMED_Painkillers_C_CloseLid_Params params;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.OnDrop
// (Event, Public, BlueprintEvent)

void AMED_Painkillers_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.OnDrop");

	AMED_Painkillers_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.Physicalize");

	AMED_Painkillers_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMED_Painkillers_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.ReceiveBeginPlay");

	AMED_Painkillers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.OnPick");

	AMED_Painkillers_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MED_Painkillers.MED_Painkillers_C.ExecuteUbergraph_MED_Painkillers
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMED_Painkillers_C::ExecuteUbergraph_MED_Painkillers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MED_Painkillers.MED_Painkillers_C.ExecuteUbergraph_MED_Painkillers");

	AMED_Painkillers_C_ExecuteUbergraph_MED_Painkillers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
