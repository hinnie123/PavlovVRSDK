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

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetBombHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetBombHolster()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetBombHolster"));

	ABP_PavlovPawn_C_GetBombHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetGrenadeHolsters
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHolsterComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UHolsterComponent*> ABP_PavlovPawn_C::GetGrenadeHolsters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetGrenadeHolsters"));

	ABP_PavlovPawn_C_GetGrenadeHolsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetKnifeHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetKnifeHolster()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetKnifeHolster"));

	ABP_PavlovPawn_C_GetKnifeHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetSideWeaponHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetSideWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetSideWeaponHolster"));

	ABP_PavlovPawn_C_GetSideWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetMainWeaponHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetMainWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetMainWeaponHolster"));

	ABP_PavlovPawn_C_GetMainWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetEquipmentByName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentDefinition    Definition                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PavlovPawn_C::GetEquipmentByName(struct FName* EquipmentName, struct FEquipmentDefinition* Definition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetEquipmentByName"));

	ABP_PavlovPawn_C_GetEquipmentByName_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Definition != nullptr)
		*Definition = params.Definition;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetAmmoPocket
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVRPocketComponent*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVRPocketComponent* ABP_PavlovPawn_C::GetAmmoPocket()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.GetAmmoPocket"));

	ABP_PavlovPawn_C_GetAmmoPocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.UserConstructionScript"));

	ABP_PavlovPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.ReceiveBeginPlay"));

	ABP_PavlovPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.ReceivePossessed"));

	ABP_PavlovPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnTeamIdChanged
// (Event, Protected, BlueprintEvent)

void ABP_PavlovPawn_C::OnTeamIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.OnTeamIdChanged"));

	ABP_PavlovPawn_C_OnTeamIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnCameraClipChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bClipping                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::OnCameraClipChanged(bool* bClipping)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.OnCameraClipChanged"));

	ABP_PavlovPawn_C_OnCameraClipChanged_Params params;
	params.bClipping = bClipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.BlowHelmetOff
// (Event, Public, BlueprintEvent)

void ABP_PavlovPawn_C::BlowHelmetOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.BlowHelmetOff"));

	ABP_PavlovPawn_C_BlowHelmetOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.SetupWatch
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWatch**                 WatchComp                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::SetupWatch(class UWatch** WatchComp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.SetupWatch"));

	ABP_PavlovPawn_C_SetupWatch_Params params;
	params.WatchComp = WatchComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bToggled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocalPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature(bool bToggled, bool bLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature"));

	ABP_PavlovPawn_C_BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature_Params params;
	params.bToggled = bToggled;
	params.bLocalPlayer = bLocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnKill_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::OnKill_Event_1(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.OnKill_Event_1"));

	ABP_PavlovPawn_C_OnKill_Event_1_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.ExecuteUbergraph_BP_PavlovPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::ExecuteUbergraph_BP_PavlovPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovPawn.BP_PavlovPawn_C.ExecuteUbergraph_BP_PavlovPawn"));

	ABP_PavlovPawn_C_ExecuteUbergraph_BP_PavlovPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
