// Fill out your copyright notice in the Description page of Project Settings.

#include "Road.h"
#include "UObject/ConstructorHelpers.h"

ARoad::ARoad() {
	static ConstructorHelpers::FClassFinder<UInfoWindow> WidgetClassFinder(TEXT("/Game/UserWidget/BPInfoWindow"));
	if (WidgetClassFinder.Succeeded()) {
		WidgetClass = WidgetClassFinder.Class;
	}
}

void ARoad::OnConstruction(const FTransform& f) {
	auto params = FActorSpawnParameters();
	params.bAllowDuringConstructionScript = true;
	params.Owner = this;
	if (TrafficRenderer) {
		TrafficRenderer->ApplySettings(RoadNode, Period, Count, Velocity);
	}
	else {
		TrafficRenderer = GetWorld()->SpawnActor<ATraffic>(params);
		TrafficRenderer->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}

	if (RoadSpline) {
		RoadSpline->ApplySettings(RoadNode, RoadSplineMesh, Material);
	}
	else {
		RoadSpline = GetWorld()->SpawnActor<ASplineBase>(params);
		RoadSpline->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}
}

void ARoad::BeginPlay() {
	Super::BeginPlay();

	RoadSpline = GetWorld()->SpawnActor<ASplineBase>();
	RoadSpline->ApplySettings(RoadNode, RoadSplineMesh, Material);

	BasicInfoWindow = CreateWidget<UInfoWindow>(GetWorld()->GetFirstPlayerController(), WidgetClass);
	BasicInfoWindow->Title = Title;
	BasicInfoWindow->Content = Content;
	BasicInfoWindow->SetDesiredSizeInViewport(FVector2D(400.f, 600.f));
	BasicInfoWindow->InfoWindowVisibility = ESlateVisibility::Hidden;
	BasicInfoWindow->AddToViewport();
}

void ARoad::ShowInfo_Implementation() {
	BasicInfoWindow->InfoWindowVisibility = ESlateVisibility::Visible;
}

void ARoad::HideInfo_Implementation() {
	BasicInfoWindow->InfoWindowVisibility = ESlateVisibility::Hidden;
}

