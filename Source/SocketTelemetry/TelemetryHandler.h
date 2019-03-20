// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SocketIOClientComponent.h"
#include "TelemetryHandler.generated.h"

UCLASS()
class SOCKETTELEMETRY_API ATelemetryHandler : public AActor
																				{
	GENERATED_BODY()
	
public																			:	
	// Sets default values for this actor's properties
	ATelemetryHandler(const FObjectInitializer& ObjectInitializer)															;

	UPROPERTY(BlueprintReadOnly)
		USocketIOClientComponent * SocketComponent								;
	bool Connect_Internal(FString IP, int32 Port)								;
protected																		:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override											;

public																			:	
	// Called every frame
	virtual void Tick(float DeltaTime) override									;

																				};


