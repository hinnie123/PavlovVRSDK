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

// AnimBlueprintGeneratedClass P90_AnimBlueprint.P90_AnimBlueprint_C
// 0x0328 (0x0758 - 0x0430)
class UP90_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B576352B4B9D1054FB8267A03D67C81D;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_108BC02443EB49B2BA5CE19C795246BA;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FF2A85B146DDE142B4B43A8AC3149019;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_68F3318C46BD6A91EB230DBA65CAED42;// 0x0500(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3BE6A07F4E7EE99D8256F1B1C49C48B2;// 0x05B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6B01186740C3081C6D007287CDE7FBFA;// 0x05F8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7EF2332D423D3E51E04F399EDA60350B;// 0x06A8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass P90_AnimBlueprint.P90_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_7EF2332D423D3E51E04F399EDA60350B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_6B01186740C3081C6D007287CDE7FBFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_68F3318C46BD6A91EB230DBA65CAED42();
	void ExecuteUbergraph_P90_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
