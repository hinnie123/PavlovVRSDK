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

// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
struct UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params
{
	class UModularSynthPresetBank*                     InBank;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModularSynthPreset                         Preset;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     PresetName;                                               // (Parm, ZeroConstructor)
};

// Function Synthesis.ModularSynthComponent.SetSynthPreset
struct UModularSynthComponent_SetSynthPreset_Params
{
	struct FModularSynthPreset                         SynthPreset;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.ModularSynthComponent.SetSustainGain
struct UModularSynthComponent_SetSustainGain_Params
{
	float                                              SustainGain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
struct UModularSynthComponent_SetStereoDelayWetlevel_Params
{
	float                                              DelayWetlevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
struct UModularSynthComponent_SetStereoDelayTime_Params
{
	float                                              DelayTimeMsec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
struct UModularSynthComponent_SetStereoDelayRatio_Params
{
	float                                              DelayRatio;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
struct UModularSynthComponent_SetStereoDelayMode_Params
{
	ESynthStereoDelayMode                              StereoDelayMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
struct UModularSynthComponent_SetStereoDelayIsEnabled_Params
{
	bool                                               StereoDelayEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
struct UModularSynthComponent_SetStereoDelayFeedback_Params
{
	float                                              DelayFeedback;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetSpread
struct UModularSynthComponent_SetSpread_Params
{
	float                                              Spread;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetReleaseTime
struct UModularSynthComponent_SetReleaseTime_Params
{
	float                                              ReleaseTimeMsec;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetPortamento
struct UModularSynthComponent_SetPortamento_Params
{
	float                                              Portamento;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetPitchBend
struct UModularSynthComponent_SetPitchBend_Params
{
	float                                              PitchBend;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetPan
struct UModularSynthComponent_SetPan_Params
{
	float                                              Pan;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscType
struct UModularSynthComponent_SetOscType_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESynth1OscType                                     OscType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscSync
struct UModularSynthComponent_SetOscSync_Params
{
	bool                                               bIsSynced;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscSemitones
struct UModularSynthComponent_SetOscSemitones_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Semitones;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
struct UModularSynthComponent_SetOscPulsewidth_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pulsewidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscOctave
struct UModularSynthComponent_SetOscOctave_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Octave;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscGainMod
struct UModularSynthComponent_SetOscGainMod_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OscGainMod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscGain
struct UModularSynthComponent_SetOscGain_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OscGain;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
struct UModularSynthComponent_SetOscFrequencyMod_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OscFreqMod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetOscCents
struct UModularSynthComponent_SetOscCents_Params
{
	int                                                OscIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cents;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
struct UModularSynthComponent_SetModEnvSustainGain_Params
{
	float                                              SustainGain;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
struct UModularSynthComponent_SetModEnvReleaseTime_Params
{
	float                                              Release;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvPatch
struct UModularSynthComponent_SetModEnvPatch_Params
{
	ESynthModEnvPatch                                  InPatchType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvInvert
struct UModularSynthComponent_SetModEnvInvert_Params
{
	bool                                               bInvert;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvDepth
struct UModularSynthComponent_SetModEnvDepth_Params
{
	float                                              Depth;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
struct UModularSynthComponent_SetModEnvDecayTime_Params
{
	float                                              DecayTimeMsec;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
struct UModularSynthComponent_SetModEnvBiasPatch_Params
{
	ESynthModEnvBiasPatch                              InPatchType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
struct UModularSynthComponent_SetModEnvBiasInvert_Params
{
	bool                                               bInvert;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
struct UModularSynthComponent_SetModEnvAttackTime_Params
{
	float                                              AttackTimeMsec;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOType
struct UModularSynthComponent_SetLFOType_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESynthLFOType                                      LFOType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOPatch
struct UModularSynthComponent_SetLFOPatch_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESynthLFOPatchType                                 LFOPatchType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOMode
struct UModularSynthComponent_SetLFOMode_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESynthLFOMode                                      LFOMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOGainMod
struct UModularSynthComponent_SetLFOGainMod_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GainMod;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOGain
struct UModularSynthComponent_SetLFOGain_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
struct UModularSynthComponent_SetLFOFrequencyMod_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyModHz;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetLFOFrequency
struct UModularSynthComponent_SetLFOFrequency_Params
{
	int                                                LFOIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyHz;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetGainDb
struct UModularSynthComponent_SetGainDb_Params
{
	float                                              GainDb;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetFilterType
struct UModularSynthComponent_SetFilterType_Params
{
	ESynthFilterType                                   FilterType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetFilterQMod
struct UModularSynthComponent_SetFilterQMod_Params
{
	float                                              FilterQ;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetFilterQ
struct UModularSynthComponent_SetFilterQ_Params
{
	float                                              FilterQ;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
struct UModularSynthComponent_SetFilterFrequencyMod_Params
{
	float                                              FilterFrequencyHz;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetFilterFrequency
struct UModularSynthComponent_SetFilterFrequency_Params
{
	float                                              FilterFrequencyHz;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
struct UModularSynthComponent_SetFilterAlgorithm_Params
{
	ESynthFilterAlgorithm                              FilterAlgorithm;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetEnableUnison
struct UModularSynthComponent_SetEnableUnison_Params
{
	bool                                               EnableUnison;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
struct UModularSynthComponent_SetEnableRetrigger_Params
{
	bool                                               RetriggerEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
struct UModularSynthComponent_SetEnablePolyphony_Params
{
	bool                                               bEnablePolyphony;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetEnablePatch
struct UModularSynthComponent_SetEnablePatch_Params
{
	struct FPatchId                                    PatchId;                                                  // (ConstParm, Parm)
	bool                                               bIsEnabled;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetEnableLegato
struct UModularSynthComponent_SetEnableLegato_Params
{
	bool                                               LegatoEnabled;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetDecayTime
struct UModularSynthComponent_SetDecayTime_Params
{
	float                                              DecayTimeMsec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetChorusFrequency
struct UModularSynthComponent_SetChorusFrequency_Params
{
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetChorusFeedback
struct UModularSynthComponent_SetChorusFeedback_Params
{
	float                                              Feedback;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetChorusEnabled
struct UModularSynthComponent_SetChorusEnabled_Params
{
	bool                                               EnableChorus;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetChorusDepth
struct UModularSynthComponent_SetChorusDepth_Params
{
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.SetAttackTime
struct UModularSynthComponent_SetAttackTime_Params
{
	float                                              AttackTimeMsec;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.NoteOn
struct UModularSynthComponent_NoteOn_Params
{
	float                                              Note;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.NoteOff
struct UModularSynthComponent_NoteOff_Params
{
	float                                              Note;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllNotesOff;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKillAllNotes;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.ModularSynthComponent.CreatePatch
struct UModularSynthComponent_CreatePatch_Params
{
	ESynth1PatchSource                                 PatchSource;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSynth1PatchCable>                   PatchCables;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEnableByDefault;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPatchId                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
struct USourceEffectBitCrusherPreset_SetSettings_Params
{
	struct FSourceEffectBitCrusherSettings             InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectChorusPreset.SetSettings
struct USourceEffectChorusPreset_SetSettings_Params
{
	struct FSourceEffectChorusSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
struct USourceEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSourceEffectDynamicsProcessorSettings      InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
struct USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params
{
	class UEnvelopeFollowerListener*                   EnvelopeFollowerListener;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
struct USourceEffectEnvelopeFollowerPreset_SetSettings_Params
{
	struct FSourceEffectEnvelopeFollowerSettings       InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
struct USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params
{
	class UEnvelopeFollowerListener*                   EnvelopeFollowerListener;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Synthesis.SourceEffectEQPreset.SetSettings
struct USourceEffectEQPreset_SetSettings_Params
{
	struct FSourceEffectEQSettings                     InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectFilterPreset.SetSettings
struct USourceEffectFilterPreset_SetSettings_Params
{
	struct FSourceEffectFilterSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
struct USourceEffectFoldbackDistortionPreset_SetSettings_Params
{
	struct FSourceEffectFoldbackDistortionSettings     InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectPannerPreset.SetSettings
struct USourceEffectPannerPreset_SetSettings_Params
{
	struct FSourceEffectPannerSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectPhaserPreset.SetSettings
struct USourceEffectPhaserPreset_SetSettings_Params
{
	struct FSourceEffectPhaserSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
struct USourceEffectRingModulationPreset_SetSettings_Params
{
	struct FSourceEffectRingModulationSettings         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
struct USourceEffectSimpleDelayPreset_SetSettings_Params
{
	struct FSourceEffectSimpleDelaySettings            InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
struct USourceEffectStereoDelayPreset_SetSettings_Params
{
	struct FSourceEffectStereoDelaySettings            InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
struct USourceEffectWaveShaperPreset_SetSettings_Params
{
	struct FSourceEffectWaveShaperSettings             InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SubmixEffectDelayPreset.SetSettings
struct USubmixEffectDelayPreset_SetSettings_Params
{
	struct FSubmixEffectDelaySettings                  InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
struct USubmixEffectDelayPreset_SetInterpolationTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectDelayPreset.SetDelay
struct USubmixEffectDelayPreset_SetDelay_Params
{
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
struct USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFilterPreset.SetSettings
struct USubmixEffectFilterPreset_SetSettings_Params
{
	struct FSubmixEffectFilterSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
struct USubmixEffectFilterPreset_SetFilterType_Params
{
	ESubmixFilterType                                  InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
struct USubmixEffectFilterPreset_SetFilterQMod_Params
{
	float                                              InQ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
struct USubmixEffectFilterPreset_SetFilterQ_Params
{
	float                                              InQ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
struct USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params
{
	float                                              InFrequency;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
struct USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params
{
	float                                              InFrequency;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
struct USubmixEffectFilterPreset_SetFilterAlgorithm_Params
{
	ESubmixFilterAlgorithm                             InAlgorithm;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
struct USubmixEffectFlexiverbPreset_SetSettings_Params
{
	struct FSubmixEffectFlexiverbSettings              InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
struct USubmixEffectTapDelayPreset_SetTap_Params
{
	int                                                TapId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTapDelayInfo                               TapInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
struct USubmixEffectTapDelayPreset_SetSettings_Params
{
	struct FSubmixEffectTapDelaySettings               InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
struct USubmixEffectTapDelayPreset_SetInterpolationTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
struct USubmixEffectTapDelayPreset_RemoveTap_Params
{
	int                                                TapId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
struct USubmixEffectTapDelayPreset_GetTapIds_Params
{
	TArray<int>                                        TapIds;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
struct USubmixEffectTapDelayPreset_GetTap_Params
{
	int                                                TapId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTapDelayInfo                               TapInfo;                                                  // (Parm, OutParm)
};

// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
struct USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
struct USubmixEffectTapDelayPreset_AddTap_Params
{
	int                                                TapId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.Synth2DSlider.SetValue
struct USynth2DSlider_SetValue_Params
{
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.Synth2DSlider.SetStepSize
struct USynth2DSlider_SetStepSize_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.Synth2DSlider.SetSliderHandleColor
struct USynth2DSlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.Synth2DSlider.SetLocked
struct USynth2DSlider_SetLocked_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.Synth2DSlider.SetIndentHandle
struct USynth2DSlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.Synth2DSlider.GetValue
struct USynth2DSlider_GetValue_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetSustainGain
struct UGranularSynth_SetSustainGain_Params
{
	float                                              SustainGain;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetSoundWave
struct UGranularSynth_SetSoundWave_Params
{
	class USoundWave*                                  InSoundWave;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetScrubMode
struct UGranularSynth_SetScrubMode_Params
{
	bool                                               bScrubMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetReleaseTimeMsec
struct UGranularSynth_SetReleaseTimeMsec_Params
{
	float                                              ReleaseTimeMsec;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetPlayheadTime
struct UGranularSynth_SetPlayheadTime_Params
{
	float                                              InPositionSec;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpTimeSec;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EGranularSynthSeekType                             SeekType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetPlaybackSpeed
struct UGranularSynth_SetPlaybackSpeed_Params
{
	float                                              InPlayheadRate;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainVolume
struct UGranularSynth_SetGrainVolume_Params
{
	float                                              BaseVolume;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VolumeRange;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainsPerSecond
struct UGranularSynth_SetGrainsPerSecond_Params
{
	float                                              InGrainsPerSecond;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainProbability
struct UGranularSynth_SetGrainProbability_Params
{
	float                                              InGrainProbability;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainPitch
struct UGranularSynth_SetGrainPitch_Params
{
	float                                              BasePitch;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainPan
struct UGranularSynth_SetGrainPan_Params
{
	float                                              BasePan;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PanRange;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainEnvelopeType
struct UGranularSynth_SetGrainEnvelopeType_Params
{
	EGranularSynthEnvelopeType                         EnvelopeType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetGrainDuration
struct UGranularSynth_SetGrainDuration_Params
{
	float                                              BaseDurationMsec;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DurationRange;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetDecayTime
struct UGranularSynth_SetDecayTime_Params
{
	float                                              DecayTimeMsec;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.SetAttackTime
struct UGranularSynth_SetAttackTime_Params
{
	float                                              AttackTimeMsec;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.NoteOn
struct UGranularSynth_NoteOn_Params
{
	float                                              Note;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.NoteOff
struct UGranularSynth_NoteOff_Params
{
	float                                              Note;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKill;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.GranularSynth.IsLoaded
struct UGranularSynth_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.GranularSynth.GetSampleDuration
struct UGranularSynth_GetSampleDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
struct UGranularSynth_GetCurrentPlayheadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.SetSoundWave
struct USynthSamplePlayer_SetSoundWave_Params
{
	class USoundWave*                                  InSoundWave;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
struct USynthSamplePlayer_SetScrubTimeWidth_Params
{
	float                                              InScrubTimeWidthSec;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.SetScrubMode
struct USynthSamplePlayer_SetScrubMode_Params
{
	bool                                               bScrubMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.SetPitch
struct USynthSamplePlayer_SetPitch_Params
{
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.SeekToTime
struct USynthSamplePlayer_SeekToTime_Params
{
	float                                              TimeSec;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ESamplePlayerSeekType                              SeekType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWrap;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.IsLoaded
struct USynthSamplePlayer_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.GetSampleDuration
struct USynthSamplePlayer_GetSampleDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
struct USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
struct USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Synthesis.SynthKnob.SetValue
struct USynthKnob_SetValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthKnob.SetStepSize
struct USynthKnob_SetStepSize_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthKnob.SetLocked
struct USynthKnob_SetLocked_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Synthesis.SynthKnob.GetValue
struct USynthKnob_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
