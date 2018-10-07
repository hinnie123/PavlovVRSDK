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

// AnimBlueprintGeneratedClass PavlovHandV2_AnimBlueprint.PavlovHandV2_AnimBlueprint_C
// 0x0588 (0x0950 - 0x03C8)
class UPavlovHandV2_AnimBlueprint_C : public UVRControllerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C31250E84DCC27615230BD8FD693CC96;      // 0x03D0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FA0E1B343AA3F871A929C839F1E76B5;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B09EA704D33199AEE9A1F8ABEC8C713;// 0x04A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C64EB81A46F2A9AB13CA02A45F7A8A41;// 0x0520(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FDB289924BC26C641EA309A0B5D6360E;// 0x0590(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D51AD759461D5B01B0DAE1AE48EFD625;// 0x05D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BDCD8AFE4E2D2F6EA308D9945661F07E;// 0x0648(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0066A67E48B12BAB8F352FBA9D7E7E1F;// 0x0690(0x00D8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0768(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_38E49FEB4E0EFEA233B1B2B409FA234E;    // 0x0770(0x0150)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DA35A6944A703792ED7EF08DF8F65E82;// 0x08C0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_417466C2454A93FDE9DF44B96E791A3A;// 0x0908(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass PavlovHandV2_AnimBlueprint.PavlovHandV2_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_PavlovHandV2_AnimBlueprint_AnimGraphNode_TransitionResult_3B09EA704D33199AEE9A1F8ABEC8C713();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PavlovHandV2_AnimBlueprint_AnimGraphNode_SequenceEvaluator_D51AD759461D5B01B0DAE1AE48EFD625();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PavlovHandV2_AnimBlueprint_AnimGraphNode_LookAt_38E49FEB4E0EFEA233B1B2B409FA234E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PavlovHandV2_AnimBlueprint_AnimGraphNode_TransitionResult_7FA0E1B343AA3F871A929C839F1E76B5();
	void ExecuteUbergraph_PavlovHandV2_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
