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

// BlueprintGeneratedClass BP_MatchState_WinLose.BP_MatchState_WinLose_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_MatchState_WinLose_C : public ABP_MatchStateOverlay_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MatchState_WinLose.BP_MatchState_WinLose_C"));
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
