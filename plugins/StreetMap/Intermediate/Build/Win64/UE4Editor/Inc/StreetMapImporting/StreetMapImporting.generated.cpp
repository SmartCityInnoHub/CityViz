// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "StreetMapImporting.h"
#include "StreetMapImporting.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1StreetMapImporting() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	UNREALED_API class UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API class UClass* Z_Construct_UClass_UFactory();

	STREETMAPIMPORTING_API class UClass* Z_Construct_UClass_UStreetMapActorFactory_NoRegister();
	STREETMAPIMPORTING_API class UClass* Z_Construct_UClass_UStreetMapActorFactory();
	STREETMAPIMPORTING_API class UClass* Z_Construct_UClass_UStreetMapFactory_NoRegister();
	STREETMAPIMPORTING_API class UClass* Z_Construct_UClass_UStreetMapFactory();
	STREETMAPIMPORTING_API class UClass* Z_Construct_UClass_UStreetMapReimportFactory_NoRegister();
	STREETMAPIMPORTING_API class UClass* Z_Construct_UClass_UStreetMapReimportFactory();
	STREETMAPIMPORTING_API class UPackage* Z_Construct_UPackage__Script_StreetMapImporting();
	void UStreetMapActorFactory::StaticRegisterNativesUStreetMapActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UStreetMapActorFactory_NoRegister()
	{
		return UStreetMapActorFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreetMapActorFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorFactory();
			Z_Construct_UPackage__Script_StreetMapImporting();
			OuterClass = UStreetMapActorFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2000308C;


				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UStreetMapActorFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StreetMapActorFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("StreetMapActorFactory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapActorFactory, 1794588323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapActorFactory(Z_Construct_UClass_UStreetMapActorFactory, &UStreetMapActorFactory::StaticClass, TEXT("/Script/StreetMapImporting"), TEXT("UStreetMapActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapActorFactory);
	void UStreetMapFactory::StaticRegisterNativesUStreetMapFactory()
	{
	}
	UClass* Z_Construct_UClass_UStreetMapFactory_NoRegister()
	{
		return UStreetMapFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreetMapFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFactory();
			Z_Construct_UPackage__Script_StreetMapImporting();
			OuterClass = UStreetMapFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UStreetMapFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StreetMapFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("StreetMapFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Import factory object for OpenStreetMap assets"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapFactory, 3935831562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapFactory(Z_Construct_UClass_UStreetMapFactory, &UStreetMapFactory::StaticClass, TEXT("/Script/StreetMapImporting"), TEXT("UStreetMapFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapFactory);
	void UStreetMapReimportFactory::StaticRegisterNativesUStreetMapReimportFactory()
	{
	}
	UClass* Z_Construct_UClass_UStreetMapReimportFactory_NoRegister()
	{
		return UStreetMapReimportFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreetMapReimportFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStreetMapFactory();
			Z_Construct_UPackage__Script_StreetMapImporting();
			OuterClass = UStreetMapReimportFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UStreetMapReimportFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StreetMapReimportFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("StreetMapReimportFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Import factory object for OpenStreetMap assets"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapReimportFactory, 1094045355);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapReimportFactory(Z_Construct_UClass_UStreetMapReimportFactory, &UStreetMapReimportFactory::StaticClass, TEXT("/Script/StreetMapImporting"), TEXT("UStreetMapReimportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapReimportFactory);
	UPackage* Z_Construct_UPackage__Script_StreetMapImporting()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/StreetMapImporting")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0xE7FB5BD3;
			Guid.B = 0xA88826CD;
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
