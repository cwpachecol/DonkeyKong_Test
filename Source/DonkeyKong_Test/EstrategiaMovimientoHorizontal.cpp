// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovimientoHorizontal.h"

// Sets default values
AEstrategiaMovimientoHorizontal::AEstrategiaMovimientoHorizontal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaMovimientoHorizontal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMovimientoHorizontal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMovimientoHorizontal::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("Se aplico el movimiento horizontal"));
}

