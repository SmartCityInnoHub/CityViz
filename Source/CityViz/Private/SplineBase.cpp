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
	
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder;
		ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialFinder;
		FConstructorStatics()
			: MeshFinder(TEXT("StaticMesh'/Game/Downtown/Meshes/Road_Small_A.Road_Small_A'"))
			, MaterialFinder(TEXT("MaterialInstanceConstant'/Game/Downtown/Materials/RoadDecals_Inst.RoadDecals_Inst'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;
	MeshForSpline = ConstructorStatics.MeshFinder.Object;
	Material = ConstructorStatics.MaterialFinder.Object;
	PostProcessComponent->AddOrUpdateBlendable(OutlinePP);
}

void ASplineBase::OnConstruction(const FTransform& transform) {
	int oldPoint = SplinePath->GetNumberOfSplinePoints();
	for (int i = 0; i < oldPoint; i++) {
		SplinePath->RemoveSplinePoint(0);
	}

	for (int i = 0; i < SplinePoints.Num(); i++) {
		SplinePath->AddSplineWorldPoint(SplinePoints[i]);
	}

	if (SplineMeshes.Num() > 0) {
		for (int i = 0; i < SplineMeshes.Num(); i++) {
			SplineMeshes[i]->DestroyComponent();
		}
	}

	for (int i = 0; i < SplinePath->GetNumberOfSplinePoints() - 1; i++) {
		auto SplineMesh = NewObject<USplineMeshComponent>(RootComponent, USplineMeshComponent::StaticClass());
		SplineMesh->SetMobility(EComponentMobility::Movable);
		SplineMesh->CreationMethod = EComponentCreationMethod::UserConstructionScript;
		SplineMesh->SetStaticMesh(MeshForSpline);
		FVector Location, Tangent, LocationNext, TangentNext;
		SplinePath->GetLocalLocationAndTangentAtSplinePoint(i, Location, Tangent);
		SplinePath->GetLocalLocationAndTangentAtSplinePoint(i + 1, LocationNext, TangentNext);
		SplineMesh->SetStartAndEnd(Location, Tangent, LocationNext, TangentNext);
		SplineMesh->SetStartScale(FVector2D(SplinePoints[i].W, SplinePoints[i].W));
		SplineMesh->SetEndScale(FVector2D(SplinePoints[i+1].W, SplinePoints[i+1].W));
		SplineMesh->SetCollisionProfileName("ActiveElement");
		SplineMesh->SetMaterial(0, Material);
		SplineMesh->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
		PostProcessComponent->AttachToComponent(SplineMesh, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
		SplineMeshes.Add(SplineMesh);
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

void ASplineBase::Activate_Implementation() {
	isActive = true;
	for (int i = 0; i < SplineMeshes.Num(); i++) {
		SplineMeshes[i]->bRenderCustomDepth = true;
		SplineMeshes[i]->MarkRenderStateDirty();
	}
}

void ASplineBase::Deactivate_Implementation() {
	isActive = false;
	for (int i = 0; i < SplineMeshes.Num(); i++) {
		SplineMeshes[i]->bRenderCustomDepth = false;
		SplineMeshes[i]->MarkRenderStateDirty();
	}
}

void ASplineBase::ApplySettings(TArray<FVector4> points, UStaticMesh* mesh, UMaterialInstanceConstant* mat) {
	SplinePoints = points;
	MeshForSpline = mesh;
	Material = mat;
	this->OnConstruction(this->GetTransform());
}

