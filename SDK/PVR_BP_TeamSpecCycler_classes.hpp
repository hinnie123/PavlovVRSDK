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

// BlueprintGeneratedClass BP_TeamSpecCycler.BP_TeamSpecCycler_C
// 0x0030 (0x0120 - 0x00F0)
class UBP_TeamSpecCycler_C : public UActorComponent
{
public:
	int                                                Current;                                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpecPlayer;                                             // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                TeamID;                                                   // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDrySpecPlayer;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TeamSpecCycler.BP_TeamSpecCycler_C");
		return ptr;
	}


	void SpecIndex(int Index, bool* Success);
	void PushCurrent();
	void CyclePrev();
	void CycleNext();
	void Cycle(bool Next);
	void OnDrySpecPlayer__DelegateSignature(int Index, int TeamID);
	void OnSpecPlayer__DelegateSignature(class APavlovPawn* Pawn, class APavlovPlayerState* PlayerState, int Index, int TeamID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
