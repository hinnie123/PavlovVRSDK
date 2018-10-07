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

// Function OculusRift.OculusRiftBoundaryComponent.SetOuterBoundaryColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  InBoundaryColor                (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusRiftBoundaryComponent::SetOuterBoundaryColor(const struct FColor& InBoundaryColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.SetOuterBoundaryColor"));

	UOculusRiftBoundaryComponent_SetOuterBoundaryColor_Params params;
	params.InBoundaryColor = InBoundaryColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.ResetOuterBoundaryColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusRiftBoundaryComponent::ResetOuterBoundaryColor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.ResetOuterBoundaryColor"));

	UOculusRiftBoundaryComponent_ResetOuterBoundaryColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.RequestOuterBoundaryVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           BoundaryVisible                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusRiftBoundaryComponent::RequestOuterBoundaryVisible(bool BoundaryVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.RequestOuterBoundaryVisible"));

	UOculusRiftBoundaryComponent_RequestOuterBoundaryVisible_Params params;
	params.BoundaryVisible = BoundaryVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction OculusRift.OculusRiftBoundaryComponent.OculusOuterBoundaryTriggeredEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FBoundaryTestResult> OuterBoundsInteractionList     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOculusRiftBoundaryComponent::OculusOuterBoundaryTriggeredEvent__DelegateSignature(TArray<struct FBoundaryTestResult> OuterBoundsInteractionList)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction OculusRift.OculusRiftBoundaryComponent.OculusOuterBoundaryTriggeredEvent__DelegateSignature"));

	UOculusRiftBoundaryComponent_OculusOuterBoundaryTriggeredEvent__DelegateSignature_Params params;
	params.OuterBoundsInteractionList = OuterBoundsInteractionList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction OculusRift.OculusRiftBoundaryComponent.OculusOuterBoundaryReturnedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UOculusRiftBoundaryComponent::OculusOuterBoundaryReturnedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction OculusRift.OculusRiftBoundaryComponent.OculusOuterBoundaryReturnedEvent__DelegateSignature"));

	UOculusRiftBoundaryComponent_OculusOuterBoundaryReturnedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusRift.OculusRiftBoundaryComponent.IsOuterBoundaryTriggered
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusRiftBoundaryComponent::IsOuterBoundaryTriggered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.IsOuterBoundaryTriggered"));

	UOculusRiftBoundaryComponent_IsOuterBoundaryTriggered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.IsOuterBoundaryDisplayed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusRiftBoundaryComponent::IsOuterBoundaryDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.IsOuterBoundaryDisplayed"));

	UOculusRiftBoundaryComponent_IsOuterBoundaryDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.GetTriggeredPlayAreaInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBoundaryTestResult     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoundaryTestResult UOculusRiftBoundaryComponent::GetTriggeredPlayAreaInfo(ETrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.GetTriggeredPlayAreaInfo"));

	UOculusRiftBoundaryComponent_GetTriggeredPlayAreaInfo_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.GetTriggeredOuterBoundaryInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FBoundaryTestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBoundaryTestResult> UOculusRiftBoundaryComponent::GetTriggeredOuterBoundaryInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.GetTriggeredOuterBoundaryInfo"));

	UOculusRiftBoundaryComponent_GetTriggeredOuterBoundaryInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.GetPlayAreaPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UOculusRiftBoundaryComponent::GetPlayAreaPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.GetPlayAreaPoints"));

	UOculusRiftBoundaryComponent_GetPlayAreaPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.GetPlayAreaDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UOculusRiftBoundaryComponent::GetPlayAreaDimensions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.GetPlayAreaDimensions"));

	UOculusRiftBoundaryComponent_GetPlayAreaDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.GetOuterBoundaryPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UOculusRiftBoundaryComponent::GetOuterBoundaryPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.GetOuterBoundaryPoints"));

	UOculusRiftBoundaryComponent_GetOuterBoundaryPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.GetOuterBoundaryDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UOculusRiftBoundaryComponent::GetOuterBoundaryDimensions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.GetOuterBoundaryDimensions"));

	UOculusRiftBoundaryComponent_GetOuterBoundaryDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.CheckIfPointWithinPlayArea
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, IsPlainOldData)
// struct FBoundaryTestResult     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoundaryTestResult UOculusRiftBoundaryComponent::CheckIfPointWithinPlayArea(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.CheckIfPointWithinPlayArea"));

	UOculusRiftBoundaryComponent_CheckIfPointWithinPlayArea_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusRift.OculusRiftBoundaryComponent.CheckIfPointWithinOuterBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, IsPlainOldData)
// struct FBoundaryTestResult     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoundaryTestResult UOculusRiftBoundaryComponent::CheckIfPointWithinOuterBounds(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusRift.OculusRiftBoundaryComponent.CheckIfPointWithinOuterBounds"));

	UOculusRiftBoundaryComponent_CheckIfPointWithinOuterBounds_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
