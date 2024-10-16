// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaPosiones.h"

// Sets default values
AFabricaPosiones::AFabricaPosiones()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaPosiones::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaPosiones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APosion* AFabricaPosiones::ordenarPosion(FString categoria)
{
	APosion* posion = prepararPosion(categoria);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Preparando %s"), *posion->getNombrePosion()));
	//Start the concoct process
	posion->hervir();
	posion->burbujear();
	posion->preparar();
	posion->embotellar();
	//Returns the created potion
	return posion;
}
