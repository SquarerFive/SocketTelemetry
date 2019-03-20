// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATelemetryHandler;
struct FColor;
class UWorld;
#ifdef SOCKETTELEMETRY_TelemetryInstance_generated_h
#error "TelemetryInstance.generated.h already included, missing '#pragma once' in TelemetryInstance.h"
#endif
#define SOCKETTELEMETRY_TelemetryInstance_generated_h

#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserData_Statics; \
	SOCKETTELEMETRY_API static class UScriptStruct* StaticStruct();


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_RPC_WRAPPERS \
	virtual void GamePostInit_Implementation(); \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Test(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTelemetryHandlerActor) \
	{ \
		P_GET_OBJECT(ATelemetryHandler,Z_Param_TeleHandler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTelemetryHandlerActor(Z_Param_TeleHandler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintToScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_STRUCT(FColor,Z_Param_Colour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrintToScreen(Z_Param_Message,Z_Param_Colour); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInternal_GamePostInit) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Internal_GamePostInit(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLevelFinishLoad) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_InLoadedWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelFinishLoad(Z_Param_InLoadedWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLevelLoad) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelLoad(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGamePostInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GamePostInit_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_IP,Z_Param_Port); \
		P_NATIVE_END; \
	}


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GamePostInit_Implementation(); \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Test(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTelemetryHandlerActor) \
	{ \
		P_GET_OBJECT(ATelemetryHandler,Z_Param_TeleHandler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTelemetryHandlerActor(Z_Param_TeleHandler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintToScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_STRUCT(FColor,Z_Param_Colour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrintToScreen(Z_Param_Message,Z_Param_Colour); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInternal_GamePostInit) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Internal_GamePostInit(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLevelFinishLoad) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_InLoadedWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelFinishLoad(Z_Param_InLoadedWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLevelLoad) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelLoad(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGamePostInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GamePostInit_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_IP,Z_Param_Port); \
		P_NATIVE_END; \
	}


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_EVENT_PARMS
#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_CALLBACK_WRAPPERS
#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelemetryInstance(); \
	friend struct Z_Construct_UClass_UTelemetryInstance_Statics; \
public: \
	DECLARE_CLASS(UTelemetryInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SocketTelemetry"), NO_API) \
	DECLARE_SERIALIZER(UTelemetryInstance)


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUTelemetryInstance(); \
	friend struct Z_Construct_UClass_UTelemetryInstance_Statics; \
public: \
	DECLARE_CLASS(UTelemetryInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SocketTelemetry"), NO_API) \
	DECLARE_SERIALIZER(UTelemetryInstance)


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTelemetryInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTelemetryInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelemetryInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelemetryInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelemetryInstance(UTelemetryInstance&&); \
	NO_API UTelemetryInstance(const UTelemetryInstance&); \
public:


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelemetryInstance(UTelemetryInstance&&); \
	NO_API UTelemetryInstance(const UTelemetryInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelemetryInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelemetryInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTelemetryInstance)


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_PRIVATE_PROPERTY_OFFSET
#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_50_PROLOG \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_EVENT_PARMS


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_PRIVATE_PROPERTY_OFFSET \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_RPC_WRAPPERS \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_CALLBACK_WRAPPERS \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_INCLASS \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_PRIVATE_PROPERTY_OFFSET \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_CALLBACK_WRAPPERS \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_INCLASS_NO_PURE_DECLS \
	SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SocketTelemetry_Source_SocketTelemetry_TelemetryInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
