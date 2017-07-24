// Fill out your copyright notice in the Description page of Project Settings.

#include "SplineBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Classes/Components/SplineMeshComponent.h"
#include "Classes/Components/StaticMeshComponent.h"


// Sets default values
ASplineBase::ASplineBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
	SplinePath->AddSplinePoint(FVector(0.f, 0.f, 0.f), ESplineCoordinateSpace::Type::World);
	SplinePath->AddSplinePoint(FVector(250.f, 100.f, 0.f), ESplineCoordinateSpace::Type::World);
	SplinePath->AddSplinePoint(FVector(-100.f, 450.f, 0.f), ESplineCoordinateSpace::Type::World);

	UStaticMesh* mesh = nullptr;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("/Engine/BasicShapes/Cube"));
	if (Mesh.Succeeded()) {
		mesh = Mesh.Object;
	}
	for (int i = 0; i < SplinePath->GetNumberOfSplinePoints(); i++) {
		//USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(SplinePath, USplineComponent::StaticClass());
		//SplineMesh->SetStaticMesh(mesh);
		
	}
}

// Called when the game starts or when spawned
void ASplineBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplineBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

