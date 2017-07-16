// Fill out your copyright notice in the Description page of Project Settings.

#include "PostFeeder.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
APostFeeder::APostFeeder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	ChannelDrainInterval = 1.f;
	DisplayLimit = 3;

	static ConstructorHelpers::FClassFinder<UUserPostWidget> WidgetAsset(TEXT("/Game/UserWidget/UWGUserPost"));
	if (WidgetAsset.Succeeded())
	{
		UserPostWidgetClass = WidgetAsset.Class;
	}
}

// Called when the game starts or when spawned
void APostFeeder::BeginPlay()
{
	Super::BeginPlay();
	drainTimeCount = 0;
}

// Called every frame
void APostFeeder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	drainTimeCount += DeltaTime;
	if (drainTimeCount > ChannelDrainInterval){
		ShowPostWidget();
		
		drainTimeCount = 0;
	}

	for (int i = 0; i < AllWidgets.Num(); i++) {
		AdjustWidgetAngle(i);
		RemoveExpiredPostWidget(i);
	}

}

void APostFeeder::ShowPostWidget(){
	if(UserPostWidgetClass && PostChannel.Num() > 0 && AllWidgets.Num() < DisplayLimit){
		UUserPostWidget* w = CreateWidget<UUserPostWidget>(
			GetWorld()->GetFirstPlayerController(),
			UserPostWidgetClass
		);
		if (w) {
			float x = FMath::RandRange(-100.f, 100.f);
			float y = FMath::RandRange(-100.f, 100.f);
			w->Message = PostChannel[0];
			w->UserName = PostChannel[0];
			w->DisplayTime = 5.f;
			UE_LOG(LogTemp, Warning, TEXT("count %d"), AllWidgets.Num())
			UWidgetComponent * widget = NewObject<UWidgetComponent>(this, UWidgetComponent::StaticClass());
			widget->SetWidgetSpace(EWidgetSpace::World);
			widget->SetOwnerPlayer(GetWorld()->GetFirstLocalPlayerFromController());
			widget->SetWorldLocation(FVector(x,y,0));
			widget->SetPivot(FVector2D(0.5f, 0.5f));
			widget->SetWidget(w);
			widget->SetVisibility(true);
			widget->SetTwoSided(true);
			widget->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepWorld, true), TEXT("PostWidget"));
			widget->RegisterComponent();
			AllWidgets.Add(widget);
		}
		PostChannel.RemoveAt(0);
	}
}

void APostFeeder::RemoveExpiredPostWidget(int i){
	UUserPostWidget* upwg = (UUserPostWidget*)AllWidgets[i]->GetUserWidgetObject();
	if (upwg->IsExpire) {
		AllWidgets[i]->DestroyComponent();
		AllWidgets.RemoveAt(i);
	}
}

void APostFeeder::AdjustWidgetAngle(int i) {
	FVector cameraPosition = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FVector componentPosition = AllWidgets[i]->GetComponentLocation();
	FVector lookDirection = cameraPosition - componentPosition;
	FRotator rotator = lookDirection.Rotation();
	AllWidgets[i]->AddLocalRotation(AllWidgets[i]->GetComponentRotation().GetInverse());
	AllWidgets[i]->AddLocalRotation(rotator);
}
