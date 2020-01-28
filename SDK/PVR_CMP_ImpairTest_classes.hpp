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

// BlueprintGeneratedClass CMP_ImpairTest.CMP_ImpairTest_C
// 0x0021 (0x0111 - 0x00F0)
class UCMP_ImpairTest_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                DestroyTimer;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ClientImpaired_;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FTimerHandle                                ImpairTimer;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	EImpairedType                                      ImpairType;                                               // 0x0110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CMP_ImpairTest.CMP_ImpairTest_C");
		return ptr;
	}


	void ImpairPlayer(EImpairedType Impair);
	void OnRep_ClientImpaired_();
	void PlayerHandcuffed();
	void Remove_Destroy();
	void Remove_Impair_Destroy();
	void OnKill_Event_1(class AActor* Owner);
	void StartImpairTimer(float Time);
	void PlayerTased();
	void Play_Sound_Multi(EImpairedType Impair);
	void ExecuteUbergraph_CMP_ImpairTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
