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

// AnimBlueprintGeneratedClass 1911_AnimBlueprint.1911_AnimBlueprint_C
// 0x0328 (0x0758 - 0x0430)
class U1911_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B688224E414C94A6DB8337835FB1949D;// 0x0438(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C9D8A9C4D08732E5FDCC2AD3845DFE6;// 0x0470(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_49A5E60841A7F4229A0762A29A9F3472;// 0x04B8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B9402C74BA6961860B0DDAD85F78597;// 0x0500(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_45DD12E4446BF457E3446FB549156052;// 0x05B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_465E78E34452BD5DA36EBC967B739565;      // 0x0660(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6DDA427C4F46466362B82E99D141D967;// 0x06A8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass 1911_AnimBlueprint.1911_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_2B9402C74BA6961860B0DDAD85F78597();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_45DD12E4446BF457E3446FB549156052();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_6DDA427C4F46466362B82E99D141D967();
	void ExecuteUbergraph_1911_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
