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

// BlueprintGeneratedClass BP_MatchStateOverlay.BP_MatchStateOverlay_C
// 0x0010 (0x0360 - 0x0350)
class ABP_MatchStateOverlay_C : public AStereoOverlay
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MatchStateOverlay.BP_MatchStateOverlay_C");
		return ptr;
	}


	void OffsetLayer(const struct FVector& Offset, class USceneComponent* Overlay, float Yaw);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
