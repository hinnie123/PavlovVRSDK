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

// AnimBlueprintGeneratedClass UMP_AnimBlueprint.UMP_AnimBlueprint_C
// 0x0718 (0x0B58 - 0x0440)
class UUMP_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0CB7A2F4400B4BBF4CDF55887D701D54;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_80C6FE5D42B2BDEE3DB33B9AA281B1F8;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_90129C3941066AC9B80C74B02F5F13A6;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1806C8EB4177C9E80CE8E8ABBE2C86E6;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7418A535497D57CA4E0C0D8A5F0888AD;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C95CC07847CC53261882C1B842456E6F;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EEA0B810441B56A0F6E75A879E18C7F0;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_066099894015CF65D337B6981A0ABC52;// 0x08E8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33A7764E4ABE7B8C5B9E18913D0A3561;// 0x0A20(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass UMP_AnimBlueprint.UMP_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_UMP_AnimBlueprint_AnimGraphNode_ModifyBone_066099894015CF65D337B6981A0ABC52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UMP_AnimBlueprint_AnimGraphNode_ModifyBone_33A7764E4ABE7B8C5B9E18913D0A3561();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UMP_AnimBlueprint_AnimGraphNode_ModifyBone_EEA0B810441B56A0F6E75A879E18C7F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UMP_AnimBlueprint_AnimGraphNode_ModifyBone_C95CC07847CC53261882C1B842456E6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UMP_AnimBlueprint_AnimGraphNode_ModifyBone_1806C8EB4177C9E80CE8E8ABBE2C86E6();
	void ExecuteUbergraph_UMP_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
