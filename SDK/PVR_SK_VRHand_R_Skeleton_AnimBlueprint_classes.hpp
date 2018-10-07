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

// AnimBlueprintGeneratedClass SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C
// 0x02C0 (0x0688 - 0x03C8)
class USK_VRHand_R_Skeleton_AnimBlueprint_C : public UVRHandAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C6D8620043374F375939D2899002D694;      // 0x03D0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_97F12757437103FD2BF5E8A810D719FC;// 0x0418(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_095CC77B492550FD76CFFD861469CD65;// 0x0450(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081; // 0x0498(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8DE4355B4272BA8C9B15BEA4B19A9238;// 0x0558(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D2BD44C54745D439655500B5DE6EB40E;// 0x05A0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF21E70C48133968C96283B7576F41C1;// 0x0618(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081();
	void ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
