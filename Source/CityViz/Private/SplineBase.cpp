// Fill out your copyright notice in the Description page of Project Settings.

#include "SplineBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Classes/Components/SplineMeshComponent.h"

// Sets default values
ASplineBase::ASplineBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
	SplinePath->AddSplinePoint(FVector(0.f, 0.f, 10.f), ESplineCoordinateSpace::Type::World);
	SplinePath->AddSplinePoint(FVector(250.f, 100.f, 10.f), ESplineCoordinateSpace::Type::World);
	SplinePath->AddSplinePoint(FVector(-100.f, 450.f, 10.f), ESplineCoordinateSpace::Type::World);
	
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder;
		ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialFinder;
		FConstructorStatics()
			: MeshFinder(TEXT("StaticMesh'/Engine/EditorLandscapeResources/FlattenPlaneMesh.FlattenPlaneMesh'"))
			, MaterialFinder(TEXT("MaterialInstanceConstant'/Game/Meterial/Street/StreetInstance.StreetInstance'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;
	Mesh = ConstructorStatics.MeshFinder.Object;
	Material = ConstructorStatics.MaterialFinder.Object;
	
	for (int i = 0; i < SplinePath->GetNumberOfSplinePoints() - 1; i++) {
		USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(SplinePath, USplineMeshComponent::StaticClass());
		SplineMesh->CreationMethod = EComponentCreationMethod::UserConstructionScript;
		SplineMesh->SetStaticMesh(Mesh);
		FVector Location, Tangent, LocationNext, TangentNext;
		SplinePath->GetLocalLocationAndTangentAtSplinePoint(i, Location, Tangent);
		SplinePath->GetLocalLocationAndTangentAtSplinePoint(i + 1, LocationNext, TangentNext);
		SplineMesh->SetStartAndEnd(Location, Tangent, LocationNext, TangentNext);
		SplineMesh->SetMaterial(0, Material);
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

