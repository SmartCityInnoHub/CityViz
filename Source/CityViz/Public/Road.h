// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CityVizMapObject.h"
#include "WidgetComponent.h"
#include "InfoWindow.h"
#include "Traffic.h"
#include "SplineBase.h"
#include "Road.generated.h"

/**
 * 
 */
UCLASS()
class CITYVIZ_API ARoad : public ACityVizMapObject
{
	GENERATED_BODY()
	
public:
	ARoad();
	virtual void OnConstruction(const FTransform& f);
	virtual void BeginPlay() override;
	virtual void ShowInfo_Implementation() override;
	virtual void HideInfo_Implementation() override;

	UInfoWindow* BasicInfoWindow;

	UPROPERTY(EditAnywhere, Category="RodeNode")
		TArray<FVector4> RoadNode;
	UPROPERTY(EditAnywhere, Category="ChildActor")
		ATraffic* TrafficRenderer;
	UPROPERTY(EditAnywhere, Category="ChildActor")
		ASplineBase* RoadSpline;

	UPROPERTY(EditAnywhere, Category="Traffic")
		float Period;
	UPROPERTY(EditAnywhere, Category = "Traffic")
		float Count;
	UPROPERTY(EditAnywhere, Category = "Traffic")
		float Velocity;

	UPROPERTY(EditAnywhere, Category="RoadSpline")
		UStaticMesh * RoadSplineMesh;
	UPROPERTY(EditAnywhere, Category = "RoadSpline")
		UMaterialInstanceConstant* Material;

	UPROPERTY(EditAnywhere, Category="Widget")
		TSubclassOf<UUserWidget> WidgetClass;
	UPROPERTY(EditAnywhere, Category = "Widget")
		UWidgetComponent* WidgetComponent;
	UPROPERTY(EditAnywhere, Category = "Widget")
		FString Title;
	UPROPERTY(EditAnywhere, Category = "Widget")
		FString Content;
};
