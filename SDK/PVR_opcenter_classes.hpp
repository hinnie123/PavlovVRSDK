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

// BlueprintGeneratedClass opcenter.opcenter_C
// 0x0020 (0x03B0 - 0x0390)
class Aopcenter_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	bool                                               ShowedWepToolTip;                                         // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpennedMenu;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	class APavlovItemController*                       MenuController;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APlayerStart*                                PlayerStart_1_ExecuteUbergraph_opcenter_RefProperty;      // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass opcenter.opcenter_C"));
		return ptr;
	}


	void OnInventoryUpdate_Event_1();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void CheckAndSwapControllers();
	void BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void Setup_Menu_Checker();
	void CustomEvent_1();
	void CustomEvent_2();
	void ExecuteUbergraph_opcenter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
