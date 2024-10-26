// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPisosIntermedios.h"
#include "Piso.h"
#include "ComponentePiso.h"
#include "Obstaculo.h"
#include "Escalera.h"


// Sets default values
ABuilderPisosIntermedios::ABuilderPisosIntermedios()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABuilderPisosIntermedios::BeginPlay()
{
	Super::BeginPlay();
	
	PosicionSpawnComponentePiso = FVector(1160.0f, 0.0f, 900.0f);
	RotacionSpawnComponentePiso = FRotator(0.0f, 0.0f, 10.0f);
	DistanciaEntreComponentesPiso = FVector(10.0f, 200.0f, 10.0f);
	DimensionesComponentePiso = FVector(100.0f, 200.0f, 50.0f);
	DireccionUbicacionComponentePiso = FVector(0.0f, -1.0f, 1.0f);

	NumeroComponentesPiso = 10;
	NumeroComponentesPisoGenerados = 0;

	Piso = GetWorld()->SpawnActor<APiso>(APiso::StaticClass());
	Piso->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABuilderPisosIntermedios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AComponentePiso* ABuilderPisosIntermedios::BuildComponentePiso()
{
	PosicionSpawnComponentePiso.X = PosicionSpawnComponentePiso.X + DireccionUbicacionComponentePiso.X * (DimensionesComponentePiso.X + DistanciaEntreComponentesPiso.X);
	PosicionSpawnComponentePiso.Y = PosicionSpawnComponentePiso.Y + DireccionUbicacionComponentePiso.Y * (DimensionesComponentePiso.Y + DistanciaEntreComponentesPiso.Y);
	PosicionSpawnComponentePiso.Z = PosicionSpawnComponentePiso.Z + DireccionUbicacionComponentePiso.Z * (DimensionesComponentePiso.Z + DistanciaEntreComponentesPiso.Z);

	AComponentePiso* ComponentePisoActual = GetWorld()->SpawnActor<AComponentePiso>(AComponentePiso::StaticClass(), PosicionSpawnComponentePiso, RotacionSpawnComponentePiso);
	if (ComponentePisoActual) {
		NumeroComponentesPisoGenerados++;
		return ComponentePisoActual;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo generar el componente de piso"));
		return nullptr;
	}
}

AMurallaPiedra* ABuilderPisosIntermedios::BuildMurallaPiedra()
{
	return nullptr;
}

void ABuilderPisosIntermedios::BuildComponentesPiso()
{
	for (int16 i = 0; i < NumeroComponentesPiso; i++) {
		AComponentePiso* ComponenteActual = BuildComponentePiso();
		bool bComponenteMovil = FMath::RandRange(0, 99) < 30;
		ComponenteActual->SetMovil(bComponenteMovil);
		Piso->aComponentesPiso.Add(ComponenteActual);
	}
}

void ABuilderPisosIntermedios::BuildObstaculos()
{
}

void ABuilderPisosIntermedios::BuildEscaleras()
{
}

void ABuilderPisosIntermedios::BuildAdornos()
{
}

APiso* ABuilderPisosIntermedios::GetPiso()
{
	return Piso;
}

