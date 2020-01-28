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

// AnimBlueprintGeneratedClass DE_AnimBlueprint.DE_AnimBlueprint_C
// 0x05E0 (0x0A20 - 0x0440)
class UDE_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F3BF337041A54D027010B695C23109B7;// 0x0448(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B69EAB26418EDF37E2566FB8BC7A27C6;// 0x0488(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_60A9BA3940D7C091A3454C967627AC2C;      // 0x04C0(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_97AF94D14774E743F92C5DB9104615AE;// 0x0500(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E3932B7448F891FCA568ACB5344A0AA7;// 0x0540(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CA8683964CE052706AB03C84903D1ACE;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A1C1645740341C959F2362BD8FFB30B1;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95AE1AF440C453DE916925AD16E01249;// 0x08E8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DE_AnimBlueprint.DE_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_A1C1645740341C959F2362BD8FFB30B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_CA8683964CE052706AB03C84903D1ACE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_E3932B7448F891FCA568ACB5344A0AA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_95AE1AF440C453DE916925AD16E01249();
	void ExecuteUbergraph_DE_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
