// Fill out your copyright notice in the Description page of Project Settings.


#include "MurallaPiedra.h"

AMurallaPiedra::AMurallaPiedra()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Muros/FantasyAssets_StoneWalls_StoneWallBent_1_Baked.FantasyAssets_StoneWalls_StoneWallBent_1_Baked'"));

	//MeshObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshElementoPlataforma->SetStaticMesh(MeshAsset.Object);
	//RootComponent = MeshObstaculo;

	//FVector NewScale(2.0f, 3.0f, 0.5f); // Cambia estos valores según tus necesidades
	//SetActorScale3D(NewScale);
	bMovil = false;
		
	SetDireccionMovimiento(FVector(1.0f, 1.0f, 1.0f));
	SetVelocidadMovimiento(FVector(2.0f, 2.0f, 2.0f));
	SetDesplazamientoMovimiento(FVector(300.0f, 400.0f, 500.0f));

	SetPosicionInicial(FVector(0.0f, 0.0f, 0.0f));
	SetPosicionActual(FVector(0.0f, 0.0f, 0.0f));
	SetPosicionFinal(FVector(0.0f, 0.0f, 0.0f));

}

void AMurallaPiedra::BeginPlay()
{
	Super::BeginPlay();
}

void AMurallaPiedra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
