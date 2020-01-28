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

// AnimBlueprintGeneratedClass AntiTank_AnimBlueprint.AntiTank_AnimBlueprint_C
// 0x05B8 (0x09F8 - 0x0440)
class UAntiTank_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DABF5AF54E2D95C024B2A787AE1B5F91;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AA184BA448D41714D54AF7AA47288EF5;// 0x0488(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_48DB6FCA4E236B7DC7B8DC9136C4D888;// 0x04C8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F68C4CD34436D6EAB16C7388DF9BFE71;// 0x0600(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B13AC8144343436026B08EA56FA7D2F6;// 0x0640(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A9736804458A7A8C69B46ABD76F3C723;      // 0x06B0(0x0068)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B79830A942C6A2E18E1BCD9013250D1C;// 0x0718(0x00F0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DD3DFF9C49089F16D92CE3BB0A048D85;// 0x0808(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_85173DD843D6962E1F7840BF0AE8D6E6;// 0x0840(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D98A2CD144B025AEB01210940813F5F2;// 0x0880(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F1AE379249E7398D0AF9D88481C9FCFC;// 0x09B8(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AntiTank_AnimBlueprint.AntiTank_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AntiTank_AnimBlueprint_AnimGraphNode_ModifyBone_D98A2CD144B025AEB01210940813F5F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AntiTank_AnimBlueprint_AnimGraphNode_SequenceEvaluator_B13AC8144343436026B08EA56FA7D2F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AntiTank_AnimBlueprint_AnimGraphNode_ModifyBone_48DB6FCA4E236B7DC7B8DC9136C4D888();
	void ExecuteUbergraph_AntiTank_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
