// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserPost.h"
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

	UPROPERTY(EditAnywhere, Category = "Settings")
	float PostLifeSpan;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float ChannelDrainInterval;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float WidgetZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TSubclassOf<class UUserWidget> UserPostWidgetClass;

	//TODO:Convert to post data structure later
	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Data")
	TArray<FString> PostChannel;
};