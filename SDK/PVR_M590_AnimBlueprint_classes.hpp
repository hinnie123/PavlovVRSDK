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

// AnimBlueprintGeneratedClass M590_AnimBlueprint.M590_AnimBlueprint_C
// 0x03D8 (0x0808 - 0x0430)
class UM590_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F946216D4D41404A88E861AFB4511278;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_57E4FE574FA4B43E5572E1A1F71DB4E6;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FA8AEFC242D2F1E1D61AF59D6569D85A;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2F986D154B69806CCA47199128E0C8CA;// 0x0500(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7BBACCC8423CA37A2A7B07BF29781BFE;// 0x05B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A29447A449F5ABC94F1423B1AAAAED6F;// 0x05F8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_673988024869EA56B5A6839E3BF9400C;// 0x06A8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6C39125A4E558A501AE9BAB215992064;// 0x0758(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass M590_AnimBlueprint.M590_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M590_AnimBlueprint_AnimGraphNode_ModifyBone_6C39125A4E558A501AE9BAB215992064();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M590_AnimBlueprint_AnimGraphNode_ModifyBone_673988024869EA56B5A6839E3BF9400C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M590_AnimBlueprint_AnimGraphNode_ModifyBone_A29447A449F5ABC94F1423B1AAAAED6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M590_AnimBlueprint_AnimGraphNode_ModifyBone_2F986D154B69806CCA47199128E0C8CA();
	void ExecuteUbergraph_M590_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
