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

// Function Magazine_Base.Magazine_Base_C.UpdateMesh
struct AMagazine_Base_C_UpdateMesh_Params
{
};

// Function Magazine_Base.Magazine_Base_C.UserConstructionScript
struct AMagazine_Base_C_UserConstructionScript_Params
{
};

// Function Magazine_Base.Magazine_Base_C.Physicalize
struct AMagazine_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Magazine_Base.Magazine_Base_C.OnReleasedFromGun
struct AMagazine_Base_C_OnReleasedFromGun_Params
{
};

// Function Magazine_Base.Magazine_Base_C.ReceiveBeginPlay
struct AMagazine_Base_C_ReceiveBeginPlay_Params
{
};

// Function Magazine_Base.Magazine_Base_C.Used
struct AMagazine_Base_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Magazine_Base.Magazine_Base_C.OnBulletsChanged
struct AMagazine_Base_C_OnBulletsChanged_Params
{
};

// Function Magazine_Base.Magazine_Base_C.ExecuteUbergraph_Magazine_Base
struct AMagazine_Base_C_ExecuteUbergraph_Magazine_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
