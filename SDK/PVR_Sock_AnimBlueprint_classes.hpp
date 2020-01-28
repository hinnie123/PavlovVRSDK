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

// AnimBlueprintGeneratedClass Sock_AnimBlueprint.Sock_AnimBlueprint_C
// 0x05E0 (0x0A20 - 0x0440)
class USock_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_60564DEC4DE8572F23C1F8A96E50EC35;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6D5060A44FAFE2895485FF8098A4CF5D;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_806B1FFE497D52F440710A94A37E2812;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A0CF4D52423BC98B3C79169A1165363D;// 0x0500(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6F7140514E143F9ED79545BE0D2BA177;// 0x0540(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6F413DED40B42FBC9558749972750049;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15E62C264DF0B2422E4C3996FC3EB89A;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B39EB7EB4F0CC5CB66CBB59ECA5A5F68;// 0x08E8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sock_AnimBlueprint.Sock_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sock_AnimBlueprint_AnimGraphNode_ModifyBone_B39EB7EB4F0CC5CB66CBB59ECA5A5F68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sock_AnimBlueprint_AnimGraphNode_ModifyBone_15E62C264DF0B2422E4C3996FC3EB89A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sock_AnimBlueprint_AnimGraphNode_ModifyBone_6F413DED40B42FBC9558749972750049();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sock_AnimBlueprint_AnimGraphNode_ModifyBone_6F7140514E143F9ED79545BE0D2BA177();
	void ExecuteUbergraph_Sock_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
