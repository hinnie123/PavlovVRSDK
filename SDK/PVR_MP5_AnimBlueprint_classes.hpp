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

// AnimBlueprintGeneratedClass MP5_AnimBlueprint.MP5_AnimBlueprint_C
// 0x08B8 (0x0CF8 - 0x0440)
class UMP5_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B01F6EF742F30BDA1F9E78B765A544B5;// 0x0448(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C8A8AA364B3B2F9543D1D982EE720391;// 0x0480(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4A6DEB1D4658C9458A8FDFB22F1548DA;// 0x05B8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E3CBEFD448D9E2501F8FB98B13E1E870;// 0x05F8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C1ECA93947703689CA0FD2B903901FDE;// 0x0730(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E19CBB45488DBE528CCEB7BCB8DDCD04;// 0x0868(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1D1AB5E944E03DBCB5B4DDAD4EC45826;// 0x09A0(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6E13B9E543B72CDC2485659B2D092558;// 0x0AD8(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C93514134960390757DBFF8F14E58674;// 0x0B18(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1E80D984400E3553C9265BA9DC1AD03F;// 0x0B58(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E3FA5C4448B5345C4CB3AABAA4348E12;// 0x0B98(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D4377524DA8045E5E3515B3BD958606;// 0x0C70(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_18D8713B4B7BAE0C82EA37AF4FA5AE16;      // 0x0CB8(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MP5_AnimBlueprint.MP5_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_E19CBB45488DBE528CCEB7BCB8DDCD04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_C1ECA93947703689CA0FD2B903901FDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_E3CBEFD448D9E2501F8FB98B13E1E870();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_C8A8AA364B3B2F9543D1D982EE720391();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_1D1AB5E944E03DBCB5B4DDAD4EC45826();
	void ExecuteUbergraph_MP5_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
