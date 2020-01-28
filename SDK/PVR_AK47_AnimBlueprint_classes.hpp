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

// AnimBlueprintGeneratedClass AK47_AnimBlueprint.AK47_AnimBlueprint_C
// 0x0638 (0x0A78 - 0x0440)
class UAK47_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_56ADF7404801BACB388C4B834301BB3F;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F06A0776489B5F2528555AA7B058AD09;// 0x0488(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BBAA3D2846F22367297E84B6F32A3E3C;// 0x04C8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_40CBC9FF41449E8758425A9828709B0A;// 0x0600(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1FABEE35440FD1A72FFF89AA4621C434;// 0x0640(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_902BE3274318CFA9DF00359CFEA48301;// 0x0778(0x0138)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0D6DD4CD47824BFAC7F367A0313E0C33;// 0x08B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5691A79C42B5E89E14DE33A0C34F1A87;      // 0x08E8(0x0068)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5277A27A44BAC2BFC2190EB20D861D7E;// 0x0950(0x00F0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_E6326AE44D7C2780C5568685CA2217F7;// 0x0A40(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK47_AnimBlueprint.AK47_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK47_AnimBlueprint_AnimGraphNode_ModifyBone_902BE3274318CFA9DF00359CFEA48301();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK47_AnimBlueprint_AnimGraphNode_ModifyBone_1FABEE35440FD1A72FFF89AA4621C434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK47_AnimBlueprint_AnimGraphNode_ModifyBone_BBAA3D2846F22367297E84B6F32A3E3C();
	void ExecuteUbergraph_AK47_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
