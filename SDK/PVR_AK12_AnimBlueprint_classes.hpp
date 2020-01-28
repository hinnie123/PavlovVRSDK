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

// AnimBlueprintGeneratedClass AK12_AnimBlueprint.AK12_AnimBlueprint_C
// 0x05E0 (0x0A20 - 0x0440)
class UAK12_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8FBDF0824DB579A664CCEB8A8FFD0ABE;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9D4B8425439A5749EBDE15A7433AD670;// 0x0488(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5CB156E14C53537972DC1F98FFDEB324;// 0x04C8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4F3B248E428173E3C012B583CD558D86;// 0x0600(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C9111DA0406765B7823808B5AC79E958;// 0x0640(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_983C2ACB4F3E996FE2B3F79800A49B2F;// 0x0778(0x0138)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_59C5B68648213E526582B39FB6023E83;// 0x08B0(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_704FD83A4A92EC407DC62B96F2CCE378;// 0x08E8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK12_AnimBlueprint.AK12_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK12_AnimBlueprint_AnimGraphNode_ModifyBone_704FD83A4A92EC407DC62B96F2CCE378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK12_AnimBlueprint_AnimGraphNode_ModifyBone_983C2ACB4F3E996FE2B3F79800A49B2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK12_AnimBlueprint_AnimGraphNode_ModifyBone_C9111DA0406765B7823808B5AC79E958();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK12_AnimBlueprint_AnimGraphNode_ModifyBone_5CB156E14C53537972DC1F98FFDEB324();
	void ExecuteUbergraph_AK12_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
