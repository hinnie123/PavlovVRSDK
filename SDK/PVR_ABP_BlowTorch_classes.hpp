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

// AnimBlueprintGeneratedClass ABP_BlowTorch.ABP_BlowTorch_C
// 0x03A6 (0x0706 - 0x0360)
class UABP_BlowTorch_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DFC8AED9447CFC8824A5B9A5357BA0D2;      // 0x0368(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2E92DF4E4926171F3AADA68AAE089712;// 0x03A8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56BCF35E4A2362B6344DEBBE57FA9A67;// 0x0418(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07C9527F47FE8C9D9BF8EBA080FA8502;// 0x04B8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_72300E1E43946723B1FA07916590114D;// 0x0558(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81B662094C2DCB005B909A908923786B;// 0x0630(0x00D0)
	float                                              ValveAlpha;                                               // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerDown;                                              // 0x0704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReturnToZero;                                             // 0x0705(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BlowTorch.ABP_BlowTorch_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void Turn_Off_Valve();
	void SetValveAlpha(float ValveAlpha);
	void ExecuteUbergraph_ABP_BlowTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
