// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/UpdateSessionCallbackProxyAdvanced.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	void UUpdateSessionCallbackProxyAdvanced::StaticRegisterNativesUUpdateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UUpdateSessionCallbackProxyAdvanced::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "UpdateSession", (Native)&UUpdateSessionCallbackProxyAdvanced::execUpdateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession()
	{
		struct UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bAllowJoinInProgress;
			bool bRefreshOnlineData;
			bool bIsDedicatedServer;
			UUpdateSessionCallbackProxyAdvanced* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateSession"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000580, Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsDedicatedServer, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms);
			UProperty* NewProp_bIsDedicatedServer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsDedicatedServer"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsDedicatedServer, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsDedicatedServer, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRefreshOnlineData, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms);
			UProperty* NewProp_bRefreshOnlineData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bRefreshOnlineData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRefreshOnlineData, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bRefreshOnlineData, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowJoinInProgress, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms);
			UProperty* NewProp_bAllowJoinInProgress = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowJoinInProgress"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowJoinInProgress, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowJoinInProgress, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowInvites, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms);
			UProperty* NewProp_bAllowInvites = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowInvites"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowInvites, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowInvites, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseLAN, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms);
			UProperty* NewProp_bUseLAN = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseLAN"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseLAN, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseLAN, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), sizeof(bool), true);
			UProperty* NewProp_PrivateConnections = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PrivateConnections"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PrivateConnections, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080);
			UProperty* NewProp_PublicConnections = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PublicConnections"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PublicConnections, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080);
			UProperty* NewProp_ExtraSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ExtraSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExtraSettings, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000008000182);
			UProperty* NewProp_ExtraSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExtraSettings, TEXT("ExtraSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSessionPropertyKeyPair());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("ExtraSettings"));
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedSessions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowInvites"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowJoinInProgress"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIsDedicatedServer"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bRefreshOnlineData"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUseLAN"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_PrivateConnections"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_PublicConnections"), TEXT("100"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/UpdateSessionCallbackProxyAdvanced.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Creates a session with the default online subsystem with advanced optional inputs, you MUST fill in all categories or it will pass in values that you didn't want as default values"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ExtraSettings, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UUpdateSessionCallbackProxyAdvanced::StaticClass();
	}
	UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UUpdateSessionCallbackProxyAdvanced::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UUpdateSessionCallbackProxyAdvanced), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UUpdateSessionCallbackProxyAdvanced), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession(), "UpdateSession"); // 990493224
				static TCppClassTypeInfo<TCppClassTypeTraits<UUpdateSessionCallbackProxyAdvanced> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UpdateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/UpdateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/UpdateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there was an error updating the session"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/UpdateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when the session was updated successfully"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpdateSessionCallbackProxyAdvanced, 2170749297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdateSessionCallbackProxyAdvanced(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced, &UUpdateSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UUpdateSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
