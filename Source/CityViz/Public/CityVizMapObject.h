// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Infoable.h"
#include "Classes/Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "CityVizMapObject.generated.h"

UCLASS()
class CITYVIZ_API ACityVizMapObject : public AActor, public IInfoable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACityVizMapObject();

protected:
	// Called when the game starts or when spawned
	virtual void OnConstruction(const FTransform& transform) override;
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void Activate();
		virtual void Activate_Implementation() override;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void Deactivate();
		virtual void Deactivate_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ShowInfo();
		virtual void ShowInfo_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void HideInfo();
		virtual void HideInfo_Implementation() override;

public:
	//TArray<IInfoRenderer> InfoRenderers;
	//Enum InfoMode;
	bool isActive;
	UPROPERTY(EditAnywhere)
		FVector LocationOffset;
	UPROPERTY(EditAnywhere)
		UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshComponent;
};
