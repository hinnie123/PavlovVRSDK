#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusHMD.OculusFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowLoadingSplashScreen();
	void STATIC_ShowLoadingIcon(class UTexture2D* Texture);
	void STATIC_SetTiledMultiresLevel(ETiledMultiResLevel Level);
	void STATIC_SetReorientHMDOnControllerRecenter(bool recenterMode);
	void STATIC_SetPositionScale3D(const struct FVector& PosScale3D);
	void STATIC_SetLoadingSplashParams(const struct FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg);
	void STATIC_SetGuardianVisibility(bool GuardianVisible);
	void STATIC_SetDisplayFrequency(float RequestedFrequency);
	void STATIC_SetCPUAndGPULevels(int CPULevel, int GPULevel);
	void STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options);
	void STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsLoadingIconEnabled();
	bool STATIC_IsGuardianDisplayed();
	bool STATIC_IsDeviceTracked(ETrackedDeviceType DeviceType);
	bool STATIC_IsAutoLoadingSplashScreenEnabled();
	void STATIC_HideLoadingSplashScreen(bool bClear);
	void STATIC_HideLoadingIcon();
	bool STATIC_HasSystemOverlayPresent();
	bool STATIC_HasInputFocus();
	bool STATIC_GetUserProfile(struct FHmdUserProfile* Profile);
	ETiledMultiResLevel STATIC_GetTiledMultiresLevel();
	void STATIC_GetRawSensorData(ETrackedDeviceType DeviceType, struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds);
	void STATIC_GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition);
	struct FGuardianTestResult STATIC_GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType);
	struct FTransform STATIC_GetPlayAreaTransform();
	struct FGuardianTestResult STATIC_GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
	void STATIC_GetLoadingSplashParams(struct FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg);
	TArray<struct FVector> STATIC_GetGuardianPoints(EBoundaryType BoundaryType);
	struct FVector STATIC_GetGuardianDimensions(EBoundaryType BoundaryType);
	void STATIC_GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization);
	float STATIC_GetGPUFrameTime();
	struct FString STATIC_GetDeviceName();
	float STATIC_GetCurrentDisplayFrequency();
	void STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	void STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	TArray<float> STATIC_GetAvailableDisplayFrequencies();
	void STATIC_EnablePositionTracking(bool bPositionTracking);
	void STATIC_EnableOrientationTracking(bool bOrientationTracking);
	void STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
	void STATIC_ClearLoadingSplashScreens();
	void STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};


// Class OculusHMD.OculusHMDRuntimeSettings
// 0x0018 (0x0040 - 0x0028)
class UOculusHMDRuntimeSettings : public UObject
{
public:
	bool                                               bAutoEnabled;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FOculusSplashDesc>                   SplashDescs;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusHMDRuntimeSettings");
		return ptr;
	}

};


// Class OculusHMD.OculusSceneCaptureCubemap
// 0x0068 (0x0090 - 0x0028)
class UOculusSceneCaptureCubemap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class USceneCaptureComponent2D*>            CaptureComponents;                                        // 0x0038(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusSceneCaptureCubemap");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
