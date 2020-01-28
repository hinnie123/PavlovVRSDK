#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetTurnRot
struct ABP_PavlovPawn_C_GetTurnRot_Params
{
	float                                              TurnInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.SetParachuteRot
struct ABP_PavlovPawn_C_SetParachuteRot_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetStoppingScalar
struct ABP_PavlovPawn_C_GetStoppingScalar_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.NextLocationParachute
struct ABP_PavlovPawn_C_NextLocationParachute_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.AddHOT
struct ABP_PavlovPawn_C_AddHOT_Params
{
	float                                              HealAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetBombHolster
struct ABP_PavlovPawn_C_GetBombHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetGrenadeHolsters
struct ABP_PavlovPawn_C_GetGrenadeHolsters_Params
{
	TArray<class UHolsterComponent*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetKnifeHolster
struct ABP_PavlovPawn_C_GetKnifeHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetSideWeaponHolster
struct ABP_PavlovPawn_C_GetSideWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetMainWeaponHolster
struct ABP_PavlovPawn_C_GetMainWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetEquipmentByName
struct ABP_PavlovPawn_C_GetEquipmentByName_Params
{
	struct FName*                                      EquipmentName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentDefinition                        definition;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetAmmoPocket
struct ABP_PavlovPawn_C_GetAmmoPocket_Params
{
	class UVRPocketComponent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.UserConstructionScript
struct ABP_PavlovPawn_C_UserConstructionScript_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnRadioToggle_Event_1
struct ABP_PavlovPawn_C_OnRadioToggle_Event_1_Params
{
	bool                                               bToggled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanListen;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.LootedActor_Client
struct ABP_PavlovPawn_C_LootedActor_Client_Params
{
	class AActor*                                      LootActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.LootedActor_Server
struct ABP_PavlovPawn_C_LootedActor_Server_Params
{
	class AActor*                                      LootActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
struct ABP_PavlovPawn_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.HOTTick
struct ABP_PavlovPawn_C_HOTTick_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.HOTs Timer
struct ABP_PavlovPawn_C_HOTs_Timer_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnVectorInputReceived_Left
struct ABP_PavlovPawn_C_OnVectorInputReceived_Left_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnVectorInputReceived_Right
struct ABP_PavlovPawn_C_OnVectorInputReceived_Right_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.SetupWatch
struct ABP_PavlovPawn_C_SetupWatch_Params
{
	class UWatch**                                     WatchComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnCameraClipChanged
struct ABP_PavlovPawn_C_OnCameraClipChanged_Params
{
	bool*                                              bClipping;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.DeployParachute
struct ABP_PavlovPawn_C_DeployParachute_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnHandleUngrab_Right
struct ABP_PavlovPawn_C_OnHandleUngrab_Right_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.OnHandleUngrab_Left
struct ABP_PavlovPawn_C_OnHandleUngrab_Left_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.ReceiveBeginPlay
struct ABP_PavlovPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PavlovPawn.BP_PavlovPawn_C.ExecuteUbergraph_BP_PavlovPawn
struct ABP_PavlovPawn_C_ExecuteUbergraph_BP_PavlovPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
