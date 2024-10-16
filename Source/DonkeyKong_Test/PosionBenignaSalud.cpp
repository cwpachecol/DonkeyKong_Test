// Fill out your copyright notice in the Description page of Project Settings.


#include "PosionBenignaSalud.h"

APosionBenignaSalud::APosionBenignaSalud()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> pocionSaludAsset(TEXT("StaticMesh'/Game/Assets/potion_07/p3.p3'"));
	if (pocionSaludAsset.Succeeded())
	{
		pocionMesh->SetStaticMesh(pocionSaludAsset.Object);
	}
}

void APosionBenignaSalud::BeginPlay()
{
	Super::BeginPlay();

	nombrePosion = "Posion benigna de salud";
	viscosidad = "Como moco";
	sangre = "Sangre de orco";
	
	hierbas.Add("Raíz de azucena alegre");
}

void APosionBenignaSalud::preparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Preparar a alta temperatura"));
}
