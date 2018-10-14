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

// AnimBlueprintGeneratedClass SK_VRHand_L_Skeleton_AnimBlueprint.SK_VRHand_L_Skeleton_AnimBlueprint_C
// 0x02C0 (0x0688 - 0x03C8)
class USK_VRHand_L_Skeleton_AnimBlueprint_C : public UVRHandAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5F22F6FE45800C08C92B95BFA0DD74D0;      // 0x03D0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4DE4139748D175CE509305B53F67600B;// 0x0418(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E164471A4F90FFC7C6A7B89190AE6D9F;// 0x0450(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_80B6FCEF49CDF5C60AAEBCB17F0EA15D; // 0x0498(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6817C940442B3005B779F78C64FCC5D5;// 0x0558(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6B4F614C49226F7424C546937B9AC9F6;// 0x05A0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3E3DFFBF4D7E2D1B9E63EDB93D5535D8;// 0x0618(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_VRHand_L_Skeleton_AnimBlueprint.SK_VRHand_L_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VRHand_L_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_80B6FCEF49CDF5C60AAEBCB17F0EA15D();
	void ExecuteUbergraph_SK_VRHand_L_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
