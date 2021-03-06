// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEGAMEHELPER_SaveGameHelperBPLibrary_generated_h
#error "SaveGameHelperBPLibrary.generated.h already included, missing '#pragma once' in SaveGameHelperBPLibrary.h"
#endif
#define SAVEGAMEHELPER_SaveGameHelperBPLibrary_generated_h

#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllSaveGameNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USaveGameHelperBPLibrary::GetAllSaveGameNames(); \
		P_NATIVE_END; \
	}


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllSaveGameNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USaveGameHelperBPLibrary::GetAllSaveGameNames(); \
		P_NATIVE_END; \
	}


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameHelperBPLibrary(); \
	friend struct Z_Construct_UClass_USaveGameHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USaveGameHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGameHelper"), NO_API) \
	DECLARE_SERIALIZER(USaveGameHelperBPLibrary)


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameHelperBPLibrary(); \
	friend struct Z_Construct_UClass_USaveGameHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USaveGameHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGameHelper"), NO_API) \
	DECLARE_SERIALIZER(USaveGameHelperBPLibrary)


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_STANDARD_CONSTRUCTORS \
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


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
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


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_25_PROLOG
#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEGAMEHELPER_API UClass* StaticClass<class USaveGameHelperBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyPluginsC_Plugins_SaveGameHelper_Source_SaveGameHelper_Public_SaveGameHelperBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
