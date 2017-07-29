// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Classes/Components/SplineComponent.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "Classes/Materials/MaterialInstanceConstant.h"
#include "SplineBase.generated.h"

UCLASS()
class CITYVIZ_API ASplineBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplineBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		USplineComponent* SplinePath;
	
	UPROPERTY(EditAnywhere)
		UStaticMesh * Mesh;

	UPROPERTY(EditAnywhere)
		UMaterialInstanceConstant* Material;
};
