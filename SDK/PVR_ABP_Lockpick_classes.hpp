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

// AnimBlueprintGeneratedClass ABP_Lockpick.ABP_Lockpick_C
// 0x00C0 (0x0420 - 0x0360)
class UABP_Lockpick_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_040463D849332D62CF9D66A1A3EF82EE;      // 0x0368(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_141E131644752B8EE1D01F9051B62E8C;// 0x03A8(0x0070)
	float                                              Pick4Alpha;                                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpTo;                                                   // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Lockpick.ABP_Lockpick_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void SetOpen(bool Open_);
	void ExecuteUbergraph_ABP_Lockpick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
