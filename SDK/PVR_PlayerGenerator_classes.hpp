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

// BlueprintGeneratedClass PlayerGenerator.PlayerGenerator_C
// 0x0000 (0x0080 - 0x0080)
class UPlayerGenerator_C : public UEnvQueryGenerator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerGenerator.PlayerGenerator_C");
		return ptr;
	}


	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
