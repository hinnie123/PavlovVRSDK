// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRAction                  (Parm)
// struct FSteamVRActionSet       SteamVRActionSet               (Parm)

void USteamVRInputDeviceFunctionLibrary::STATIC_ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin");

	USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params params;
	params.SteamVRAction = SteamVRAction;
	params.SteamVRActionSet = SteamVRActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
// (Final, Native, Static, Public, BlueprintCallable)

void USteamVRInputDeviceFunctionLibrary::STATIC_ShowAllSteamVR_ActionOrigins()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins");

	USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USteamVRInputDeviceFunctionLibrary::STATIC_SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow");

	USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bUseSkeletonPose               (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_SetPoseSource(bool bUseSkeletonPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource");

	USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params params;
	params.bUseSkeletonPose = bUseSkeletonPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           NewLeftHandState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewRightHandState              (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState");

	USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params params;
	params.NewLeftHandState = NewLeftHandState;
	params.NewRightHandState = NewRightHandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRInputDeviceFunctionLibrary::STATIC_ResetSeatedPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition");

	USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ESteamVRHand                   hand                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartSecondsFromNow            (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationSeconds                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback");

	USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params params;
	params.hand = hand;
	params.StartSecondsFromNow = StartSecondsFromNow;
	params.DurationSeconds = DurationSeconds;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USteamVRInputDeviceFunctionLibrary::STATIC_GetUserIPD()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD");

	USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRAction                  (Parm)
// struct FSteamVRInputOriginInfo InputOriginInfo                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params params;
	params.SteamVRAction = SteamVRAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputOriginInfo != nullptr)
		*InputOriginInfo = params.InputOriginInfo;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRAction                  (Parm)
// TArray<ESteamVRInputStringBits> LocalizedParts                 (Parm, ZeroConstructor)
// struct FString                 OriginLocalizedName            (Parm, OutParm, ZeroConstructor)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, struct FString* OriginLocalizedName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params params;
	params.SteamVRAction = SteamVRAction;
	params.LocalizedParts = LocalizedParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OriginLocalizedName != nullptr)
		*OriginLocalizedName = params.OriginLocalizedName;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRActionHandle            (Parm)
// TArray<struct FSteamVRInputBindingInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params params;
	params.SteamVRActionHandle = SteamVRActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ESteamVRHand                   hand                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          PredictedSecondsFromNow        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_HandPoseRelativeToNow(ESteamVRHand hand, float PredictedSecondsFromNow, struct FVector* Position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params params;
	params.hand = hand;
	params.PredictedSecondsFromNow = PredictedSecondsFromNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_GlobalPredictedSecondsFromNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSteamVRActionSet> SteamVRActionSets              (Parm, OutParm, ZeroConstructor)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SteamVRActionSets != nullptr)
		*SteamVRActionSets = params.SteamVRActionSets;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSteamVRAction>  SteamVRActions                 (Parm, OutParm, ZeroConstructor)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SteamVRActions != nullptr)
		*SteamVRActions = params.SteamVRActions;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamVRSkeletonTransform LeftHand                       (Parm, OutParm)
// struct FSteamVRSkeletonTransform RightHand                      (Parm, OutParm)
// bool                           bWithController                (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetSkeletalTransform(bool bWithController, struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform");

	USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params params;
	params.bWithController = bWithController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftHand != nullptr)
		*LeftHand = params.LeftHand;
	if (RightHand != nullptr)
		*RightHand = params.RightHand;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           LeftHandState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RightHandState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetSkeletalState(bool* LeftHandState, bool* RightHandState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState");

	USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftHandState != nullptr)
		*LeftHandState = params.LeftHandState;
	if (RightHandState != nullptr)
		*RightHandState = params.RightHandState;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AngularVelocity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData");

	USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bUsingSkeletonPose             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetPoseSource(bool* bUsingSkeletonPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource");

	USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsingSkeletonPose != nullptr)
		*bUsingSkeletonPose = params.bUsingSkeletonPose;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AngularVelocity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData");

	USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EHand                          hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSteamVRFingerCurls     FingerCurls                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSteamVRFingerSplays    FingerSplays                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ESkeletalSummaryDataType       SummaryDataType                (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetFingerCurlsAndSplays(EHand hand, ESkeletalSummaryDataType SummaryDataType, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays");

	USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params params;
	params.hand = hand;
	params.SummaryDataType = SummaryDataType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FingerCurls != nullptr)
		*FingerCurls = params.FingerCurls;
	if (FingerSplays != nullptr)
		*FingerSplays = params.FingerSplays;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           LeftHandState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RightHandState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState");

	USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftHandState != nullptr)
		*LeftHandState = params.LeftHandState;
	if (RightHandState != nullptr)
		*RightHandState = params.RightHandState;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EControllerFidelity            LeftControllerFidelity         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EControllerFidelity            RightControllerFidelity        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_GetControllerFidelity(EControllerFidelity* LeftControllerFidelity, EControllerFidelity* RightControllerFidelity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity");

	USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftControllerFidelity != nullptr)
		*LeftControllerFidelity = params.LeftControllerFidelity;
	if (RightControllerFidelity != nullptr)
		*RightControllerFidelity = params.RightControllerFidelity;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSteamVRInputOriginInfo InputOriginInfo                (Parm, OutParm)
// struct FName                   ActionSet                      (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_OriginTrackedDeviceInfo(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params params;
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (InputOriginInfo != nullptr)
		*InputOriginInfo = params.InputOriginInfo;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionSet                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSteamVRInputBindingInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_InputBindingInfo(const struct FName& ActionName, const struct FName& ActionSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params params;
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionSet                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_ActionOrigin(const struct FName& ActionName, const struct FName& ActionSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params params;
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSteamVRAction          FoundAction                    (Parm, OutParm)
// struct FSteamVRActionSet       FoundActionSet                 (Parm, OutParm)
// struct FName                   ActionSet                      (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_Action(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params params;
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (FoundAction != nullptr)
		*FoundAction = params.FoundAction;
	if (FoundActionSet != nullptr)
		*FoundActionSet = params.FoundActionSet;
}


// Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             TrackingReferenceMesh          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVRTrackingReferences::ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences");

	USteamVRTrackingReferences_ShowTrackingReferences_Params params;
	params.TrackingReferenceMesh = TrackingReferenceMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
// (Final, Native, Public, BlueprintCallable)

void USteamVRTrackingReferences::HideTrackingReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences");

	USteamVRTrackingReferences_HideTrackingReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
