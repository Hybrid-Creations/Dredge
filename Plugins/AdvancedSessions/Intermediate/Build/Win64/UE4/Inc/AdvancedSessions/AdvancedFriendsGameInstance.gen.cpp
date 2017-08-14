// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedFriendsGameInstance.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsGameInstance() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerLoginChanged = FName(TEXT("OnPlayerLoginChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int32 PlayerNum)
	{
		AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms Parms;
		Parms.PlayerNum=PlayerNum;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerLoginChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged = FName(TEXT("OnPlayerLoginStatusChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID)
	{
		AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms Parms;
		Parms.PlayerNum=PlayerNum;
		Parms.PreviousStatus=PreviousStatus;
		Parms.NewStatus=NewStatus;
		Parms.NewPlayerUniqueNetID=NewPlayerUniqueNetID;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged = FName(TEXT("OnPlayerTalkingStateChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.bIsTalking=bIsTalking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnSessionInviteAccepted = FName(TEXT("OnSessionInviteAccepted"));
	void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SessionToJoin)
	{
		AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms Parms;
		Parms.LocalPlayerNum=LocalPlayerNum;
		Parms.PersonInvited=PersonInvited;
		Parms.SessionToJoin=SessionToJoin;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnSessionInviteAccepted),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnSessionInviteReceived = FName(TEXT("OnSessionInviteReceived"));
	void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, const FString& AppId, FBlueprintSessionResult const& SessionToJoin)
	{
		AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms Parms;
		Parms.LocalPlayerNum=LocalPlayerNum;
		Parms.PersonInviting=PersonInviting;
		Parms.AppId=AppId;
		Parms.SessionToJoin=SessionToJoin;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnSessionInviteReceived),&Parms);
	}
	void UAdvancedFriendsGameInstance::StaticRegisterNativesUAdvancedFriendsGameInstance()
	{
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsGameInstance();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerLoginChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms));
			UProperty* NewProp_PlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerNum, AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AdvancedIdentity"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnPlayerLoginChanged"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has changed login state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsGameInstance();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerLoginStatusChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms));
			UProperty* NewProp_NewPlayerUniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewPlayerUniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewPlayerUniqueNetID, AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_NewStatus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NewStatus, AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus());
			UProperty* NewProp_NewStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NewStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PreviousStatus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PreviousStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PreviousStatus, AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus());
			UProperty* NewProp_PreviousStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PreviousStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerNum, AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AdvancedIdentity"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("OnPlayerLoginStatusChanged"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the designated LocalUser has changed login status"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsGameInstance();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerTalkingStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsTalking, AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms);
			UProperty* NewProp_bIsTalking = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsTalking"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsTalking, AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsTalking, AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), sizeof(bool), true);
			UProperty* NewProp_PlayerId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerId, AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("After a voice status has changed this event is triggered if the bEnableTalkingStatusDelegate property is true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsGameInstance();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSessionInviteAccepted"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420800, 65535, sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms));
			UProperty* NewProp_SessionToJoin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SessionToJoin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionToJoin, AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			UProperty* NewProp_PersonInvited = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PersonInvited"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PersonInvited, AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AdvancedFriends"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it"));
			MetaData->SetValue(NewProp_SessionToJoin, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsGameInstance();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSessionInviteReceived"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420800, 65535, sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms));
			UProperty* NewProp_SessionToJoin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SessionToJoin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionToJoin, AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBlueprintSessionResult());
			UProperty* NewProp_AppId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AppId"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AppId, AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), 0x0010000000000080);
			UProperty* NewProp_PersonInviting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PersonInviting"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PersonInviting, AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AdvancedFriends"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it"));
			MetaData->SetValue(NewProp_SessionToJoin, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AppId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister()
	{
		return UAdvancedFriendsGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGameInstance();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UAdvancedFriendsGameInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100088u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableTalkingStatusDelegate, UAdvancedFriendsGameInstance);
				UProperty* NewProp_bEnableTalkingStatusDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableTalkingStatusDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableTalkingStatusDelegate, UAdvancedFriendsGameInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnableTalkingStatusDelegate, UAdvancedFriendsGameInstance), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCallVoiceInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance);
				UProperty* NewProp_bCallVoiceInterfaceEventsOnPlayerControllers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCallVoiceInterfaceEventsOnPlayerControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCallVoiceInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCallVoiceInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCallIdentityInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance);
				UProperty* NewProp_bCallIdentityInterfaceEventsOnPlayerControllers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCallIdentityInterfaceEventsOnPlayerControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCallIdentityInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCallIdentityInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCallFriendInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance);
				UProperty* NewProp_bCallFriendInterfaceEventsOnPlayerControllers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCallFriendInterfaceEventsOnPlayerControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCallFriendInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCallFriendInterfaceEventsOnPlayerControllers, UAdvancedFriendsGameInstance), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged(), "OnPlayerLoginChanged"); // 1291984972
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged(), "OnPlayerLoginStatusChanged"); // 2962446222
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged(), "OnPlayerTalkingStateChanged"); // 3122110308
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted(), "OnSessionInviteAccepted"); // 2658057057
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived(), "OnSessionInviteReceived"); // 1664421193
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedFriendsGameInstance> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedFriendsGameInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_bEnableTalkingStatusDelegate, TEXT("Category"), TEXT("AdvancedVoiceInterface"));
				MetaData->SetValue(NewProp_bEnableTalkingStatusDelegate, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
				MetaData->SetValue(NewProp_bCallVoiceInterfaceEventsOnPlayerControllers, TEXT("Category"), TEXT("AdvancedFriendsInterface"));
				MetaData->SetValue(NewProp_bCallVoiceInterfaceEventsOnPlayerControllers, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
				MetaData->SetValue(NewProp_bCallIdentityInterfaceEventsOnPlayerControllers, TEXT("Category"), TEXT("AdvancedFriendsInterface"));
				MetaData->SetValue(NewProp_bCallIdentityInterfaceEventsOnPlayerControllers, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
				MetaData->SetValue(NewProp_bCallFriendInterfaceEventsOnPlayerControllers, TEXT("Category"), TEXT("AdvancedFriendsInterface"));
				MetaData->SetValue(NewProp_bCallFriendInterfaceEventsOnPlayerControllers, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsGameInstance.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFriendsGameInstance, 3490204542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFriendsGameInstance(Z_Construct_UClass_UAdvancedFriendsGameInstance, &UAdvancedFriendsGameInstance::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedFriendsGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
