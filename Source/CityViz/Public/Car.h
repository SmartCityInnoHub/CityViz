// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Car.generated.h"

UCLASS()
class CITYVIZ_API ACar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float wayPointLength;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
	TArray<FVector> WayPoints;

	UPROPERTY(EditAnywhere)
	float Velocity;

	int CurrentWayPointIndex;

	
};
