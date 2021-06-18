// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseFruitSpawner.generated.h"

UCLASS()
class FRUITSAMURAI_API ABaseFruitSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseFruitSpawner();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawn Transform Parameters")
	float SpawnAngleRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawn Transform Parameters")
	float MaxSpawnAngleTilt;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawn Transform Parameters")
	float SpawnYLocationRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawn Transform Parameters")
	float SpawnXLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawn Transform Parameters")
	float SpawnZLocation;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FTransform GetSpawnTransform();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
