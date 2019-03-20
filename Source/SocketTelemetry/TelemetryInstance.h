/* Authored by Aiden Soedjarwo (SquarerFive)
   Last Modified: 20/03/2019
   Language: C++

   Notice:
   Code is provided as is. There is no warranty that the following code
   will work on all platforms/devices.
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TelemetryInstance.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FUserData										{
	GENERATED_BODY()
	FString AuthorizationCode							;
	// Authorization code will only exist in C++.
	FString UserName									;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int32 Rank										;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Xp										;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float XpToNextRank								;
	FUserData()
														{
		AuthorizationCode = TEXT("None")				;
		UserName = "Name"								;
		Rank = 0										;
		Xp = 0.f										;
		XpToNextRank = 1.f								;
														}
														};


UCLASS()
class SOCKETTELEMETRY_API UTelemetryInstance : 
						public UGameInstance
														{
	GENERATED_BODY()
		bool Connect(FString IP, int32 Port)			;

														};
