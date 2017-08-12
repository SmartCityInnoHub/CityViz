// Fill out your copyright notice in the Description page of Project Settings.

#include "Building.h"
#include "UObject/ConstructorHelpers.h"
#include "WidgetComponent.h"

ABuilding::ABuilding() {

	static ConstructorHelpers::FClassFinder<UInfoWindow> WidgetClassFinder(TEXT("/Game/UserWidget/BPInfoWindow"));
	if (WidgetClassFinder.Succeeded()) {
		WidgetClass = WidgetClassFinder.Class;
	}
}

void ABuilding::BeginPlay() {
	Super::BeginPlay();
	BasicInfoWindow = CreateWidget<UInfoWindow>(GetWorld()->GetFirstPlayerController(), WidgetClass);
	BasicInfoWindow->Title = Title;
	BasicInfoWindow->Content = Content;
	BasicInfoWindow->SetDesiredSizeInViewport(FVector2D(400.f, 600.f));
	BasicInfoWindow->InfoWindowVisibility = ESlateVisibility::Hidden;
	BasicInfoWindow->AddToViewport();
}

void ABuilding::ShowInfo_Implementation() {
	BasicInfoWindow->InfoWindowVisibility = ESlateVisibility::Visible;
}

void ABuilding::HideInfo_Implementation() {
	BasicInfoWindow->InfoWindowVisibility = ESlateVisibility::Hidden;
}

