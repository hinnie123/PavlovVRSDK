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

// BlueprintGeneratedClass Vote_EndMatch.Vote_EndMatch_C
// 0x0008 (0x0428 - 0x0420)
class AVote_EndMatch_C : public AVote_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vote_EndMatch.Vote_EndMatch_C");
		return ptr;
	}


	void CreateContentWidget(class UUserWidget** Content);
	void UserConstructionScript();
	void OnVoteEnded(bool* bSucceeded);
	void ExecuteUbergraph_Vote_EndMatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
