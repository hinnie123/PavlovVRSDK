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

// Class SteamVR.SteamVRChaperoneComponent
// 0x0028 (0x0118 - 0x00F0)
class USteamVRChaperoneComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLeaveBounds;                                            // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReturnToBounds;                                         // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamVR.SteamVRChaperoneComponent");
		return ptr;
	}


	void SteamVRChaperoneEvent__DelegateSignature();
	TArray<struct FVector> GetBounds();
};


// Class SteamVR.SteamVRFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamVR.SteamVRFunctionLibrary");
		return ptr;
	}


	void STATIC_GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds);
	bool STATIC_GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
	bool STATIC_GetHandPositionAndOrientation(int ControllerIndex, EControllerHand Hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
