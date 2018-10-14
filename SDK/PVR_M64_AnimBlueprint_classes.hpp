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

// AnimBlueprintGeneratedClass M64_AnimBlueprint.M64_AnimBlueprint_C
// 0x06C8 (0x0AC8 - 0x0400)
class UM64_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2F1AA42247E692045A5EBF9EF1E5D680;      // 0x0408(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3E54DE084AE31EF78C4CA994DA2982BE;// 0x0450(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_91C649E34EC717E43DB86A9B120C1470;// 0x06B8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A6955F054717A33FBF9AF0968CA168DD;// 0x0700(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0C495B764EAE2AE32E9B5A83B0D6767A;// 0x07B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_66839FDF40880B54974FB1839E7C9F76;// 0x0860(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13A4DD5047714B368AEDB584C0F00901;// 0x08A8(0x00A8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_CA05FBAC4EF9701DE3930696F31D8D7B;// 0x0950(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9DAD6C3E495AE51ADDC89AA242497A4C;// 0x0980(0x0050)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2D7E56F34E2D944D699208BEBE05D443;// 0x09D0(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_961A9D2B4D899DCA349CA8A912335E76;// 0x0A08(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_71A7FE374BA7000347CB0A81421089A4;// 0x0A80(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M64_AnimBlueprint.M64_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M64_AnimBlueprint_AnimGraphNode_TwoWayBlend_961A9D2B4D899DCA349CA8A912335E76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M64_AnimBlueprint_AnimGraphNode_ModifyBone_A6955F054717A33FBF9AF0968CA168DD();
	void ExecuteUbergraph_M64_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
