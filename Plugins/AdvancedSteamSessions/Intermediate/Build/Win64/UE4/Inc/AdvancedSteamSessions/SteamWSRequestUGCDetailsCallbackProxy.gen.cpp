// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SteamWSRequestUGCDetailsCallbackProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWSRequestUGCDetailsCallbackProxy() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms
		{
			FBPSteamWorkshopItemDetails WorkShopDetails;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintWorkshopDetailsDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms));
			UProperty* NewProp_WorkShopDetails = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorkShopDetails"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorkShopDetails, _Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SteamWSRequestUGCDetailsCallbackProxy.h"));
			MetaData->SetValue(NewProp_WorkShopDetails, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	void USteamWSRequestUGCDetailsCallbackProxy::StaticRegisterNativesUSteamWSRequestUGCDetailsCallbackProxy()
	{
		UClass* Class = USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetWorkshopItemDetails", (Native)&USteamWSRequestUGCDetailsCallbackProxy::execGetWorkshopItemDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails()
	{
		struct SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms
		{
			UObject* WorldContextObject;
			FBPSteamWorkshopID WorkShopID;
			USteamWSRequestUGCDetailsCallbackProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetWorkshopItemDetails"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms), 0x0010000000000580, Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister());
			UProperty* NewProp_WorkShopID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorkShopID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorkShopID, SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPSteamWorkshopID());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedSteamWorkshop"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SteamWSRequestUGCDetailsCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Ends the current session"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister()
	{
		return USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSteamSessions();
			OuterClass = USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, USteamWSRequestUGCDetailsCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, USteamWSRequestUGCDetailsCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails(), "GetWorkshopItemDetails"); // 1016082628
				static TCppClassTypeInfo<TCppClassTypeTraits<USteamWSRequestUGCDetailsCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamWSRequestUGCDetailsCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SteamWSRequestUGCDetailsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/SteamWSRequestUGCDetailsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there is an unsuccessful results return"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/SteamWSRequestUGCDetailsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when there is a successful results return"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamWSRequestUGCDetailsCallbackProxy, 3080377214);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamWSRequestUGCDetailsCallbackProxy(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy, &USteamWSRequestUGCDetailsCallbackProxy::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("USteamWSRequestUGCDetailsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamWSRequestUGCDetailsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
