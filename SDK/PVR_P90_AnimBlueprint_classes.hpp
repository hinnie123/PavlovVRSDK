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

// AnimBlueprintGeneratedClass P90_AnimBlueprint.P90_AnimBlueprint_C
// 0x05E0 (0x0A20 - 0x0440)
class UP90_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5CA236E74C64B36888592F9315B71BF7;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_62D27BF148FB597D779C2382083D3F18;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7437100449AC50CBA3ABA8A88346F2CA;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3DFF87BF4AB13942AAD330B680CEB22B;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_47D71F324A11AADAF99FEE8BE0133F06;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_696219014466477756AAC3BE97B037EF;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_07D300CF4AF50B337DB27EA934ADD3A1;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DBD1B350484AB5145F8DC9BA59731C59;// 0x08E8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass P90_AnimBlueprint.P90_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_DBD1B350484AB5145F8DC9BA59731C59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_07D300CF4AF50B337DB27EA934ADD3A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_696219014466477756AAC3BE97B037EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_P90_AnimBlueprint_AnimGraphNode_ModifyBone_3DFF87BF4AB13942AAD330B680CEB22B();
	void ExecuteUbergraph_P90_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
