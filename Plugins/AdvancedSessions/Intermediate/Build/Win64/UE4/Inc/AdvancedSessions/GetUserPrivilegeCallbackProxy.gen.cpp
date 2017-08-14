// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GetUserPrivilegeCallbackProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserPrivilegeCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms
		{
			EBPUserPrivileges QueriedPrivilege;
			bool HadPrivilege;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintGetUserPrivilegeDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(HadPrivilege, _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms);
			UProperty* NewProp_HadPrivilege = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HadPrivilege"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(HadPrivilege, _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(HadPrivilege, _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), sizeof(bool), true);
			UProperty* NewProp_QueriedPrivilege = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("QueriedPrivilege"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(QueriedPrivilege, _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges());
			UProperty* NewProp_QueriedPrivilege_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_QueriedPrivilege, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GetUserPrivilegeCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("const &FBPUniqueNetId, PlayerID,"));
#endif
		}
		return ReturnFunction;
	}
	void UGetUserPrivilegeCallbackProxy::StaticRegisterNativesUGetUserPrivilegeCallbackProxy()
	{
		UClass* Class = UGetUserPrivilegeCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetUserPrivilege", (Native)&UGetUserPrivilegeCallbackProxy::execGetUserPrivilege },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege()
	{
		struct GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms
		{
			UObject* WorldContextObject;
			EBPUserPrivileges PrivilegeToCheck;
			FBPUniqueNetId PlayerUniqueNetID;
			UGetUserPrivilegeCallbackProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UGetUserPrivilegeCallbackProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserPrivilege"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), 0x0010000000000580, Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister());
			UProperty* NewProp_PlayerUniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerUniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerUniqueNetID, GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PrivilegeToCheck = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PrivilegeToCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PrivilegeToCheck, GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), 0x0010000008000182, Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges());
			UProperty* NewProp_PrivilegeToCheck_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PrivilegeToCheck, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GetUserPrivilegeCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Logs out of the identity interface"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_PlayerUniqueNetID, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_PrivilegeToCheck, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister()
	{
		return UGetUserPrivilegeCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UGetUserPrivilegeCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UGetUserPrivilegeCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UGetUserPrivilegeCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege(), "GetUserPrivilege"); // 371296746
				static TCppClassTypeInfo<TCppClassTypeTraits<UGetUserPrivilegeCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GetUserPrivilegeCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GetUserPrivilegeCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/GetUserPrivilegeCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there is an unsuccessful destroy"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/GetUserPrivilegeCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when there is a successful destroy"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetUserPrivilegeCallbackProxy, 2095818998);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetUserPrivilegeCallbackProxy(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, &UGetUserPrivilegeCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UGetUserPrivilegeCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetUserPrivilegeCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
