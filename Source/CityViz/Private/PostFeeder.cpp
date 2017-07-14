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
		if (PostChannel.Num() > 0 && AllWidgets.Num() < DisplayLimit){
			float x = FMath::RandRange(-100.f, 100.f);
			float y = FMath::RandRange(-100.f, 100.f);
			ShowPostWidget(PostChannel[0], FVector(x,y,0));
			PostChannel.RemoveAt(0);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Display reach limit no more widget"));
		}
		drainTimeCount = 0;
	}
}

void APostFeeder::ShowPostWidget(FString message, FVector position){
	if(UserPostWidgetClass){
		UUserPostWidget* w = CreateWidget<UUserPostWidget>(
			GetWorld()->GetFirstPlayerController(),
			UserPostWidgetClass
		);
		if (w) {
			w->Message = message;
			w->UserName = message;
			UE_LOG(LogTemp, Warning, TEXT("count %d"), AllWidgets.Num())
			UWidgetComponent * widget = NewObject<UWidgetComponent>(this, UWidgetComponent::StaticClass());
			widget->SetWidgetSpace(EWidgetSpace::World);
			widget->SetOwnerPlayer(GetWorld()->GetFirstLocalPlayerFromController());
			widget->SetWorldLocation(position);
			widget->SetPivot(FVector2D(0.5f, 0.5f));
			widget->SetWidgetClass(UUserPostWidget::StaticClass());
			widget->SetWidget(w);
			widget->SetVisibility(true);
			widget->SetTwoSided(true);
			widget->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepWorld, true), TEXT("PostWidget"));
			widget->RegisterComponent();
			AllWidgets.Add(widget);
		}
	}
}

void APostFeeder::RemovePostWidget(UUserPostWidget* widget){
	for (int i = 0; i < AllWidgets.Num(); i++) {
		UUserPostWidget* upwg = (UUserPostWidget*)AllWidgets[i]->GetUserWidgetObject();
		UE_LOG(LogTemp, Warning, TEXT("%s"), upwg->IsExpire ? "true" : "false");
		if (upwg -> IsExpire) {
			AllWidgets[i]->DestroyComponent();
			AllWidgets.RemoveAt(i);
		}
	}
}
