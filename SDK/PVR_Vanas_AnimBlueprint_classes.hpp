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

// AnimBlueprintGeneratedClass Vanas_AnimBlueprint.Vanas_AnimBlueprint_C
// 0x0718 (0x0B58 - 0x0440)
class UVanas_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D2297A8483A4DBB2F5E338E4F6D59B7;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_235738164811373A13D23D9121D50E74;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E5AB933944A17236DCFB9A8282B482E2;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B27560D4E49996141680F8079286813;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E48FDF64464A61E0928CC7B08F37E1DA;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_74BFBF0C468047A03700698DBC4A7A30;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5397B45B409E88305D543F856E0B88A2;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_98E6982A4CBC33BD0739A2950879FB12;// 0x08E8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BC78D8C943C1D42C613F0AB4D24D4543;// 0x0A20(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Vanas_AnimBlueprint.Vanas_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanas_AnimBlueprint_AnimGraphNode_ModifyBone_5397B45B409E88305D543F856E0B88A2();
	void ExecuteUbergraph_Vanas_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
