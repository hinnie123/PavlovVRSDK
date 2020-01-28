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

// AnimBlueprintGeneratedClass 1911_AnimBlueprint.1911_AnimBlueprint_C
// 0x05E0 (0x0A20 - 0x0440)
class U1911_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F13361D4488F24C5EF2EA08E314259DE;// 0x0448(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_65EFD8B34A4D4232CEC30CA32AC801DA;// 0x0488(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_71083CB3464D1A6F1ADE3894A393B18A;// 0x04C0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E044D4C24B9DCE39798DB5B1FF1CAC9E;// 0x0500(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1734C99B4C434A30939643B1A84C2A99;// 0x0638(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root_872B3538427E2FCAADF97A946E4842AE;      // 0x0770(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37118D364A32621E815BC0A104AF40CA;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D674A5214E1D8FBA497704BC93BA9B92;// 0x08E8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass 1911_AnimBlueprint.1911_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_1734C99B4C434A30939643B1A84C2A99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_E044D4C24B9DCE39798DB5B1FF1CAC9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_37118D364A32621E815BC0A104AF40CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1911_AnimBlueprint_AnimGraphNode_ModifyBone_D674A5214E1D8FBA497704BC93BA9B92();
	void ExecuteUbergraph_1911_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
