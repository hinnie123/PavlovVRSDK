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

// AnimBlueprintGeneratedClass Agent_AnimBlueprint.Agent_AnimBlueprint_C
// 0x1A70 (0x1F08 - 0x0498)
class UAgent_AnimBlueprint_C : public UPavlovAvatarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FABF48AA48AA362547E70587DE6F793D;      // 0x04A0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A985BA0474947745E1B529A615FA758;// 0x04F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEFBE41D4FD599C87A0647A57853E226;// 0x0570(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10B3295548C85485A8165E8C1F8CC0D5;// 0x05F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEBA4BE84C5D9BF4CED39A8F4760A3F0;// 0x0670(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3236B2448FD9906DC108F894CDE365A;// 0x06F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A3F74264471F2985B87129880DCF26B;// 0x0770(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B51E69304DA8C4AB5DAD6AA90B79E624;// 0x07E0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_00E52DD345E420D3BC46F28683F48B8C;// 0x0828(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F95D75EC4B23632D7E954F9E713BECB2;// 0x08D8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_487FFE1A4428693F84466DB47D4D3F94;// 0x0920(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8039E8A140CBD6523762B4BD8FF9C1A8;// 0x09D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC9F093245529C0928C209ABA2A33215;// 0x0A18(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C549A4D1426FCEEFDC233C9CE0CC3D0E;// 0x0A88(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3CAACE9E45A96262256F5ABED3CDD4E2;// 0x0AD0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18E0BBF241E321A6E9CBD0A47541248B;// 0x0B18(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_91268EC4488BD0AF20115EB3C31BC425;    // 0x0B60(0x0150)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F242A72E47DBAD6D83B837A98EBDEE49;// 0x0CB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_038F16134FDA006557F2C9AFB8582BE0;// 0x0D30(0x0080)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_FAC9DB624A4C76160AC7EB9B19B66347; // 0x0DB0(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A2A3A05B45C25F8416AC30927444CC77;// 0x0E70(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AB18039B4FF005573D86C4B40804883A;// 0x0F20(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D7312A034D6FF84FDC9007AD2EF49741;// 0x0F68(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B07D1CC149A7A58E7912E3944FB54CA9;// 0x0FB0(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86978F424D96D44412BDD0A67FEABCDF;// 0x10D0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0890B93F4174211DFC443CA5B23645A1;// 0x1118(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6A20C7854747E9D2C5A2B8A4319BB6E5;// 0x11C8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_922303B745A1DFA8D3A3C988117F9B78;// 0x1210(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_53CBADF4455F4706567674968201E48D;// 0x12C0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7EC4C97C4482AB86358DA49186F7371B;// 0x1308(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19DA30D64C331442399DF6AC1CE3B100;// 0x1428(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DD4F08804C9FB85450AD4EB3B55A1F24;// 0x1470(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_17F3008A4CAE2EFFEADA4C94E2AFACA5;// 0x1548(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_63BD2663455A0D1C94A928BD51FE4FAF;// 0x1590(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_706B3C734E36BBF3A0D0908645552FB2;// 0x1668(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E9A438E34070423B344B2487AD0C9D76;// 0x16B0(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8AC96BFA4E928BBDE647AE90122197CB;// 0x1788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_57592F0E4F7530D9DC85B8BDB17B3F34;// 0x17D0(0x00D8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6E62179F4FFA62DA92CDCDBC2F3AFA14; // 0x18A8(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37F4767046E4ABD0DA002DB16D19ACB4;// 0x1968(0x00B0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F3EB85E147F9DB24198E78AA32A36942; // 0x1A18(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9B4E293A4D831AAB65AD3E8C7590B9C4;// 0x1AD8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ED520406452E33D89FF37A90433553EB;// 0x1B88(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_611E54ED43FCA7B22C66DC974B72E1EE;// 0x1BD0(0x0048)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_177905844914CDDD599535990074B8C5;     // 0x1C18(0x0098)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A3ED70EE45B30FC3CF340A8621ED40CE;// 0x1CB0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAFB9B4F483C4973635A90961DD388AC;      // 0x1D60(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_831ABEE14E3D81C8EE6CAABEC0411DC1;// 0x1DC0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4D1E53544DB7383E53C5C0952C146E6A;// 0x1E68(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_746977CA4982498D3A287BA0059D8200;// 0x1EB8(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Agent_AnimBlueprint.Agent_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TwoBoneIK_FAC9DB624A4C76160AC7EB9B19B66347();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B07D1CC149A7A58E7912E3944FB54CA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_F242A72E47DBAD6D83B837A98EBDEE49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_038F16134FDA006557F2C9AFB8582BE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_LookAt_91268EC4488BD0AF20115EB3C31BC425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_ModifyBone_0890B93F4174211DFC443CA5B23645A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7EC4C97C4482AB86358DA49186F7371B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_ModifyBone_487FFE1A4428693F84466DB47D4D3F94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_ModifyBone_00E52DD345E420D3BC46F28683F48B8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_F3236B2448FD9906DC108F894CDE365A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_DEBA4BE84C5D9BF4CED39A8F4760A3F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TwoBoneIK_6E62179F4FFA62DA92CDCDBC2F3AFA14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_ModifyBone_37F4767046E4ABD0DA002DB16D19ACB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TwoBoneIK_F3EB85E147F9DB24198E78AA32A36942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_ModifyBone_9B4E293A4D831AAB65AD3E8C7590B9C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_LegIK_177905844914CDDD599535990074B8C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_10B3295548C85485A8165E8C1F8CC0D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_FEFBE41D4FD599C87A0647A57853E226();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Agent_AnimBlueprint_AnimGraphNode_TransitionResult_7A985BA0474947745E1B529A615FA758();
	void ExecuteUbergraph_Agent_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
