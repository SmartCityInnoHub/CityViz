// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveElement.h"
#include "Engine/StaticMesh.h"
#include "Car.h"
#include "Traffic.generated.h"

/**
 * 
 */
UCLASS()
class CITYVIZ_API ATraffic : public AActiveElement
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void SetupActor() override;

public:
	UPROPERTY(EditAnywhere)
		UStaticMesh* RoadMesh;
	
	UPROPERTY(EditAnywhere)
		TArray<ACar *> Cars;

	UPROPERTY(EditAnywhere)
		float Density;
	
};
