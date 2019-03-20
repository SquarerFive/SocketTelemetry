// Fill out your copyright notice in the Description page of Project Settings.

#include "TelemetryGameMode.h"
#include "TelemetryUI.h"
#include "TelemetryInstance.h"
#include "TimerManager.h"
ATelemetryGameMode::ATelemetryGameMode()
																		{
	HUDClass = ATelemetryUI::StaticClass()								;
																		}


void ATelemetryGameMode::BeginPlay()									{

	
	FTimerHandle TimeHandlerDelay;
	
	//GetWorldTimerManager().SetTimer(TimeHandlerDelay, this, &ATelemetryGameMode::InitializeTelemetry, 3.f);
	
																		}

void ATelemetryGameMode::PostLogin
(APlayerController *NewPlayer)
																		{
	Super::PostLogin(NewPlayer)											;
																		}

void ATelemetryGameMode::InitializeTelemetry()
{
	UTelemetryInstance * TelGameInstance = Cast<UTelemetryInstance>
		(GetGameInstance())												;
	if (TelGameInstance)
																		{
		//TelGameInstance->Internal_GamePostInit()						;
																		}
																		}
