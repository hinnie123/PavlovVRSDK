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

// AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C
// 0x05E0 (0x0A20 - 0x0440)
class UM9_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_569AB5384F7D29265E3854A4D7BA2750;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7798EEF746B5794DF6D11D8B8114FD20;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7963FA744D1DA04582B157B557A7B41B;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A99997914CCC48AE3FC089A697507A76;// 0x0500(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A314C1D4557E971AFDBAEA1A4EE53B5;// 0x0540(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0336EED34D1B47553A4937B87EBF8849;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60F625414B9FECF60F3BA1AC26F0893F;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_87628FA0472AFC3E6687F2883C7A1F89;// 0x08E8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_ModifyBone_87628FA0472AFC3E6687F2883C7A1F89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_ModifyBone_60F625414B9FECF60F3BA1AC26F0893F();
	void ExecuteUbergraph_M9_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
