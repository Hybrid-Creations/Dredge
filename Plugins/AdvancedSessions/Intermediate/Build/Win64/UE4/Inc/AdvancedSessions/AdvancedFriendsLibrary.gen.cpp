// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedFriendsLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsLibrary();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	void UAdvancedFriendsLibrary::StaticRegisterNativesUAdvancedFriendsLibrary()
	{
		UClass* Class = UAdvancedFriendsLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetFriend", (Native)&UAdvancedFriendsLibrary::execGetFriend },
			{ "GetStoredFriendsList", (Native)&UAdvancedFriendsLibrary::execGetStoredFriendsList },
			{ "GetStoredRecentPlayersList", (Native)&UAdvancedFriendsLibrary::execGetStoredRecentPlayersList },
			{ "IsAFriend", (Native)&UAdvancedFriendsLibrary::execIsAFriend },
			{ "SendSessionInviteToFriend", (Native)&UAdvancedFriendsLibrary::execSendSessionInviteToFriend },
			{ "SendSessionInviteToFriends", (Native)&UAdvancedFriendsLibrary::execSendSessionInviteToFriends },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend()
	{
		struct AdvancedFriendsLibrary_eventGetFriend_Parms
		{
			APlayerController* PlayerController;
			FBPUniqueNetId FriendUniqueNetId;
			FBPFriendInfo Friend;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFriend"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedFriendsLibrary_eventGetFriend_Parms));
			UProperty* NewProp_Friend = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Friend"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Friend, AdvancedFriendsLibrary_eventGetFriend_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FBPFriendInfo());
			UProperty* NewProp_FriendUniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FriendUniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FriendUniqueNetId, AdvancedFriendsLibrary_eventGetFriend_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedFriendsLibrary_eventGetFriend_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|FriendsList"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a friend from the previously read/saved friends list (Must Call GetFriends first for this to return anything)"));
			MetaData->SetValue(NewProp_FriendUniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList()
	{
		struct AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms
		{
			APlayerController* PlayerController;
			TArray<FBPFriendInfo> FriendsList;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStoredFriendsList"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms));
			UProperty* NewProp_FriendsList = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FriendsList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FriendsList, AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms), 0x0010000000000180);
			UProperty* NewProp_FriendsList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FriendsList, TEXT("FriendsList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBPFriendInfo());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|FriendsList"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the previously read/saved friends list (Must Call GetFriends first for this to return anything)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList()
	{
		struct AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms
		{
			FBPUniqueNetId UniqueNetId;
			TArray<FBPOnlineRecentPlayer> PlayersList;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStoredRecentPlayersList"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms));
			UProperty* NewProp_PlayersList = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayersList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PlayersList, AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms), 0x0010000000000180);
			UProperty* NewProp_PlayersList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PlayersList, TEXT("PlayersList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBPOnlineRecentPlayer());
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|RecentPlayersList"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the previously read/saved recent players list (Must Call GetRecentPlayers first for this to return anything)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend()
	{
		struct AdvancedFriendsLibrary_eventIsAFriend_Parms
		{
			APlayerController* PlayerController;
			FBPUniqueNetId UniqueNetId;
			bool IsFriend;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsAFriend"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedFriendsLibrary_eventIsAFriend_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsFriend, AdvancedFriendsLibrary_eventIsAFriend_Parms);
			UProperty* NewProp_IsFriend = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IsFriend"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsFriend, AdvancedFriendsLibrary_eventIsAFriend_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(IsFriend, AdvancedFriendsLibrary_eventIsAFriend_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedFriendsLibrary_eventIsAFriend_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedFriendsLibrary_eventIsAFriend_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|FriendsList"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check if a UniqueNetId is a friend"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend()
	{
		struct AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms
		{
			APlayerController* PlayerController;
			FBPUniqueNetId FriendUniqueNetId;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendSessionInviteToFriend"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FriendUniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FriendUniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FriendUniqueNetId, AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|FriendsList"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sends an Invite to the current online session to a friend"));
			MetaData->SetValue(NewProp_FriendUniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends()
	{
		struct AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms
		{
			APlayerController* PlayerController;
			TArray<FBPUniqueNetId> Friends;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedFriendsLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendSessionInviteToFriends"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Friends = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Friends"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Friends, AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms), 0x0010000008000182);
			UProperty* NewProp_Friends_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Friends, TEXT("Friends"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedFriends|FriendsList"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sends an Invite to the current online session to a list of friends"));
			MetaData->SetValue(NewProp_Friends, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsLibrary_NoRegister()
	{
		return UAdvancedFriendsLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UAdvancedFriendsLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend(), "GetFriend"); // 2108688887
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList(), "GetStoredFriendsList"); // 3091761831
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList(), "GetStoredRecentPlayersList"); // 1339407708
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend(), "IsAFriend"); // 849270221
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend(), "SendSessionInviteToFriend"); // 4168346109
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends(), "SendSessionInviteToFriends"); // 1148262514
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedFriendsLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedFriendsLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedFriendsLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFriendsLibrary, 234068795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFriendsLibrary(Z_Construct_UClass_UAdvancedFriendsLibrary, &UAdvancedFriendsLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedFriendsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
