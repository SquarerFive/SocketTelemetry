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
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_Connect();
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_GamePostInit();
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad();
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad();
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_PrintToScreen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	SOCKETTELEMETRY_API UFunction* Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor();
	SOCKETTELEMETRY_API UClass* Z_Construct_UClass_ATelemetryHandler_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
	static FName NAME_UTelemetryInstance_GamePostInit = FName(TEXT("GamePostInit"));
	void UTelemetryInstance::GamePostInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTelemetryInstance_GamePostInit),NULL);
	}
	void UTelemetryInstance::StaticRegisterNativesUTelemetryInstance()
	{
		UClass* Class = UTelemetryInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UTelemetryInstance::execConnect },
			{ "GamePostInit", &UTelemetryInstance::execGamePostInit },
			{ "Internal_GamePostInit", &UTelemetryInstance::execInternal_GamePostInit },
			{ "OnLevelFinishLoad", &UTelemetryInstance::execOnLevelFinishLoad },
			{ "OnLevelLoad", &UTelemetryInstance::execOnLevelLoad },
			{ "PrintToScreen", &UTelemetryInstance::execPrintToScreen },
			{ "SetTelemetryHandlerActor", &UTelemetryInstance::execSetTelemetryHandlerActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTelemetryInstance_Connect_Statics
	{
		struct TelemetryInstance_eventConnect_Parms
		{
			FString IP;
			int32 Port;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TelemetryInstance_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TelemetryInstance_eventConnect_Parms), &Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventConnect_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_IP = { UE4CodeGen_Private::EPropertyClass::Str, "IP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventConnect_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
		{ "ToolTip", "Connect to data server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "Connect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TelemetryInstance_eventConnect_Parms), Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelemetryInstance_GamePostInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_GamePostInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
		{ "ToolTip", "Called after init." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_GamePostInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "GamePostInit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_GamePostInit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_GamePostInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_GamePostInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_GamePostInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics
	{
		struct TelemetryInstance_eventInternal_GamePostInit_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventInternal_GamePostInit_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "Internal_GamePostInit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TelemetryInstance_eventInternal_GamePostInit_Parms), Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics
	{
		struct TelemetryInstance_eventOnLevelFinishLoad_Parms
		{
			UWorld* InLoadedWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InLoadedWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::NewProp_InLoadedWorld = { UE4CodeGen_Private::EPropertyClass::Object, "InLoadedWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventOnLevelFinishLoad_Parms, InLoadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::NewProp_InLoadedWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "OnLevelFinishLoad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TelemetryInstance_eventOnLevelFinishLoad_Parms), Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics
	{
		struct TelemetryInstance_eventOnLevelLoad_Parms
		{
			FString MapName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::NewProp_MapName = { UE4CodeGen_Private::EPropertyClass::Str, "MapName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventOnLevelLoad_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "OnLevelLoad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TelemetryInstance_eventOnLevelLoad_Parms), Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics
	{
		struct TelemetryInstance_eventPrintToScreen_Parms
		{
			FString Message;
			FColor Colour;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colour;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::NewProp_Colour = { UE4CodeGen_Private::EPropertyClass::Struct, "Colour", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventPrintToScreen_Parms, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventPrintToScreen_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::NewProp_Colour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "PrintToScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(TelemetryInstance_eventPrintToScreen_Parms), Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_PrintToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_PrintToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics
	{
		struct TelemetryInstance_eventSetTelemetryHandlerActor_Parms
		{
			ATelemetryHandler* TeleHandler;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::NewProp_TeleHandler = { UE4CodeGen_Private::EPropertyClass::Object, "TeleHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TelemetryInstance_eventSetTelemetryHandlerActor_Parms, TeleHandler), Z_Construct_UClass_ATelemetryHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::NewProp_TeleHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetryInstance, "SetTelemetryHandlerActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TelemetryInstance_eventSetTelemetryHandlerActor_Parms), Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTelemetryInstance_NoRegister()
	{
		return UTelemetryInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTelemetryInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitLoadWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitLoadWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refInitLoadWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_refInitLoadWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTelemetryInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketTelemetry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTelemetryInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelemetryInstance_Connect, "Connect" }, // 1659024520
		{ &Z_Construct_UFunction_UTelemetryInstance_GamePostInit, "GamePostInit" }, // 3108008941
		{ &Z_Construct_UFunction_UTelemetryInstance_Internal_GamePostInit, "Internal_GamePostInit" }, // 2851977446
		{ &Z_Construct_UFunction_UTelemetryInstance_OnLevelFinishLoad, "OnLevelFinishLoad" }, // 3363522178
		{ &Z_Construct_UFunction_UTelemetryInstance_OnLevelLoad, "OnLevelLoad" }, // 982447555
		{ &Z_Construct_UFunction_UTelemetryInstance_PrintToScreen, "PrintToScreen" }, // 550995089
		{ &Z_Construct_UFunction_UTelemetryInstance_SetTelemetryHandlerActor, "SetTelemetryHandlerActor" }, // 1586239283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelemetryInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TelemetryInstance.h" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_InitLoadWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_InitLoadWidget = { UE4CodeGen_Private::EPropertyClass::Object, "InitLoadWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UTelemetryInstance, InitLoadWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_InitLoadWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_InitLoadWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_refInitLoadWidget_MetaData[] = {
		{ "Category", "TelemetryInstance" },
		{ "ModuleRelativePath", "TelemetryInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_refInitLoadWidget = { UE4CodeGen_Private::EPropertyClass::Class, "refInitLoadWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UTelemetryInstance, refInitLoadWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_refInitLoadWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_refInitLoadWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelemetryInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_InitLoadWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelemetryInstance_Statics::NewProp_refInitLoadWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTelemetryInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelemetryInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTelemetryInstance_Statics::ClassParams = {
		&UTelemetryInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTelemetryInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTelemetryInstance_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UTelemetryInstance, 3084195410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTelemetryInstance(Z_Construct_UClass_UTelemetryInstance, &UTelemetryInstance::StaticClass, TEXT("/Script/SocketTelemetry"), TEXT("UTelemetryInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTelemetryInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
