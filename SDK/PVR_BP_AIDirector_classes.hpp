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

// BlueprintGeneratedClass BP_AIDirector.BP_AIDirector_C
// 0x0008 (0x0430 - 0x0428)
class ABP_AIDirector_C : public AAIDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIDirector.BP_AIDirector_C");
		return ptr;
	}


	void UserConstructionScript();
	void TrickleOut_WhenDead();
	void SetAllPooled();
	void SetAllActive();
	void ReceiveBeginPlay();
	void FailedTrigger();
	void CustomEvent_1(class AZAICharacter* KilledCharacter, class APlayerState* KillerPlayerState);
	void TrickleIn_BP();
	void TrickleOut_OverTime();
	void ExecuteUbergraph_BP_AIDirector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
