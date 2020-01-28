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

// AnimBlueprintGeneratedClass ABP_PillBottle.ABP_PillBottle_C
// 0x04E9 (0x0849 - 0x0360)
class UABP_PillBottle_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A3DDA9684520182B85280DA2052F83F1;      // 0x0368(0x0040)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2E6CCDB845EEBD7E57708FB934CEB131;// 0x03A8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A40422D64C74A52F0E5BCDBE783FBB49;// 0x0488(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3C5E9E848EC256A56CD40BC2A51E307;// 0x0528(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30D495844C1115CFA448DB9B76EB151D;// 0x05C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_919A822A49EA0C2F3997CABA59AAD20A;// 0x0668(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_641483E04FD0AB3D5582B9B421E76541;// 0x0708(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34F8BC5D4FA23D3A7868639CE8F25AB3;// 0x07A8(0x00A0)
	TEnumAsByte<E_BottleState>                         BottleState;                                              // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PillBottle.ABP_PillBottle_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_PillBottle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
