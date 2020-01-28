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

// AnimBlueprintGeneratedClass LMGA_AnimBlueprint.LMGA_AnimBlueprint_C
// 0x0EC8 (0x1308 - 0x0440)
class ULMGA_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_47897FF142A978A1DA559CBF7865D60F;// 0x0448(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_75A89713474914DB14D984BED0F72796;// 0x0580(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_78C34FF44432EAA657EEF28F4D68F762;// 0x05C0(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FA20B70444E389CC9DAE7FABC031071D;// 0x06F8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FD7AF11E492628806406EF91B368C134;// 0x0738(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9514428F4C87E64D6BA1EAAC0A0DAD54;// 0x0870(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D095AF114D5F8D3D9D7F57871A2E5447;// 0x09A8(0x0138)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9097E69947D2BC190C32549C98DB1EF2;// 0x0AE0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A931AE0A4BA04117B40BEC9662A19E51;// 0x0B50(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F4DDA85D43898B8B15CAC0834734B760;// 0x0C20(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F32C7C0142491A59783CC49C851CC96F;// 0x0C90(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB6651F3494CB099AD77C4B643BE5D2B;// 0x0DC8(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D68B825D4087899B4583E696652D17E2;// 0x0E98(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16F9E9B04024122B384A0EA32D930168;// 0x0F08(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D25BAA3448BCC158F074CEB8D0D649BC;// 0x0FE0(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_220D7C8E4E3C2FB5B459598CC0C5C56A;// 0x1118(0x0040)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8FA134264C753326AA9A58B67FC50E5B;// 0x1158(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E838DC9A437E32241F628B955331DBAD;// 0x1188(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_Root_3373918244EF3867AF7761BA48A31E2A;      // 0x1258(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1FD98CE44C2C171C7F8F829E74827013;// 0x1298(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LMGA_AnimBlueprint.LMGA_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_LMGA_AnimBlueprint_AnimGraphNode_ModifyBone_F32C7C0142491A59783CC49C851CC96F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LMGA_AnimBlueprint_AnimGraphNode_ModifyBone_D095AF114D5F8D3D9D7F57871A2E5447();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LMGA_AnimBlueprint_AnimGraphNode_ModifyBone_9514428F4C87E64D6BA1EAAC0A0DAD54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LMGA_AnimBlueprint_AnimGraphNode_ModifyBone_FD7AF11E492628806406EF91B368C134();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LMGA_AnimBlueprint_AnimGraphNode_ModifyBone_78C34FF44432EAA657EEF28F4D68F762();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LMGA_AnimBlueprint_AnimGraphNode_ModifyBone_47897FF142A978A1DA559CBF7865D60F();
	void ExecuteUbergraph_LMGA_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
