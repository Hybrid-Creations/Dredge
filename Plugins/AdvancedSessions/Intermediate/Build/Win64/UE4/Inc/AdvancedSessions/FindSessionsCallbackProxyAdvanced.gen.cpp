// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FindSessionsCallbackProxyAdvanced.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	void UFindSessionsCallbackProxyAdvanced::StaticRegisterNativesUFindSessionsCallbackProxyAdvanced()
	{
		UClass* Class = UFindSessionsCallbackProxyAdvanced::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FilterSessionResults", (Native)&UFindSessionsCallbackProxyAdvanced::execFilterSessionResults },
			{ "FindSessionsAdvanced", (Native)&UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults()
	{
		struct FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms
		{
			TArray<FBlueprintSessionResult> SessionResults;
			TArray<FSessionsSearchSetting> Filters;
			TArray<FBlueprintSessionResult> FilteredResults;
		};
		UObject* Outer = Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FilterSessionResults"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms));
			UProperty* NewProp_FilteredResults = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FilteredResults"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FilteredResults, FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), 0x0010000000000180);
			UProperty* NewProp_FilteredResults_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FilteredResults, TEXT("FilteredResults"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			UProperty* NewProp_Filters = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Filters"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Filters, FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), 0x0010000008000182);
			UProperty* NewProp_Filters_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Filters, TEXT("Filters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSessionsSearchSetting());
			UProperty* NewProp_SessionResults = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SessionResults"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SessionResults, FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), 0x0010000008000182);
			UProperty* NewProp_SessionResults_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SessionResults, TEXT("SessionResults"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedSessions"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FindSessionsCallbackProxyAdvanced.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Filters an array of session results by the given search parameters, returns a new array with the filtered results"));
			MetaData->SetValue(NewProp_Filters, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SessionResults, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced()
	{
		struct FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 MaxResults;
			bool bUseLAN;
			EBPServerPresenceSearchType ServerTypeToSearch;
			TArray<FSessionsSearchSetting> Filters;
			bool bEmptyServersOnly;
			bool bNonEmptyServersOnly;
			bool bSecureServersOnly;
			int32 MinSlotsAvailable;
			UFindSessionsCallbackProxyAdvanced* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindSessionsAdvanced"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000580, Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister());
			UProperty* NewProp_MinSlotsAvailable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MinSlotsAvailable"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(MinSlotsAvailable, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSecureServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms);
			UProperty* NewProp_bSecureServersOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSecureServersOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSecureServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bSecureServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNonEmptyServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms);
			UProperty* NewProp_bNonEmptyServersOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNonEmptyServersOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNonEmptyServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNonEmptyServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEmptyServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms);
			UProperty* NewProp_bEmptyServersOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEmptyServersOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEmptyServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEmptyServersOnly, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), sizeof(bool), true);
			UProperty* NewProp_Filters = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Filters"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Filters, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000008000182);
			UProperty* NewProp_Filters_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Filters, TEXT("Filters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSessionsSearchSetting());
			UProperty* NewProp_ServerTypeToSearch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ServerTypeToSearch"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ServerTypeToSearch, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType());
			UProperty* NewProp_ServerTypeToSearch_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ServerTypeToSearch, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseLAN, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms);
			UProperty* NewProp_bUseLAN = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseLAN"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseLAN, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseLAN, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), sizeof(bool), true);
			UProperty* NewProp_MaxResults = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxResults"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxResults, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080);
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("Filters"));
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedSessions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bEmptyServersOnly"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bNonEmptyServersOnly"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bSecureServersOnly"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_MinSlotsAvailable"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FindSessionsCallbackProxyAdvanced.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Searches for advertised sessions with the default online subsystem and includes an array of filters"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_Filters, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister()
	{
		return UFindSessionsCallbackProxyAdvanced::StaticClass();
	}
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UFindSessionsCallbackProxyAdvanced::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults());
				OuterClass->LinkChild(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UFindSessionsCallbackProxyAdvanced), 0x0010000010080000, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UFindSessionsCallbackProxyAdvanced), 0x0010000010080000, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults(), "FilterSessionResults"); // 738284785
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced(), "FindSessionsAdvanced"); // 3039418525
				static TCppClassTypeInfo<TCppClassTypeTraits<UFindSessionsCallbackProxyAdvanced> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FindSessionsCallbackProxyAdvanced.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FindSessionsCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/FindSessionsCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there is an unsuccessful query"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/FindSessionsCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when there is a successful query"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindSessionsCallbackProxyAdvanced, 3686170512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindSessionsCallbackProxyAdvanced(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, &UFindSessionsCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UFindSessionsCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
