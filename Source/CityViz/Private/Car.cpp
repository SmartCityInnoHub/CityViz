// Fill out your copyright notice in the Description page of Project Settings.

#include "Car.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	Root = RootComponent;

	UStaticMeshComponent* Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	struct FConstructorStatics {
		ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder;
		ConstructorHelpers::FObjectFinder<UMaterial> MatFinder;
		ConstructorHelpers::FObjectFinder<UTexture> BaseFinder;
		ConstructorHelpers::FObjectFinder<UTexture> CompactFinder;
		ConstructorHelpers::FObjectFinder<UTexture> NormalFinder;
		FConstructorStatics()
			: MeshFinder(TEXT("StaticMesh'/Game/DownTown/Meshes/Vehicle_A.Vehicle_A'"))
			, MatFinder(TEXT("Material'/Game/Materials/Car_Mat.Car_Mat'"))
			, BaseFinder(TEXT("Texture2D'/Game/Downtown/Textures/Vehicle_A_A.Vehicle_A_A'"))
			, CompactFinder(TEXT("Texture2D'/Game/Downtown/Textures/Vehicle_A_C.Vehicle_A_C'"))
			, NormalFinder(TEXT("Texture2D'/Game/Downtown/Textures/Vehicle_N.Vehicle_N'"))
		{}
	};
	static FConstructorStatics ConstructorStatics;
	Body->SetStaticMesh(ConstructorStatics.MeshFinder.Object);
	Body->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
	Body->AddLocalRotation(FRotator(0.f, 90.f, 0.f));
	Body->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));

	matInst = UMaterialInstanceDynamic::Create(ConstructorStatics.MatFinder.Object, Body);
	matInst->SetTextureParameterValue(FName("Base Color"), ConstructorStatics.BaseFinder.Object);
	matInst->SetTextureParameterValue("Compact", ConstructorStatics.CompactFinder.Object);
	matInst->SetTextureParameterValue("Normal", ConstructorStatics.NormalFinder.Object);
	float red = FMath::RandRange(0.f, 1.);
	float green = FMath::RandRange(0.f, 1.f);
	float blue = FMath::RandRange(0.f, 1.f);
	matInst->SetVectorParameterValue("Tint Color", FLinearColor(red, green, blue, 1.f));
	Body->SetMaterial(0, matInst);


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

