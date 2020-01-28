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

// AnimBlueprintGeneratedClass ABP_Handcuffs.ABP_Handcuffs_C
// 0x08A3 (0x0C03 - 0x0360)
class UABP_Handcuffs_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_59346B5740D85D9E6CCD6093535595DF;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57C9CC9840F97A3127ADB8868FACDD00;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_185B4E01478912394CAB7492BDD28988;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92098CB44B2F33B713C1269502387108;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B8ABA2D044FB104F478D998748DA96FF;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD8844CA48388D0D0A8C19A90DFD8C4C;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AC1DF9746032D6FB54245B67042A8C3;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C37BD57D4F6BE487C3989E8D3DB7CAEB;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24AD1A7A4401865A565E408439671F8E;// 0x05A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4B3A4F545D7F369EEB089BFE8F8B13D;// 0x05E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E472A19D44A5F49DD02513B9A9B2937C;// 0x0630(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A87EB7D4F554AFE1F27B0BADBF585DC;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_433228D14A9C06888160FA8AAB4D5B3B;// 0x06C0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_681CF9AE4FE3D718A9813ABCE5A46009;// 0x0760(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A9503B8F4AABE878FBF1088A8C4C7EC4;// 0x07A0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_045AFA8B4A51E71606A76C9ECB77682D;// 0x0840(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73E27E4B44D0F11A9AD4179F52F965DB;// 0x0880(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_155D013E483919427FE25A9625717748;// 0x0920(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_300105344D9E44840ECC9DBB2CF3EC83;// 0x0960(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E02AFDDD4444AC1EFE5FD9B990D2E146;// 0x0A00(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2A2C83547E2A4A489917FB2D039DAAB;// 0x0A40(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_09EA603943B1ADB7E674C18D7CD35CE0;// 0x0AE0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9B0E572C4C6436A7F6622090474F7AB4;// 0x0B20(0x00E0)
	bool                                               CuffsOpen;                                                // 0x0C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Arrested;                                                 // 0x0C01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanIdle;                                                  // 0x0C02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Handcuffs.ABP_Handcuffs_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcuffs_AnimGraphNode_TransitionResult_B8ABA2D044FB104F478D998748DA96FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcuffs_AnimGraphNode_TransitionResult_4AC1DF9746032D6FB54245B67042A8C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcuffs_AnimGraphNode_TransitionResult_C4B3A4F545D7F369EEB089BFE8F8B13D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcuffs_AnimGraphNode_TransitionResult_185B4E01478912394CAB7492BDD28988();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcuffs_AnimGraphNode_TransitionResult_57C9CC9840F97A3127ADB8868FACDD00();
	void OpenCuffs(bool CuffsOpen);
	void PlayerArrested(bool Arrested);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcuffs_AnimGraphNode_TransitionResult_92098CB44B2F33B713C1269502387108();
	void ExecuteUbergraph_ABP_Handcuffs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
