// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedIdentityLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedIdentityLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedIdentityLibrary();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedIdentityLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	void UAdvancedIdentityLibrary::StaticRegisterNativesUAdvancedIdentityLibrary()
	{
		UClass* Class = UAdvancedIdentityLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAllUserAccounts", (Native)&UAdvancedIdentityLibrary::execGetAllUserAccounts },
			{ "GetLoginStatus", (Native)&UAdvancedIdentityLibrary::execGetLoginStatus },
			{ "GetPlayerAuthToken", (Native)&UAdvancedIdentityLibrary::execGetPlayerAuthToken },
			{ "GetPlayerNickname", (Native)&UAdvancedIdentityLibrary::execGetPlayerNickname },
			{ "GetUserAccount", (Native)&UAdvancedIdentityLibrary::execGetUserAccount },
			{ "GetUserAccountAccessToken", (Native)&UAdvancedIdentityLibrary::execGetUserAccountAccessToken },
			{ "GetUserAccountAttribute", (Native)&UAdvancedIdentityLibrary::execGetUserAccountAttribute },
			{ "GetUserAccountAuthAttribute", (Native)&UAdvancedIdentityLibrary::execGetUserAccountAuthAttribute },
			{ "GetUserAccountDisplayName", (Native)&UAdvancedIdentityLibrary::execGetUserAccountDisplayName },
			{ "GetUserAccountRealName", (Native)&UAdvancedIdentityLibrary::execGetUserAccountRealName },
			{ "GetUserID", (Native)&UAdvancedIdentityLibrary::execGetUserID },
			{ "SetUserAccountAttribute", (Native)&UAdvancedIdentityLibrary::execSetUserAccountAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts()
	{
		struct AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms
		{
			TArray<FBPUserOnlineAccount> AccountInfos;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllUserAccounts"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AccountInfos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfos"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AccountInfos, AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms), 0x0010000000000180);
			UProperty* NewProp_AccountInfos_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AccountInfos, TEXT("AccountInfos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get all known users accounts"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus()
	{
		struct AdvancedIdentityLibrary_eventGetLoginStatus_Parms
		{
			FBPUniqueNetId UniqueNetID;
			EBPLoginStatus LoginStatus;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLoginStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetLoginStatus_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventGetLoginStatus_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_LoginStatus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LoginStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(LoginStatus, AdvancedIdentityLibrary_eventGetLoginStatus_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus());
			UProperty* NewProp_LoginStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_LoginStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_UniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetID, AdvancedIdentityLibrary_eventGetLoginStatus_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the login status of a local player"));
			MetaData->SetValue(NewProp_UniqueNetID, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken()
	{
		struct AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms
		{
			APlayerController* PlayerController;
			FString AuthToken;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPlayerAuthToken"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AuthToken = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AuthToken"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AuthToken, AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms), 0x0010000000000180);
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the auth token for a local player"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname()
	{
		struct AdvancedIdentityLibrary_eventGetPlayerNickname_Parms
		{
			FBPUniqueNetId UniqueNetID;
			FString PlayerNickname;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPlayerNickname"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms));
			UProperty* NewProp_PlayerNickname = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerNickname"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PlayerNickname, AdvancedIdentityLibrary_eventGetPlayerNickname_Parms), 0x0010000000000180);
			UProperty* NewProp_UniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetID, AdvancedIdentityLibrary_eventGetPlayerNickname_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a players nickname"));
			MetaData->SetValue(NewProp_UniqueNetID, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccount_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FBPUserOnlineAccount AccountInfo;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserAccount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserAccount_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventGetUserAccount_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserAccount_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedIdentityLibrary_eventGetUserAccount_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a users account"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AccessToken;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserAccountAccessToken"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms));
			UProperty* NewProp_AccessToken = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccessToken"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AccessToken, AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms), 0x0010000000000180);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a user account access token"));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString AttributeValue;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserAccountAttribute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AttributeValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttributeValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AttributeValue, AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms), 0x0010000000000180);
			UProperty* NewProp_AttributeName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttributeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AttributeName, AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms), 0x0010000000000080);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get user account attribute (depends on subsystem)"));
			MetaData->SetValue(NewProp_AttributeName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString AuthAttribute;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserAccountAuthAttribute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AuthAttribute = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AuthAttribute"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AuthAttribute, AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms), 0x0010000000000180);
			UProperty* NewProp_AttributeName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttributeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AttributeName, AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms), 0x0010000000000080);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a user account Auth attribute (depends on subsystem)"));
			MetaData->SetValue(NewProp_AttributeName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString DisplayName;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserAccountDisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms));
			UProperty* NewProp_DisplayName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DisplayName, AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms), 0x0010000000000180);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get user account display name if possible"));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString UserName;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserAccountRealName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms));
			UProperty* NewProp_UserName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UserName, AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms), 0x0010000000000180);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get user accounts real name if possible"));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID()
	{
		struct AdvancedIdentityLibrary_eventGetUserID_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FBPUniqueNetId UniqueNetID;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUserID"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedIdentityLibrary_eventGetUserID_Parms));
			UProperty* NewProp_UniqueNetID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetID, AdvancedIdentityLibrary_eventGetUserID_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventGetUserID_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get user ID"));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute()
	{
		struct AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString NewAttributeValue;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedIdentityLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetUserAccountAttribute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_NewAttributeValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewAttributeValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(NewAttributeValue, AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms), 0x0010000000000080);
			UProperty* NewProp_AttributeName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttributeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AttributeName, AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms), 0x0010000000000080);
			UProperty* NewProp_AccountInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AccountInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AccountInfo, AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUserOnlineAccount());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedIdentity|UserAccount"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a user account attribute (depends on subsystem)"));
			MetaData->SetValue(NewProp_NewAttributeValue, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AttributeName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AccountInfo, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedIdentityLibrary_NoRegister()
	{
		return UAdvancedIdentityLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedIdentityLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UAdvancedIdentityLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts(), "GetAllUserAccounts"); // 4120557186
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus(), "GetLoginStatus"); // 2350817172
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken(), "GetPlayerAuthToken"); // 3622385052
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname(), "GetPlayerNickname"); // 3871863912
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount(), "GetUserAccount"); // 3641538964
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken(), "GetUserAccountAccessToken"); // 162868048
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute(), "GetUserAccountAttribute"); // 4143256291
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute(), "GetUserAccountAuthAttribute"); // 3313736115
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName(), "GetUserAccountDisplayName"); // 2939511838
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName(), "GetUserAccountRealName"); // 2573357798
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID(), "GetUserID"); // 1042532648
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute(), "SetUserAccountAttribute"); // 890392593
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedIdentityLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedIdentityLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedIdentityLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedIdentityLibrary, 3638359555);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedIdentityLibrary(Z_Construct_UClass_UAdvancedIdentityLibrary, &UAdvancedIdentityLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedIdentityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedIdentityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
