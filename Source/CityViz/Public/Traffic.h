// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveElement.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "Car.h"
#include "Traffic.generated.h"

/**
 * 
 */
UCLASS()
class CITYVIZ_API ATraffic : public AActor
{
	GENERATED_BODY()

public:
	ATraffic();
protected:
	virtual void BeginPlay() override;

public:
	virtual void ApplySettings(TArray<FVector> node, float carPeriod, float carCount, float carVelocity);
	void SpawnCar();

	UPROPERTY(EditAnywhere)
		TArray<FVector> PointsBelongToSensor;
	
	UPROPERTY(EditAnywhere)
		TArray<ACar *> Cars;

	UPROPERTY(EditAnywhere)
		float Period; //Average period of time per car (1/freq)
	
	UPROPERTY(EditAnywhere)
		float Count; //Car count along entire road

	UPROPERTY(EditAnywhere)
		float Velocity; //Average car speed
};
