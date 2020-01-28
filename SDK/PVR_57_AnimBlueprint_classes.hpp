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

// AnimBlueprintGeneratedClass 57_AnimBlueprint.57_AnimBlueprint_C
// 0x0370 (0x07B0 - 0x0440)
class U57_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_34F97E7848FBD5E0209D37948E89258C;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AC81E6A64F959386F24E7480E86646D4;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6B8FBB2E465332C0539E048D11C0339E;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_560A6C584B10E219FA6E8EB6EB8F3B79;// 0x0500(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DA82CB2948EDED7748A017A8F92580CB;// 0x0540(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0AFD2B5944E3FE49AB443CB032A9B4E5;// 0x0678(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass 57_AnimBlueprint.57_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_57_AnimBlueprint_AnimGraphNode_ModifyBone_0AFD2B5944E3FE49AB443CB032A9B4E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_57_AnimBlueprint_AnimGraphNode_ModifyBone_DA82CB2948EDED7748A017A8F92580CB();
	void ExecuteUbergraph_57_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
