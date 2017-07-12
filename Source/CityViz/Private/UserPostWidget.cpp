// Fill out your copyright notice in the Description page of Project Settings.

#include "UserPostWidget.h"

void UUserPostWidget::NativeTick(const FGeometry& geom, float deltaTime){
    Super::NativeTick(geom, deltaTime);

    displayTimePassed += deltaTime;
    if (displayTimePassed > displayTimePassed){
        IsExpire = true;
        bCanEverTick = false;
    }
}