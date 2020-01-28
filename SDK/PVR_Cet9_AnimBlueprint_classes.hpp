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

// AnimBlueprintGeneratedClass Cet9_AnimBlueprint.Cet9_AnimBlueprint_C
// 0x0370 (0x07B0 - 0x0440)
class UCet9_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3A206232472A8476461E7EAFD41EC065;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_51F6AC9F400113CE58ACEBAFAA642D85;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_12F08422412D2F328F8FA39179540E38;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_69C3D4D04BF68DBAF591DEB84A904CF1;// 0x0500(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0744A2DB4D33970A1AF35E808F1BA7DD;// 0x0540(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B3B88CC14982EBAB8B98D08E8EF9DDB3;// 0x0678(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cet9_AnimBlueprint.Cet9_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Cet9_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
