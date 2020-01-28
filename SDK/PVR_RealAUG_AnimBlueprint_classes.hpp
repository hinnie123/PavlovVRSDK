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

// AnimBlueprintGeneratedClass RealAUG_AnimBlueprint.RealAUG_AnimBlueprint_C
// 0x04A8 (0x08E8 - 0x0440)
class URealAUG_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D94A456D41886AEE5D05A689D31A8DB3;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C3006E84F886D9A6F16B1861C91503C;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_71D211534822184D9DC3E79BA9B93ADD;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4FA30766421A3963FE80A884EFB45E4B;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_881E540C48415EBF0B3033955D5A3C36;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1494A36F41CBC2530724D5BEDB072DA8;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CE4419994CA9260E4F75C6AEE944B4EB;// 0x07B0(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RealAUG_AnimBlueprint.RealAUG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RealAUG_AnimBlueprint_AnimGraphNode_ModifyBone_CE4419994CA9260E4F75C6AEE944B4EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RealAUG_AnimBlueprint_AnimGraphNode_ModifyBone_1494A36F41CBC2530724D5BEDB072DA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RealAUG_AnimBlueprint_AnimGraphNode_ModifyBone_4FA30766421A3963FE80A884EFB45E4B();
	void ExecuteUbergraph_RealAUG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
