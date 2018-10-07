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

// AnimBlueprintGeneratedClass Flash_AnimBlueprint.Flash_AnimBlueprint_C
// 0x0760 (0x0B60 - 0x0400)
class UFlash_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3FE2C51545ACE46F35FEF8A4D61E848D;      // 0x0408(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E549A51E4B691D6F51A7818FFF2222AF;// 0x0450(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_59040F3B4955859E6A6AB5B259658EB5;// 0x06B8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ED891BB044A25072AF7415A3F556024B;// 0x0700(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DB35261642CDB0815E50CABF76549065;// 0x07B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FA3178D04302A42C7EDDAF859C3917CD;// 0x0860(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A6A3EE8C4162635FFAE135B9FF12816E;// 0x08A8(0x00A8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_F538B8A54E4C6228F3A2FCA5B04C01D0;// 0x0950(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6566582F42F3F9E3918192850A5AB2D0;// 0x0980(0x0050)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7783A67241C70DF1BFFC5EA9D1F56AD5;// 0x09D0(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_A47ACD21409B3FB2B991AD8FBECC5AAC;// 0x0A08(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A9DE6933418501456F5E79A7791FA007;// 0x0A80(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_67D80FF74E1C6C689D87EB925EBC7D97;  // 0x0AC8(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Flash_AnimBlueprint.Flash_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flash_AnimBlueprint_AnimGraphNode_TwoWayBlend_A47ACD21409B3FB2B991AD8FBECC5AAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flash_AnimBlueprint_AnimGraphNode_ModifyBone_ED891BB044A25072AF7415A3F556024B();
	void ExecuteUbergraph_Flash_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
