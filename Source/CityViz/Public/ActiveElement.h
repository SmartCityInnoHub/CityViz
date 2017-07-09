// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PostProcessComponent.h"
#include "ActiveElement.generated.h"

UCLASS()
class CITYVIZ_API AActiveElement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActiveElement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TScriptInterface<IBlendableInterface> FocusBlend;

	UPROPERTY(EditAnywhere)
		UPostProcessComponent *PostProcessComponent;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent *RootMesh;

	UPROPERTY(EditAnywhere)
		FString ElementName;

	UPROPERTY(EditAnywhere)
		FString ElementContent;

	bool isActive;
	virtual void Activate();
	virtual void Deactivate();
	virtual void SetContent(FString, FString);
};
