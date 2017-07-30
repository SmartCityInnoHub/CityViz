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

}

void APostFeeder::ShowPostWidget(){
	if(UserPostWidgetClass && PostChannel.Num() > 0){

		//TODO:use location data contained in message
		float x = FMath::RandRange(-100.f, 100.f);
		float y = FMath::RandRange(-100.f, 100.f);

		AUserPost* actor = GetWorld()->SpawnActor<AUserPost>(FVector(x, y, WidgetZ), FRotator::ZeroRotator);
		actor->SetPostMessage(PostChannel[0]);
		actor->SetLifeSpan(PostLifeSpan);
		actor->SetPostUser(TEXT("not assigned yet"));

		PostChannel.RemoveAt(0);
	}
}

