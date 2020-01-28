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

// AnimBlueprintGeneratedClass M4_AnimBlueprint.M4_AnimBlueprint_C
// 0x0988 (0x0DC8 - 0x0440)
class UM4_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_64530DF84BA87F72CC1DA4977FD767AE;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_50F53CFB4C856E7A9846688D44E61AEB;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EB0B050440BF2D5150875FA1B08E1613;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2F9F472146B0CC9D1E32ADBDB553A68D;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2C8A4291475B2F1ECD44618F7C0D0B47;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_923349CB40CF5ACA942A8BBB9DACB4DD;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_547DEF0F4F1556C8A673288288A5375C;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB9567E747CE3169ECA840BAF27F4A71;// 0x08E8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FC8FD9D542D6E37F15D395B247759BB2;// 0x0A20(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AF1116A041BABE9330F7D98CBAEB3B8B;// 0x0B58(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_52A04134471DEF6F007368B8A20B8486;// 0x0C90(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M4_AnimBlueprint.M4_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_FC8FD9D542D6E37F15D395B247759BB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_AF1116A041BABE9330F7D98CBAEB3B8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_52A04134471DEF6F007368B8A20B8486();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_EB9567E747CE3169ECA840BAF27F4A71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_547DEF0F4F1556C8A673288288A5375C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_923349CB40CF5ACA942A8BBB9DACB4DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M4_AnimBlueprint_AnimGraphNode_ModifyBone_2F9F472146B0CC9D1E32ADBDB553A68D();
	void ExecuteUbergraph_M4_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
