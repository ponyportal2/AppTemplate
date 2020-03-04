// Fill out your copyright notice in the Description page of Project Settings.


#include "AppActor.h"

// Sets default values
AAppActor::AAppActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAppActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAppActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

