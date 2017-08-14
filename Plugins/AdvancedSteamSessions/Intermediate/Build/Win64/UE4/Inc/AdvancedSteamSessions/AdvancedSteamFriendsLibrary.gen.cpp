// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedSteamFriendsLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSteamFriendsLibrary() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* SteamAvatarSize_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("SteamAvatarSize"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SteamAvatarSize(SteamAvatarSize_StaticEnum, TEXT("/Script/AdvancedSteamSessions"), TEXT("SteamAvatarSize"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		extern uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SteamAvatarSize"), 0, Get_Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SteamAvatarSize"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("SteamAvatarSize::SteamAvatar_Small"), 1);
			EnumNames.Emplace(TEXT("SteamAvatarSize::SteamAvatar_Medium"), 2);
			EnumNames.Emplace(TEXT("SteamAvatarSize::SteamAvatar_Large"), 3);
			EnumNames.Emplace(TEXT("SteamAvatarSize::SteamAvatar_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("SteamAvatarSize");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize_CRC() { return 627434624U; }
class UScriptStruct* FBPSteamGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupInfo, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupInfo"), sizeof(FBPSteamGroupInfo), Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamGroupInfo(FBPSteamGroupInfo::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPSteamGroupInfo")),new UScriptStruct::TCppStructOps<FBPSteamGroupInfo>);
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamGroupInfo"), sizeof(FBPSteamGroupInfo), Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPSteamGroupInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPSteamGroupInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_numChatting = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("numChatting"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(numChatting, FBPSteamGroupInfo), 0x0010000000000015);
			UProperty* NewProp_numInGame = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("numInGame"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(numInGame, FBPSteamGroupInfo), 0x0010000000000015);
			UProperty* NewProp_numOnline = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("numOnline"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(numOnline, FBPSteamGroupInfo), 0x0010000000000015);
			UProperty* NewProp_GroupTag = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GroupTag"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GroupTag, FBPSteamGroupInfo), 0x0010000000000015);
			UProperty* NewProp_GroupName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GroupName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GroupName, FBPSteamGroupInfo), 0x0010000000000015);
			UProperty* NewProp_GroupID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GroupID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GroupID, FBPSteamGroupInfo), 0x0010000000000015, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(NewProp_numChatting, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_numChatting, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(NewProp_numInGame, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_numInGame, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(NewProp_numOnline, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_numOnline, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(NewProp_GroupTag, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_GroupTag, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(NewProp_GroupName, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_GroupName, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(NewProp_GroupName, TEXT("ToolTip"), TEXT("Uint64 representation"));
			MetaData->SetValue(NewProp_GroupID, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(NewProp_GroupID, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC() { return 3432490905U; }
	void UAdvancedSteamFriendsLibrary::StaticRegisterNativesUAdvancedSteamFriendsLibrary()
	{
		UClass* Class = UAdvancedSteamFriendsLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CreateSteamIDFromString", (Native)&UAdvancedSteamFriendsLibrary::execCreateSteamIDFromString },
			{ "GetFriendSteamLevel", (Native)&UAdvancedSteamFriendsLibrary::execGetFriendSteamLevel },
			{ "GetSteamFriendAvatar", (Native)&UAdvancedSteamFriendsLibrary::execGetSteamFriendAvatar },
			{ "GetSteamFriendGamePlayed", (Native)&UAdvancedSteamFriendsLibrary::execGetSteamFriendGamePlayed },
			{ "GetSteamGroups", (Native)&UAdvancedSteamFriendsLibrary::execGetSteamGroups },
			{ "GetSteamPersonaName", (Native)&UAdvancedSteamFriendsLibrary::execGetSteamPersonaName },
			{ "RequestSteamFriendInfo", (Native)&UAdvancedSteamFriendsLibrary::execRequestSteamFriendInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString()
	{
		struct AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms
		{
			FString SteamID64;
			FBPUniqueNetId ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateSteamIDFromString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_SteamID64 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SteamID64"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SteamID64, AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|SteamAPI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Creates a unique steam id directly from a string holding a uint64 value, useful for testing"));
			MetaData->SetValue(NewProp_SteamID64, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel()
	{
		struct AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms
		{
			FBPUniqueNetId UniqueNetId;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFriendSteamLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms), 0x0010000000000580);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|SteamAPI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the level of a friends steam account, STEAM ONLY, Returns -1 if the steam level is not known, might need RequestSteamFriendInfo called first."));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms
		{
			FBPUniqueNetId UniqueNetId;
			EBlueprintAsyncResultSwitch Result;
			SteamAvatarSize AvatarSize;
			UTexture2D* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSteamFriendAvatar"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms), 0x0010000000000580, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_AvatarSize = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AvatarSize"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(AvatarSize, AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms), 0x0010000000000080, Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize());
			UProperty* NewProp_AvatarSize_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_AvatarSize, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|SteamAPI"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AvatarSize"), TEXT("SteamAvatar_Medium"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a texture of a valid friends avatar, STEAM ONLY, Returns invalid texture if the subsystem hasn't loaded that size of avatar yet"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms
		{
			FBPUniqueNetId UniqueNetId;
			EBlueprintResultSwitch Result;
			FString GameName;
			int32 AppID;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSteamFriendGamePlayed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms));
			UProperty* NewProp_AppID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AppID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AppID, AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms), 0x0010000000000180);
			UProperty* NewProp_GameName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GameName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GameName, AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms), 0x0010000000000180);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|SteamAPI"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the current game played by a friend - AppID is int32 even though steam ids are uint32, can't be helped in blueprint currently\n      *  The game name is retrieved from steamSDK AppList which isn't available to all game IDs without request, can use the AppID with the\n      *  WebAPI GetAppList request as an alternative."));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamGroups_Parms
		{
			TArray<FBPSteamGroupInfo> SteamGroups;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSteamGroups"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamGroups_Parms));
			UProperty* NewProp_SteamGroups = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SteamGroups"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SteamGroups, AdvancedSteamFriendsLibrary_eventGetSteamGroups_Parms), 0x0010000000000180);
			UProperty* NewProp_SteamGroups_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SteamGroups, TEXT("SteamGroups"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBPSteamGroupInfo());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|SteamAPI|SteamGroups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSteamPersonaName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms), 0x0010000000000580);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|SteamAPI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the persona name of a steam ID, STEAM ONLY, Returns empty if no result, might need RequestSteamFriendInfo called first."));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo()
	{
		struct AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool bRequireNameOnly;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RequestSteamFriendInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRequireNameOnly, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms);
			UProperty* NewProp_bRequireNameOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bRequireNameOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRequireNameOnly, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bRequireNameOnly, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|SteamAPI"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bRequireNameOnly"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Preloads the avatar and name of a steam friend, return whether it is already available or not, STEAM ONLY, Takes time to actually load everything after this is called."));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary_NoRegister()
	{
		return UAdvancedSteamFriendsLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AdvancedSteamSessions();
			OuterClass = UAdvancedSteamFriendsLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString(), "CreateSteamIDFromString"); // 2561164890
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel(), "GetFriendSteamLevel"); // 1064489558
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar(), "GetSteamFriendAvatar"); // 3640416823
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed(), "GetSteamFriendGamePlayed"); // 2121530466
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups(), "GetSteamGroups"); // 3876593428
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName(), "GetSteamPersonaName"); // 175261957
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo(), "RequestSteamFriendInfo"); // 1526498738
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedSteamFriendsLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedSteamFriendsLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedSteamFriendsLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedSteamFriendsLibrary, 966969911);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedSteamFriendsLibrary(Z_Construct_UClass_UAdvancedSteamFriendsLibrary, &UAdvancedSteamFriendsLibrary::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("UAdvancedSteamFriendsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSteamFriendsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
