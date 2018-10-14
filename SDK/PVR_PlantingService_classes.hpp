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

// BlueprintGeneratedClass PlantingService.PlantingService_C
// 0x0008 (0x00A0 - 0x0098)
class UPlantingService_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlantingService.PlantingService_C");
		return ptr;
	}


	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_PlantingService(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
