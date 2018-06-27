// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEGAMEHELPER_SaveGameHelperBPLibrary_generated_h
#error "SaveGameHelperBPLibrary.generated.h already included, missing '#pragma once' in SaveGameHelperBPLibrary.h"
#endif
#define SAVEGAMEHELPER_SaveGameHelperBPLibrary_generated_h

#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllSaveGameNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USaveGameHelperBPLibrary::GetAllSaveGameNames(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllSaveGameNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USaveGameHelperBPLibrary::GetAllSaveGameNames(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameHelperBPLibrary(); \
	friend SAVEGAMEHELPER_API class UClass* Z_Construct_UClass_USaveGameHelperBPLibrary(); \
public: \
	DECLARE_CLASS(USaveGameHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SaveGameHelper"), NO_API) \
	DECLARE_SERIALIZER(USaveGameHelperBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameHelperBPLibrary(); \
	friend SAVEGAMEHELPER_API class UClass* Z_Construct_UClass_USaveGameHelperBPLibrary(); \
public: \
	DECLARE_CLASS(USaveGameHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SaveGameHelper"), NO_API) \
	DECLARE_SERIALIZER(USaveGameHelperBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameHelperBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameHelperBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameHelperBPLibrary(USaveGameHelperBPLibrary&&); \
	NO_API USaveGameHelperBPLibrary(const USaveGameHelperBPLibrary&); \
public:


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameHelperBPLibrary(USaveGameHelperBPLibrary&&); \
	NO_API USaveGameHelperBPLibrary(const USaveGameHelperBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameHelperBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameHelperBPLibrary)


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_25_PROLOG
#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
