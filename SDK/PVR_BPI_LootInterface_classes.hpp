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

// BlueprintGeneratedClass BPI_LootInterface.BPI_LootInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_LootInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_LootInterface.BPI_LootInterface_C");
		return ptr;
	}


	void LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
