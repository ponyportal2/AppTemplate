// Fill out your copyright notice in the Description page of Project Settings.


#include "CppAppActor.h"

// Sets default values
ACppAppActor::ACppAppActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppAppActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppAppActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

