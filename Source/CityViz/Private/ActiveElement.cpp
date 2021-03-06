// Fill out your copyright notice in the Description page of Project Settings.

#include "ActiveElement.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstance.h"
#include "EngineUtils.h"

// Sets default values
AActiveElement::AActiveElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetupActor();
}

// Called when the game starts or when spawned
void AActiveElement::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AActiveElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActiveElement::Activate() {
	if (!isActive) {
		UE_LOG(LogTemp, Warning, TEXT("Activated"));
		RootMesh->bRenderCustomDepth = true;
		MarkComponentsRenderStateDirty();
		isActive = true;
	}
}

void AActiveElement::Deactivate() {
	if (isActive) {
		UE_LOG(LogTemp, Warning, TEXT("Deactivate"));
		RootMesh->bRenderCustomDepth = false;
		MarkComponentsRenderStateDirty();
		isActive = false;
	}
}

void AActiveElement::SetContent(FString name, FString content) {
	ElementName = name;
	ElementContent = content;
}

void AActiveElement::SetupActor() {
	isActive = false;

	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	RootMesh->SetCollisionProfileName(TEXT("ActiveElement"));
	RootMesh->bRenderCustomDepth = false;
	RootMesh->CustomDepthStencilValue = 0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("/Engine/BasicShapes/Cube"));
	if (Mesh.Succeeded()) {
		RootMesh->SetStaticMesh(Mesh.Object);
	}
	RootComponent = RootMesh;

	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> Material(TEXT("MaterialInstanceConstant'/Game/Materials/Outline/PP_Outliner_Inst.PP_Outliner_Inst'"));
	if (Material.Object) {
		PostProcessComponent->AddOrUpdateBlendable(Material.Object);
		PostProcessComponent->SetupAttachment(RootComponent);
	}
}