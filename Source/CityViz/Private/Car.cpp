// Fill out your copyright notice in the Description page of Project Settings.

#include "Car.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	Root = RootComponent;

	UStaticMeshComponent* Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("/Game/Mesh/Car/free_cartoon_cars_pickup02"));
	if (Mesh.Succeeded()) {
		Body->SetStaticMesh(Mesh.Object);
		Body->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}

	UStaticMeshComponent* Wheel3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel3"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh2(TEXT("/Game/Mesh/Car/free_cartoon_cars_pickup02_wheel3_001"));
	if (Mesh2.Succeeded()) {
		Wheel3->SetStaticMesh(Mesh2.Object);
		Wheel3->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}

	UStaticMeshComponent* Wheel2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel2"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh3(TEXT("/Game/Mesh/Car/free_cartoon_cars_pickup02_wheel2_001"));
	if (Mesh3.Succeeded()) {
		Wheel2->SetStaticMesh(Mesh3.Object);
		Wheel2->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}

	UStaticMeshComponent* Wheel1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel1"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh4(TEXT("/Game/Mesh/Car/free_cartoon_cars_pickup02_wheel1_001"));
	if (Mesh4.Succeeded()) {
		Wheel1->SetStaticMesh(Mesh4.Object);
		Wheel1->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}

	CurrentWayPointIndex = 1;
}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
	
	if (WayPoints.Num() > 1) {
		SetActorLocation(WayPoints[0]);
		FVector v = GetActorLocation() - WayPoints[1];
		SetActorRotation(v.Rotation());
	}
}

// Called every frame
void ACar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (WayPoints.Num() > 1 && CurrentWayPointIndex < WayPoints.Num()) {
		float traveledDistance = FVector::Dist(GetActorLocation(), WayPoints[CurrentWayPointIndex-1]);
		float roadDistance = FVector::Dist(WayPoints[CurrentWayPointIndex], WayPoints[CurrentWayPointIndex-1]);
		if (roadDistance < traveledDistance) {
			if (CurrentWayPointIndex == WayPoints.Num() - 1) {
				CurrentWayPointIndex = 0;
				SetActorLocation(WayPoints[0]);
			}

			CurrentWayPointIndex += 1;
			FVector v = GetActorLocation() - WayPoints[CurrentWayPointIndex];
			SetActorRotation(v.Rotation());
		}

		FVector nextPosition = GetActorLocation() + ((WayPoints[CurrentWayPointIndex] - GetActorLocation()).GetSafeNormal() * Velocity * DeltaTime);
		SetActorLocation(nextPosition);
	}
}

