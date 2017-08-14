// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedExternalUILibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedExternalUILibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedExternalUILibrary();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedExternalUILibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	void UAdvancedExternalUILibrary::StaticRegisterNativesUAdvancedExternalUILibrary()
	{
		UClass* Class = UAdvancedExternalUILibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CloseWebURLUI", (Native)&UAdvancedExternalUILibrary::execCloseWebURLUI },
			{ "ShowAccountUpgradeUI", (Native)&UAdvancedExternalUILibrary::execShowAccountUpgradeUI },
			{ "ShowFriendsUI", (Native)&UAdvancedExternalUILibrary::execShowFriendsUI },
			{ "ShowInviteUI", (Native)&UAdvancedExternalUILibrary::execShowInviteUI },
			{ "ShowLeaderBoardUI", (Native)&UAdvancedExternalUILibrary::execShowLeaderBoardUI },
			{ "ShowProfileUI", (Native)&UAdvancedExternalUILibrary::execShowProfileUI },
			{ "ShowWebURLUI", (Native)&UAdvancedExternalUILibrary::execShowWebURLUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CloseWebURLUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that shows a web URL"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI()
	{
		struct AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms
		{
			FBPUniqueNetId PlayerRequestingAccountUpgradeUI;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowAccountUpgradeUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerRequestingAccountUpgradeUI = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerRequestingAccountUpgradeUI"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerRequestingAccountUpgradeUI, AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that shows the account upgrade UI (doesn't work with steam)"));
			MetaData->SetValue(NewProp_PlayerRequestingAccountUpgradeUI, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI()
	{
		struct AdvancedExternalUILibrary_eventShowFriendsUI_Parms
		{
			APlayerController* PlayerController;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowFriendsUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedExternalUILibrary_eventShowFriendsUI_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedExternalUILibrary_eventShowFriendsUI_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedExternalUILibrary_eventShowFriendsUI_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that handles the Friends list"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI()
	{
		struct AdvancedExternalUILibrary_eventShowInviteUI_Parms
		{
			APlayerController* PlayerController;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowInviteUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedExternalUILibrary_eventShowInviteUI_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedExternalUILibrary_eventShowInviteUI_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, AdvancedExternalUILibrary_eventShowInviteUI_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that handles inviting people to your game"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI()
	{
		struct AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms
		{
			FString LeaderboardName;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowLeaderBoardUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_LeaderboardName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LeaderboardName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LeaderboardName, AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that shows the leaderboard (doesn't work with steam)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI()
	{
		struct AdvancedExternalUILibrary_eventShowProfileUI_Parms
		{
			FBPUniqueNetId PlayerViewingProfile;
			FBPUniqueNetId PlayerToViewProfileOf;
			EBlueprintResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowProfileUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedExternalUILibrary_eventShowProfileUI_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedExternalUILibrary_eventShowProfileUI_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerToViewProfileOf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerToViewProfileOf"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerToViewProfileOf, AdvancedExternalUILibrary_eventShowProfileUI_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_PlayerViewingProfile = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerViewingProfile"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlayerViewingProfile, AdvancedExternalUILibrary_eventShowProfileUI_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that shows the profile of a uniquenetid"));
			MetaData->SetValue(NewProp_PlayerToViewProfileOf, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_PlayerViewingProfile, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI()
	{
		struct AdvancedExternalUILibrary_eventShowWebURLUI_Parms
		{
			FString URLToShow;
			EBlueprintResultSwitch Result;
			TArray<FString> AllowedDomains;
			bool bEmbedded;
			bool bShowBackground;
			bool bShowCloseButton;
			int32 OffsetX;
			int32 OffsetY;
			int32 SizeX;
			int32 SizeY;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedExternalUILibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowWebURLUI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms));
			UProperty* NewProp_SizeY = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SizeY"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SizeY, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080);
			UProperty* NewProp_SizeX = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SizeX"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SizeX, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080);
			UProperty* NewProp_OffsetY = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OffsetY"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OffsetY, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080);
			UProperty* NewProp_OffsetX = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OffsetX"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OffsetX, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowCloseButton, AdvancedExternalUILibrary_eventShowWebURLUI_Parms);
			UProperty* NewProp_bShowCloseButton = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bShowCloseButton"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowCloseButton, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bShowCloseButton, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowBackground, AdvancedExternalUILibrary_eventShowWebURLUI_Parms);
			UProperty* NewProp_bShowBackground = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bShowBackground"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowBackground, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bShowBackground, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEmbedded, AdvancedExternalUILibrary_eventShowWebURLUI_Parms);
			UProperty* NewProp_bEmbedded = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEmbedded"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEmbedded, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEmbedded, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), sizeof(bool), true);
			UProperty* NewProp_AllowedDomains = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AllowedDomains"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AllowedDomains, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000180);
			UProperty* NewProp_AllowedDomains_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AllowedDomains, TEXT("AllowedDomains"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000180, Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_URLToShow = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("URLToShow"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(URLToShow, AdvancedExternalUILibrary_eventShowWebURLUI_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("AllowedDomains"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedExternalUI"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bEmbedded"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bShowBackground"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bShowCloseButton"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_OffsetX"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_OffsetY"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_SizeX"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_SizeY"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Show the UI that shows a web URL"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedExternalUILibrary_NoRegister()
	{
		return UAdvancedExternalUILibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedExternalUILibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UAdvancedExternalUILibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI(), "CloseWebURLUI"); // 3272544595
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI(), "ShowAccountUpgradeUI"); // 969556133
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI(), "ShowFriendsUI"); // 1742385482
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI(), "ShowInviteUI"); // 208207591
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI(), "ShowLeaderBoardUI"); // 1529948935
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI(), "ShowProfileUI"); // 351412870
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI(), "ShowWebURLUI"); // 2385168276
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedExternalUILibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedExternalUILibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedExternalUILibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedExternalUILibrary, 3420050156);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedExternalUILibrary(Z_Construct_UClass_UAdvancedExternalUILibrary, &UAdvancedExternalUILibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedExternalUILibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedExternalUILibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
