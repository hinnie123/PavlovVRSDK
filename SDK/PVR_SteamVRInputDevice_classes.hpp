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

// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet);
	void STATIC_ShowAllSteamVR_ActionOrigins();
	float STATIC_SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
	void STATIC_SetPoseSource(bool bUseSkeletonPose);
	void STATIC_SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
	bool STATIC_ResetSeatedPosition();
	void STATIC_PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
	float STATIC_GetUserIPD();
	bool STATIC_GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo);
	void STATIC_GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, struct FString* OriginLocalizedName);
	TArray<struct FSteamVRInputBindingInfo> STATIC_GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle);
	bool STATIC_GetSteamVR_HandPoseRelativeToNow(ESteamVRHand hand, float PredictedSecondsFromNow, struct FVector* Position, struct FRotator* Orientation);
	float STATIC_GetSteamVR_GlobalPredictedSecondsFromNow();
	void STATIC_GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets);
	void STATIC_GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions);
	void STATIC_GetSkeletalTransform(bool bWithController, struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand);
	void STATIC_GetSkeletalState(bool* LeftHandState, bool* RightHandState);
	void STATIC_GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
	void STATIC_GetPoseSource(bool* bUsingSkeletonPose);
	void STATIC_GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
	void STATIC_GetFingerCurlsAndSplays(EHand hand, ESkeletalSummaryDataType SummaryDataType, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays);
	void STATIC_GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState);
	void STATIC_GetControllerFidelity(EControllerFidelity* LeftControllerFidelity, EControllerFidelity* RightControllerFidelity);
	void STATIC_FindSteamVR_OriginTrackedDeviceInfo(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo);
	TArray<struct FSteamVRInputBindingInfo> STATIC_FindSteamVR_InputBindingInfo(const struct FName& ActionName, const struct FName& ActionSet);
	bool STATIC_FindSteamVR_ActionOrigin(const struct FName& ActionName, const struct FName& ActionSet);
	void STATIC_FindSteamVR_Action(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet);
};


// Class SteamVRInputDevice.SteamVRTrackingReferences
// 0x0058 (0x0148 - 0x00F0)
class USteamVRTrackingReferences : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnTrackedDeviceActivated;                                 // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTrackedDeviceDeactivated;                               // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ActiveDevicePollFrequency;                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TrackingReferenceScale;                                   // 0x0114(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                TrackingReferences;                                       // 0x0120(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamVRInputDevice.SteamVRTrackingReferences");
		return ptr;
	}


	bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);
	void HideTrackingReferences();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
