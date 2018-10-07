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

// Function Gun_Base.Gun_Base_C.UpdateChamberMesh
struct AGun_Base_C_UpdateChamberMesh_Params
{
	EVRGunChamberState                                 ChamberState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.CreateChamberBullet
struct AGun_Base_C_CreateChamberBullet_Params
{
};

// Function Gun_Base.Gun_Base_C.GetChargingHandle
struct AGun_Base_C_GetChargingHandle_Params
{
	class UVRHandleComponent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.SpawnAndEjectShell
struct AGun_Base_C_SpawnAndEjectShell_Params
{
	int                                                DetailMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Live;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
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
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.Fired
struct AGun_Base_C_Fired_Params
{
};

// Function Gun_Base.Gun_Base_C.AttachMagazine
struct AGun_Base_C_AttachMagazine_Params
{
	class AVRMagazine**                                MagazineToAttach;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.RecoilDrop
struct AGun_Base_C_RecoilDrop_Params
{
};

// Function Gun_Base.Gun_Base_C.OnRoundEjected
struct AGun_Base_C_OnRoundEjected_Params
{
	bool*                                              bLive;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.OnChamberStateChangedEvent
struct AGun_Base_C_OnChamberStateChangedEvent_Params
{
	int                                                ChamberIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Base.Gun_Base_C.CustomEvent_1
struct AGun_Base_C_CustomEvent_1_Params
{
};

// Function Gun_Base.Gun_Base_C.ExecuteUbergraph_Gun_Base
struct AGun_Base_C_ExecuteUbergraph_Gun_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
