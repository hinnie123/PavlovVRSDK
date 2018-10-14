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

// AnimBlueprintGeneratedClass AWP_AnimBlueprint.AWP_AnimBlueprint_C
// 0x02B0 (0x06E0 - 0x0430)
class UAWP_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_84F80FDD402ECF38B4BDD7B1157F96F0;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_897FCBF94D6E79710B29A7AB4418DED5;// 0x0480(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18EE58E34F3C961B38C04EADDAAC8589;// 0x0530(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A392BF6841B481EF468F61B16D6DAFFA;// 0x0578(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0AEA5BD841F73C136569438043045D93;// 0x0628(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E1A728354EF6F205233F189663D3C3A6;// 0x0670(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AWP_AnimBlueprint.AWP_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AWP_AnimBlueprint_AnimGraphNode_SequenceEvaluator_E1A728354EF6F205233F189663D3C3A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AWP_AnimBlueprint_AnimGraphNode_ModifyBone_A392BF6841B481EF468F61B16D6DAFFA();
	void ExecuteUbergraph_AWP_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
