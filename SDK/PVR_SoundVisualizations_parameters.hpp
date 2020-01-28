#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
struct USoundVisualizationStatics_GetAmplitude_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmplitudeBuckets;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutAmplitudes;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
struct USoundVisualizationStatics_CalculateFrequencySpectrum_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpectrumWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutSpectrum;                                              // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
