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

// AnimBlueprintGeneratedClass Pliers_Skeleton_AnimBlueprint.Pliers_Skeleton_AnimBlueprint_C
// 0x00C0 (0x0488 - 0x03C8)
class UPliers_Skeleton_AnimBlueprint_C : public UVRControllerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DD1D9C9047B6C18C77A97E9CDBCD0531;      // 0x03D0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3004E5594C458E52F22320B8C8F7B62D;// 0x0418(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Pliers_Skeleton_AnimBlueprint.Pliers_Skeleton_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Pliers_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_3004E5594C458E52F22320B8C8F7B62D();
	void ExecuteUbergraph_Pliers_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
