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

// AnimBlueprintGeneratedClass Smoke_AnimBlueprint.Smoke_AnimBlueprint_C
// 0x0760 (0x0B60 - 0x0400)
class USmoke_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EC8D97714A2D448E7FA65AAC288F7062;      // 0x0408(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0BC965424A78349F9BB00A867A559AFA;// 0x0450(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C70F8FDB403F0F0B9C788C9C2C24E7B6;// 0x06B8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_426CA1F24C73510695ACE0AA8571AB8A;// 0x0700(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_98819B7A435709E678EC1FA53A742A02;// 0x07B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1CFD0C494D8D17723ABBEE92443606E5;// 0x0860(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BABC7EDB4B33C9851FD7E9B61C6D366E;// 0x08A8(0x00A8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_5D5C1BCB4B2804B549C0639433B5CE64;// 0x0950(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51B2108B4A3C928B57AC2F9406FDA7DE;// 0x0980(0x0050)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_64ABF5144776081D6A4F9B8EF6D0DBDE;// 0x09D0(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_16BDACFF42EB41B86DEABDB51D458E50;// 0x0A08(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0BA346B74161E9F2C84FDFBA1125A080;// 0x0A80(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7B42F5B54294CB72F859A8A06D170F20;  // 0x0AC8(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Smoke_AnimBlueprint.Smoke_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Smoke_AnimBlueprint_AnimGraphNode_TwoWayBlend_16BDACFF42EB41B86DEABDB51D458E50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Smoke_AnimBlueprint_AnimGraphNode_ModifyBone_426CA1F24C73510695ACE0AA8571AB8A();
	void ExecuteUbergraph_Smoke_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
