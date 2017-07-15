// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "StreetMapRuntime.h"
#include "StreetMapRuntime.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1StreetMapRuntime() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API class UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();

	STREETMAPRUNTIME_API class UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings();
	STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_UStreetMap_NoRegister();
	STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_UStreetMap();
	STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_AStreetMapActor_NoRegister();
	STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_AStreetMapActor();
	STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex();
	STREETMAPRUNTIME_API class UFunction* Z_Construct_UFunction_UStreetMapComponent_SetStreetMap();
	STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister();
	STREETMAPRUNTIME_API class UClass* Z_Construct_UClass_UStreetMapComponent();
	STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
static UEnum* EStreetMapRoadType_StaticEnum()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("EStreetMapRoadType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreetMapRoadType(EStreetMapRoadType_StaticEnum, TEXT("/Script/StreetMapRuntime"), TEXT("EStreetMapRoadType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreetMapRoadType"), 0, Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EStreetMapRoadType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("Street"), 0);
			EnumNames.Emplace(TEXT("MajorRoad"), 1);
			EnumNames.Emplace(TEXT("Highway"), 2);
			EnumNames.Emplace(TEXT("Other"), 3);
			EnumNames.Emplace(TEXT("EStreetMapRoadType_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EStreetMapRoadType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Highway.ToolTip"), TEXT("Highway"));
			MetaData->SetValue(ReturnEnum, TEXT("MajorRoad.ToolTip"), TEXT("Major road or minor state highway"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Other.ToolTip"), TEXT("Other (path, bus route, etc)"));
			MetaData->SetValue(ReturnEnum, TEXT("Street.ToolTip"), TEXT("Small road or residential street"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Types of roads"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_CRC() { return 2228045259U; }
class UScriptStruct* FStreetMapBuilding::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuilding, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapBuilding"), sizeof(FStreetMapBuilding), Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapBuilding(FStreetMapBuilding::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapBuilding"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapBuilding")),new UScriptStruct::TCppStructOps<FStreetMapBuilding>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapBuilding"), sizeof(FStreetMapBuilding), Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapBuilding"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapBuilding>, EStructFlags(0x00000201));
			UProperty* NewProp_BoundsMax = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoundsMax"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundsMax, FStreetMapBuilding), 0x0010000000000001, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_BoundsMin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoundsMin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundsMin, FStreetMapBuilding), 0x0010000000000001, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_BuildingLevels = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingLevels"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(BuildingLevels, FStreetMapBuilding), 0x0010000000000001);
			UProperty* NewProp_Height = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Height"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Height, FStreetMapBuilding), 0x0010000000000001);
			UProperty* NewProp_BuildingPoints = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BuildingPoints, FStreetMapBuilding), 0x0010000000000001);
			UProperty* NewProp_BuildingPoints_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BuildingPoints, TEXT("BuildingPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_BuildingName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BuildingName, FStreetMapBuilding), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A building"));
			MetaData->SetValue(NewProp_BoundsMax, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BoundsMax, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BoundsMax, TEXT("ToolTip"), TEXT("2D bounds (max) of this building's points"));
			MetaData->SetValue(NewProp_BoundsMin, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BoundsMin, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BoundsMin, TEXT("ToolTip"), TEXT("2D bounds (min) of this building's points"));
			MetaData->SetValue(NewProp_BuildingLevels, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingLevels, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingLevels, TEXT("ToolTip"), TEXT("Levels of the building (if known, otherwise zero)"));
			MetaData->SetValue(NewProp_Height, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_Height, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_Height, TEXT("ToolTip"), TEXT("Height of the building in meters (if known, otherwise zero)"));
			MetaData->SetValue(NewProp_BuildingPoints, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingPoints, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingPoints, TEXT("ToolTip"), TEXT("Polygon points that define the perimeter of the building"));
			MetaData->SetValue(NewProp_BuildingName, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingName, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingName, TEXT("ToolTip"), TEXT("Name of the building"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_CRC() { return 1369200474U; }
class UScriptStruct* FStreetMapNode::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapNode, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapNode"), sizeof(FStreetMapNode), Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapNode(FStreetMapNode::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapNode"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapNode")),new UScriptStruct::TCppStructOps<FStreetMapNode>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapNode"), sizeof(FStreetMapNode), Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapNode"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapNode>, EStructFlags(0x00000201));
			UProperty* NewProp_RoadRefs = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadRefs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RoadRefs, FStreetMapNode), 0x0010000000000001);
			UProperty* NewProp_RoadRefs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RoadRefs, TEXT("RoadRefs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FStreetMapRoadRef());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Describes a node on a road.  Nodes usually connect at least two roads together, but they might also exist at the end of a dead-end street.  They are sort of like an \"intersection\"."));
			MetaData->SetValue(NewProp_RoadRefs, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadRefs, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadRefs, TEXT("ToolTip"), TEXT("All of the roads that intersect this node.  We have references to each of these roads, as well as the point along each\n          road where this node exists"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_CRC() { return 2815333065U; }
class UScriptStruct* FStreetMapRoadRef::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadRef, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapRoadRef"), sizeof(FStreetMapRoadRef), Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapRoadRef(FStreetMapRoadRef::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapRoadRef"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapRoadRef")),new UScriptStruct::TCppStructOps<FStreetMapRoadRef>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapRoadRef"), sizeof(FStreetMapRoadRef), Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapRoadRef"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapRoadRef>, EStructFlags(0x00000201));
			UProperty* NewProp_RoadPointIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadPointIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RoadPointIndex, FStreetMapRoadRef), 0x0010000000000001);
			UProperty* NewProp_RoadIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RoadIndex, FStreetMapRoadRef), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Nodes have a list of road refs, one for each road that intersects this node.  Each road ref references a road and also the\n   point along that road where this node exists."));
			MetaData->SetValue(NewProp_RoadPointIndex, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadPointIndex, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadPointIndex, TEXT("ToolTip"), TEXT("Index of the point along road where this node exists"));
			MetaData->SetValue(NewProp_RoadIndex, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadIndex, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadIndex, TEXT("ToolTip"), TEXT("Index of road in the list of all roads in this street map"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_CRC() { return 2934378901U; }
class UScriptStruct* FStreetMapRoad::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoad, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapRoad"), sizeof(FStreetMapRoad), Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapRoad(FStreetMapRoad::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapRoad"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapRoad")),new UScriptStruct::TCppStructOps<FStreetMapRoad>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapRoad"), sizeof(FStreetMapRoad), Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapRoad"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapRoad>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsOneWay, FStreetMapRoad, uint8);
			UProperty* NewProp_bIsOneWay = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsOneWay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsOneWay, FStreetMapRoad), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIsOneWay, FStreetMapRoad), sizeof(uint8), false);
			UProperty* NewProp_BoundsMax = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoundsMax"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundsMax, FStreetMapRoad), 0x0010000000000001, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_BoundsMin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoundsMin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundsMin, FStreetMapRoad), 0x0010000000000001, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_RoadPoints = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RoadPoints, FStreetMapRoad), 0x0010000000000001);
			UProperty* NewProp_RoadPoints_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RoadPoints, TEXT("RoadPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_NodeIndices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NodeIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(NodeIndices, FStreetMapRoad), 0x0010000000000001);
			UProperty* NewProp_NodeIndices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_NodeIndices, TEXT("NodeIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_RoadType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(RoadType, FStreetMapRoad), 0x0010000000000001, Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType());
			UProperty* NewProp_RoadName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RoadName, FStreetMapRoad), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A road"));
			MetaData->SetValue(NewProp_bIsOneWay, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_bIsOneWay, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_bIsOneWay, TEXT("ToolTip"), TEXT("True if this node is a one way.  One way nodes are only traversable in the order the nodes are listed in the above array."));
			MetaData->SetValue(NewProp_BoundsMax, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BoundsMax, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BoundsMax, TEXT("ToolTip"), TEXT("2D bounds (max) of this road's points"));
			MetaData->SetValue(NewProp_BoundsMin, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BoundsMin, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BoundsMin, TEXT("ToolTip"), TEXT("2D bounds (min) of this road's points"));
			MetaData->SetValue(NewProp_RoadPoints, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadPoints, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadPoints, TEXT("ToolTip"), TEXT("List of all of the points on this road, one for each node in the NodeIndices list"));
			MetaData->SetValue(NewProp_NodeIndices, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_NodeIndices, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_NodeIndices, TEXT("ToolTip"), TEXT("Nodes along this road, one at each point in the RoadPoints list"));
			MetaData->SetValue(NewProp_RoadType, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadType, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadType, TEXT("ToolTip"), TEXT("Type of road"));
			MetaData->SetValue(NewProp_RoadName, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadName, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadName, TEXT("ToolTip"), TEXT("Name of the road"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_CRC() { return 1701863363U; }
class UScriptStruct* FStreetMapMeshBuildSettings::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapMeshBuildSettings"), sizeof(FStreetMapMeshBuildSettings), Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapMeshBuildSettings(FStreetMapMeshBuildSettings::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapMeshBuildSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapMeshBuildSettings")),new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapMeshBuildSettings"), sizeof(FStreetMapMeshBuildSettings), Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapMeshBuildSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>, EStructFlags(0x00000201));
			UProperty* NewProp_BuildingBorderZ = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingBorderZ"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BuildingBorderZ, FStreetMapMeshBuildSettings), 0x0010000000000001);
			UProperty* NewProp_BuildingBorderLinearColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingBorderLinearColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BuildingBorderLinearColor, FStreetMapMeshBuildSettings), 0x0010000000000001, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_BuildingBorderThickness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingBorderThickness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BuildingBorderThickness, FStreetMapMeshBuildSettings), 0x0010000000000001);
			UProperty* NewProp_HighwayColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HighwayColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HighwayColor, FStreetMapMeshBuildSettings), 0x0010000000000001, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_HighwayThickness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HighwayThickness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HighwayThickness, FStreetMapMeshBuildSettings), 0x0010000000000001);
			UProperty* NewProp_MajorRoadColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MajorRoadColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MajorRoadColor, FStreetMapMeshBuildSettings), 0x0010000000000001, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_MajorRoadThickness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MajorRoadThickness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MajorRoadThickness, FStreetMapMeshBuildSettings), 0x0010000000000001);
			UProperty* NewProp_StreetColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StreetColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(StreetColor, FStreetMapMeshBuildSettings), 0x0010000000000001, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_StreetThickness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StreetThickness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StreetThickness, FStreetMapMeshBuildSettings), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWantLitBuildings, FStreetMapMeshBuildSettings, uint8);
			UProperty* NewProp_bWantLitBuildings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bWantLitBuildings"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWantLitBuildings, FStreetMapMeshBuildSettings), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bWantLitBuildings, FStreetMapMeshBuildSettings), sizeof(uint8), false);
			UProperty* NewProp_BuildingLevelFloorFactor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildingLevelFloorFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BuildingLevelFloorFactor, FStreetMapMeshBuildSettings), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWant3DBuildings, FStreetMapMeshBuildSettings, uint8);
			UProperty* NewProp_bWant3DBuildings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bWant3DBuildings"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWant3DBuildings, FStreetMapMeshBuildSettings), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bWant3DBuildings, FStreetMapMeshBuildSettings), sizeof(uint8), false);
			UProperty* NewProp_RoadOffesetZ = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoadOffesetZ"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoadOffesetZ, FStreetMapMeshBuildSettings), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Mesh generation settings"));
			MetaData->SetValue(NewProp_BuildingBorderZ, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingBorderZ, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_BuildingBorderZ, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingBorderZ, TEXT("ToolTip"), TEXT("Buildings border vertical offset"));
			MetaData->SetValue(NewProp_BuildingBorderZ, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_BuildingBorderLinearColor, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingBorderLinearColor, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingBorderLinearColor, TEXT("ToolTip"), TEXT("Building border vertex color"));
			MetaData->SetValue(NewProp_BuildingBorderThickness, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingBorderThickness, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_BuildingBorderThickness, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingBorderThickness, TEXT("ToolTip"), TEXT("Streets Thickness"));
			MetaData->SetValue(NewProp_BuildingBorderThickness, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_HighwayColor, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_HighwayColor, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_HighwayColor, TEXT("ToolTip"), TEXT("Highway vertex color"));
			MetaData->SetValue(NewProp_HighwayThickness, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_HighwayThickness, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_HighwayThickness, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_HighwayThickness, TEXT("ToolTip"), TEXT("Highway thickness"));
			MetaData->SetValue(NewProp_HighwayThickness, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MajorRoadColor, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_MajorRoadColor, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_MajorRoadColor, TEXT("ToolTip"), TEXT("Major road vertex color"));
			MetaData->SetValue(NewProp_MajorRoadThickness, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_MajorRoadThickness, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MajorRoadThickness, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_MajorRoadThickness, TEXT("ToolTip"), TEXT("Major road thickness"));
			MetaData->SetValue(NewProp_MajorRoadThickness, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_StreetColor, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_StreetColor, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_StreetColor, TEXT("ToolTip"), TEXT("Street vertex color"));
			MetaData->SetValue(NewProp_StreetThickness, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_StreetThickness, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_StreetThickness, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_StreetThickness, TEXT("ToolTip"), TEXT("Streets thickness"));
			MetaData->SetValue(NewProp_StreetThickness, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_bWantLitBuildings, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_bWantLitBuildings, TEXT("DisplayName"), TEXT("Lit buildings"));
			MetaData->SetValue(NewProp_bWantLitBuildings, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_bWantLitBuildings, TEXT("ToolTip"), TEXT("If true, buildings mesh will receive light information.\nLit buildings can't share vertices beyond quads (all quads have their own face normals), so this uses a lot more geometry."));
			MetaData->SetValue(NewProp_BuildingLevelFloorFactor, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_BuildingLevelFloorFactor, TEXT("DisplayName"), TEXT("Building Level Floor Factor"));
			MetaData->SetValue(NewProp_BuildingLevelFloorFactor, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_BuildingLevelFloorFactor, TEXT("ToolTip"), TEXT("building level floor conversion factor in centimeters\n              @todo: harmonize with OSMToCentimetersScaleFactor refactoring"));
			MetaData->SetValue(NewProp_bWant3DBuildings, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_bWant3DBuildings, TEXT("DisplayName"), TEXT("Create 3D Buildings"));
			MetaData->SetValue(NewProp_bWant3DBuildings, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_bWant3DBuildings, TEXT("ToolTip"), TEXT("if true buildings mesh will be 3D instead of flat representation."));
			MetaData->SetValue(NewProp_RoadOffesetZ, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_RoadOffesetZ, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_RoadOffesetZ, TEXT("DisplayName"), TEXT("Road Vertical Offset"));
			MetaData->SetValue(NewProp_RoadOffesetZ, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_RoadOffesetZ, TEXT("ToolTip"), TEXT("Roads base vertical offset"));
			MetaData->SetValue(NewProp_RoadOffesetZ, TEXT("UIMin"), TEXT("0"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_CRC() { return 448063340U; }
class UScriptStruct* FStreetMapCollisionSettings::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapCollisionSettings, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapCollisionSettings"), sizeof(FStreetMapCollisionSettings), Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapCollisionSettings(FStreetMapCollisionSettings::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapCollisionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapCollisionSettings")),new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapCollisionSettings"), sizeof(FStreetMapCollisionSettings), Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapCollisionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowDoubleSidedGeometry, FStreetMapCollisionSettings, uint8);
			UProperty* NewProp_bAllowDoubleSidedGeometry = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bAllowDoubleSidedGeometry"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowDoubleSidedGeometry, FStreetMapCollisionSettings), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bAllowDoubleSidedGeometry, FStreetMapCollisionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGenerateCollision, FStreetMapCollisionSettings, uint8);
			UProperty* NewProp_bGenerateCollision = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bGenerateCollision"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGenerateCollision, FStreetMapCollisionSettings), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bGenerateCollision, FStreetMapCollisionSettings), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_bAllowDoubleSidedGeometry, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_bAllowDoubleSidedGeometry, TEXT("editcondition"), TEXT("bGenerateCollision"));
			MetaData->SetValue(NewProp_bAllowDoubleSidedGeometry, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_bAllowDoubleSidedGeometry, TEXT("ToolTip"), TEXT("If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides."));
			MetaData->SetValue(NewProp_bGenerateCollision, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(NewProp_bGenerateCollision, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
			MetaData->SetValue(NewProp_bGenerateCollision, TEXT("ToolTip"), TEXT("Uses triangle mesh data for collision data. (Cannot be used for physics simulation)."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_CRC() { return 2204382434U; }
	void UStreetMap::StaticRegisterNativesUStreetMap()
	{
	}
	UClass* Z_Construct_UClass_UStreetMap_NoRegister()
	{
		return UStreetMap::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreetMap()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_StreetMapRuntime();
			OuterClass = UStreetMap::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
#if WITH_EDITORONLY_DATA
				UProperty* NewProp_AssetImportData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetImportData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AssetImportData, UStreetMap), 0x00220808000a0009, Z_Construct_UClass_UAssetImportData_NoRegister());
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_BoundsMax = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoundsMax"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundsMax, UStreetMap), 0x0020080000020001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_BoundsMin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoundsMin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundsMin, UStreetMap), 0x0020080000020001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_Buildings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Buildings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Buildings, UStreetMap), 0x0020080000020001);
				UProperty* NewProp_Buildings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Buildings, TEXT("Buildings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FStreetMapBuilding());
				UProperty* NewProp_Nodes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Nodes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Nodes, UStreetMap), 0x0020080000020001);
				UProperty* NewProp_Nodes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Nodes, TEXT("Nodes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FStreetMapNode());
				UProperty* NewProp_Roads = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Roads"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Roads, UStreetMap), 0x0020080000020001);
				UProperty* NewProp_Roads_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Roads, TEXT("Roads"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FStreetMapRoad());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UStreetMap> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StreetMap.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A loaded street map"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("Category"), TEXT("ImportSettings"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("ToolTip"), TEXT("Importing data and options used for this mesh"));
				MetaData->SetValue(NewProp_BoundsMax, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_BoundsMax, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(NewProp_BoundsMax, TEXT("ToolTip"), TEXT("2D bounds (max) of this map's roads and buildings"));
				MetaData->SetValue(NewProp_BoundsMin, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_BoundsMin, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(NewProp_BoundsMin, TEXT("ToolTip"), TEXT("2D bounds (min) of this map's roads and buildings"));
				MetaData->SetValue(NewProp_Buildings, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_Buildings, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(NewProp_Buildings, TEXT("ToolTip"), TEXT("List of all buildings on the street map"));
				MetaData->SetValue(NewProp_Nodes, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_Nodes, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(NewProp_Nodes, TEXT("ToolTip"), TEXT("List of nodes on this map.  Nodes describe interesting points along roads, usually where roads intersect or at the end of a dead-end street"));
				MetaData->SetValue(NewProp_Roads, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_Roads, TEXT("ModuleRelativePath"), TEXT("Public/StreetMap.h"));
				MetaData->SetValue(NewProp_Roads, TEXT("ToolTip"), TEXT("List of roads"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMap, 1972214229);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMap(Z_Construct_UClass_UStreetMap, &UStreetMap::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("UStreetMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMap);
	void AStreetMapActor::StaticRegisterNativesAStreetMapActor()
	{
	}
	UClass* Z_Construct_UClass_AStreetMapActor_NoRegister()
	{
		return AStreetMapActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AStreetMapActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_StreetMapRuntime();
			OuterClass = AStreetMapActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StreetMapComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StreetMapComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StreetMapComponent, AStreetMapActor), 0x00100000000a001d, Z_Construct_UClass_UStreetMapComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AStreetMapActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Physics"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StreetMapActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("An actor that renders a street map mesh component"));
				MetaData->SetValue(NewProp_StreetMapComponent, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_StreetMapComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_StreetMapComponent, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapActor.h"));
				MetaData->SetValue(NewProp_StreetMapComponent, TEXT("ToolTip"), TEXT("Component that represents a section of street map roads and buildings"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStreetMapActor, 817014401);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStreetMapActor(Z_Construct_UClass_AStreetMapActor, &AStreetMapActor::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("AStreetMapActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStreetMapActor);
class UScriptStruct* FStreetMapVertex::StaticStruct()
{
	extern STREETMAPRUNTIME_API class UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex();
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapVertex, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapVertex"), sizeof(FStreetMapVertex), Get_Z_Construct_UScriptStruct_FStreetMapVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapVertex(FStreetMapVertex::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapVertex"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapVertex
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapVertex")),new UScriptStruct::TCppStructOps<FStreetMapVertex>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapVertex;
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapVertex_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapVertex"), sizeof(FStreetMapVertex), Get_Z_Construct_UScriptStruct_FStreetMapVertex_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StreetMapVertex"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStreetMapVertex>, EStructFlags(0x00000001));
			UProperty* NewProp_Color = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Color, FStreetMapVertex), 0x0010000000000000, Z_Construct_UScriptStruct_FColor());
			UProperty* NewProp_TangentZ = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TangentZ"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TangentZ, FStreetMapVertex), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TangentX = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TangentX"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TangentX, FStreetMapVertex), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TextureCoordinate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextureCoordinate"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TextureCoordinate, FStreetMapVertex), 0x0010000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Position, FStreetMapVertex), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("StreetMapSceneProxy.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A single vertex on a street map mesh"));
			MetaData->SetValue(NewProp_Color, TEXT("ModuleRelativePath"), TEXT("StreetMapSceneProxy.h"));
			MetaData->SetValue(NewProp_Color, TEXT("ToolTip"), TEXT("Color"));
			MetaData->SetValue(NewProp_TangentZ, TEXT("ModuleRelativePath"), TEXT("StreetMapSceneProxy.h"));
			MetaData->SetValue(NewProp_TangentZ, TEXT("ToolTip"), TEXT("Tangent vector Z (normal)"));
			MetaData->SetValue(NewProp_TangentX, TEXT("ModuleRelativePath"), TEXT("StreetMapSceneProxy.h"));
			MetaData->SetValue(NewProp_TangentX, TEXT("ToolTip"), TEXT("Tangent vector X"));
			MetaData->SetValue(NewProp_TextureCoordinate, TEXT("ModuleRelativePath"), TEXT("StreetMapSceneProxy.h"));
			MetaData->SetValue(NewProp_TextureCoordinate, TEXT("ToolTip"), TEXT("Texture coordinate"));
			MetaData->SetValue(NewProp_Position, TEXT("ModuleRelativePath"), TEXT("StreetMapSceneProxy.h"));
			MetaData->SetValue(NewProp_Position, TEXT("ToolTip"), TEXT("Location of the vertex in local space"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapVertex_CRC() { return 2810094738U; }
	void UStreetMapComponent::StaticRegisterNativesUStreetMapComponent()
	{
		UClass* Class = UStreetMapComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetStreetMap", (Native)&UStreetMapComponent::execSetStreetMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UStreetMapComponent_SetStreetMap()
	{
		struct StreetMapComponent_eventSetStreetMap_Parms
		{
			UStreetMap* NewStreetMap;
			bool bClearPreviousMeshIfAny;
			bool bRebuildMesh;
		};
		UObject* Outer=Z_Construct_UClass_UStreetMapComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStreetMap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(StreetMapComponent_eventSetStreetMap_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRebuildMesh, StreetMapComponent_eventSetStreetMap_Parms, bool);
			UProperty* NewProp_bRebuildMesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bRebuildMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRebuildMesh, StreetMapComponent_eventSetStreetMap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bRebuildMesh, StreetMapComponent_eventSetStreetMap_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bClearPreviousMeshIfAny, StreetMapComponent_eventSetStreetMap_Parms, bool);
			UProperty* NewProp_bClearPreviousMeshIfAny = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bClearPreviousMeshIfAny"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bClearPreviousMeshIfAny, StreetMapComponent_eventSetStreetMap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bClearPreviousMeshIfAny, StreetMapComponent_eventSetStreetMap_Parms), sizeof(bool), true);
			UProperty* NewProp_NewStreetMap = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewStreetMap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewStreetMap, StreetMapComponent_eventSetStreetMap_Parms), 0x0010000000000080, Z_Construct_UClass_UStreetMap_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("StreetMap"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bClearPreviousMeshIfAny"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bRebuildMesh"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Assigns a street map asset to this component.  Render state will be updated immediately.\n\n@param NewStreetMap The street map to use\n\n@param bRebuildMesh : Rebuilds map mesh based on the new map asset\n\n@return Sets the street map object"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister()
	{
		return UStreetMapComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreetMapComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMeshComponent();
			Z_Construct_UPackage__Script_StreetMapRuntime();
			OuterClass = UStreetMapComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StreetMapDefaultMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StreetMapDefaultMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StreetMapDefaultMaterial, UStreetMapComponent), 0x0020080000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_CachedLocalBounds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CachedLocalBounds"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CachedLocalBounds, UStreetMapComponent), 0x0020080000000000, Z_Construct_UScriptStruct_FBoxSphereBounds());
				UProperty* NewProp_Indices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Indices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Indices, UStreetMapComponent), 0x0020080000000000);
				UProperty* NewProp_Indices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Indices, TEXT("Indices"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, UStreetMapComponent), 0x0020080000000000);
				UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FStreetMapVertex());
				UProperty* NewProp_StreetMapBodySetup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StreetMapBodySetup"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StreetMapBodySetup, UStreetMapComponent), 0x0020080000002000, Z_Construct_UClass_UBodySetup_NoRegister());
				UProperty* NewProp_CollisionSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CollisionSettings, UStreetMapComponent), 0x0020080000000001, Z_Construct_UScriptStruct_FStreetMapCollisionSettings());
				UProperty* NewProp_MeshBuildSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshBuildSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MeshBuildSettings, UStreetMapComponent), 0x0020080000000001, Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings());
				UProperty* NewProp_StreetMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StreetMap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StreetMap, UStreetMapComponent), 0x0020080000000001, Z_Construct_UClass_UStreetMap_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap(), "SetStreetMap"); // 3355102851
				static TCppClassTypeInfo<TCppClassTypeTraits<UStreetMapComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister(), VTABLE_OFFSET(UStreetMapComponent, IInterface_CollisionDataProvider), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Physics Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StreetMapComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Component that represents a section of street map roads and buildings"));
				MetaData->SetValue(NewProp_StreetMapDefaultMaterial, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_StreetMapDefaultMaterial, TEXT("ToolTip"), TEXT("Cached StreetMap DefaultMaterial"));
				MetaData->SetValue(NewProp_CachedLocalBounds, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_CachedLocalBounds, TEXT("ToolTip"), TEXT("Cached bounding box"));
				MetaData->SetValue(NewProp_Indices, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_Indices, TEXT("ToolTip"), TEXT("Cached raw mesh triangle indices"));
				MetaData->SetValue(NewProp_Vertices, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_Vertices, TEXT("ToolTip"), TEXT("Cached raw mesh vertices"));
				MetaData->SetValue(NewProp_StreetMapBodySetup, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_StreetMapBodySetup, TEXT("ToolTip"), TEXT("/ Physics data for mesh collision."));
				MetaData->SetValue(NewProp_CollisionSettings, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_CollisionSettings, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_MeshBuildSettings, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_MeshBuildSettings, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_StreetMap, TEXT("Category"), TEXT("StreetMap"));
				MetaData->SetValue(NewProp_StreetMap, TEXT("ModuleRelativePath"), TEXT("Public/StreetMapComponent.h"));
				MetaData->SetValue(NewProp_StreetMap, TEXT("ToolTip"), TEXT("The street map we're representing."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapComponent, 3253207591);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapComponent(Z_Construct_UClass_UStreetMapComponent, &UStreetMapComponent::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("UStreetMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapComponent);
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/StreetMapRuntime")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC46BAAF8;
			Guid.B = 0x5501902D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
