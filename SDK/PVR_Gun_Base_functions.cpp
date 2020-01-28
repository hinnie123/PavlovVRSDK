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

// Function Gun_Base.Gun_Base_C.GetLocalMagazineOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGun_Base_C::GetLocalMagazineOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.GetLocalMagazineOffset");

	AGun_Base_C_GetLocalMagazineOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gun_Base.Gun_Base_C.UpdateChamberMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVRGunChamberState             ChamberState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::UpdateChamberMesh(EVRGunChamberState ChamberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.UpdateChamberMesh");

	AGun_Base_C_UpdateChamberMesh_Params params;
	params.ChamberState = ChamberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.CreateChamberBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGun_Base_C::CreateChamberBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.CreateChamberBullet");

	AGun_Base_C_CreateChamberBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.GetChargingHandle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVRHandleComponent*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRHandleComponent* AGun_Base_C::GetChargingHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.GetChargingHandle");

	AGun_Base_C_GetChargingHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gun_Base.Gun_Base_C.SpawnAndEjectShell
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DetailMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LIVE                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::SpawnAndEjectShell(int DetailMode, bool LIVE)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.SpawnAndEjectShell");

	AGun_Base_C_SpawnAndEjectShell_Params params;
	params.DetailMode = DetailMode;
	params.LIVE = LIVE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.UserConstructionScript");

	AGun_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.ReceiveBeginPlay");

	AGun_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.Physicalize");

	AGun_Base_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.AttachMagazine
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRMagazine**            MagazineToAttach               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::AttachMagazine(class AVRMagazine** MagazineToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.AttachMagazine");

	AGun_Base_C_AttachMagazine_Params params;
	params.MagazineToAttach = MagazineToAttach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.RecoilDrop
// (Event, Public, BlueprintEvent)

void AGun_Base_C::RecoilDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.RecoilDrop");

	AGun_Base_C_RecoilDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.OnRoundEjected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bLive                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::OnRoundEjected(bool* bLive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.OnRoundEjected");

	AGun_Base_C_OnRoundEjected_Params params;
	params.bLive = bLive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.OnChamberStateChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChamberIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::OnChamberStateChangedEvent(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.OnChamberStateChangedEvent");

	AGun_Base_C_OnChamberStateChangedEvent_Params params;
	params.ChamberIndex = ChamberIndex;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Base_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.CustomEvent_1");

	AGun_Base_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Base.Gun_Base_C.ExecuteUbergraph_Gun_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Base_C::ExecuteUbergraph_Gun_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Base.Gun_Base_C.ExecuteUbergraph_Gun_Base");

	AGun_Base_C_ExecuteUbergraph_Gun_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
