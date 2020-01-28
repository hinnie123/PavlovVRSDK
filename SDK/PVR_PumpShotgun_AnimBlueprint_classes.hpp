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

// AnimBlueprintGeneratedClass PumpShotgun_AnimBlueprint.PumpShotgun_AnimBlueprint_C
// 0x0718 (0x0B58 - 0x0440)
class UPumpShotgun_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AD13106946B0EC2488F6939BB702F3D3;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E98605564FE69ADC046A5D98E9272842;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9BD7F1694235D9D43924C0A8380AB8CA;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C43CCAB64188F0C03540E1B67974B4BE;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BA567EC74AAC1D8D9FFA9D90EB5CC57F;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4CDE99554B01F9735E1E119C9ADF0B52;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_50EA77194DAEAB68C32117A8243873A9;// 0x07B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F133C5E54169B06CD481788BBAD2202D;// 0x08E8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB3BC27A40E69AA68E7C47ACCCD4C8D9;// 0x0A20(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PumpShotgun_AnimBlueprint.PumpShotgun_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_PumpShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_50EA77194DAEAB68C32117A8243873A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PumpShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_C43CCAB64188F0C03540E1B67974B4BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PumpShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_EB3BC27A40E69AA68E7C47ACCCD4C8D9();
	void ExecuteUbergraph_PumpShotgun_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
