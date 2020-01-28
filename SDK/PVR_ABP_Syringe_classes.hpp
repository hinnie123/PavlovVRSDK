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

// AnimBlueprintGeneratedClass ABP_Syringe.ABP_Syringe_C
// 0x039C (0x06FC - 0x0360)
class UABP_Syringe_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3175C3664C49125AA104779F0C2C5AC9;      // 0x0368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3ED89734478D576BD5F06A71290AE3A;// 0x03A8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC37314D46DD3C5D99A00B944E4B8D81;// 0x0448(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1362DD944BC812B6E347E8B246C539A8;// 0x04E8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C7307DE41845602BF54588F4BD0DAAD;// 0x0588(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_22DE2E284161B56D7197C6B02AB35548;// 0x0628(0x00D0)
	int                                                AnimState;                                                // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Syringe.ABP_Syringe_C");
		return ptr;
	}


	void SetState(int AnimState);
	void ExecuteUbergraph_ABP_Syringe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
