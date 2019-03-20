// Fill out your copyright notice in the Description page of Project Settings.

#include "TelemetryUI.h"

void ATelemetryUI::BeginPlay()
																				{
	Super::BeginPlay()															;
	if (refConnectionScreen)
																				{
		ConnectionScreen = CreateWidget(PlayerOwner, refConnectionScreen)		;
		if (ConnectionScreen)
																				{
			ConnectionScreen->AddToViewport(0);
																				}
																				}
																				}