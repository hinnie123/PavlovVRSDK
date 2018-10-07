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

// AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C
// 0x0328 (0x0758 - 0x0430)
class UM9_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_408E437A448FAE2167EFA8B4C812C79C;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CB5FE8DE49BE36361BC7D28627EDFD5D;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_ADEF5FB142648AE1B2868F9AFFA568D2;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4A5EBE1848A3662177CF60B447EAF8D5;// 0x0500(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A00145E84D268731D08740BA98E4630F;// 0x0548(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_94FB297C46B81B3281E9F293198D9E80;// 0x05F8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4086458041BED2C76C8226980768D68B;// 0x06A8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_ModifyBone_4086458041BED2C76C8226980768D68B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_ModifyBone_94FB297C46B81B3281E9F293198D9E80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_ModifyBone_A00145E84D268731D08740BA98E4630F();
	void ExecuteUbergraph_M9_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
