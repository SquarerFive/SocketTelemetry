// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketTelemetry/TelemetryUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelemetryUI() {}
// Cross Module References
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_ATelemetryUI_NoRegister();
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_ATelemetryUI();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SocketTelemetry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ATelemetryUI::StaticRegisterNativesATelemetryUI()
	{
	}
	UClass* Z_Construct_UClass_ATelemetryUI_NoRegister()
	{
		return ATelemetryUI::StaticClass();
	}
	struct Z_Construct_UClass_ATelemetryUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refConnectionScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_refConnectionScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATelemetryUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketTelemetry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATelemetryUI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TelemetryUI.h" },
		{ "ModuleRelativePath", "TelemetryUI.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATelemetryUI_Statics::NewProp_refConnectionScreen_MetaData[] = {
		{ "Category", "TelemetryUI" },
		{ "ModuleRelativePath", "TelemetryUI.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATelemetryUI_Statics::NewProp_refConnectionScreen = { UE4CodeGen_Private::EPropertyClass::Class, "refConnectionScreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ATelemetryUI, refConnectionScreen), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATelemetryUI_Statics::NewProp_refConnectionScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATelemetryUI_Statics::NewProp_refConnectionScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATelemetryUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATelemetryUI_Statics::NewProp_refConnectionScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATelemetryUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATelemetryUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATelemetryUI_Statics::ClassParams = {
		&ATelemetryUI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_ATelemetryUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATelemetryUI_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATelemetryUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATelemetryUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATelemetryUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATelemetryUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATelemetryUI, 3318240521);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATelemetryUI(Z_Construct_UClass_ATelemetryUI, &ATelemetryUI::StaticClass, TEXT("/Script/SocketTelemetry"), TEXT("ATelemetryUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATelemetryUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
