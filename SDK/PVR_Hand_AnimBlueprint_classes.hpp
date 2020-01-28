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

// AnimBlueprintGeneratedClass Hand_AnimBlueprint.Hand_AnimBlueprint_C
// 0x0CE8 (0x1138 - 0x0450)
class UHand_AnimBlueprint_C : public UPavlovHandAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7BD3E07B4D6523BFBCDD2FAB89903703;// 0x0458(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BA4A63474D015CEF6C70709EF2993CB4;// 0x0498(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C277D5043258A5CE700028872DE30CE;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F9F096A445D0813234B947B80826BD66;// 0x0520(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8F06D9F4B4B382DA7AD269E14D11790;// 0x0568(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AD30EF7742478AA4516CC7B230F35604;// 0x0608(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D8248094491BB02C798A5192C3B5A4CA;// 0x0648(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D388623E4B93828F58157FA5CF9A68A7;// 0x06B8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_410D54994A43C2CB789F5D9A689B8906;// 0x0728(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7B59DD3445515DAD4997CFBD91C28031;// 0x0798(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6E110BCD43F6B2F33B34DEAE4AA8747E;// 0x0808(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6A4E9E0845981A197932C7B89798ACB4;// 0x0878(0x00D8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4D204AE0410049B516208791596F4680;// 0x0950(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EB966FEF482DD1511325A29A38F85F79;// 0x09C0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_44DB5AEC417D40E1280BEDA2D80A4838;// 0x0A00(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F60C8B644F679AC0515A0AB1115378ED;// 0x0AE0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5C171298457129C4AF5A8BB00F836FDB;// 0x0BB0(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45D4D29B458350B89EBB9F96D70C4000;// 0x0C88(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DF75D79545BA9EC3088620BEDCDA31C7;// 0x0CD0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_56139B7240851340307EC1867D8CE9A2;// 0x0D18(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FFD3ABF24230BBA8439AE5AEE2EACCA4;// 0x0D58(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D98(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2D5EED19452B9A23CADDEC8E3CCAAF45;    // 0x0DA0(0x0220)
	struct FAnimNode_Root                              AnimGraphNode_Root_755FB9F9426E944F8369C093665E2B08;      // 0x0FC0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2539B0614456A4BA69C271B1A5228ED9;// 0x1000(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Hand_AnimBlueprint.Hand_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hand_AnimBlueprint_AnimGraphNode_SequenceEvaluator_6E110BCD43F6B2F33B34DEAE4AA8747E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hand_AnimBlueprint_AnimGraphNode_SequenceEvaluator_7B59DD3445515DAD4997CFBD91C28031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hand_AnimBlueprint_AnimGraphNode_SequenceEvaluator_410D54994A43C2CB789F5D9A689B8906();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hand_AnimBlueprint_AnimGraphNode_SequenceEvaluator_D388623E4B93828F58157FA5CF9A68A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hand_AnimBlueprint_AnimGraphNode_SequenceEvaluator_D8248094491BB02C798A5192C3B5A4CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Hand_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_6A4E9E0845981A197932C7B89798ACB4();
	void ExecuteUbergraph_Hand_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
