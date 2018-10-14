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

// AnimBlueprintGeneratedClass AK_AnimBlueprint.AK_AnimBlueprint_C
// 0x03D8 (0x0808 - 0x0430)
class UAK_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DF3B60F04857A545ACD3AAA8E7C0E047;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41E9DFCE40B64231F01B568B5FA5A4D3;// 0x0480(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1C02BCB14C354E6DC84EA5B694EF912A;// 0x0530(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3E1672EA4ED02E948DC6A1A0AD860439;// 0x0578(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BA429F4B44AC95B5AA3D538F165FBED3;// 0x05B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AACE8A2E4021655542DC52ABCD042A19;// 0x0660(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17B34C454E1B0DA98A81A897B710DE49;// 0x06A8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_713C42934E6311C225B3EF9A60CFBB94;// 0x0758(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK_AnimBlueprint.AK_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK_AnimBlueprint_AnimGraphNode_ModifyBone_713C42934E6311C225B3EF9A60CFBB94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK_AnimBlueprint_AnimGraphNode_ModifyBone_17B34C454E1B0DA98A81A897B710DE49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK_AnimBlueprint_AnimGraphNode_ModifyBone_BA429F4B44AC95B5AA3D538F165FBED3();
	void ExecuteUbergraph_AK_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
