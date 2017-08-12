// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CityVizMapObject.h"
#include "InfoWindow.h"
#include "WidgetComponent.h"
#include "Building.generated.h"

/**
 * 
 */
UCLASS()
class CITYVIZ_API ABuilding : public ACityVizMapObject
{
	GENERATED_BODY()
	
public:
	ABuilding();
	virtual void BeginPlay() override;
	virtual void ShowInfo_Implementation() override;
	virtual void HideInfo_Implementation() override;
	
	UInfoWindow* BasicInfoWindow;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> WidgetClass;
	UPROPERTY(EditAnywhere)
		UWidgetComponent* WidgetComponent;
	UPROPERTY(EditAnywhere)
		FString Title;
	UPROPERTY(EditAnywhere)
		FString Content;
};
