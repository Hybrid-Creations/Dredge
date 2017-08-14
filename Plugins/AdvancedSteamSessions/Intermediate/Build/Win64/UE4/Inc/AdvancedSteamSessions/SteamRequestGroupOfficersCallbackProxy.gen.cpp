// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SteamRequestGroupOfficersCallbackProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRequestGroupOfficersCallbackProxy() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms
		{
			TArray<FBPSteamGroupOfficer> OfficerList;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintGroupOfficerDetailsDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms));
			UProperty* NewProp_OfficerList = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OfficerList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OfficerList, _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms), 0x0010000008000182);
			UProperty* NewProp_OfficerList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OfficerList, TEXT("OfficerList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBPSteamGroupOfficer());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
			MetaData->SetValue(NewProp_OfficerList, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FBPSteamGroupOfficer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupOfficer, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupOfficer"), sizeof(FBPSteamGroupOfficer), Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamGroupOfficer(FBPSteamGroupOfficer::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamGroupOfficer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPSteamGroupOfficer")),new UScriptStruct::TCppStructOps<FBPSteamGroupOfficer>);
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer;
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamGroupOfficer"), sizeof(FBPSteamGroupOfficer), Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPSteamGroupOfficer"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPSteamGroupOfficer>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsOwner, FBPSteamGroupOfficer);
			UProperty* NewProp_bIsOwner = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsOwner"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsOwner, FBPSteamGroupOfficer), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bIsOwner, FBPSteamGroupOfficer), sizeof(bool), true);
			UProperty* NewProp_OfficerUniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OfficerUniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OfficerUniqueNetID, FBPSteamGroupOfficer), 0x0010000000000015, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
			MetaData->SetValue(NewProp_bIsOwner, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_bIsOwner, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
			MetaData->SetValue(NewProp_bIsOwner, TEXT("ToolTip"), TEXT("Uint64 representation"));
			MetaData->SetValue(NewProp_OfficerUniqueNetID, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_OfficerUniqueNetID, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC() { return 514820247U; }
	void USteamRequestGroupOfficersCallbackProxy::StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy()
	{
		UClass* Class = USteamRequestGroupOfficersCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetSteamGroupOfficerList", (Native)&USteamRequestGroupOfficersCallbackProxy::execGetSteamGroupOfficerList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList()
	{
		struct SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId GroupUniqueNetID;
			USteamRequestGroupOfficersCallbackProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSteamGroupOfficerList"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms), 0x0010000000000580, Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister());
			UProperty* NewProp_GroupUniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GroupUniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GroupUniqueNetID, SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Retruns a list of steam group officers"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister()
	{
		return USteamRequestGroupOfficersCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSteamSessions();
			OuterClass = USteamRequestGroupOfficersCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, USteamRequestGroupOfficersCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, USteamRequestGroupOfficersCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList(), "GetSteamGroupOfficerList"); // 1858633746
				static TCppClassTypeInfo<TCppClassTypeTraits<USteamRequestGroupOfficersCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamRequestGroupOfficersCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there is an unsuccessful results return"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/SteamRequestGroupOfficersCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when there is a successful results return"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamRequestGroupOfficersCallbackProxy, 1260747736);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamRequestGroupOfficersCallbackProxy(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, &USteamRequestGroupOfficersCallbackProxy::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("USteamRequestGroupOfficersCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamRequestGroupOfficersCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
