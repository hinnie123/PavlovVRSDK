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

// BlueprintGeneratedClass Vote_Base.Vote_Base_C
// 0x0018 (0x0480 - 0x0468)
class AVote_Base_C : public AVote
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Pivot;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vote_Base.Vote_Base_C");
		return ptr;
	}


	void CreateContentWidget(class UUserWidget** Content);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteEnded(bool* bSucceeded);
	void ExecuteUbergraph_Vote_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
