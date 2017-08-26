// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CityVizMapObject.h"
#include "Classes/Components/SplineComponent.h"
#include "Classes/Components/SplineMeshComponent.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "Classes/Components/PostProcessComponent.h"
#include "Classes/Materials/MaterialInstanceConstant.h"
#include "SplineBase.generated.h"

UCLASS()
class CITYVIZ_API ASplineBase : public ACityVizMapObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplineBase();

protected:
	// Called when the game starts or when spawned
	virtual void OnConstruction(const FTransform& transform) override;
	virtual void BeginPlay() override;

public:	
	virtual void ApplySettings(TArray<FVector4> points, UStaticMesh* mesh, UMaterialInstanceConstant* mat);
	virtual void Activate_Implementation() override;
	virtual void Deactivate_Implementation() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TArray<USplineMeshComponent*> SplineMeshes;

	UPROPERTY(EditAnywhere)
		USplineComponent* SplinePath;

	UPROPERTY(EditAnywhere)
		UStaticMesh* MeshForSpline;

	UPROPERTY(EditAnywhere)
		UMaterialInstanceConstant* Material;

	UPROPERTY(EditAnywhere)
		TArray<FVector4> SplinePoints;
};
