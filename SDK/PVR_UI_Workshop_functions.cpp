// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Workshop.UI_Workshop_C.Get_PageLabel_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Workshop_C::Get_PageLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.Get_PageLabel_Text_1"));

	UUI_Workshop_C_Get_PageLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Workshop.UI_Workshop_C.GetPageRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            PageIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            FirxtIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LastIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::GetPageRange(int Length, int PageIndex, int* FirxtIndex, int* LastIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.GetPageRange"));

	UUI_Workshop_C_GetPageRange_Params params;
	params.Length = Length;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirxtIndex != nullptr)
		*FirxtIndex = params.FirxtIndex;
	if (LastIndex != nullptr)
		*LastIndex = params.LastIndex;
}


// Function UI_Workshop.UI_Workshop_C.SetVote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWorkshopVoteType              VoteType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::SetVote(EWorkshopVoteType VoteType, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.SetVote"));

	UUI_Workshop_C_SetVote_Params params;
	params.VoteType = VoteType;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.SetMapList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemToFind                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Workshop_C::SetMapList(const struct FString& ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.SetMapList"));

	UUI_Workshop_C_SetMapList_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.SetProgressToMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::SetProgressToMap(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.SetProgressToMap"));

	UUI_Workshop_C_SetProgressToMap_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.GetMapInList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_WorkshopMap_C*       Map                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::GetMapInList(const struct FName& ID, class UUI_WorkshopMap_C** Map)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.GetMapInList"));

	UUI_Workshop_C_GetMapInList_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function UI_Workshop.UI_Workshop_C.ClearMaps
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::ClearMaps()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.ClearMaps"));

	UUI_Workshop_C_ClearMaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.UpdateProperties
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::UpdateProperties()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.UpdateProperties"));

	UUI_Workshop_C_UpdateProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.UpdateWorkshopMapList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::UpdateWorkshopMapList()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.UpdateWorkshopMapList"));

	UUI_Workshop_C_UpdateWorkshopMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MapId                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::Select(const struct FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.Select"));

	UUI_Workshop_C_Select_Params params;
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.UpdateInstalledMapList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::UpdateInstalledMapList()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.UpdateInstalledMapList"));

	UUI_Workshop_C_UpdateInstalledMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Workshop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.Construct"));

	UUI_Workshop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnMapClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_WorkshopMap_C*       Map                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::OnMapClicked(class UUI_WorkshopMap_C* Map)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnMapClicked"));

	UUI_Workshop_C_OnMapClicked_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__SelectBtn_K2Node_ComponentBoundEvent_19_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__SelectBtn_K2Node_ComponentBoundEvent_19_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__SelectBtn_K2Node_ComponentBoundEvent_19_OnButtonClicked__DelegateSignature"));

	UUI_Workshop_C_BndEvt__SelectBtn_K2Node_ComponentBoundEvent_19_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_21_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_21_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_21_OnButtonClicked__DelegateSignature"));

	UUI_Workshop_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_21_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnSubscriptionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSubscribed                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::OnSubscriptionChanged(const struct FName& ID, bool bSubscribed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnSubscriptionChanged"));

	UUI_Workshop_C_OnSubscriptionChanged_Params params;
	params.ID = ID;
	params.bSubscribed = bSubscribed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__UI_WorkshopCombo_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (Parm, ZeroConstructor)

void UUI_Workshop_C::BndEvt__UI_WorkshopCombo_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__UI_WorkshopCombo_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature"));

	UUI_Workshop_C_BndEvt__UI_WorkshopCombo_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnCustomMapQueryCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::OnCustomMapQueryCompleted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnCustomMapQueryCompleted_Event_1"));

	UUI_Workshop_C_OnCustomMapQueryCompleted_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__UnSubButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__UnSubButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__UnSubButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature"));

	UUI_Workshop_C_BndEvt__UnSubButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__SubButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature"));

	UUI_Workshop_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnDownloadBegin_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::OnDownloadBegin_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnDownloadBegin_Event_1"));

	UUI_Workshop_C_OnDownloadBegin_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnDownloadProgress_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::OnDownloadProgress_Event_1(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnDownloadProgress_Event_1"));

	UUI_Workshop_C_OnDownloadProgress_Event_1_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnCustomMapDownloadCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UUI_Workshop_C::OnCustomMapDownloadCompleted_Event_1(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnCustomMapDownloadCompleted_Event_1"));

	UUI_Workshop_C_OnCustomMapDownloadCompleted_Event_1_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnPreviewLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::OnPreviewLoaded_Event_1(const struct FName& ID, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnPreviewLoaded_Event_1"));

	UUI_Workshop_C_OnPreviewLoaded_Event_1_Params params;
	params.ID = ID;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__VoteUpBtn_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__VoteUpBtn_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__VoteUpBtn_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature"));

	UUI_Workshop_C_BndEvt__VoteUpBtn_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__VoteDownBtn_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__VoteDownBtn_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__VoteDownBtn_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature"));

	UUI_Workshop_C_BndEvt__VoteDownBtn_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnRequestUserVote_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// EWorkshopVoteType              VoteType                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::OnRequestUserVote_Event_1(const struct FName& ID, EWorkshopVoteType VoteType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnRequestUserVote_Event_1"));

	UUI_Workshop_C_OnRequestUserVote_Event_1_Params params;
	params.ID = ID;
	params.VoteType = VoteType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__PageNext_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__PageNext_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__PageNext_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature"));

	UUI_Workshop_C_BndEvt__PageNext_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.BndEvt__PagePrev_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Workshop_C::BndEvt__PagePrev_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.BndEvt__PagePrev_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature"));

	UUI_Workshop_C_BndEvt__PagePrev_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnGetMapListAdvancedResult_Event_2
// (BlueprintCallable, BlueprintEvent)

void UUI_Workshop_C::OnGetMapListAdvancedResult_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnGetMapListAdvancedResult_Event_2"));

	UUI_Workshop_C_OnGetMapListAdvancedResult_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.ExecuteUbergraph_UI_Workshop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::ExecuteUbergraph_UI_Workshop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.ExecuteUbergraph_UI_Workshop"));

	UUI_Workshop_C_ExecuteUbergraph_UI_Workshop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Workshop.UI_Workshop_C.OnCommit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MapUniqueId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Canceled                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Workshop_C::OnCommit__DelegateSignature(const struct FName& MapUniqueId, bool Canceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Workshop.UI_Workshop_C.OnCommit__DelegateSignature"));

	UUI_Workshop_C_OnCommit__DelegateSignature_Params params;
	params.MapUniqueId = MapUniqueId;
	params.Canceled = Canceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
