// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDataDefinitions() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount();
// End Cross Module References
static UEnum* EOnlineComparisonOpRedux_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EOnlineComparisonOpRedux"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineComparisonOpRedux(EOnlineComparisonOpRedux_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EOnlineComparisonOpRedux"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineComparisonOpRedux"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EOnlineComparisonOpRedux"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::Equals"), 0);
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::NotEquals"), 1);
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::GreaterThan"), 2);
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::GreaterThanEquals"), 3);
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::LessThan"), 4);
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::LessThanEquals"), 5);
			EnumNames.Emplace(TEXT("EOnlineComparisonOpRedux::EOnlineComparisonOpRedux_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EOnlineComparisonOpRedux");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The types of comparison operations for a given search query // Used to compare session properties"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_CRC() { return 867791629U; }
static UEnum* EBPOnlineSessionState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPOnlineSessionState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlineSessionState(EBPOnlineSessionState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlineSessionState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlineSessionState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPOnlineSessionState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::NoSession"), 0);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::Creating"), 1);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::Pending"), 2);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::Starting"), 3);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::InProgress"), 4);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::Ending"), 5);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::Ended"), 6);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::Destroying"), 7);
			EnumNames.Emplace(TEXT("EBPOnlineSessionState::EBPOnlineSessionState_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPOnlineSessionState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Creating.ToolTip"), TEXT("An online session is in the process of being created"));
			MetaData->SetValue(ReturnEnum, TEXT("Destroying.ToolTip"), TEXT("The session is being destroyed"));
			MetaData->SetValue(ReturnEnum, TEXT("Ended.ToolTip"), TEXT("The session is closed and any stats committed"));
			MetaData->SetValue(ReturnEnum, TEXT("Ending.ToolTip"), TEXT("The session is still valid, but the session is no longer being played (post match lobby)"));
			MetaData->SetValue(ReturnEnum, TEXT("InProgress.ToolTip"), TEXT("The current session has started. Sessions with join in progress disabled are no longer joinable"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NoSession.ToolTip"), TEXT("An online session has not been created yet"));
			MetaData->SetValue(ReturnEnum, TEXT("Pending.ToolTip"), TEXT("Session has been created but the session hasn't started (pre match lobby)"));
			MetaData->SetValue(ReturnEnum, TEXT("Starting.ToolTip"), TEXT("Session has been asked to start (may take time due to communication with backend)"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_CRC() { return 775583915U; }
static UEnum* EBPOnlinePresenceState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPOnlinePresenceState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlinePresenceState(EBPOnlinePresenceState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlinePresenceState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlinePresenceState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPOnlinePresenceState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::Online"), 0);
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::Offline"), 1);
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::Away"), 2);
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::ExtendedAway"), 3);
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::DoNotDisturb"), 4);
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::Chat"), 5);
			EnumNames.Emplace(TEXT("EBPOnlinePresenceState::EBPOnlinePresenceState_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPOnlinePresenceState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Wanted this to be switchable in the editor"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_CRC() { return 2391974631U; }
static UEnum* EBPServerPresenceSearchType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPServerPresenceSearchType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPServerPresenceSearchType(EBPServerPresenceSearchType_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPServerPresenceSearchType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPServerPresenceSearchType"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPServerPresenceSearchType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPServerPresenceSearchType::AllServers"), 0);
			EnumNames.Emplace(TEXT("EBPServerPresenceSearchType::ClientServersOnly"), 1);
			EnumNames.Emplace(TEXT("EBPServerPresenceSearchType::DedicatedServersOnly"), 2);
			EnumNames.Emplace(TEXT("EBPServerPresenceSearchType::EBPServerPresenceSearchType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPServerPresenceSearchType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This is to define server type searches"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_CRC() { return 1053013413U; }
static UEnum* EBlueprintAsyncResultSwitch_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBlueprintAsyncResultSwitch"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintAsyncResultSwitch(EBlueprintAsyncResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintAsyncResultSwitch"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintAsyncResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBlueprintAsyncResultSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBlueprintAsyncResultSwitch::OnSuccess"), 0);
			EnumNames.Emplace(TEXT("EBlueprintAsyncResultSwitch::AsyncLoading"), 1);
			EnumNames.Emplace(TEXT("EBlueprintAsyncResultSwitch::OnFailure"), 2);
			EnumNames.Emplace(TEXT("EBlueprintAsyncResultSwitch::EBlueprintAsyncResultSwitch_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBlueprintAsyncResultSwitch");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("AsyncLoading.ToolTip"), TEXT("Still loading"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("OnFailure.ToolTip"), TEXT("On Failure"));
			MetaData->SetValue(ReturnEnum, TEXT("OnSuccess.ToolTip"), TEXT("On Success"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This makes a lot of the blueprint functions cleaner"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_CRC() { return 1186949126U; }
static UEnum* EBlueprintResultSwitch_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBlueprintResultSwitch"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintResultSwitch(EBlueprintResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintResultSwitch"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBlueprintResultSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBlueprintResultSwitch::OnSuccess"), 0);
			EnumNames.Emplace(TEXT("EBlueprintResultSwitch::OnFailure"), 1);
			EnumNames.Emplace(TEXT("EBlueprintResultSwitch::EBlueprintResultSwitch_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBlueprintResultSwitch");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("OnFailure.ToolTip"), TEXT("On Failure"));
			MetaData->SetValue(ReturnEnum, TEXT("OnSuccess.ToolTip"), TEXT("On Success"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This makes a lot of the blueprint functions cleaner"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_CRC() { return 1425405781U; }
static UEnum* ESessionSettingSearchResult_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("ESessionSettingSearchResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionSettingSearchResult(ESessionSettingSearchResult_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("ESessionSettingSearchResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionSettingSearchResult"), 0, Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESessionSettingSearchResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESessionSettingSearchResult::Found"), 0);
			EnumNames.Emplace(TEXT("ESessionSettingSearchResult::NotFound"), 1);
			EnumNames.Emplace(TEXT("ESessionSettingSearchResult::WrongType"), 2);
			EnumNames.Emplace(TEXT("ESessionSettingSearchResult::ESessionSettingSearchResult_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESessionSettingSearchResult");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Found.ToolTip"), TEXT("Found the setting"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NotFound.ToolTip"), TEXT("Did not find the setting"));
			MetaData->SetValue(ReturnEnum, TEXT("WrongType.ToolTip"), TEXT("Was not the correct type"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_CRC() { return 2199536558U; }
static UEnum* EBPLoginStatus_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPLoginStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPLoginStatus(EBPLoginStatus_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPLoginStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPLoginStatus"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPLoginStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPLoginStatus::NotLoggedIn"), 0);
			EnumNames.Emplace(TEXT("EBPLoginStatus::UsingLocalProfile"), 1);
			EnumNames.Emplace(TEXT("EBPLoginStatus::LoggedIn"), 2);
			EnumNames.Emplace(TEXT("EBPLoginStatus::EBPLoginStatus_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPLoginStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("LoggedIn.ToolTip"), TEXT("Player has been validated by the platform specific authentication service"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NotLoggedIn.ToolTip"), TEXT("Player has not logged in or chosen a local profile"));
			MetaData->SetValue(ReturnEnum, TEXT("UsingLocalProfile.ToolTip"), TEXT("Player is using a local profile but is not logged in"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_CRC() { return 1783503275U; }
static UEnum* EBPUserPrivileges_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPUserPrivileges"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPUserPrivileges(EBPUserPrivileges_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPUserPrivileges"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPUserPrivileges"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPUserPrivileges"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPUserPrivileges::CanPlay"), 0);
			EnumNames.Emplace(TEXT("EBPUserPrivileges::CanPlayOnline"), 1);
			EnumNames.Emplace(TEXT("EBPUserPrivileges::CanCommunicateOnline"), 2);
			EnumNames.Emplace(TEXT("EBPUserPrivileges::CanUseUserGeneratedContent"), 3);
			EnumNames.Emplace(TEXT("EBPUserPrivileges::EBPUserPrivileges_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPUserPrivileges");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("CanCommunicateOnline.ToolTip"), TEXT("Whether the user can use voice and text chat"));
			MetaData->SetValue(ReturnEnum, TEXT("CanPlay.ToolTip"), TEXT("Whether the user can play at all, online or offline - may be age restricted"));
			MetaData->SetValue(ReturnEnum, TEXT("CanPlayOnline.ToolTip"), TEXT("Whether the user can play in online modes"));
			MetaData->SetValue(ReturnEnum, TEXT("CanUseUserGeneratedContent.ToolTip"), TEXT("Whether the user can use content generated by other users"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_CRC() { return 2714857924U; }
class UScriptStruct* FSessionsSearchSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionsSearchSetting, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionsSearchSetting"), sizeof(FSessionsSearchSetting), Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionsSearchSetting(FSessionsSearchSetting::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionsSearchSetting"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionsSearchSetting")),new UScriptStruct::TCppStructOps<FSessionsSearchSetting>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionsSearchSetting"), sizeof(FSessionsSearchSetting), Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionsSearchSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionsSearchSetting>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Sent to the FindSessionsAdvanced to filter the end results"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC() { return 4165398122U; }
class UScriptStruct* FSessionPropertyKeyPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionPropertyKeyPair, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionPropertyKeyPair(FSessionPropertyKeyPair::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionPropertyKeyPair"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionPropertyKeyPair")),new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionPropertyKeyPair"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Used to store session properties before converting to FVariantData"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC() { return 4273129300U; }
class UScriptStruct* FBPFriendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendInfo(FBPFriendInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFriendInfo")),new UScriptStruct::TCppStructOps<FBPFriendInfo>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPFriendInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPFriendInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_PresenceInfo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PresenceInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PresenceInfo, FBPFriendInfo), 0x0010000000000005, Z_Construct_UScriptStruct_FBPFriendPresenceInfo());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsPlayingSameGame, FBPFriendInfo);
			UProperty* NewProp_bIsPlayingSameGame = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsPlayingSameGame"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsPlayingSameGame, FBPFriendInfo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsPlayingSameGame, FBPFriendInfo), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, FBPFriendInfo), 0x0010000000000005, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_OnlineState = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OnlineState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(OnlineState, FBPFriendInfo), 0x0010000000000005, Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState());
			UProperty* NewProp_OnlineState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OnlineState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_RealName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RealName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RealName, FBPFriendInfo), 0x0010000000000005);
			UProperty* NewProp_DisplayName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DisplayName, FBPFriendInfo), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_PresenceInfo, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_PresenceInfo, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_bIsPlayingSameGame, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_bIsPlayingSameGame, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_OnlineState, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_OnlineState, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_RealName, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_RealName, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_DisplayName, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_DisplayName, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC() { return 796422410U; }
class UScriptStruct* FBPFriendPresenceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendPresenceInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendPresenceInfo(FBPFriendPresenceInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendPresenceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFriendPresenceInfo")),new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPFriendPresenceInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_StatusString = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StatusString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(StatusString, FBPFriendPresenceInfo), 0x0010000000000005);
			UProperty* NewProp_PresenceState = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PresenceState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PresenceState, FBPFriendPresenceInfo), 0x0010000000000005, Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState());
			UProperty* NewProp_PresenceState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PresenceState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasVoiceSupport, FBPFriendPresenceInfo);
			UProperty* NewProp_bHasVoiceSupport = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bHasVoiceSupport"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasVoiceSupport, FBPFriendPresenceInfo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bHasVoiceSupport, FBPFriendPresenceInfo), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsJoinable, FBPFriendPresenceInfo);
			UProperty* NewProp_bIsJoinable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsJoinable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsJoinable, FBPFriendPresenceInfo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsJoinable, FBPFriendPresenceInfo), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsPlayingThisGame, FBPFriendPresenceInfo);
			UProperty* NewProp_bIsPlayingThisGame = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsPlayingThisGame"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsPlayingThisGame, FBPFriendPresenceInfo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsPlayingThisGame, FBPFriendPresenceInfo), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsPlaying, FBPFriendPresenceInfo);
			UProperty* NewProp_bIsPlaying = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsPlaying, FBPFriendPresenceInfo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsPlaying, FBPFriendPresenceInfo), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsOnline, FBPFriendPresenceInfo);
			UProperty* NewProp_bIsOnline = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsOnline"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsOnline, FBPFriendPresenceInfo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsOnline, FBPFriendPresenceInfo), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_StatusString, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_StatusString, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_PresenceState, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_PresenceState, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_bHasVoiceSupport, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_bHasVoiceSupport, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_bIsJoinable, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_bIsJoinable, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_bIsPlayingThisGame, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_bIsPlayingThisGame, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_bIsPlaying, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_bIsPlaying, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_bIsOnline, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_bIsOnline, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC() { return 2686040858U; }
class UScriptStruct* FBPOnlineRecentPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineRecentPlayer(FBPOnlineRecentPlayer::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineRecentPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOnlineRecentPlayer")),new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer;
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPOnlineRecentPlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FBPOnlineUser(), new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>, EStructFlags(0x00000001));
			UProperty* NewProp_LastSeen = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LastSeen"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LastSeen, FBPOnlineRecentPlayer), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_LastSeen, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_LastSeen, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC() { return 4048797134U; }
class UScriptStruct* FBPOnlineUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineUser, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineUser(FBPOnlineUser::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineUser"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOnlineUser")),new UScriptStruct::TCppStructOps<FBPOnlineUser>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser;
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPOnlineUser"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPOnlineUser>, EStructFlags(0x00000001));
			UProperty* NewProp_RealName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RealName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RealName, FBPOnlineUser), 0x0010000000000005);
			UProperty* NewProp_DisplayName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DisplayName, FBPOnlineUser), 0x0010000000000005);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, FBPOnlineUser), 0x0010000000000005, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_RealName, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_RealName, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_DisplayName, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_DisplayName, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("Category"), TEXT("Online|Friend"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC() { return 911042023U; }
class UScriptStruct* FBPUniqueNetId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUniqueNetId, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUniqueNetId(FBPUniqueNetId::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUniqueNetId"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPUniqueNetId")),new UScriptStruct::TCppStructOps<FBPUniqueNetId>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId;
	UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPUniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPUniqueNetId>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Boy oh boy is this a dirty hack, but I can't figure out a good way to do it otherwise at the moment\nThe UniqueNetId is an abstract class so I can't exactly re-initialize it to make a shared pointer on some functions\nSo I made the blueprintable UniqueNetID into a dual variable struct with access functions and I am converting the const var for the pointer\nI really need to re-think this later"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC() { return 1421153694U; }
class UScriptStruct* FBPUserOnlineAccount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUserOnlineAccount, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUserOnlineAccount"), sizeof(FBPUserOnlineAccount), Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUserOnlineAccount(FBPUserOnlineAccount::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUserOnlineAccount"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPUserOnlineAccount")),new UScriptStruct::TCppStructOps<FBPUserOnlineAccount>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount;
	UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUserOnlineAccount"), sizeof(FBPUserOnlineAccount), Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPUserOnlineAccount"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPUserOnlineAccount>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintDataDefinitions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC() { return 3922761607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
