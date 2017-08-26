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
		TArray<FVector> v3;
		for (int i = 0; i < RoadNode.Num(); i++) {
			v3.Add(FVector(RoadNode[i].X, RoadNode[i].Y, RoadNode[i].Z));
		}
		TrafficRenderer->ApplySettings(v3, Period, Count, Velocity);
	}
	else {
		TrafficRenderer = GetWorld()->SpawnActor<ATraffic>(params);
		TrafficRenderer->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
	}

	if (RoadSpline) {
		RoadSpline->ApplySettings(RoadNode, RoadSplineMesh, Material);
	}
	else {
		RoadSpline = GetWorld()->SpawnActor<ASplineBase>(params);
		RoadSpline->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
	}
}

void ARoad::BeginPlay() {
	Super::BeginPlay();
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

