// Copyright Epic Games, Inc. All Rights Reserved.


#include "FruitSamuraiGameModeBase.h"

void AFruitSamuraiGameModeBase::StartGame()
{
	OnStartGame();
}

void AFruitSamuraiGameModeBase::EndGame(int FinalScore)
{
	OnEndGame(FinalScore);
}