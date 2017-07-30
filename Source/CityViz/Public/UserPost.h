// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserPostWidget.h"
#include "UserWidget.h"
#include "WidgetComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "UserPost.generated.h"

UCLASS()
class CITYVIZ_API AUserPost : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUserPost();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void LookAtScreen();
	void SetPostMessage(FString message);
	void SetPostUser(FString username);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
		TSubclassOf<class UUserWidget> UserPostWidgetClass;

	UWidgetComponent* PostWidgetComponent;
	UUserPostWidget* Widget;
};
