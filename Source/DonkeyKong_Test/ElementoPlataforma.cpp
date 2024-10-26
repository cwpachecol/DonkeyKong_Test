// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementoPlataforma.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AElementoPlataforma::AElementoPlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshElementoPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	//MeshElementoPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshElementoPlataforma;

	// Variables para almacenar los límites del actor
	FVector Origin;
	FVector BoxExtent;

	// Obtener los límites del actor
	GetActorBounds(false, Origin, BoxExtent);

	SetDimensiones(BoxExtent * 2.0f);
	SetEscala(FVector(1.0f, 1.0f, 1.0f));
	//SetDimensiones(FVector(300.0f, 50.0f, 200.0f));

	//FVector NewScale(2.0f, 3.0f, 0.5f); // Cambia estos valores según tus necesidades
		
	SetRotaciones(FRotator(0.0f, 0.0f, 0.0f));

	SetDireccionMovimiento(FVector(1.0f, 1.0f, 1.0f));
	SetVelocidadMovimiento(FVector(2.0f, 2.0f, 2.0f));
	SetDesplazamientoMovimiento(FVector(300.0f, 400.0f, 500.0f));

	SetPosicionInicial(FVector(0.0f, 0.0f, 0.0f));
	SetPosicionActual(FVector(0.0f, 0.0f, 0.0f));
	SetPosicionFinal(FVector(0.0f, 0.0f, 0.0f));
	bMovil = false;
}

// Called when the game starts or when spawned
void AElementoPlataforma::BeginPlay()
{
	Super::BeginPlay();

	PosicionActual = GetActorLocation();
	PosicionInicial = PosicionActual - DesplazamientoMovimiento;
	PosicionFinal = PosicionActual + DesplazamientoMovimiento;
}

// Called every frame
void AElementoPlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bMovil) {
		PosicionActual += DireccionMovimiento * VelocidadMovimiento;

		if (PosicionActual.X >= PosicionFinal.X || PosicionActual.X <= PosicionInicial.X) {
			DireccionMovimiento.X *= -1.0f;
		}

		if (PosicionActual.Y >= PosicionFinal.Y || PosicionActual.Y <= PosicionInicial.Y) {
			DireccionMovimiento.Y *= -1.0f;
		}

		if (PosicionActual.Z >= PosicionFinal.Z || PosicionActual.Z <= PosicionInicial.Z) {
			DireccionMovimiento.Z *= -1.0f;
		}

		SetActorLocation(PosicionActual);
		
	}

}

