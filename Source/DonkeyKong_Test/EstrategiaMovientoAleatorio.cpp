// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovientoAleatorio.h"

// Sets default values
AEstrategiaMovientoAleatorio::AEstrategiaMovientoAleatorio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaMovientoAleatorio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMovientoAleatorio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMovientoAleatorio::Moverse()
{
	/*FVector NuevaPosicion = FVector(FMath::RandRange(-500, 500), FMath::RandRange(-500, 500), FMath::RandRange(100, 500)); 
	SetActorLocation(NuevaPosicion);*/
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Se aplico el movimiento aleatorio"));

}

