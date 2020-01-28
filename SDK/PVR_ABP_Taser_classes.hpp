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

// AnimBlueprintGeneratedClass ABP_Taser.ABP_Taser_C
// 0x0542 (0x08A2 - 0x0360)
class UABP_Taser_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8BAC7E3440252DCB7678F2BF02FC1BA3;// 0x0368(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FB304A7948A81A641E67DE833D423948;// 0x0408(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFF2714E42602986CC6DB4A0A351D0D2;// 0x04D8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E2CDB52E429934606FA513840079505D;// 0x0578(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EFED987241CE8B6732B70E82FB2D41C7;// 0x0618(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B8DD886948E155BD6E510D8BB0DFF64E;// 0x06E8(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A27C2C394303D199FECE7DA2615A0C76;// 0x07C0(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root_33575DAD42333A4F65F55F93B2394427;      // 0x0860(0x0040)
	bool                                               SafetyDown;                                               // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerDown;                                              // 0x08A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Taser.ABP_Taser_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Taser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
