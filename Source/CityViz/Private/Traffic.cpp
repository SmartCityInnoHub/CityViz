// Fill out your copyright notice in the Description page of Project Settings.

#include "Traffic.h"
#include "TimerManager.h"

void ATraffic::SetupActor() {
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));

}

void ATraffic::BeginPlay() {
	Super::BeginPlay();

	//Total road length
	float length = 0.f;
	for (int i = 1; i < PointsBelongToSensor.Num(); i++) {
		length += FVector::Dist(PointsBelongToSensor[i], PointsBelongToSensor[i - 1]);
	}

	//Create some cars
	TArray<FTimerHandle> timerHandlers;
	for (int i = 0; i < Count; i++) {
		float noise = FMath::RandRange(0.f, Period * 0.75f);
		FTimerHandle f;
		GetWorld()->GetTimerManager().SetTimer(f, this, &ATraffic::SpawnCar, Period, false, Period * i + noise);
	}
}

void ATraffic::SpawnCar() {
	ACar* car = GetWorld()->SpawnActor<ACar>();
	car->WayPoints = this->PointsBelongToSensor;
	car->Velocity = Velocity;
	Cars.Add(car);
	car->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
	car->Root->AddLocalOffset(FVector(100.0f, 0.f, 0.f));
}