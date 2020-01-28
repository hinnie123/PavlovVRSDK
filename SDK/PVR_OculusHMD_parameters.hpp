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

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
struct UOculusFunctionLibrary_ShowLoadingSplashScreen_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
struct UOculusFunctionLibrary_ShowLoadingIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
struct UOculusFunctionLibrary_SetTiledMultiresLevel_Params
{
	ETiledMultiResLevel                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
struct UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params
{
	bool                                               recenterMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
	struct FVector                                     PosScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
struct UOculusFunctionLibrary_SetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                              // (Parm, ZeroConstructor)
	struct FVector                                     DistanceInMeters;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationDeltaInDeg;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
struct UOculusFunctionLibrary_SetGuardianVisibility_Params
{
	bool                                               GuardianVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
struct UOculusFunctionLibrary_SetDisplayFrequency_Params
{
	float                                              RequestedFrequency;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
struct UOculusFunctionLibrary_SetCPUAndGPULevels_Params
{
	int                                                CPULevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GPULevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    BaseRot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PosOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseOffsetInMeters;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
struct UOculusFunctionLibrary_IsLoadingIconEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
struct UOculusFunctionLibrary_IsGuardianDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
struct UOculusFunctionLibrary_IsDeviceTracked_Params
{
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
struct UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
struct UOculusFunctionLibrary_HideLoadingSplashScreen_Params
{
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
struct UOculusFunctionLibrary_HideLoadingIcon_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
struct UOculusFunctionLibrary_HasSystemOverlayPresent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
struct UOculusFunctionLibrary_HasInputFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
	struct FHmdUserProfile                             Profile;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
struct UOculusFunctionLibrary_GetTiledMultiresLevel_Params
{
	ETiledMultiResLevel                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
	struct FVector                                     AngularAcceleration;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAcceleration;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NeckPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOrienationForPlayerCamera;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePositionForPlayerCamera;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionScale;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
struct UOculusFunctionLibrary_GetPointGuardianIntersection_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EBoundaryType                                      BoundaryType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuardianTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
struct UOculusFunctionLibrary_GetPlayAreaTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
struct UOculusFunctionLibrary_GetNodeGuardianIntersection_Params
{
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EBoundaryType                                      BoundaryType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuardianTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
struct UOculusFunctionLibrary_GetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     DistanceInMeters;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RotationDeltaInDeg;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
struct UOculusFunctionLibrary_GetGuardianPoints_Params
{
	EBoundaryType                                      BoundaryType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
struct UOculusFunctionLibrary_GetGuardianDimensions_Params
{
	EBoundaryType                                      BoundaryType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
struct UOculusFunctionLibrary_GetGPUUtilization_Params
{
	bool                                               IsGPUAvailable;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GPUUtilization;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
struct UOculusFunctionLibrary_GetGPUFrameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
struct UOculusFunctionLibrary_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
struct UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPosOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutBaseOffsetInMeters;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
struct UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
struct UOculusFunctionLibrary_EnablePositionTracking_Params
{
	bool                                               bPositionTracking;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
struct UOculusFunctionLibrary_EnableOrientationTracking_Params
{
	bool                                               bOrientationTracking;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
struct UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params
{
	bool                                               bAutoShowEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TranslationInMeters;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearBeforeAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
