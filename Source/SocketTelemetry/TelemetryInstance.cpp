// Notice in Header.

#include "TelemetryInstance.h"
#include "MoviePlayer.h"
#include "EngineUtils.h"
UTelemetryInstance::UTelemetryInstance()
{
	

}

void UTelemetryInstance::Init()
																{
	Super::Init()												;
	FCoreUObjectDelegates::PreLoadMap.AddUObject
	(this, &UTelemetryInstance::OnLevelLoad)					;
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject
	(this, &UTelemetryInstance::OnLevelFinishLoad)				;
																}


bool UTelemetryInstance::Connect(FString IP, int32 Port)
																{
	/* if (!SocketComponent->IsValidLowLevel()) { return false ;}
	SocketComponent->Connect
	((TEXT("http://%s:%s/"),IP,FString::FromInt(Port)))			;
	return true													;
	*/
	if (TelemetryHandlerActor)
	{
		GEngine->AddOnScreenDebugMessage
		(-1, 5.f, FColor::Red, 
			TEXT("Connecting..."));
		return TelemetryHandlerActor->Connect_Internal(IP, Port);
	}
	if (!TelemetryHandlerActor)
																{
		PrintToScreen("TelemetryHandler Not Valid!")			;
		
		return false     										;
																}
	return false												;
																}
void UTelemetryInstance::GamePostInit_Implementation()
																{
	
																}
void UTelemetryInstance::OnLevelLoad(const FString & MapName)
																{
	FLoadingScreenAttributes LoadAttr							;
	LoadAttr.bAutoCompleteWhenLoadingCompletes = false			;
	if (refInitLoadWidget)
																{
		InitLoadWidget = CreateWidget<UUserWidget>
			(this, refInitLoadWidget)							;
		if (InitLoadWidget)
																{
			LoadAttr.WidgetLoadingScreen = InitLoadWidget->
				TakeWidget()									;
			GetMoviePlayer()->SetupLoadingScreen(LoadAttr)		;
																}
																}
	else														{
		LoadAttr.WidgetLoadingScreen = 
			FLoadingScreenAttributes::
			NewTestLoadingScreenWidget()						;
																}
																}
void UTelemetryInstance::
OnLevelFinishLoad(UWorld*InLoadedWorld)							{
	FTimerHandle TimePostHandler								;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Test"));

	//GamePostInit()											;
	UWorld * World = GEngine->GetWorldFromContextObject
	(GetPrimaryPlayerController())								;

	Internal_GamePostInit(World)								; // Call from GameMode.
	PrintToScreen(World->GetName());
																}

void UTelemetryInstance::Internal_GamePostInit(UWorld * World)  {
	if (World)
																{
		PrintToScreen("World is valid")							;
																}
	FVector Loc(0.f, 0.f, 0.f)									;
	FRotator Rot(0.f, 0.f, 0.f)									;
	FActorSpawnParameters SpawnParams							;
	//if (!GEngine->GetWorld()->IsValidLowLevel()) return		;
	GEngine->AddOnScreenDebugMessage(-1,
		5.f, FColor::Green, TEXT("Post Init Success"))			;
	TelemetryHandlerActor = World->
		SpawnActor<ATelemetryHandler>
		(Loc, Rot, SpawnParams)									;
	for (TActorIterator<ATelemetryHandler>
		ActorItr(World); ActorItr; ++ActorItr)
																{
		if (ActorItr)
																{
			TelemetryHandlerActor = *ActorItr					;
			GamePostInit()										;
			return												;
																}
																}
	GamePostInit()												;
	return														;
																}
void UTelemetryInstance::PrintToScreen(FString Message,FColor Colour)
																{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, Colour, Message);
																}
void UTelemetryInstance::SetTelemetryHandlerActor
(ATelemetryHandler * TeleHandler)								{
	if (!TeleHandler)
	{
		return;
	}
	TelemetryHandlerActor = TeleHandler							;
																}