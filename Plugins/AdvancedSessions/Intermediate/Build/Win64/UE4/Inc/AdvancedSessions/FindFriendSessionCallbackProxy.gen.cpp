// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FindFriendSessionCallbackProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindFriendSessionCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms
		{
			TArray<FBlueprintSessionResult> SessionInfo;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintFindFriendSessionDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms));
			UProperty* NewProp_SessionInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SessionInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SessionInfo, _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms), 0x0010000008000182);
			UProperty* NewProp_SessionInfo_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SessionInfo, TEXT("SessionInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FindFriendSessionCallbackProxy.h"));
			MetaData->SetValue(NewProp_SessionInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	void UFindFriendSessionCallbackProxy::StaticRegisterNativesUFindFriendSessionCallbackProxy()
	{
		UClass* Class = UFindFriendSessionCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FindFriendSession", (Native)&UFindFriendSessionCallbackProxy::execFindFriendSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession()
	{
		struct FindFriendSessionCallbackProxy_eventFindFriendSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FBPUniqueNetId FriendUniqueNetId;
			UFindFriendSessionCallbackProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFindFriendSessionCallbackProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindFriendSession"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), 0x0010000000000580, Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister());
			UProperty* NewProp_FriendUniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FriendUniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FriendUniqueNetId, FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FindFriendSessionCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Attempts to get the current session that a friend is in"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_FriendUniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister()
	{
		return UFindFriendSessionCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UFindFriendSessionCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UFindFriendSessionCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UFindFriendSessionCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession(), "FindFriendSession"); // 523827068
				static TCppClassTypeInfo<TCppClassTypeTraits<UFindFriendSessionCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FindFriendSessionCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FindFriendSessionCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/FindFriendSessionCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there was an error retrieving the friends list"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/FindFriendSessionCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when the friends list successfully was retrieved"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindFriendSessionCallbackProxy, 3678483708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindFriendSessionCallbackProxy(Z_Construct_UClass_UFindFriendSessionCallbackProxy, &UFindFriendSessionCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UFindFriendSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindFriendSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
