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

// Function Knife_ST1.Knife_ST1_C.UserConstructionScript
struct AKnife_ST1_C_UserConstructionScript_Params
{
};

// Function Knife_ST1.Knife_ST1_C.OnBloodyChanged
struct AKnife_ST1_C_OnBloodyChanged_Params
{
	bool*                                              bNewBloody;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Knife_ST1.Knife_ST1_C.OnDrop
struct AKnife_ST1_C_OnDrop_Params
{
};

// Function Knife_ST1.Knife_ST1_C.Physicalize
struct AKnife_ST1_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Knife_ST1.Knife_ST1_C.OnPick
struct AKnife_ST1_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Knife_ST1.Knife_ST1_C.Used
struct AKnife_ST1_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Knife_ST1.Knife_ST1_C.Use
struct AKnife_ST1_C_Use_Params
{
};

// Function Knife_ST1.Knife_ST1_C.ExecuteUbergraph_Knife_ST1
struct AKnife_ST1_C_ExecuteUbergraph_Knife_ST1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
