#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gun_LMGA.Gun_LMGA_C.IsMagazineEmpty
struct AGun_LMGA_C_IsMagazineEmpty_Params
{
	bool                                               Empty;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.NewFunction_1
struct AGun_LMGA_C_NewFunction_1_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.UserConstructionScript
struct AGun_LMGA_C_UserConstructionScript_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValueDegrees;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ServerReportDustCoverState
struct AGun_LMGA_C_ServerReportDustCoverState_Params
{
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.OnPostDustCoverStateChange
struct AGun_LMGA_C_OnPostDustCoverStateChange_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnDrop
struct AGun_LMGA_C_OnDrop_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (Parm, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnPick
struct AGun_LMGA_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.OnUnload
struct AGun_LMGA_C_OnUnload_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.ReceiveBeginPlay
struct AGun_LMGA_C_ReceiveBeginPlay_Params
{
};

// Function Gun_LMGA.Gun_LMGA_C.OnMagazineChanged
struct AGun_LMGA_C_OnMagazineChanged_Params
{
	bool*                                              bHasMagazine;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.Physicalize
struct AGun_LMGA_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_LMGA.Gun_LMGA_C.ExecuteUbergraph_Gun_LMGA
struct AGun_LMGA_C_ExecuteUbergraph_Gun_LMGA_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
