// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPisosBasicos.h"
#include "Piso.h"
#include "ComponentePiso.h"
#include "Obstaculo.h"
#include "Escalera.h"
#include "MurallaPiedra.h"


// Sets default values
ABuilderPisosBasicos::ABuilderPisosBasicos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
}

// Called when the game starts or when spawned
void ABuilderPisosBasicos::BeginPlay()
{
	Super::BeginPlay();

	PosicionSpawnComponentePiso = FVector(1160.0f, -1300.0f, 600.0f);
	RotacionSpawnComponentePiso = FRotator(0.0f, 0.0f, -10.0f);
	DistanciaEntreComponentesPiso = FVector(10.0f, 200.0f, 10.0f);
	DimensionesComponentePiso = FVector(100.0f, 200.0f, 50.0f);
	DireccionUbicacionComponentePiso = FVector(0.0f, 1.0f, 1.0f);

	NumeroComponentesPiso = 10;
	NumeroComponentesPisoGenerados = 0;

	Piso = GetWorld()->SpawnActor<APiso>(APiso::StaticClass());
	Piso->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABuilderPisosBasicos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AComponentePiso* ABuilderPisosBasicos::BuildComponentePiso()
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

AMurallaPiedra* ABuilderPisosBasicos::BuildMurallaPiedra()
{
	/*PosicionSpawnComponentePiso.X = PosicionSpawnComponentePiso.X + DireccionUbicacionComponentePiso.X * (DimensionesComponentePiso.X + DistanciaEntreComponentesPiso.X);
	PosicionSpawnComponentePiso.Y = PosicionSpawnComponentePiso.Y + DireccionUbicacionComponentePiso.Y * (DimensionesComponentePiso.Y + DistanciaEntreComponentesPiso.Y);
	PosicionSpawnComponentePiso.Z = PosicionSpawnComponentePiso.Z + DireccionUbicacionComponentePiso.Z * (DimensionesComponentePiso.Z + DistanciaEntreComponentesPiso.Z);*/
	FVector PosicionSpawnMurallaPiedra = PosicionSpawnComponentePiso;
	FRotator RotacionSpawnMurallaPiedra = FRotator(0.0f, 0.0f, 0.0f);
	PosicionSpawnMurallaPiedra.Z = PosicionSpawnMurallaPiedra.Z + DireccionUbicacionComponentePiso.Z * (DimensionesComponentePiso.Z + DistanciaEntreComponentesPiso.Z); 

	AMurallaPiedra* MurallaPiedraLocal = GetWorld()->SpawnActor<AMurallaPiedra>(AMurallaPiedra::StaticClass(), PosicionSpawnMurallaPiedra, RotacionSpawnMurallaPiedra);
	MurallaPiedraLocal->SetRotaciones(FRotator(0.0f, -90.0f, 0.0f));
	if (MurallaPiedraLocal) {
		return MurallaPiedraLocal;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo generar la muralla piedra."));
		return nullptr;
	}
}



void ABuilderPisosBasicos::BuildComponentesPiso()
{

	for (int16 i = 0; i < NumeroComponentesPiso; i++) {
		Piso->aComponentesPiso.Add(BuildComponentePiso());
		if (FMath::RandRange(0, 99) < 30) {
			Piso->aObstaculosPiso.Add(BuildMurallaPiedra());
		}
	}
}

void ABuilderPisosBasicos::BuildObstaculos()
{
	
}

void ABuilderPisosBasicos::BuildEscaleras()
{
	
}

void ABuilderPisosBasicos::BuildAdornos()
{
}

APiso* ABuilderPisosBasicos::GetPiso()
{
	return Piso;
}

