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
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/DownTown/Meshes/Vehicle_A.Vehicle_A'"));
	if (Mesh.Succeeded()) {
		Body->SetStaticMesh(Mesh.Object);
		Body->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
		Body->AddLocalRotation(FRotator(0.f, 90.f, 0.f));
		Body->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	}

	CurrentWayPointIndex = 1;
}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
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

