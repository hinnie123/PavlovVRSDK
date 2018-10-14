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

// Class OculusRift.OculusRiftBoundaryComponent
// 0x0040 (0x0130 - 0x00F0)
class UOculusRiftBoundaryComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnOuterBoundaryTriggered;                                 // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOuterBoundaryReturned;                                  // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusRift.OculusRiftBoundaryComponent");
		return ptr;
	}


	bool SetOuterBoundaryColor(const struct FColor& InBoundaryColor);
	bool ResetOuterBoundaryColor();
	bool RequestOuterBoundaryVisible(bool BoundaryVisible);
	void OculusOuterBoundaryTriggeredEvent__DelegateSignature(TArray<struct FBoundaryTestResult> OuterBoundsInteractionList);
	void OculusOuterBoundaryReturnedEvent__DelegateSignature();
	bool IsOuterBoundaryTriggered();
	bool IsOuterBoundaryDisplayed();
	struct FBoundaryTestResult GetTriggeredPlayAreaInfo(ETrackedDeviceType DeviceType);
	TArray<struct FBoundaryTestResult> GetTriggeredOuterBoundaryInfo();
	TArray<struct FVector> GetPlayAreaPoints();
	struct FVector GetPlayAreaDimensions();
	TArray<struct FVector> GetOuterBoundaryPoints();
	struct FVector GetOuterBoundaryDimensions();
	struct FBoundaryTestResult CheckIfPointWithinPlayArea(const struct FVector& Point);
	struct FBoundaryTestResult CheckIfPointWithinOuterBounds(const struct FVector& Point);
};


// Class OculusRift.SceneCubemapCapturer
// 0x0068 (0x0090 - 0x0028)
class USceneCubemapCapturer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class USceneCaptureComponent2D*>            CaptureComponents;                                        // 0x0038(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusRift.SceneCubemapCapturer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
