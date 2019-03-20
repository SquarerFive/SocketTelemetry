// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketTelemetry/TelemetryInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelemetryInstance() {}
// Cross Module References
	SOCKETTELEMETRY_API UScriptStruct* Z_Construct_UScriptStruct_FUserData();
	UPackage* Z_Construct_UPackage__Script_SocketTelemetry();
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_UTelemetryInstance_NoRegister();
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_UTelemetryInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
class UScriptStruct* FUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCKETTELEMETRY_API uint32 Get_Z_Construct_UScriptStruct_FUserData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserData, Z_Construct_UPackage__Script_SocketTelemetry(), TEXT("UserData"), sizeof(FUserData), Get_Z_Construct_UScriptStruct_FUserData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserData(FUserData::StaticStruct, TEXT("/Script/SocketTelemetry"), TEXT("UserData"), false, nullptr, nullptr);
static struct FScriptStruct_SocketTelemetry_StaticRegisterNativesFUserData
{
	FScriptStruct_SocketTelemetry_StaticRegisterNativesFUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserData")),new UScriptStruct::TCppStructOps<FUserData>);
	}
} ScriptStruct_SocketTelemetry_StaticRegisterNativesFUserData;
	struct Z_Construct_UScriptStruct_FUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XpToNextRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XpToNextRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Xp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Xp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserData_Statics::NewProp_XpToNextRank_MetaData[] = {
		{ "Category", "UserData" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUserData_Statics::NewProp_XpToNextRank = { UE4CodeGen_Private::EPropertyClass::Float, "XpToNextRank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FUserData, XpToNextRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserData_Statics::NewProp_XpToNextRank_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserData_Statics::NewProp_XpToNextRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Xp_MetaData[] = {
		{ "Category", "UserData" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Xp = { UE4CodeGen_Private::EPropertyClass::Float, "Xp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FUserData, Xp), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Xp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Xp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "UserData" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Rank = { UE4CodeGen_Private::EPropertyClass::Int, "Rank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FUserData, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Rank_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Rank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserData_Statics::NewProp_XpToNextRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Xp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserData_Statics::NewProp_Rank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocketTelemetry,
		nullptr,
		&NewStructOps,
		"UserData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FUserData),
		alignof(FUserData),
		Z_Construct_UScriptStruct_FUserData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SocketTelemetry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserData"), sizeof(FUserData), Get_Z_Construct_UScriptStruct_FUserData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserData_CRC() { return 523177971U; }
	void UTelemetryInstance::StaticRegisterNativesUTelemetryInstance()
	{
	}
	UClass* Z_Construct_UClass_UTelemetryInstance_NoRegister()
	{
		return UTelemetryInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTelemetryInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTelemetryInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketTelemetry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelemetryInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TelemetryInstance.h" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTelemetryInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelemetryInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTelemetryInstance_Statics::ClassParams = {
		&UTelemetryInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTelemetryInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTelemetryInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTelemetryInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTelemetryInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTelemetryInstance, 2842683459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTelemetryInstance(Z_Construct_UClass_UTelemetryInstance, &UTelemetryInstance::StaticClass, TEXT("/Script/SocketTelemetry"), TEXT("UTelemetryInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTelemetryInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
