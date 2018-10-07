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

// AnimBlueprintGeneratedClass SMG_AnimBlueprint.SMG_AnimBlueprint_C
// 0x0488 (0x08B8 - 0x0430)
class USMG_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F13BC11C4519B14CA563E18BBC81EA25;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8D7E8C5846B3B8B43F4649AEA9AA05D0;// 0x0480(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3A7F7AF44DF3023B0EC19089A947467E;// 0x0530(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0974EA7347286E8A8A617F897F00ADAB;// 0x0578(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E33F44294E7BAC220F824A96B2B9DDB9;// 0x05B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6733B67C41520DC1E2D86CABD988B542;// 0x0660(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AD37859A4E064835DDE953AB2CF7667F;// 0x06A8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BBC1D8E3463FEA51C9B37E8D03FF636F;// 0x0758(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7679BBE84429B2A67F239697039D2E7E;// 0x0808(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass SMG_AnimBlueprint.SMG_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SMG_AnimBlueprint_AnimGraphNode_ModifyBone_7679BBE84429B2A67F239697039D2E7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SMG_AnimBlueprint_AnimGraphNode_ModifyBone_BBC1D8E3463FEA51C9B37E8D03FF636F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SMG_AnimBlueprint_AnimGraphNode_ModifyBone_AD37859A4E064835DDE953AB2CF7667F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SMG_AnimBlueprint_AnimGraphNode_ModifyBone_E33F44294E7BAC220F824A96B2B9DDB9();
	void ExecuteUbergraph_SMG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
