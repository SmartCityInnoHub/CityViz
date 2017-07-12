// Fill out your copyright notice in the Description page of Project Settings.

#include "PostFeeder.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
APostFeeder::APostFeeder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
		UE_LOG(LogTemp, Warning, TEXT("drain message from channel"));
		if (PostChannel.Num() > 0){
			ShowPostWidget(PostChannel[0], FVector(0,0,0));
			PostChannel.RemoveAt(0);
		}
	}
}

void APostFeeder::ShowPostWidget(FString message, FVector position){
	if(UserPostWidgetClass){
			UUserPostWidget* w = CreateWidget<UUserPostWidget>(
				GetWorld()->GetFirstPlayerController(),
				UserPostWidgetClass
			);
			if (w){
				w->Message = message;
				w->AddToViewport();
				AllWidgets.Add(w);
			}
		}
}

void APostFeeder::RemovePostWidget(UUserPostWidget* widget){

}
