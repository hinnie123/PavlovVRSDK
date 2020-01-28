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

// WidgetBlueprintGeneratedClass UI_ServerFilter.UI_ServerFilter_C
// 0x0030 (0x0238 - 0x0208)
class UUI_ServerFilter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                             Combo;                                                    // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             Options;                                                  // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ServerFilter.UI_ServerFilter_C");
		return ptr;
	}


	void GetSelection(struct FString* Selection);
	void SetSelection(const struct FString& Value);
	ESlateVisibility Get_GameModeCombo_Visibility_1();
	ESlateVisibility GetVisibility_1();
	void Construct();
	void BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void ExecuteUbergraph_UI_ServerFilter(int EntryPoint);
	void OnSelectionChanged__DelegateSignature(const struct FString& Selection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
