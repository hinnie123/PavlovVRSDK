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

// Class SoundVisualizations.SoundVisualizationStatics
// 0x0000 (0x0028 - 0x0028)
class USoundVisualizationStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundVisualizations.SoundVisualizationStatics");
		return ptr;
	}


	void STATIC_GetAmplitude(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int AmplitudeBuckets, TArray<float>* OutAmplitudes);
	void STATIC_CalculateFrequencySpectrum(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int SpectrumWidth, TArray<float>* OutSpectrum);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
