// Fill out your copyright notice in the Description page of Project Settings.


#include "AppPawn.h"

// Sets default values
AAppPawn::AAppPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAppPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAppPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAppPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

