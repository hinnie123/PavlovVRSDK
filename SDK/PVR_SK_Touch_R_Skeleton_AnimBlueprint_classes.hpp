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

// AnimBlueprintGeneratedClass SK_Touch_R_Skeleton_AnimBlueprint.SK_Touch_R_Skeleton_AnimBlueprint_C
// 0x0328 (0x06F8 - 0x03D0)
class USK_Touch_R_Skeleton_AnimBlueprint_C : public UVRControllerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A9138EA84233C4DDD7387EABAEEEB0D5;      // 0x03D8(0x0040)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_FD8E12424E54B29C1AC26AAEA66F719D;// 0x0418(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5C7E0700415C7D73C34489B671511E51;// 0x0448(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_53FE13DE463E82F6AD1429B2BAABA5E2;// 0x0580(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_46C1D6FE42236EEAD9394DA608FC88F9;// 0x05C0(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Touch_R_Skeleton_AnimBlueprint.SK_Touch_R_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_46C1D6FE42236EEAD9394DA608FC88F9();
	void ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
