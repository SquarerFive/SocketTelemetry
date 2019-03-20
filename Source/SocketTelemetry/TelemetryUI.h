// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "TelemetryUI.generated.h"

/**
 * 
 */
UCLASS()
class SOCKETTELEMETRY_API ATelemetryUI : public AHUD
																	{
	GENERATED_BODY()
public																:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<class UUserWidget> refConnectionScreen			;
	UUserWidget * ConnectionScreen									;
	virtual void BeginPlay() override								;
																	};
