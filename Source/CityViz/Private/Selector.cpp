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

	static ConstructorHelpers::FClassFinder<UInfoWindow> WidgetAsset(TEXT("/Game/BPInfoWindow"));
	if (WidgetAsset.Succeeded())
	{
		WidgetClass = WidgetAsset.Class;
	}
	CurrentActiveElement = nullptr;
}

// Called when the game starts or when spawned
void ASelector::BeginPlay()
{
	Super::BeginPlay();
	controller = GetWorld()->GetFirstPlayerController();
	if (WidgetClass) // Check if the Asset is assigned in the blueprint.
	{
		// Create the widget and store it.
		InfoWindow = CreateWidget<UInfoWindow>(controller, WidgetClass);
		// now you can use the widget directly since you have a referance for it.
		// Extra check to  make sure the pointer holds the widget.
		if (InfoWindow)
		{
			InfoWindow->Title = "Test";
			InfoWindow->Content = "eiei";
			InfoWindow->SetDesiredSizeInViewport(FVector2D(400, 600));
			InfoWindow->AddToViewport();
		}

		
	}
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
		pos + (dir * 1000),
		ECollisionChannel::ECC_GameTraceChannel2
	);

	if (hit) {
		UE_LOG(LogTemp, Warning, TEXT("%s"), *out.GetActor()->GetName());
		AActiveElement *a = Cast<AActiveElement>(out.GetActor());
		if (a != CurrentActiveElement) {
			if (CurrentActiveElement != nullptr) {
				CurrentActiveElement->Deactivate();
			}
			InfoWindow->Title = a->GetName();
			InfoWindow->Content = a->GetActorLabel();
			a->Activate();
			CurrentActiveElement = a;
			InfoWindow->InfoWindowVisibility = ESlateVisibility::Visible;
		}
	}
	else {
		if (CurrentActiveElement != nullptr) {
			CurrentActiveElement->Deactivate();
			CurrentActiveElement = nullptr;
			InfoWindow->InfoWindowVisibility = ESlateVisibility::Collapsed;
		}
	}
}

