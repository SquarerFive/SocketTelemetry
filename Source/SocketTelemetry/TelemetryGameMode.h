// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TelemetryGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SOCKETTELEMETRY_API ATelemetryGameMode : public AGameModeBase
																		{
	GENERATED_BODY()
		ATelemetryGameMode()											;
																		public:
		virtual void BeginPlay() override								;
		virtual void PostLogin(APlayerController *NewPlayer) override   ;
		virtual void InitializeTelemetry()								; // Move this to GameInstance.
																		};
