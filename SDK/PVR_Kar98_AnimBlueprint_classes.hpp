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

// AnimBlueprintGeneratedClass Kar98_AnimBlueprint.Kar98_AnimBlueprint_C
// 0x0200 (0x0630 - 0x0430)
class UKar98_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FC166819423390C401A1D385AD5CDE7B;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_490CE034422E307453E7ACBB21367F12;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5E4EAF7742CBB4C3BD24C3B115F3E46E;// 0x04C8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DD383BD1413A28E2360DF795037EBE1A;// 0x0578(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5E9341AF482E8DDB6696F68D66BB8C93;// 0x05C0(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Kar98_AnimBlueprint.Kar98_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Kar98_AnimBlueprint_AnimGraphNode_SequenceEvaluator_5E9341AF482E8DDB6696F68D66BB8C93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Kar98_AnimBlueprint_AnimGraphNode_ModifyBone_5E4EAF7742CBB4C3BD24C3B115F3E46E();
	void ExecuteUbergraph_Kar98_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
