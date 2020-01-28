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

// Function AMMO_Base.AMMO_Base_C.SwapAmmoCountMat
struct AAMMO_Base_C_SwapAmmoCountMat_Params
{
};

// Function AMMO_Base.AMMO_Base_C.GetAmmoCountMaterial
struct AAMMO_Base_C_GetAmmoCountMaterial_Params
{
	int                                                AmmoStacks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AMMO_Base.AMMO_Base_C.SwitchOnName
struct AAMMO_Base_C_SwitchOnName_Params
{
	struct FName                                       AmmoName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AMMO_Base.AMMO_Base_C.UserConstructionScript
struct AAMMO_Base_C_UserConstructionScript_Params
{
};

// Function AMMO_Base.AMMO_Base_C.ReceiveBeginPlay
struct AAMMO_Base_C_ReceiveBeginPlay_Params
{
};

// Function AMMO_Base.AMMO_Base_C.OnAmmoCountChanged
struct AAMMO_Base_C_OnAmmoCountChanged_Params
{
};

// Function AMMO_Base.AMMO_Base_C.Physicalize
struct AAMMO_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AMMO_Base.AMMO_Base_C.ExecuteUbergraph_AMMO_Base
struct AAMMO_Base_C_ExecuteUbergraph_AMMO_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
