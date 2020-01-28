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

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
struct USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params
{
	struct FSteamVRAction                              SteamVRAction;                                            // (Parm)
	struct FSteamVRActionSet                           SteamVRActionSet;                                         // (Parm)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
struct USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Params
{
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
struct USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
struct USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params
{
	bool                                               bUseSkeletonPose;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
struct USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params
{
	bool                                               NewLeftHandState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewRightHandState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
struct USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
struct USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params
{
	ESteamVRHand                                       hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartSecondsFromNow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
struct USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params
{
	struct FSteamVRAction                              SteamVRAction;                                            // (Parm)
	struct FSteamVRInputOriginInfo                     InputOriginInfo;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params
{
	struct FSteamVRAction                              SteamVRAction;                                            // (Parm)
	TArray<ESteamVRInputStringBits>                    LocalizedParts;                                           // (Parm, ZeroConstructor)
	struct FString                                     OriginLocalizedName;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params
{
	struct FSteamVRAction                              SteamVRActionHandle;                                      // (Parm)
	TArray<struct FSteamVRInputBindingInfo>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESteamVRHand                                       hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictedSecondsFromNow;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params
{
	TArray<struct FSteamVRActionSet>                   SteamVRActionSets;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params
{
	TArray<struct FSteamVRAction>                      SteamVRActions;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
struct USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params
{
	struct FSteamVRSkeletonTransform                   LeftHand;                                                 // (Parm, OutParm)
	struct FSteamVRSkeletonTransform                   RightHand;                                                // (Parm, OutParm)
	bool                                               bWithController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
struct USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params
{
	bool                                               LeftHandState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RightHandState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
struct USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
struct USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params
{
	bool                                               bUsingSkeletonPose;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
struct USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
struct USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params
{
	EHand                                              hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamVRFingerCurls                         FingerCurls;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamVRFingerSplays                        FingerSplays;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESkeletalSummaryDataType                           SummaryDataType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
struct USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params
{
	bool                                               LeftHandState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RightHandState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
struct USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params
{
	EControllerFidelity                                LeftControllerFidelity;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EControllerFidelity                                RightControllerFidelity;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamVRInputOriginInfo                     InputOriginInfo;                                          // (Parm, OutParm)
	struct FName                                       ActionSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSteamVRInputBindingInfo>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamVRAction                              FoundAction;                                              // (Parm, OutParm)
	struct FSteamVRActionSet                           FoundActionSet;                                           // (Parm, OutParm)
	struct FName                                       ActionSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
struct USteamVRTrackingReferences_ShowTrackingReferences_Params
{
	class UStaticMesh*                                 TrackingReferenceMesh;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
struct USteamVRTrackingReferences_HideTrackingReferences_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
