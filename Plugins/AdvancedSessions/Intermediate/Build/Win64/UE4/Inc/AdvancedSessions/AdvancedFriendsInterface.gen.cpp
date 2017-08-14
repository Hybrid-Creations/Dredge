// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedFriendsInterface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsInterface() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsInterface();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	void IAdvancedFriendsInterface::OnPlayerLoginChanged(int32 PlayerNum)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerLoginChanged instead.");
	}
	void IAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerLoginStatusChanged instead.");
	}
	void IAdvancedFriendsInterface::OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerVoiceStateChanged instead.");
	}
	void IAdvancedFriendsInterface::OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionInviteAccepted instead.");
	}
	void IAdvancedFriendsInterface::OnSessionInviteReceived(FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionInviteReceived instead.");
	}
	void UAdvancedFriendsInterface::StaticRegisterNativesUAdvancedFriendsInterface()
	{
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsInterface();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerLoginChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms));
			UProperty* NewProp_PlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerNum, AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnPlayerLoginChanged"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has changed login state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsInterface();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerLoginStatusChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms));
			UProperty* NewProp_PlayerUniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerUniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerUniqueNetID, AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_NewStatus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NewStatus, AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus());
			UProperty* NewProp_NewStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NewStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PreviousStatus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PreviousStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PreviousStatus, AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus());
			UProperty* NewProp_PreviousStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PreviousStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnPlayerLoginStatusChanged"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has changed login state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsInterface();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerVoiceStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsTalking, AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms);
			UProperty* NewProp_bIsTalking = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsTalking"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsTalking, AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsTalking, AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), sizeof(bool), true);
			UProperty* NewProp_PlayerId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerId, AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnPlayerVoiceStateChanged"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsInterface();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSessionInviteAccepted"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420800, 65535, sizeof(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms));
			UProperty* NewProp_SearchResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SearchResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SearchResult, AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			UProperty* NewProp_PersonInvited = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PersonInvited"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PersonInvited, AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnSessionInviteAccepted"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect"));
			MetaData->SetValue(NewProp_SearchResult, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsInterface();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSessionInviteReceived"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420800, 65535, sizeof(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms));
			UProperty* NewProp_SearchResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SearchResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SearchResult, AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			UProperty* NewProp_PersonInviting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PersonInviting"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PersonInviting, AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnSessionInviteReceived"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect"));
			MetaData->SetValue(NewProp_SearchResult, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsInterface_NoRegister()
	{
		return UAdvancedFriendsInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsInterface()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterface();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UAdvancedFriendsInterface::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20084081u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged(), "OnPlayerLoginChanged"); // 684023596
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged(), "OnPlayerLoginStatusChanged"); // 113962466
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged(), "OnPlayerVoiceStateChanged"); // 3477037667
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted(), "OnSessionInviteAccepted"); // 513249180
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived(), "OnSessionInviteReceived"); // 1252965278
				static TCppClassTypeInfo<TCppClassTypeTraits<IAdvancedFriendsInterface> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsInterface.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFriendsInterface, 1347869214);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFriendsInterface(Z_Construct_UClass_UAdvancedFriendsInterface, &UAdvancedFriendsInterface::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedFriendsInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsInterface);
	static FName NAME_UAdvancedFriendsInterface_OnPlayerLoginChanged = FName(TEXT("OnPlayerLoginChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerLoginChanged(UObject* O, int32 PlayerNum)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerLoginChanged);
		if (Func)
		{
			Parms.PlayerNum=PlayerNum;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged = FName(TEXT("OnPlayerLoginStatusChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerLoginStatusChanged(UObject* O, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged);
		if (Func)
		{
			Parms.PreviousStatus=PreviousStatus;
			Parms.NewStatus=NewStatus;
			Parms.PlayerUniqueNetID=PlayerUniqueNetID;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged = FName(TEXT("OnPlayerVoiceStateChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerVoiceStateChanged(UObject* O, FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged);
		if (Func)
		{
			Parms.PlayerId=PlayerId;
			Parms.bIsTalking=bIsTalking;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnSessionInviteAccepted = FName(TEXT("OnSessionInviteAccepted"));
	void IAdvancedFriendsInterface::Execute_OnSessionInviteAccepted(UObject* O, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnSessionInviteAccepted);
		if (Func)
		{
			Parms.PersonInvited=PersonInvited;
			Parms.SearchResult=SearchResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnSessionInviteReceived = FName(TEXT("OnSessionInviteReceived"));
	void IAdvancedFriendsInterface::Execute_OnSessionInviteReceived(UObject* O, FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnSessionInviteReceived);
		if (Func)
		{
			Parms.PersonInviting=PersonInviting;
			Parms.SearchResult=SearchResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
