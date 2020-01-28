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

// AnimBlueprintGeneratedClass SCombatShotgun_AnimBlueprint.SCombatShotgun_AnimBlueprint_C
// 0x0710 (0x0B50 - 0x0440)
class USCombatShotgun_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1B30AB1C48751080502F81A4B20CF911;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DDC51B534BDC3EF5FF0E91BFBA86333A;// 0x0488(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5E6103A84D7873C1620A73A4F77D6C89;// 0x04C8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_83A7FD31446474E414421FA159913E4F;// 0x0600(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_51060FDC45F89CC2059D84B310BE0204;// 0x0640(0x0138)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4359D1B345D98555C409CD88158E1DED;// 0x0778(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_524E8AF24326AD9BF52245BC5C57BF2C;// 0x07B0(0x0138)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_686A1E204F7BBD5BA63CAE8EF89E8716;// 0x08E8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4228B7AC42D8A3305838FFBDC3FC980B;// 0x0958(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B2DD6EF84524DE648A69B69B44DBE0FE;// 0x0A28(0x00F0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_75F40A0548201E2D79259894459E4B78;// 0x0B18(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SCombatShotgun_AnimBlueprint.SCombatShotgun_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SCombatShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_51060FDC45F89CC2059D84B310BE0204();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SCombatShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_5E6103A84D7873C1620A73A4F77D6C89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SCombatShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_524E8AF24326AD9BF52245BC5C57BF2C();
	void ExecuteUbergraph_SCombatShotgun_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
