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

// AnimBlueprintGeneratedClass ZFemale_AnimBlueprint.ZFemale_AnimBlueprint_C
// 0x1470 (0x1850 - 0x03E0)
class UZFemale_AnimBlueprint_C : public UZAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C359B65F4A0F945C31183AA39B7FCAF8;      // 0x03E8(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7A77D78D4532F9F9BA697BA8CBB0CC79;// 0x0428(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1C667E2346D81098AFBD02A71779ACC8;    // 0x0470(0x0220)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_123C58F8481491F7369B87BC19A5C68F;// 0x0690(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_87CEAF3048F319555A2E82BB1ABE298F;      // 0x06D0(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F31DA48452FF6E13F5D9B8D9B3565B0;// 0x0738(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE22FEEE408B21EFB55DAD8B65A700C6;// 0x0780(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91507B9E46B816BAD1F4E4AEAC2A6164;// 0x07C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE611AA24338A0BCAA79699E395855FB;// 0x0810(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32776FE74AB9FF523B52BA869B8474F1;// 0x0858(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_90EBCE8343E7AFAB91520B8EC2C2ECC8;// 0x08F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9C123A974C39AE0D16942C986AB20CF5;// 0x0938(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E6725443427D1569780B699AAD3D2B01;// 0x09D8(0x0040)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_730B5CFF4353AB2A534ADC963D0145E4;// 0x0A18(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5BA49BE44C7C2F33EE4D8D86C97F2105;// 0x0AA8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_65658EB443510E5F40058E9736A63897;// 0x0AE8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EE8A701F4ED19E2BBE7551AF913A47D6;// 0x0BC8(0x00D8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A16FA374E3D69FFC14A7AA7CD3AF837;// 0x0CA0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F46A1E6B489103907CA4C5BA5FE385CD;// 0x0CE8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0B963454CB36EFDB818689B8C34C8F0;// 0x0D30(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A13A0B1B41BEC9BF1BD73DA991BAD622;// 0x0D78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73E765714C5825622195BFBDAA088CA2;// 0x0DC0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AC76B0D94784A5763135EAB6673D0CF2;// 0x0E60(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_50E72FC246BEAEDCC8D0AF96FC6D3923;// 0x0F98(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C78AF2254C3D671209DF229AA31DCBC7;// 0x0FD8(0x0040)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BE6398614638C8226C5B51AE51CF873E;// 0x1018(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_71F332F740F474386645F8A07904835A;// 0x1058(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5B8ADB0045D8D131C4507EB44AD73558;// 0x1098(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6D208AB54F948B662C4A8EB1F6AF454C;// 0x11D0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F864CF6345846ACBA9CF2281F0DF3BAC;// 0x1210(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0073695A478AF15120AE39A706CF9A98;// 0x1338(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_51543EB64A65E3BE63977DAA47A5AD86;// 0x1378(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B0FD4B8461A1788E26CE69317998E0C;// 0x13B8(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_29D7365D422207D1F658F3B8B324E786;// 0x14F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2E961D64DFD7D27731CDC86C21DB7E9;// 0x1530(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F2DBECD04CEB572799C3AE99AFB34C3B;// 0x15D0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_498AB7CC4FB1BBF482DE1BB048D4E8EF;// 0x1610(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_86DDA9644FD591F9E83111A2237DD45B;// 0x16F0(0x0040)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A4C4B43A4DD966E4601450886E85188A;// 0x1730(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9066098943F26D55C9E1D5B3F9249141;// 0x1770(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ZFemale_AnimBlueprint.ZFemale_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ZFemale_AnimBlueprint_AnimGraphNode_SequencePlayer_F2E961D64DFD7D27731CDC86C21DB7E9();
	void ExecuteUbergraph_ZFemale_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
