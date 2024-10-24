// Fill out your copyright notice in the Description page of Project Settings.


#include "Piso.h"
#include "ComponentePiso.h"
#include "Obstaculo.h"
#include "Escalera.h"


// Sets default values
APiso::APiso()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NumeroComponentesPiso = 10;
	PosicionInicialPiso = FVector(0.0f, 0.0f, 0.0f);
	DimensionesComponentePiso = FVector(200.0f, 200.0f, 50.0f);
	RotacionComponentePiso = FRotator(0.0f, 0.0f, 0.0f);

	NumeroComponentesPisoMoviles = 1;
	NumeroComponentesPisoFijos = 6;
	distanciaEntreComponentesPiso = 10.0f;

	NumeroObstaculos = 2;

	NumeroEscaleras = 3;
	
}

// Called when the game starts or when spawned
void APiso::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

