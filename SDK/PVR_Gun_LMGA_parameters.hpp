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

// Function Gun_LMGA.Gun_LMGA_C.OnRep_OverHeated
struct AGun_LMGA_C_OnRep_OverHeated_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ClearOverheatTimer
struct AGun_LMGA_C_ClearOverheatTimer_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.AddHeat
struct AGun_LMGA_C_AddHeat_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnRep_OverHeating
struct AGun_LMGA_C_OnRep_OverHeating_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.IsMagazineEmpty
struct AGun_LMGA_C_IsMagazineEmpty_Params
{
	bool                                               Empty;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.NewFunction_1
struct AGun_LMGA_C_NewFunction_1_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.UserConstructionScript
struct AGun_LMGA_C_UserConstructionScript_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValueDegrees;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ServerReportDustCoverState
struct AGun_LMGA_C_ServerReportDustCoverState_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.OnPostDustCoverStateChange
struct AGun_LMGA_C_OnPostDustCoverStateChange_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnDrop
struct AGun_LMGA_C_OnDrop_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnPick
struct AGun_LMGA_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.OnUnload
struct AGun_LMGA_C_OnUnload_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ReceiveBeginPlay
struct AGun_LMGA_C_ReceiveBeginPlay_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnMagazineChanged
struct AGun_LMGA_C_OnMagazineChanged_Params
{
	bool*                                              bHasMagazine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.Physicalize
struct AGun_LMGA_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.Fired
struct AGun_LMGA_C_Fired_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.Used
struct AGun_LMGA_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.CoolOffTimer_Server
struct AGun_LMGA_C_CoolOffTimer_Server_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.CoolOff
struct AGun_LMGA_C_CoolOff_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.Use
struct AGun_LMGA_C_Use_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.Add Barrel Heat_Server
struct AGun_LMGA_C_Add_Barrel_Heat_Server_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ClearOverHeatTimer_Server
struct AGun_LMGA_C_ClearOverHeatTimer_Server_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.PlaySoundFXAttached
struct AGun_LMGA_C_PlaySoundFXAttached_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.Stop SoundFX
struct AGun_LMGA_C_Stop_SoundFX_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.Stop shooting
struct AGun_LMGA_C_Stop_shooting_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.AddHeatTimer
struct AGun_LMGA_C_AddHeatTimer_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ExecuteUbergraph_Gun_LMGA
struct AGun_LMGA_C_ExecuteUbergraph_Gun_LMGA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
