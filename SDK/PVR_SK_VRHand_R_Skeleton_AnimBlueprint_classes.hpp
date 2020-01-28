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

// AnimBlueprintGeneratedClass SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C
// 0x04D0 (0x08A0 - 0x03D0)
class USK_VRHand_R_Skeleton_AnimBlueprint_C : public UVRHandAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C6D8620043374F375939D2899002D694;      // 0x03D8(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_97F12757437103FD2BF5E8A810D719FC;// 0x0418(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_095CC77B492550FD76CFFD861469CD65;// 0x0450(0x0040)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081; // 0x0490(0x0240)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8DE4355B4272BA8C9B15BEA4B19A9238;// 0x06D0(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D2BD44C54745D439655500B5DE6EB40E;// 0x0710(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF21E70C48133968C96283B7576F41C1;// 0x0800(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
