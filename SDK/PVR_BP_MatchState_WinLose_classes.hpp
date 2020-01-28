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

// BlueprintGeneratedClass BP_MatchState_WinLose.BP_MatchState_WinLose_C
// 0x0008 (0x0368 - 0x0360)
class ABP_MatchState_WinLose_C : public ABP_MatchStateOverlay_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MatchState_WinLose.BP_MatchState_WinLose_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MatchState_WinLose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
