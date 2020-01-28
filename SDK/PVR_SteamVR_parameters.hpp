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

// DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
struct USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Params
{
};

// Function SteamVR.SteamVRChaperoneComponent.GetBounds
struct USteamVRChaperoneComponent_GetBounds_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
struct USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params
{
	ESteamVRTrackedDeviceType                          DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutTrackedDeviceIds;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
struct USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params
{
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutOrientation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
struct USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params
{
	int                                                ControllerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutOrientation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
