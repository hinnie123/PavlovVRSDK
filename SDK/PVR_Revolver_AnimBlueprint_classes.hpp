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

// AnimBlueprintGeneratedClass Revolver_AnimBlueprint.Revolver_AnimBlueprint_C
// 0x06C8 (0x0AF8 - 0x0430)
class URevolver_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6215DBC54AFDD30B4C688394753A3F9C;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1453D9146CEC74BD9D266A4855C2808;// 0x0480(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B9483C3941C0859EE21201A69CE2EF09;// 0x0530(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_845BE0974E8D62657499ED80649CF317;// 0x0578(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33BA87444789CC1A44E05E8D1CB2C05A;// 0x0628(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9D6E08B44F4675756D79F4977471A023;// 0x06D8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A6E1BDEA4F80DC4593C266BFD922A4FD;// 0x0780(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_91F68C104E90090609D504A62037978B;// 0x07C8(0x0038)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_DB4883994F39D3DA0193E89B36527BCE;// 0x0800(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7666FD294D9206F8A7227F923E791A21;// 0x0830(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FCCDD6344918B06537990B8E7BB71CD3;// 0x0900(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_58AA3E0F4AE2E5A697A8CC9CF10D6689;// 0x0950(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6BD892444A96C7468BE70DB3ED771526;// 0x0998(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_246AB514410BB81998AC70956EFCAD79;// 0x0A48(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Revolver_AnimBlueprint.Revolver_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_246AB514410BB81998AC70956EFCAD79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_6BD892444A96C7468BE70DB3ED771526();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_BlendListByBool_7666FD294D9206F8A7227F923E791A21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_33BA87444789CC1A44E05E8D1CB2C05A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_845BE0974E8D62657499ED80649CF317();
	void ExecuteUbergraph_Revolver_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
