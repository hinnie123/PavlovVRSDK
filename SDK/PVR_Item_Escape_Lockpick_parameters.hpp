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

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OpenLockpick
struct AItem_Escape_Lockpick_C_OpenLockpick_Params
{
	bool                                               Open_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.TryGrabLock_Client
struct AItem_Escape_Lockpick_C_TryGrabLock_Client_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Lockpick_Client
struct AItem_Escape_Lockpick_C_Lockpick_Client_Params
{
	class ABP_Escape_Lock_C*                           EscapeLock;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.PlayCloseSound
struct AItem_Escape_Lockpick_C_PlayCloseSound_Params
{
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.PlayOpenSound
struct AItem_Escape_Lockpick_C_PlayOpenSound_Params
{
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.TryUseItem
struct AItem_Escape_Lockpick_C_TryUseItem_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayError;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.UserConstructionScript
struct AItem_Escape_Lockpick_C_UserConstructionScript_Params
{
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Lockpick Objective_Server
struct AItem_Escape_Lockpick_C_Lockpick_Objective_Server_Params
{
	class ABP_Escape_Lock_C*                           Escape_Lock;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Use
struct AItem_Escape_Lockpick_C_Use_Params
{
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Used
struct AItem_Escape_Lockpick_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OnDrop
struct AItem_Escape_Lockpick_C_OnDrop_Params
{
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Try Lockpick Objective
struct AItem_Escape_Lockpick_C_Try_Lockpick_Objective_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OnPick
struct AItem_Escape_Lockpick_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.ExecuteUbergraph_Item_Escape_Lockpick
struct AItem_Escape_Lockpick_C_ExecuteUbergraph_Item_Escape_Lockpick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
