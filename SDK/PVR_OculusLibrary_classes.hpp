#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusLibrary.OculusFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusLibrary.OculusFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowLoadingSplashScreen();
	void STATIC_ShowLoadingIcon(class UTexture2D* Texture);
	void STATIC_SetPositionScale3D(const struct FVector& PosScale3D);
	void STATIC_SetLoadingSplashParams(const struct FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg);
	void STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options);
	void STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsPlayerControllerFollowHmdEnabled();
	bool STATIC_IsLoadingIconEnabled();
	bool STATIC_IsAutoLoadingSplashScreenEnabled();
	void STATIC_HideLoadingSplashScreen(bool bClear);
	void STATIC_HideLoadingIcon();
	bool STATIC_GetUserProfile(struct FHmdUserProfile* Profile);
	void STATIC_GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds);
	void STATIC_GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition);
	void STATIC_GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition);
	void STATIC_GetLoadingSplashParams(struct FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg);
	void STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	void STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	void STATIC_EnablePlayerControllerFollowHmd(bool bEnable);
	void STATIC_EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition);
	void STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
	void STATIC_ClearLoadingSplashScreens();
	void STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
