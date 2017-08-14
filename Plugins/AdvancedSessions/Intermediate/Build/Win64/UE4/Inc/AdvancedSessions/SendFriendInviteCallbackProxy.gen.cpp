// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SendFriendInviteCallbackProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendFriendInviteCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintSendFriendInviteDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SendFriendInviteCallbackProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	void USendFriendInviteCallbackProxy::StaticRegisterNativesUSendFriendInviteCallbackProxy()
	{
		UClass* Class = USendFriendInviteCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SendFriendInvite", (Native)&USendFriendInviteCallbackProxy::execSendFriendInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite()
	{
		struct SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FBPUniqueNetId UniqueNetIDInvited;
			USendFriendInviteCallbackProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USendFriendInviteCallbackProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendFriendInvite"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms), 0x0010000000000580, Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister());
			UProperty* NewProp_UniqueNetIDInvited = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetIDInvited"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetIDInvited, SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SendFriendInviteCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds a friend who is using the defined UniqueNetId, some interfaces do now allow this function to be called (INCLUDING STEAM)"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_UniqueNetIDInvited, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister()
	{
		return USendFriendInviteCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = USendFriendInviteCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, USendFriendInviteCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, USendFriendInviteCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite(), "SendFriendInvite"); // 2706031410
				static TCppClassTypeInfo<TCppClassTypeTraits<USendFriendInviteCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SendFriendInviteCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SendFriendInviteCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/SendFriendInviteCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there was an error retrieving the friends list"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/SendFriendInviteCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when the friends list successfully was retrieved"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendFriendInviteCallbackProxy, 1242792051);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendFriendInviteCallbackProxy(Z_Construct_UClass_USendFriendInviteCallbackProxy, &USendFriendInviteCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("USendFriendInviteCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendFriendInviteCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
