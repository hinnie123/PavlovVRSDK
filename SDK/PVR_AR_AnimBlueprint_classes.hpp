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

// AnimBlueprintGeneratedClass AR_AnimBlueprint.AR_AnimBlueprint_C
// 0x0538 (0x0968 - 0x0430)
class UAR_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4D85B6FC4415E5AD90DB41B43C2777F5;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BECB0906484913D457D0FA93C713BF66;// 0x0480(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F66C751E46C8DC552D154F89B94798B2;// 0x0530(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8D74629E44C619CEEB7737BB1A649693;// 0x0578(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8C662FF14216EE6F256095A71927B9BF;// 0x05B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DF601FB04E4B64F5AEE3D2921FD2E89B;// 0x0660(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4CEBEE6D4EB8C8951A82C4A08947BE65;// 0x06A8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C5F1D646496A1597CC1DE5B14255E290;// 0x0758(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_87B302DC451681054EFA83BFC0DCE612;// 0x0808(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_473492C0479EC7C07873E3AB9364F368;// 0x08B8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AR_AnimBlueprint.AR_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AR_AnimBlueprint_AnimGraphNode_ModifyBone_473492C0479EC7C07873E3AB9364F368();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AR_AnimBlueprint_AnimGraphNode_ModifyBone_87B302DC451681054EFA83BFC0DCE612();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AR_AnimBlueprint_AnimGraphNode_ModifyBone_C5F1D646496A1597CC1DE5B14255E290();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AR_AnimBlueprint_AnimGraphNode_ModifyBone_4CEBEE6D4EB8C8951A82C4A08947BE65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AR_AnimBlueprint_AnimGraphNode_ModifyBone_8C662FF14216EE6F256095A71927B9BF();
	void ExecuteUbergraph_AR_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
