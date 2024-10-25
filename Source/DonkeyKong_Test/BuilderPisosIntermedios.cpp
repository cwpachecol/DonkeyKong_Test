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

	PosicionSpawnComponentePiso = FVector(1160.0f, -1300.0f, 1200.f);
	RotacionSpawnComponentePiso = FRotator(0.0f, 0.0f, 10.0f);
	DistanciaEntreComponentesPiso = FVector(10.0f, 100.0f, 10.0f);
	DimensionesComponentePiso = FVector(100.0f, 200.0f, 50.0f);
	DireccionUbicacionComponentePiso = FVector(0.0f, -1.0f, 1.0f);
	DireccionRotacionComponentePiso = FVector(0.0f, 0.0f, 1.0f);

	NumeroComponentesPiso = 10;
	NumeroComponentesPisoGenerados = 0;
}

// Called when the game starts or when spawned
void ABuilderPisosIntermedios::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilderPisosIntermedios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AComponentePiso* ABuilderPisosIntermedios::BuildComponentePiso()
{
	AComponentePiso* ComponentePisoActual = GetWorld()->SpawnActor<AComponentePiso>(AComponentePiso::StaticClass(), PosicionSpawnComponentePiso, RotacionSpawnComponentePiso);
	if (ComponentePisoActual) {
		NumeroComponentesPisoGenerados++;
		PosicionSpawnComponentePiso.Y = PosicionSpawnComponentePiso.Y + DireccionUbicacionComponentePiso.Y * (DimensionesComponentePiso.Y + DistanciaEntreComponentesPiso.Y);
		PosicionSpawnComponentePiso.Z = PosicionSpawnComponentePiso.Z + DireccionUbicacionComponentePiso.Z * (DimensionesComponentePiso.Z + DistanciaEntreComponentesPiso.Z);

		return ComponentePisoActual;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo generar el componente de piso"));
		return nullptr;
	}

}

AComponentePiso* ABuilderPisosIntermedios::BuildComponenteFijoPiso()
{
	return nullptr;
}

AComponentePiso* ABuilderPisosIntermedios::BuildComponenteMovilPiso()
{
	AComponentePiso* ComponentePisoActual = BuildComponentePiso();
	ComponentePisoActual->SetDireccionMovimiento(FVector(0.0f, 1.0f, 1.0f));

	return ComponentePisoActual;
}

void ABuilderPisosIntermedios::BuildComponentesPiso()
{
	RotacionSpawnComponentePiso.Roll = RotacionSpawnComponentePiso.Roll * DireccionRotacionComponentePiso.Z;

	for (int16 i = 0; i < NumeroComponentesPiso; i++) {
		Piso->aComponentesPiso.Add(BuildComponentePiso());
	}

}

void ABuilderPisosIntermedios::BuildObstaculos()
{
}

void ABuilderPisosIntermedios::BuildEscaleras()
{
}

void ABuilderPisosIntermedios::SetDireccionMovimientoComponentePiso(FVector _DireccionMovimientoComponentePiso)
{
	DireccionMovimientoComponentePiso = _DireccionMovimientoComponentePiso;

}

APiso* ABuilderPisosIntermedios::GetPiso()
{
	return Piso;
}

