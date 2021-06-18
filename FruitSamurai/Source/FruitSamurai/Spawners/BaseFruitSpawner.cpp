// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseFruitSpawner.h"

// Sets default values
ABaseFruitSpawner::ABaseFruitSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseFruitSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

FTransform ABaseFruitSpawner::GetSpawnTransform()
{
	float SpawnAngleRangeHalf = SpawnAngleRange / 2.0f;
	float SpawnYLocationRangeHalf = SpawnYLocationRange / 2.0f;

	float LocationY = FMath::FRandRange(-(SpawnYLocationRange / 2.0f), SpawnYLocationRangeHalf);
	FVector Location = FVector(SpawnXLocation, LocationY, SpawnZLocation);

	float SpawnAngleTilt = MaxSpawnAngleTilt * -(LocationY / SpawnYLocationRangeHalf);
	float RotationRoll = FMath::FRandRange(SpawnAngleTilt - SpawnAngleRangeHalf, SpawnAngleTilt + SpawnAngleRangeHalf);
	FRotator Rotation = FRotator(0.0f, 0.0f, RotationRoll);

	return FTransform(Rotation, Location);
}

// Called every frame
void ABaseFruitSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}