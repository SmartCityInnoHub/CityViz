// Fill out your copyright notice in the Description page of Project Settings.

#include "Traffic.h"

void ATraffic::SetupActor() {
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));

}

void ATraffic::BeginPlay() {
	Super::BeginPlay();

	//Create some cars
	for (int i = 0; i < 20; i++) {
		ACar* car = GetWorld()->SpawnActor<ACar>();
		car->WayPoints.Add(FVector(0, 0, 0));
		car->WayPoints.Add(FVector(300, 0, 0));
		car->WayPoints.Add(FVector(400, -300, 0));
		car->WayPoints.Add(FVector(-500, 0, 0));
		car->WayPoints.Add(FVector(0, 0, 0));
		car->Velocity = 80.0f;
		Cars.Add(car);
	}
}