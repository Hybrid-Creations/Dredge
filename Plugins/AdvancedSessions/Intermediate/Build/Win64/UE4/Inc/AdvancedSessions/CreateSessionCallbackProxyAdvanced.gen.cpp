// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/CreateSessionCallbackProxyAdvanced.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	void UCreateSessionCallbackProxyAdvanced::StaticRegisterNativesUCreateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UCreateSessionCallbackProxyAdvanced::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CreateAdvancedSession", (Native)&UCreateSessionCallbackProxyAdvanced::execCreateAdvancedSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession()
	{
		struct CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			APlayerController* PlayerController;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bIsDedicatedServer;
			bool bUsePresence;
			bool bAllowJoinViaPresence;
			bool bAllowJoinViaPresenceFriendsOnly;
			bool bAntiCheatProtected;
			bool bUsesStats;
			bool bShouldAdvertise;
			UCreateSessionCallbackProxyAdvanced* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateAdvancedSession"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000580, Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShouldAdvertise, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bShouldAdvertise = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bShouldAdvertise"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShouldAdvertise, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bShouldAdvertise, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsesStats, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bUsesStats = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUsesStats"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsesStats, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUsesStats, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAntiCheatProtected, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bAntiCheatProtected = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAntiCheatProtected"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAntiCheatProtected, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAntiCheatProtected, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowJoinViaPresenceFriendsOnly, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bAllowJoinViaPresenceFriendsOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowJoinViaPresenceFriendsOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowJoinViaPresenceFriendsOnly, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowJoinViaPresenceFriendsOnly, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowJoinViaPresence, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bAllowJoinViaPresence = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowJoinViaPresence"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowJoinViaPresence, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowJoinViaPresence, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsePresence, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bUsePresence = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUsePresence"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsePresence, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUsePresence, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsDedicatedServer, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bIsDedicatedServer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsDedicatedServer"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsDedicatedServer, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsDedicatedServer, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowInvites, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bAllowInvites = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowInvites"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowInvites, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowInvites, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseLAN, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms);
			UProperty* NewProp_bUseLAN = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseLAN"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseLAN, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseLAN, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), sizeof(bool), true);
			UProperty* NewProp_PrivateConnections = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PrivateConnections"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PrivateConnections, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080);
			UProperty* NewProp_PublicConnections = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PublicConnections"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PublicConnections, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080);
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			UProperty* NewProp_ExtraSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ExtraSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExtraSettings, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000008000182);
			UProperty* NewProp_ExtraSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExtraSettings, TEXT("ExtraSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSessionPropertyKeyPair());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("ExtraSettings"));
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedSessions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowInvites"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowJoinViaPresence"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowJoinViaPresenceFriendsOnly"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAntiCheatProtected"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIsDedicatedServer"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bShouldAdvertise"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUseLAN"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUsePresence"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUsesStats"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_PrivateConnections"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_PublicConnections"), TEXT("100"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/CreateSessionCallbackProxyAdvanced.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Creates a session with the default online subsystem with advanced optional inputs, for dedicated servers leave UsePresence as false and set IsDedicatedServer to true. Dedicated servers don't use presence."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ExtraSettings, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UCreateSessionCallbackProxyAdvanced::StaticClass();
	}
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UCreateSessionCallbackProxyAdvanced::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UCreateSessionCallbackProxyAdvanced), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UCreateSessionCallbackProxyAdvanced), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession(), "CreateAdvancedSession"); // 3471045771
				static TCppClassTypeInfo<TCppClassTypeTraits<UCreateSessionCallbackProxyAdvanced> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CreateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/CreateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/CreateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there was an error creating the session"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/CreateSessionCallbackProxyAdvanced.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when the session was created successfully"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateSessionCallbackProxyAdvanced, 3535109809);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateSessionCallbackProxyAdvanced(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, &UCreateSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UCreateSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
