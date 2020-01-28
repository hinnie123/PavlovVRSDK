// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLength                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmplitudeBuckets               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutAmplitudes                  (Parm, OutParm, ZeroConstructor)

void USoundVisualizationStatics::STATIC_GetAmplitude(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int AmplitudeBuckets, TArray<float>* OutAmplitudes)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude");

	USoundVisualizationStatics_GetAmplitude_Params params;
	params.SoundWave = SoundWave;
	params.Channel = Channel;
	params.StartTime = StartTime;
	params.TimeLength = TimeLength;
	params.AmplitudeBuckets = AmplitudeBuckets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAmplitudes != nullptr)
		*OutAmplitudes = params.OutAmplitudes;
}


// Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLength                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpectrumWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutSpectrum                    (Parm, OutParm, ZeroConstructor)

void USoundVisualizationStatics::STATIC_CalculateFrequencySpectrum(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int SpectrumWidth, TArray<float>* OutSpectrum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum");

	USoundVisualizationStatics_CalculateFrequencySpectrum_Params params;
	params.SoundWave = SoundWave;
	params.Channel = Channel;
	params.StartTime = StartTime;
	params.TimeLength = TimeLength;
	params.SpectrumWidth = SpectrumWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpectrum != nullptr)
		*OutSpectrum = params.OutSpectrum;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
