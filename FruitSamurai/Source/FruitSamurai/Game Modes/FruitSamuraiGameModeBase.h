// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FruitSamuraiGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FRUITSAMURAI_API AFruitSamuraiGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable, Category = "Game Flow")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "Game Flow")
	void EndGame(int FinalScore);

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Flow")
	void OnStartGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "Game Flow")
	void OnEndGame(int FinalScore);
};