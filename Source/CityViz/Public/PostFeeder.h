// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserPostWidget.h"
#include "Components/WidgetComponent.h"
#include "PostFeeder.generated.h"

UCLASS()
class CITYVIZ_API APostFeeder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APostFeeder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float drainTimeCount;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ShowPostWidget();
	virtual void RemoveExpiredPostWidget(int i);
	virtual void AdjustWidgetAngle(int i);

	UPROPERTY(EditAnywhere, Category = "Settings")
	int DisplayLimit;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float ChannelDrainInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TSubclassOf<class UUserWidget> UserPostWidgetClass;
	
	TArray<UWidgetComponent *> AllWidgets;

	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Data")
	//TODO:Convert to post data structure later
	TArray<FString> PostChannel;
};
