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

// AnimBlueprintGeneratedClass DE_AnimBlueprint.DE_AnimBlueprint_C
// 0x0488 (0x08B8 - 0x0430)
class UDE_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23E7B04148C323C6E5F0BF9A2BC6F476;// 0x0438(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8FEEA8A0482BFEFC26179E867DFE2625;// 0x04E8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_13A457534CBB6BAB5247B093B75F95D3;// 0x0530(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17F2F18446981027C70BEC8343E81BC8;// 0x0568(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0ACFE2F345D0EC41C7C62FBDA16055FC;// 0x0618(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3D83252644BBE9AE4479988FA699391D;// 0x0660(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C346AAF0472CBCDEEC07AD9FA5878C83;// 0x0710(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_67FB6D6C47AAF319E7D039BB06D7F4B2;      // 0x07C0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1181890C4F4F96A4A50F2CA2CD8C5267;// 0x0808(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DE_AnimBlueprint.DE_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_3D83252644BBE9AE4479988FA699391D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_17F2F18446981027C70BEC8343E81BC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_C346AAF0472CBCDEEC07AD9FA5878C83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DE_AnimBlueprint_AnimGraphNode_ModifyBone_1181890C4F4F96A4A50F2CA2CD8C5267();
	void ExecuteUbergraph_DE_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
