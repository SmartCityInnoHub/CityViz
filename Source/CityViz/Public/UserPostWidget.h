// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "Blueprint/UserWidget.h"
#include "UserPostWidget.generated.h"

/**
 * 
 */
UCLASS()
class CITYVIZ_API UUserPostWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget content")
		FString UserName;

	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Widget content")
		FString Message;

	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Widget content")
		UImage* Image;
	
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Settings")
		float DisplayTime;

	bool IsExpire;

protected:
	float displayTimePassed;
};