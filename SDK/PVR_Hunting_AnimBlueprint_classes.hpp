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

// AnimBlueprintGeneratedClass Hunting_AnimBlueprint.Hunting_AnimBlueprint_C
// 0x0200 (0x0630 - 0x0430)
class UHunting_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EEDABFAE4FEE34343F0F9FB9632863A1;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F7CCF2C64197112F490DD7B432E463D3;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ABEE617441A68C9F0F856EAA66FA2E5F;// 0x04C8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5181CAC34364E255F227678CE6436E9E;// 0x0578(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E97F164C48025BBDD5224C87038BF4CA;// 0x05C0(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Hunting_AnimBlueprint.Hunting_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hunting_AnimBlueprint_AnimGraphNode_SequenceEvaluator_E97F164C48025BBDD5224C87038BF4CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hunting_AnimBlueprint_AnimGraphNode_ModifyBone_ABEE617441A68C9F0F856EAA66FA2E5F();
	void ExecuteUbergraph_Hunting_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
