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

// AnimBlueprintGeneratedClass Glock_AnimBlueprint.Glock_AnimBlueprint_C
// 0x0488 (0x08B8 - 0x0430)
class UGlock_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1EADD9B2400E04DDD8F6518DC0E8D80A;      // 0x0438(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB70415F42E132D3ED8C4A8E7AEDFC22;// 0x0480(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CF1BFA3A4E037C2B09EE948B7F549191;// 0x0530(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_00D270024A3320C070C6208EB8476E7F;// 0x0578(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F676AD7F4D0171457EE0F3BF25CEA8CC;// 0x05B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EE1F52A54912E9E1E4DE9EB3992CC895;// 0x0660(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_306276C94CEBED16299711A0137DBD31;// 0x06A8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D5F646E64940340443CBB5B5FDD90FC6;// 0x0758(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_54B7D3F04BE3F9DC41C74290BEF5FD4E;// 0x0808(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Glock_AnimBlueprint.Glock_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Glock_AnimBlueprint_AnimGraphNode_ModifyBone_54B7D3F04BE3F9DC41C74290BEF5FD4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Glock_AnimBlueprint_AnimGraphNode_ModifyBone_D5F646E64940340443CBB5B5FDD90FC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Glock_AnimBlueprint_AnimGraphNode_ModifyBone_306276C94CEBED16299711A0137DBD31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Glock_AnimBlueprint_AnimGraphNode_ModifyBone_F676AD7F4D0171457EE0F3BF25CEA8CC();
	void ExecuteUbergraph_Glock_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
