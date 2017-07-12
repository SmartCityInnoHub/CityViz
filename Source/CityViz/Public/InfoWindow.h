// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "Visibility.h"
#include "InfoWindow.generated.h"

/**
 * 
 */
UCLASS()
class CITYVIZ_API UInfoWindow : public UUserWidget
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Simple Window Widget")
		FString Title;

	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Simple Window Widget")
		FString Content;
	
	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Simple Window Widget", meta = (AllowPrivateAccess = "true"))
		ESlateVisibility InfoWindowVisibility;
};
