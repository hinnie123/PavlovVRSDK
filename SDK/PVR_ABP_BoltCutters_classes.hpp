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

// AnimBlueprintGeneratedClass ABP_BoltCutters.ABP_BoltCutters_C
// 0x022D (0x058D - 0x0360)
class UABP_BoltCutters_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FF7A867041AC871EE544BAAA0700E770;      // 0x0368(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7C59715A4063C0944F009FA40BAA581D;// 0x03A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE7DA226432D65E173C85F90F7150F04;// 0x0478(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B86D5F17495B57B64599EBAF88F4EEA6;// 0x0518(0x0070)
	float                                              OpenAlpha;                                                // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Close;                                                    // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BoltCutters.ABP_BoltCutters_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BoltCutters_AnimGraphNode_SequencePlayer_DE7DA226432D65E173C85F90F7150F04();
	void ExecuteUbergraph_ABP_BoltCutters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
