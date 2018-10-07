// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OculusLibrary.OculusFunctionLibrary.ShowLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_ShowLoadingSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.ShowLoadingSplashScreen"));

	UOculusFunctionLibrary_ShowLoadingSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.ShowLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_ShowLoadingIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.ShowLoadingIcon"));

	UOculusFunctionLibrary_ShowLoadingIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 PosScale3D                     (Parm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetPositionScale3D(const struct FVector& PosScale3D)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D"));

	UOculusFunctionLibrary_SetPositionScale3D_Params params;
	params.PosScale3D = PosScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.SetLoadingSplashParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 TexturePath                    (Parm, ZeroConstructor)
// struct FVector                 DistanceInMeters               (Parm, IsPlainOldData)
// struct FVector2D               SizeInMeters                   (Parm, IsPlainOldData)
// struct FVector                 RotationAxis                   (Parm, IsPlainOldData)
// float                          RotationDeltaInDeg             (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetLoadingSplashParams(const struct FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.SetLoadingSplashParams"));

	UOculusFunctionLibrary_SetLoadingSplashParams_Params params;
	params.TexturePath = TexturePath;
	params.DistanceInMeters = DistanceInMeters;
	params.SizeInMeters = SizeInMeters;
	params.RotationAxis = RotationAxis;
	params.RotationDeltaInDeg = RotationDeltaInDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                BaseRot                        (Parm, IsPlainOldData)
// struct FVector                 PosOffset                      (Parm, IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndPositionOffset"));

	UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params;
	params.BaseRot = BaseRot;
	params.PosOffset = PosOffset;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 BaseOffsetInMeters             (Parm, IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters"));

	UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params;
	params.Rotation = Rotation;
	params.BaseOffsetInMeters = BaseOffsetInMeters;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsPlayerControllerFollowHmdEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled"));

	UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.IsLoadingIconEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsLoadingIconEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.IsLoadingIconEnabled"));

	UOculusFunctionLibrary_IsLoadingIconEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsAutoLoadingSplashScreenEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled"));

	UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.HideLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bClear                         (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_HideLoadingSplashScreen(bool bClear)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.HideLoadingSplashScreen"));

	UOculusFunctionLibrary_HideLoadingSplashScreen_Params params;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.HideLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_HideLoadingIcon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.HideLoadingIcon"));

	UOculusFunctionLibrary_HideLoadingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHmdUserProfile         Profile                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_GetUserProfile(struct FHmdUserProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetUserProfile"));

	UOculusFunctionLibrary_GetUserProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;

	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 AngularAcceleration            (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinearAcceleration             (Parm, OutParm, IsPlainOldData)
// struct FVector                 AngularVelocity                (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinearVelocity                 (Parm, OutParm, IsPlainOldData)
// float                          TimeInSeconds                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData"));

	UOculusFunctionLibrary_GetRawSensorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngularAcceleration != nullptr)
		*AngularAcceleration = params.AngularAcceleration;
	if (LinearAcceleration != nullptr)
		*LinearAcceleration = params.LinearAcceleration;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (LinearVelocity != nullptr)
		*LinearVelocity = params.LinearVelocity;
	if (TimeInSeconds != nullptr)
		*TimeInSeconds = params.TimeInSeconds;
}


// Function OculusLibrary.OculusFunctionLibrary.GetPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 DevicePosition                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 NeckPosition                   (Parm, OutParm, IsPlainOldData)
// bool                           bUseOrienationForPlayerCamera  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePositionForPlayerCamera    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PositionScale                  (ConstParm, Parm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetPose"));

	UOculusFunctionLibrary_GetPose_Params params;
	params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	params.PositionScale = PositionScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
	if (NeckPosition != nullptr)
		*NeckPosition = params.NeckPosition;
}


// Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bFollowHmdOrientation          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowHmdPosition             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd"));

	UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFollowHmdOrientation != nullptr)
		*bFollowHmdOrientation = params.bFollowHmdOrientation;
	if (bFollowHmdPosition != nullptr)
		*bFollowHmdPosition = params.bFollowHmdPosition;
}


// Function OculusLibrary.OculusFunctionLibrary.GetLoadingSplashParams
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 TexturePath                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 DistanceInMeters               (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SizeInMeters                   (Parm, OutParm, IsPlainOldData)
// struct FVector                 RotationAxis                   (Parm, OutParm, IsPlainOldData)
// float                          RotationDeltaInDeg             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetLoadingSplashParams(struct FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetLoadingSplashParams"));

	UOculusFunctionLibrary_GetLoadingSplashParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TexturePath != nullptr)
		*TexturePath = params.TexturePath;
	if (DistanceInMeters != nullptr)
		*DistanceInMeters = params.DistanceInMeters;
	if (SizeInMeters != nullptr)
		*SizeInMeters = params.SizeInMeters;
	if (RotationAxis != nullptr)
		*RotationAxis = params.RotationAxis;
	if (RotationDeltaInDeg != nullptr)
		*RotationDeltaInDeg = params.RotationDeltaInDeg;
}


// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutPosOffset                   (Parm, OutParm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset"));

	UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;
	if (OutPosOffset != nullptr)
		*OutPosOffset = params.OutPosOffset;
}


// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutBaseOffsetInMeters          (Parm, OutParm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters"));

	UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
}


// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_EnablePlayerControllerFollowHmd(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd"));

	UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bFollowHmdOrientation          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowHmdPosition             (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd"));

	UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params params;
	params.bFollowHmdOrientation = bFollowHmdOrientation;
	params.bFollowHmdPosition = bFollowHmdPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoShowEnabled               (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.EnableAutoLoadingSplashScreen"));

	UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params params;
	params.bAutoShowEnabled = bAutoShowEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.ClearLoadingSplashScreens
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_ClearLoadingSplashScreens()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.ClearLoadingSplashScreens"));

	UOculusFunctionLibrary_ClearLoadingSplashScreens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.AddLoadingSplashScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TranslationInMeters            (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector2D               SizeInMeters                   (Parm, IsPlainOldData)
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bClearBeforeAdd                (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusLibrary.OculusFunctionLibrary.AddLoadingSplashScreen"));

	UOculusFunctionLibrary_AddLoadingSplashScreen_Params params;
	params.Texture = Texture;
	params.TranslationInMeters = TranslationInMeters;
	params.Rotation = Rotation;
	params.SizeInMeters = SizeInMeters;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
