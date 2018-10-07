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

// Function OculusRift.OculusRiftBoundaryComponent.SetOuterBoundaryColor
struct UOculusRiftBoundaryComponent_SetOuterBoundaryColor_Params
{
	struct FColor                                      InBoundaryColor;                                          // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusRift.OculusRiftBoundaryComponent.ResetOuterBoundaryColor
struct UOculusRiftBoundaryComponent_ResetOuterBoundaryColor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusRift.OculusRiftBoundaryComponent.RequestOuterBoundaryVisible
struct UOculusRiftBoundaryComponent_RequestOuterBoundaryVisible_Params
{
	bool                                               BoundaryVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction OculusRift.OculusRiftBoundaryComponent.OculusOuterBoundaryTriggeredEvent__DelegateSignature
struct UOculusRiftBoundaryComponent_OculusOuterBoundaryTriggeredEvent__DelegateSignature_Params
{
	TArray<struct FBoundaryTestResult>                 OuterBoundsInteractionList;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction OculusRift.OculusRiftBoundaryComponent.OculusOuterBoundaryReturnedEvent__DelegateSignature
struct UOculusRiftBoundaryComponent_OculusOuterBoundaryReturnedEvent__DelegateSignature_Params
{
};

// Function OculusRift.OculusRiftBoundaryComponent.IsOuterBoundaryTriggered
struct UOculusRiftBoundaryComponent_IsOuterBoundaryTriggered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusRift.OculusRiftBoundaryComponent.IsOuterBoundaryDisplayed
struct UOculusRiftBoundaryComponent_IsOuterBoundaryDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusRift.OculusRiftBoundaryComponent.GetTriggeredPlayAreaInfo
struct UOculusRiftBoundaryComponent_GetTriggeredPlayAreaInfo_Params
{
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBoundaryTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusRift.OculusRiftBoundaryComponent.GetTriggeredOuterBoundaryInfo
struct UOculusRiftBoundaryComponent_GetTriggeredOuterBoundaryInfo_Params
{
	TArray<struct FBoundaryTestResult>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusRift.OculusRiftBoundaryComponent.GetPlayAreaPoints
struct UOculusRiftBoundaryComponent_GetPlayAreaPoints_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusRift.OculusRiftBoundaryComponent.GetPlayAreaDimensions
struct UOculusRiftBoundaryComponent_GetPlayAreaDimensions_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OculusRift.OculusRiftBoundaryComponent.GetOuterBoundaryPoints
struct UOculusRiftBoundaryComponent_GetOuterBoundaryPoints_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusRift.OculusRiftBoundaryComponent.GetOuterBoundaryDimensions
struct UOculusRiftBoundaryComponent_GetOuterBoundaryDimensions_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OculusRift.OculusRiftBoundaryComponent.CheckIfPointWithinPlayArea
struct UOculusRiftBoundaryComponent_CheckIfPointWithinPlayArea_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FBoundaryTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusRift.OculusRiftBoundaryComponent.CheckIfPointWithinOuterBounds
struct UOculusRiftBoundaryComponent_CheckIfPointWithinOuterBounds_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FBoundaryTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
