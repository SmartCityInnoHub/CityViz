// Fill out your copyright notice in the Description page of Project Settings.

#include "CityVizMapObject.h"
#include "UObject/ConstructorHelpers.h"
#include "Classes/Components/SceneComponent.h"
#include "Classes/Components/PostProcessComponent.h"


// Sets default values
ACityVizMapObject::ACityVizMapObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent->Mobility = EComponentMobility::Static;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetCollisionProfileName(TEXT("ActiveElement"));
	MeshComponent->Mobility = EComponentMobility::Static;

	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> Material(TEXT("MaterialInstanceConstant'/Game/Materials/Outline/PP_Outliner_Inst.PP_Outliner_Inst'"));
	if (Material.Object) {
		PostProcessComponent->AddOrUpdateBlendable(Material.Object);
		PostProcessComponent->SetupAttachment(MeshComponent);
	}

}

void ACityVizMapObject::OnConstruction(const FTransform& transform) {
	
	if (Mesh != nullptr) {
		MeshComponent->SetStaticMesh(Mesh);
		MeshComponent->SetRelativeLocation(LocationOffset);
	}
	
}

// Called when the game starts or when spawned
void ACityVizMapObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Activate when mouse over
void ACityVizMapObject::Activate_Implementation() {
	isActive = true;
	MeshComponent->bRenderCustomDepth = true;
	MeshComponent->MarkRenderStateDirty();
}

void ACityVizMapObject::Deactivate_Implementation() {
	isActive = false;
	MeshComponent->bRenderCustomDepth = false;
	MeshComponent->MarkRenderStateDirty();
}

void ACityVizMapObject::ShowInfo_Implementation() {
	UE_LOG(LogTemp, Warning, TEXT("Show info implementation"))
}

void ACityVizMapObject::HideInfo_Implementation() {
	UE_LOG(LogTemp, Warning, TEXT("Hide info implementation"))
}