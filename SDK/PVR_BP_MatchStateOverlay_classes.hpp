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

// BlueprintGeneratedClass BP_MatchStateOverlay.BP_MatchStateOverlay_C
// 0x0010 (0x03C0 - 0x03B0)
class ABP_MatchStateOverlay_C : public AStereoOverlay
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
