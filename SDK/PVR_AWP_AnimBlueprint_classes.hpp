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

// AnimBlueprintGeneratedClass AWP_AnimBlueprint.AWP_AnimBlueprint_C
// 0x0270 (0x06B0 - 0x0440)
class UAWP_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F12A814141163880B30C3C8A814E845E;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2F8E0C604AAB2D6A27EDD7834F824A09;// 0x0488(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_981D39924CCF17514D569EAA7A42A04D;// 0x04C8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4B60CB7F47216A649A33AEBE77D9F96C;// 0x0600(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5892259C49B332D17A23BC8D082BFCB3;// 0x0640(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AWP_AnimBlueprint.AWP_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AWP_AnimBlueprint_AnimGraphNode_SequenceEvaluator_5892259C49B332D17A23BC8D082BFCB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AWP_AnimBlueprint_AnimGraphNode_ModifyBone_981D39924CCF17514D569EAA7A42A04D();
	void ExecuteUbergraph_AWP_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
