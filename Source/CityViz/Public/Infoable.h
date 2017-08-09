// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Infoable.generated.h"

/**
 * Interface class for object that can show info
 * Activate when mouse point to
 * Deactivate when mouse out
 * And showinfo on screen somehow
 */
UINTERFACE(BlueprintType)
class CITYVIZ_API UInfoable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class CITYVIZ_API IInfoable
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Activate();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Deactivate();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void ShowInfo();
};
