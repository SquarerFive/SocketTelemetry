														/* Authored by Aiden S (SquarerFive)
														   Last Modified: 20/03/2019
														*/
#include "TelemetryHandler.h"
#include "Engine.h"
														// Sets default values
ATelemetryHandler::ATelemetryHandler
(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
												{
 	

	PrimaryActorTick.bCanEverTick = true		;
	SocketComponent = CreateDefaultSubobject
		<USocketIOClientComponent>
		(TEXT("SocketIOClientComponent"))
												;
	if (SocketComponent)
												{
		SocketComponent->
			bShouldAutoConnect = false			;
												}
												}

bool ATelemetryHandler
::Connect_Internal(FString IP, int32 Port)
												{
	if(!SocketComponent->IsValidLowLevel())
	return false								;
	FString Address = FString("http://").Append(IP).Append(FString(":")).Append(FString::FromInt(Port));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Address);
	/*
	SocketComponent->Connect((TEXT
	("http://%s:%s/"), IP, FString			    ::
		FromInt(Port)))							;

	
	*/
	SocketComponent->Connect(Address)			;
	return SocketComponent->bIsConnected		;
												}

													   // Called when the game starts or when spawned
void ATelemetryHandler::BeginPlay()
												{      /* May move this to initialization */
	Super::BeginPlay()							;
	
												} 

													
void ATelemetryHandler::Tick(float DeltaTime)
												{
	Super::Tick(DeltaTime)						;

												}

