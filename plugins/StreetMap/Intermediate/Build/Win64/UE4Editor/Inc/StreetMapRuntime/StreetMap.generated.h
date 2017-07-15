// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREETMAPRUNTIME_StreetMap_generated_h
#error "StreetMap.generated.h already included, missing '#pragma once' in StreetMap.h"
#endif
#define STREETMAPRUNTIME_StreetMap_generated_h

#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_276_GENERATED_BODY \
	friend STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(); \
	static class UScriptStruct* StaticStruct();


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_237_GENERATED_BODY \
	friend STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode(); \
	static class UScriptStruct* StaticStruct();


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_221_GENERATED_BODY \
	friend STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef(); \
	static class UScriptStruct* StaticStruct();


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_144_GENERATED_BODY \
	friend STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(); \
	static class UScriptStruct* StaticStruct();


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_41_GENERATED_BODY \
	friend STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings(); \
	static class UScriptStruct* StaticStruct();


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_11_GENERATED_BODY \
	friend STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings(); \
	static class UScriptStruct* StaticStruct();


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS
#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreetMap(); \
	friend STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_UStreetMap(); \
public: \
	DECLARE_CLASS(UStreetMap, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMap) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUStreetMap(); \
	friend STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_UStreetMap(); \
public: \
	DECLARE_CLASS(UStreetMap, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMap) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreetMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMap(UStreetMap&&); \
	NO_API UStreetMap(const UStreetMap&); \
public:


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMap(UStreetMap&&); \
	NO_API UStreetMap(const UStreetMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStreetMap)


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Roads() { return STRUCT_OFFSET(UStreetMap, Roads); } \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(UStreetMap, Nodes); } \
	FORCEINLINE static uint32 __PPO__Buildings() { return STRUCT_OFFSET(UStreetMap, Buildings); } \
	FORCEINLINE static uint32 __PPO__BoundsMin() { return STRUCT_OFFSET(UStreetMap, BoundsMin); } \
	FORCEINLINE static uint32 __PPO__BoundsMax() { return STRUCT_OFFSET(UStreetMap, BoundsMax); }


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_307_PROLOG
#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_PRIVATE_PROPERTY_OFFSET \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_PRIVATE_PROPERTY_OFFSET \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS_NO_PURE_DECLS \
	CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CityViz_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h


#define FOREACH_ENUM_ESTREETMAPROADTYPE(op) \
	op(Street) \
	op(MajorRoad) \
	op(Highway) \
	op(Other) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
