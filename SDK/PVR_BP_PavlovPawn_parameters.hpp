#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetBombHolster
struct ABP_PavlovPawn_C_GetBombHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetGrenadeHolsters
struct ABP_PavlovPawn_C_GetGrenadeHolsters_Params
{
	TArray<class UHolsterComponent*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetKnifeHolster
struct ABP_PavlovPawn_C_GetKnifeHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetSideWeaponHolster
struct ABP_PavlovPawn_C_GetSideWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetMainWeaponHolster
struct ABP_PavlovPawn_C_GetMainWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetEquipmentByName
struct ABP_PavlovPawn_C_GetEquipmentByName_Params
{
	struct FName*                                      EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentDefinition                        Definition;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetAmmoPocket
struct ABP_PavlovPawn_C_GetAmmoPocket_Params
{
	class UVRPocketComponent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.UserConstructionScript
struct ABP_PavlovPawn_C_UserConstructionScript_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.ReceiveBeginPlay
struct ABP_PavlovPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.ReceivePossessed
struct ABP_PavlovPawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnTeamIdChanged
struct ABP_PavlovPawn_C_OnTeamIdChanged_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnCameraClipChanged
struct ABP_PavlovPawn_C_OnCameraClipChanged_Params
{
	bool*                                              bClipping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.BlowHelmetOff
struct ABP_PavlovPawn_C_BlowHelmetOff_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.SetupWatch
struct ABP_PavlovPawn_C_SetupWatch_Params
{
	class UWatch**                                     WatchComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature
struct ABP_PavlovPawn_C_BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature_Params
{
	bool                                               bToggled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnKill_Event_1
struct ABP_PavlovPawn_C_OnKill_Event_1_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.ExecuteUbergraph_BP_PavlovPawn
struct ABP_PavlovPawn_C_ExecuteUbergraph_BP_PavlovPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
