// Fill out your copyright notice in the Description page of Project Settings.


#include "PosionBenignaHabilidad.h"
#include "Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


APosionBenignaHabilidad::APosionBenignaHabilidad()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> pocionHabilidadAsset(TEXT("StaticMesh'/Game/Assets/potion_07/p1.p1'"));
	if (pocionHabilidadAsset.Succeeded())
	{
		pocionMesh->SetStaticMesh(pocionHabilidadAsset.Object);
	}
}

void APosionBenignaHabilidad::BeginPlay()
{
	Super::BeginPlay();
	nombrePosion = "Posion benigna de habilidad";
	viscosidad = "Como lodo";
	sangre = "Sangre de serpiente";

	hierbas.Add("tallo de bambu");
	hierbas.Add("flor de girazol");
	hierbas.Add("raiz de mandragora");

}

void APosionBenignaHabilidad::preparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Preparar a alta temperatura"));
}
