// Fill out your copyright notice in the Description page of Project Settings.

#include "Selector.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Visibility.h"
#include "EngineUtils.h"

// Sets default values
ASelector::ASelector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentActiveElement = nullptr;
}

// Called when the game starts or when spawned
void ASelector::BeginPlay()
{
	Super::BeginPlay();
	controller = GetWorld()->GetFirstPlayerController();
	//CurrentActiveElement = nullptr;
}

// Called every frame
void ASelector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector pos, dir;
	controller->DeprojectMousePositionToWorld(pos, dir);

	FHitResult out;

	bool hit = GetWorld()->LineTraceSingleByChannel(
		out,
		pos + (dir * 30),
		pos + (dir * 10000),
		ECollisionChannel::ECC_GameTraceChannel2
	);

	if (hit) {
		auto actor = out.GetActor();
		IInfoable* iinfoable = Cast<IInfoable>(actor);
		if (iinfoable != CurrentActiveElement) {
			if (CurrentActiveElement != nullptr) {
				CurrentActiveElement->Deactivate();
			}
			CurrentActiveElement = iinfoable;
			iinfoable->Execute_Activate(actor);
			iinfoable->Execute_ShowInfo(actor);
		}
	}
	else {
		if (CurrentActiveElement != nullptr) {
			CurrentActiveElement->Execute_Deactivate(Cast<AActor>(CurrentActiveElement));
			CurrentActiveElement->Execute_HideInfo(Cast<AActor>(CurrentActiveElement));
			CurrentActiveElement = nullptr;
		}
	}
}

