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

// Function OculusLibrary.OculusFunctionLibrary.ShowLoadingSplashScreen
struct UOculusFunctionLibrary_ShowLoadingSplashScreen_Params
{
};

// Function OculusLibrary.OculusFunctionLibrary.ShowLoadingIcon
struct UOculusFunctionLibrary_ShowLoadingIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
	struct FVector                                     PosScale3D;                                               // (Parm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.SetLoadingSplashParams
struct UOculusFunctionLibrary_SetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                              // (Parm, ZeroConstructor)
	struct FVector                                     DistanceInMeters;                                         // (Parm, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, IsPlainOldData)
	float                                              RotationDeltaInDeg;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    BaseRot;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     PosOffset;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     BaseOffsetInMeters;                                       // (Parm, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
struct UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.IsLoadingIconEnabled
struct UOculusFunctionLibrary_IsLoadingIconEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
struct UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.HideLoadingSplashScreen
struct UOculusFunctionLibrary_HideLoadingSplashScreen_Params
{
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.HideLoadingIcon
struct UOculusFunctionLibrary_HideLoadingIcon_Params
{
};

// Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
	struct FHmdUserProfile                             Profile;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
	struct FVector                                     AngularAcceleration;                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinearAcceleration;                                       // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     NeckPosition;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               bUseOrienationForPlayerCamera;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePositionForPlayerCamera;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionScale;                                            // (ConstParm, Parm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
struct UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params
{
	bool                                               bFollowHmdOrientation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowHmdPosition;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetLoadingSplashParams
struct UOculusFunctionLibrary_GetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     DistanceInMeters;                                         // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              RotationDeltaInDeg;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutPosOffset;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutBaseOffsetInMeters;                                    // (Parm, OutParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
struct UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
struct UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params
{
	bool                                               bFollowHmdOrientation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowHmdPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
struct UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params
{
	bool                                               bAutoShowEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.ClearLoadingSplashScreens
struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
{
};

// Function OculusLibrary.OculusFunctionLibrary.AddLoadingSplashScreen
struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TranslationInMeters;                                      // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bClearBeforeAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
