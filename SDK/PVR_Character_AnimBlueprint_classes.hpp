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

// AnimBlueprintGeneratedClass Character_AnimBlueprint.Character_AnimBlueprint_C
// 0x2EA0 (0x33D0 - 0x0530)
class UCharacter_AnimBlueprint_C : public UPavlovAvatarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A985BA0474947745E1B529A615FA758;// 0x0538(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEFBE41D4FD599C87A0647A57853E226;// 0x0580(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10B3295548C85485A8165E8C1F8CC0D5;// 0x05C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEBA4BE84C5D9BF4CED39A8F4760A3F0;// 0x0610(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3236B2448FD9906DC108F894CDE365A;// 0x0658(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A3F74264471F2985B87129880DCF26B;// 0x06A0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B51E69304DA8C4AB5DAD6AA90B79E624;// 0x0740(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_00E52DD345E420D3BC46F28683F48B8C;// 0x0780(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F95D75EC4B23632D7E954F9E713BECB2;// 0x08B8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_487FFE1A4428693F84466DB47D4D3F94;// 0x08F8(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8039E8A140CBD6523762B4BD8FF9C1A8;// 0x0A30(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC9F093245529C0928C209ABA2A33215;// 0x0A70(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C549A4D1426FCEEFDC233C9CE0CC3D0E;// 0x0B10(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_651F8DC14C76CBED9E9D0A993BFBD2F9;// 0x0B50(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7C49DFFE4795391F04F4DE9BE630DB5E;// 0x0BC0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AEB72A6A4832CA3443435F8A2105215B;// 0x0C30(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BDC6E70C42C5287804267F8D130E52FC;// 0x0CA0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CB1A7EC34CDD95BA3AD0239B0876EA5E;// 0x0D10(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_965E7D8A477571685BC777BC96E9CC5F;// 0x0D80(0x00D8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AFAD9E7349DDA62EF22F11BF7A315ABD;// 0x0E58(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_056526C74B28C93693FE42975BCE4D61;// 0x0EC8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DE45857B42E5AFED8F20FC95309A72BE;// 0x0F38(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_624054964CB258FA13C12B8439076762;// 0x0FA8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F638B0D54599EF8F754B7EBFCC9DA26C;// 0x1018(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_63E8F0C44C7BFF85C2D5A88C7005F04C;// 0x1088(0x00D8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_BE876458446B826E50F95F859E199866;    // 0x1160(0x0220)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_BB9D991148C5DE189EF4D59C782F8E02;    // 0x1380(0x0220)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0FC6F54142079C37F076D89D366BABE0;// 0x15A0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A945FE40426408B256E8BEAE435BB2DC;// 0x1640(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DBBF07134942DB38E3BFD78263428527;// 0x1718(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3CAACE9E45A96262256F5ABED3CDD4E2;// 0x1850(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18E0BBF241E321A6E9CBD0A47541248B;// 0x1890(0x0040)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_91268EC4488BD0AF20115EB3C31BC425;    // 0x18D0(0x0220)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F242A72E47DBAD6D83B837A98EBDEE49;// 0x1AF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_038F16134FDA006557F2C9AFB8582BE0;// 0x1B38(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_FAC9DB624A4C76160AC7EB9B19B66347; // 0x1B80(0x0240)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A2A3A05B45C25F8416AC30927444CC77;// 0x1DC0(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AB18039B4FF005573D86C4B40804883A;// 0x1EF8(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D7312A034D6FF84FDC9007AD2EF49741;// 0x1F38(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B07D1CC149A7A58E7912E3944FB54CA9;// 0x1F78(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_86978F424D96D44412BDD0A67FEABCDF;// 0x20A0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0890B93F4174211DFC443CA5B23645A1;// 0x20E0(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6A20C7854747E9D2C5A2B8A4319BB6E5;// 0x2218(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_922303B745A1DFA8D3A3C988117F9B78;// 0x2258(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_53CBADF4455F4706567674968201E48D;// 0x2390(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7EC4C97C4482AB86358DA49186F7371B;// 0x23D0(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19DA30D64C331442399DF6AC1CE3B100;// 0x24F8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DD4F08804C9FB85450AD4EB3B55A1F24;// 0x2538(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17F3008A4CAE2EFFEADA4C94E2AFACA5;// 0x2618(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_63BD2663455A0D1C94A928BD51FE4FAF;// 0x2658(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_706B3C734E36BBF3A0D0908645552FB2;// 0x2738(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E9A438E34070423B344B2487AD0C9D76;// 0x2778(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8AC96BFA4E928BBDE647AE90122197CB;// 0x2858(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_57592F0E4F7530D9DC85B8BDB17B3F34;// 0x2898(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37F4767046E4ABD0DA002DB16D19ACB4;// 0x2978(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root_FABF48AA48AA362547E70587DE6F793D;      // 0x2AB0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9B4E293A4D831AAB65AD3E8C7590B9C4;// 0x2AF0(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ED520406452E33D89FF37A90433553EB;// 0x2C28(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_611E54ED43FCA7B22C66DC974B72E1EE;// 0x2C68(0x0040)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_177905844914CDDD599535990074B8C5;     // 0x2CA8(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A3ED70EE45B30FC3CF340A8621ED40CE;// 0x2DC8(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAFB9B4F483C4973635A90961DD388AC;      // 0x2EA0(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_831ABEE14E3D81C8EE6CAABEC0411DC1;// 0x2F08(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4D1E53544DB7383E53C5C0952C146E6A;// 0x2FE0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_746977CA4982498D3A287BA0059D8200;// 0x3028(0x0048)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK_3474D5E34D49BFFBDF40CC8C2FD30EC7;     // 0x3070(0x01B0)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK_7C6BE186468B26D6FCDE9A9B92166876;     // 0x3220(0x01B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_AnimBlueprint.Character_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBlueprint_AnimGraphNode_LegIK_177905844914CDDD599535990074B8C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7EC4C97C4482AB86358DA49186F7371B();
	void ExecuteUbergraph_Character_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
