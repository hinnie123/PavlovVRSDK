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

// Function Gun_Base.Gun_Base_C.GetLocalMagazineOffset
struct AGun_Base_C_GetLocalMagazineOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.UpdateChamberMesh
struct AGun_Base_C_UpdateChamberMesh_Params
{
	EVRGunChamberState                                 ChamberState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.CreateChamberBullet
struct AGun_Base_C_CreateChamberBullet_Params
{
};

// Function Gun_Base.Gun_Base_C.GetChargingHandle
struct AGun_Base_C_GetChargingHandle_Params
{
	class UVRHandleComponent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.SpawnAndEjectShell
struct AGun_Base_C_SpawnAndEjectShell_Params
{
	int                                                DetailMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LIVE;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.UserConstructionScript
struct AGun_Base_C_UserConstructionScript_Params
{
};

// Function Gun_Base.Gun_Base_C.ReceiveBeginPlay
struct AGun_Base_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Base.Gun_Base_C.Physicalize
struct AGun_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.AttachMagazine
struct AGun_Base_C_AttachMagazine_Params
{
	class AVRMagazine**                                MagazineToAttach;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.RecoilDrop
struct AGun_Base_C_RecoilDrop_Params
{
};

// Function Gun_Base.Gun_Base_C.OnRoundEjected
struct AGun_Base_C_OnRoundEjected_Params
{
	bool*                                              bLive;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.OnChamberStateChangedEvent
struct AGun_Base_C_OnChamberStateChangedEvent_Params
{
	int                                                ChamberIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.CustomEvent_1
struct AGun_Base_C_CustomEvent_1_Params
{
};

// Function Gun_Base.Gun_Base_C.ExecuteUbergraph_Gun_Base
struct AGun_Base_C_ExecuteUbergraph_Gun_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
