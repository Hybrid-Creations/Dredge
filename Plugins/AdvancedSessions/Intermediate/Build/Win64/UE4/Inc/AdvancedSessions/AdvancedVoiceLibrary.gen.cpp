// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedVoiceLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedVoiceLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedVoiceLibrary();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedVoiceLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	void UAdvancedVoiceLibrary::StaticRegisterNativesUAdvancedVoiceLibrary()
	{
		UClass* Class = UAdvancedVoiceLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetNumLocalTalkers", (Native)&UAdvancedVoiceLibrary::execGetNumLocalTalkers },
			{ "IsHeadsetPresent", (Native)&UAdvancedVoiceLibrary::execIsHeadsetPresent },
			{ "IsLocalPlayerTalking", (Native)&UAdvancedVoiceLibrary::execIsLocalPlayerTalking },
			{ "IsPlayerMuted", (Native)&UAdvancedVoiceLibrary::execIsPlayerMuted },
			{ "IsRemotePlayerTalking", (Native)&UAdvancedVoiceLibrary::execIsRemotePlayerTalking },
			{ "MuteRemoteTalker", (Native)&UAdvancedVoiceLibrary::execMuteRemoteTalker },
			{ "RegisterAllLocalTalkers", (Native)&UAdvancedVoiceLibrary::execRegisterAllLocalTalkers },
			{ "RegisterLocalTalker", (Native)&UAdvancedVoiceLibrary::execRegisterLocalTalker },
			{ "RegisterRemoteTalker", (Native)&UAdvancedVoiceLibrary::execRegisterRemoteTalker },
			{ "RemoveAllRemoteTalkers", (Native)&UAdvancedVoiceLibrary::execRemoveAllRemoteTalkers },
			{ "StartNetworkedVoice", (Native)&UAdvancedVoiceLibrary::execStartNetworkedVoice },
			{ "StopNetworkedVoice", (Native)&UAdvancedVoiceLibrary::execStopNetworkedVoice },
			{ "UnMuteRemoteTalker", (Native)&UAdvancedVoiceLibrary::execUnMuteRemoteTalker },
			{ "UnRegisterAllLocalTalkers", (Native)&UAdvancedVoiceLibrary::execUnRegisterAllLocalTalkers },
			{ "UnRegisterLocalTalker", (Native)&UAdvancedVoiceLibrary::execUnRegisterLocalTalker },
			{ "UnRegisterRemoteTalker", (Native)&UAdvancedVoiceLibrary::execUnRegisterRemoteTalker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers()
	{
		struct AdvancedVoiceLibrary_eventGetNumLocalTalkers_Parms
		{
			int32 NumLocalTalkers;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumLocalTalkers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedVoiceLibrary_eventGetNumLocalTalkers_Parms));
			UProperty* NewProp_NumLocalTalkers = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NumLocalTalkers"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumLocalTalkers, AdvancedVoiceLibrary_eventGetNumLocalTalkers_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice|VoiceInfo"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the number of local talkers for this system"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent()
	{
		struct AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms
		{
			bool bHasHeadset;
			uint8 LocalPlayerNum;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsHeadsetPresent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms));
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasHeadset, AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms);
			UProperty* NewProp_bHasHeadset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHasHeadset"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasHeadset, AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bHasHeadset, AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice|VoiceInfo"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocalPlayerNum"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get if a headset is present for the specified local user"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking()
	{
		struct AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms
		{
			uint8 LocalPlayerNum;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsLocalPlayerTalking"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms), sizeof(bool), true);
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice|VoiceInfo"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a local player is currently talking"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted()
	{
		struct AdvancedVoiceLibrary_eventIsPlayerMuted_Parms
		{
			uint8 LocalUserNumChecking;
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlayerMuted"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedVoiceLibrary_eventIsPlayerMuted_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventIsPlayerMuted_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventIsPlayerMuted_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventIsPlayerMuted_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedVoiceLibrary_eventIsPlayerMuted_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_LocalUserNumChecking = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalUserNumChecking"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalUserNumChecking, AdvancedVoiceLibrary_eventIsPlayerMuted_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice|VoiceInfo"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a player is muted for the specified local player"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking()
	{
		struct AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsRemotePlayerTalking"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice|VoiceInfo"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a remote player is currently talking"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker()
	{
		struct AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms
		{
			uint8 LocalUserNum;
			FBPUniqueNetId UniqueNetId;
			bool bIsSystemWide;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MuteRemoteTalker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsSystemWide, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms);
			UProperty* NewProp_bIsSystemWide = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsSystemWide"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsSystemWide, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsSystemWide, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_LocalUserNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalUserNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalUserNum, AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIsSystemWide"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Mutes the player associated with the uniquenetid for the specified local player, if IsSystemWide is true then it will attempt to mute globally for the player"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterAllLocalTalkers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Registers all signed in players as local talkers"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker()
	{
		struct AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms
		{
			uint8 LocalPlayerNum;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterLocalTalker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms), sizeof(bool), true);
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocalPlayerNum"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Registers a local player as someone interested in voice data"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker()
	{
		struct AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterRemoteTalker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Registers a remote player as a talker"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveAllRemoteTalkers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UnRegisters all remote players as talkers"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice()
	{
		struct AdvancedVoiceLibrary_eventStartNetworkedVoice_Parms
		{
			uint8 LocalPlayerNum;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartNetworkedVoice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedVoiceLibrary_eventStartNetworkedVoice_Parms));
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedVoiceLibrary_eventStartNetworkedVoice_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocalPlayerNum"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts networked voice, allows push to talk in coordination with StopNetworkedVoice"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice()
	{
		struct AdvancedVoiceLibrary_eventStopNetworkedVoice_Parms
		{
			uint8 LocalPlayerNum;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopNetworkedVoice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedVoiceLibrary_eventStopNetworkedVoice_Parms));
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedVoiceLibrary_eventStopNetworkedVoice_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocalPlayerNum"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops networked voice, allows push to talk in coordination with StartNetworkedVoice"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker()
	{
		struct AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms
		{
			uint8 LocalUserNum;
			FBPUniqueNetId UniqueNetId;
			bool bIsSystemWide;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnMuteRemoteTalker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsSystemWide, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms);
			UProperty* NewProp_bIsSystemWide = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsSystemWide"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsSystemWide, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsSystemWide, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			UProperty* NewProp_LocalUserNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalUserNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalUserNum, AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIsSystemWide"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UnMutes the player associated with the uniquenetid for the specified local player, if IsSystemWide is true then it will attempt to unmute globally for the player"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnRegisterAllLocalTalkers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UnRegisters all signed in players as local talkers"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker()
	{
		struct AdvancedVoiceLibrary_eventUnRegisterLocalTalker_Parms
		{
			uint8 LocalPlayerNum;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnRegisterLocalTalker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AdvancedVoiceLibrary_eventUnRegisterLocalTalker_Parms));
			UProperty* NewProp_LocalPlayerNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocalPlayerNum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocalPlayerNum, AdvancedVoiceLibrary_eventUnRegisterLocalTalker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocalPlayerNum"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UnRegisters local player as a local talker"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker()
	{
		struct AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedVoiceLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnRegisterRemoteTalker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms), sizeof(bool), true);
			UProperty* NewProp_UniqueNetId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UniqueNetId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UniqueNetId, AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FBPUniqueNetId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Online|AdvancedVoice"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UnRegisters a remote player as a talker"));
			MetaData->SetValue(NewProp_UniqueNetId, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedVoiceLibrary_NoRegister()
	{
		return UAdvancedVoiceLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedVoiceLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AdvancedSessions();
			OuterClass = UAdvancedVoiceLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers(), "GetNumLocalTalkers"); // 3800180696
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent(), "IsHeadsetPresent"); // 2627571470
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking(), "IsLocalPlayerTalking"); // 550928679
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted(), "IsPlayerMuted"); // 3988886001
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking(), "IsRemotePlayerTalking"); // 1627278532
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker(), "MuteRemoteTalker"); // 496639371
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers(), "RegisterAllLocalTalkers"); // 2689120751
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker(), "RegisterLocalTalker"); // 998711703
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker(), "RegisterRemoteTalker"); // 3115623199
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers(), "RemoveAllRemoteTalkers"); // 3256836622
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice(), "StartNetworkedVoice"); // 3135149516
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice(), "StopNetworkedVoice"); // 818521461
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker(), "UnMuteRemoteTalker"); // 1419442033
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers(), "UnRegisterAllLocalTalkers"); // 3301874809
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker(), "UnRegisterLocalTalker"); // 2465536314
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker(), "UnRegisterRemoteTalker"); // 3998161387
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedVoiceLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedVoiceLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedVoiceLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedVoiceLibrary, 2406836359);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedVoiceLibrary(Z_Construct_UClass_UAdvancedVoiceLibrary, &UAdvancedVoiceLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedVoiceLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedVoiceLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
