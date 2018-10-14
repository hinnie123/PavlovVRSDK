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

// AnimBlueprintGeneratedClass SK_ViveController_Skeleton_AnimBlueprint.SK_ViveController_Skeleton_AnimBlueprint_C
// 0x01C8 (0x0590 - 0x03C8)
class USK_ViveController_Skeleton_AnimBlueprint_C : public UVRControllerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_12FEF83E4C80BEB81F132A9256070857;      // 0x03D0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_339C207B408426627D77C49E8EF2E8E2;// 0x0418(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17149F6D4D2AF2260C856AAAD2E2BDF3;// 0x04C8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FC5BB1EE49788972B07ED7BA290ED8BE;// 0x0510(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1ECFC2F345ADA17A8442CEA2DCF3FF36;// 0x0558(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_ViveController_Skeleton_AnimBlueprint.SK_ViveController_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_339C207B408426627D77C49E8EF2E8E2();
	void ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
