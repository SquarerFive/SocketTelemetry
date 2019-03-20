// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketTelemetry/TelemetryHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelemetryHandler() {}
// Cross Module References
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_ATelemetryHandler_NoRegister();
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_ATelemetryHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SocketTelemetry();
	SOCKETIOCLIENT_API UClass* Z_Construct_UClass_USocketIOClientComponent_NoRegister();
// End Cross Module References
	void ATelemetryHandler::StaticRegisterNativesATelemetryHandler()
	{
	}
	UClass* Z_Construct_UClass_ATelemetryHandler_NoRegister()
	{
		return ATelemetryHandler::StaticClass();
	}
	struct Z_Construct_UClass_ATelemetryHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATelemetryHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketTelemetry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATelemetryHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TelemetryHandler.h" },
		{ "ModuleRelativePath", "TelemetryHandler.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATelemetryHandler_Statics::NewProp_SocketComponent_MetaData[] = {
		{ "Category", "TelemetryHandler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TelemetryHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATelemetryHandler_Statics::NewProp_SocketComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SocketComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(ATelemetryHandler, SocketComponent), Z_Construct_UClass_USocketIOClientComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATelemetryHandler_Statics::NewProp_SocketComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATelemetryHandler_Statics::NewProp_SocketComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATelemetryHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATelemetryHandler_Statics::NewProp_SocketComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATelemetryHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATelemetryHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATelemetryHandler_Statics::ClassParams = {
		&ATelemetryHandler::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATelemetryHandler_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATelemetryHandler_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATelemetryHandler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATelemetryHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATelemetryHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATelemetryHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATelemetryHandler, 1825203917);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATelemetryHandler(Z_Construct_UClass_ATelemetryHandler, &ATelemetryHandler::StaticClass, TEXT("/Script/SocketTelemetry"), TEXT("ATelemetryHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATelemetryHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
