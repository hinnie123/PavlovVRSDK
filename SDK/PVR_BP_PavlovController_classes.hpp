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

// BlueprintGeneratedClass BP_PavlovController.BP_PavlovController_C
// 0x0028 (0x0858 - 0x0830)
class ABP_PavlovController_C : public APavlovItemController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0830(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        WatchFlash;                                               // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Watch;                                                    // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkTimeline_Intensity_AD0727B945F65BCFD8E18281BF7661F6; // 0x0848(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlinkTimeline__Direction_AD0727B945F65BCFD8E18281BF7661F6;// 0x084C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BlinkTimeline;                                            // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_PavlovController.BP_PavlovController_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BlinkTimeline__FinishedFunc();
	void BlinkTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void MakeWatchBlink();
	void ExecuteUbergraph_BP_PavlovController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
