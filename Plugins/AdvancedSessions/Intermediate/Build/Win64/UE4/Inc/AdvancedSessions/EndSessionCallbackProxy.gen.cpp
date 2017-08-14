// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EndSessionCallbackProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndSessionCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UEndSessionCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UEndSessionCallbackProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	void UEndSessionCallbackProxy::StaticRegisterNativesUEndSessionCallbackProxy()
	{
		UClass* Class = UEndSessionCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "EndSession", (Native)&UEndSessionCallbackProxy::execEndSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession()
	{
		struct EndSessionCallbackProxy_eventEndSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UEndSessionCallbackProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UEndSessionCallbackProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndSession"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(EndSessionCallbackProxy_eventEndSession_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, EndSessionCallbackProxy_eventEndSession_Parms), 0x0010000000000580, Z_Construct_UClass_UEndSessionCallbackProxy_NoRegister());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, EndSessionCallbackProxy_eventEndSession_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, EndSessionCallbackProxy_eventEndSession_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedSessions|Deprecated"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("This function is deprecated, I realized that people have been using it wrong and it doesn't have much use in blueprints. Use Destroy Session only instead."));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/EndSessionCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Ends the current session"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndSessionCallbackProxy_NoRegister()
	{
		return UEndSessionCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UEndSessionCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UEndSessionCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UEndSessionCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UEndSessionCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession(), "EndSession"); // 3159375332
				static TCppClassTypeInfo<TCppClassTypeTraits<UEndSessionCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EndSessionCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EndSessionCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/EndSessionCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ToolTip"), TEXT("Called when there is an unsuccessful destroy"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/EndSessionCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Called when there is a successful destroy"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndSessionCallbackProxy, 2718933249);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndSessionCallbackProxy(Z_Construct_UClass_UEndSessionCallbackProxy, &UEndSessionCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UEndSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
