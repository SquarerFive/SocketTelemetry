														/* Authored by Aiden S (SquarerFive)
														   Last Modified: 20/03/2019
														*/
#include "TelemetryHandler.h"

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
	/*
	SocketComponent->Connect((TEXT
	("http://%s:%s/"), IP, FString			    ::
		FromInt(Port)))							;

	
	*/
	SocketComponent->Connect(FString("http://127.0.0.1:3000"));
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

