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

// BlueprintGeneratedClass SuppresionSourceContext.SuppresionSourceContext_C
// 0x0000 (0x0030 - 0x0030)
class USuppresionSourceContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass SuppresionSourceContext.SuppresionSourceContext_C"));
		return ptr;
	}


	void ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
