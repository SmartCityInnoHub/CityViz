// Fill out your copyright notice in the Description page of Project Settings.

#include "UserPost.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
AUserPost::AUserPost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	static ConstructorHelpers::FClassFinder<UUserPostWidget> WidgetAsset(TEXT("/Game/UserWidget/UWGUserPost"));
	if (WidgetAsset.Succeeded())
	{
		UserPostWidgetClass = WidgetAsset.Class;
	}
}

// Called when the game starts or when spawned
void AUserPost::BeginPlay()
{
	Super::BeginPlay();
	
	UUserPostWidget* w = CreateWidget<UUserPostWidget>(
		GetWorld()->GetFirstPlayerController(),
		UserPostWidgetClass
		);
	if (w) {
		UWidgetComponent * widget = NewObject<UWidgetComponent>(this, UWidgetComponent::StaticClass());
		widget->SetWidgetSpace(EWidgetSpace::World);
		widget->SetOwnerPlayer(GetWorld()->GetFirstLocalPlayerFromController());
		widget->SetRelativeLocation(FVector::ZeroVector);
		widget->SetPivot(FVector2D(0.5f, 1.f));
		widget->SetDrawAtDesiredSize(true);
		widget->SetWidget(w);
		widget->SetVisibility(true);
		widget->SetTwoSided(true);
		widget->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), TEXT("PostWidget"));
		widget->RegisterComponent();
		PostWidgetComponent = widget;
		Widget = w;
	}
}

// Called every frame
void AUserPost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	LookAtScreen();
}

void AUserPost::LookAtScreen()
{
	FVector cameraPosition = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FVector lookDirection = cameraPosition - GetActorLocation();
	FRotator rotator = lookDirection.Rotation();
	rotator.Pitch = 0.f;
	SetActorRotation(rotator);
}

void AUserPost::SetPostMessage(FString message) {
	if (PostWidgetComponent) {
		Widget->Message = message;
	}
}
void AUserPost::SetPostUser(FString username) {
	if (PostWidgetComponent) {
		Widget->UserName = username;
	}
}

