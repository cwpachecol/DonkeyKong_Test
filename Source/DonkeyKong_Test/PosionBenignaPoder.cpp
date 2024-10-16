// Fill out your copyright notice in the Description page of Project Settings.


#include "PosionBenignaPoder.h"

APosionBenignaPoder::APosionBenignaPoder()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> pocionPoderAsset(TEXT("StaticMesh'/Game/Assets/potion_07/p2.p2'"));
	if (pocionPoderAsset.Succeeded())
	{
		pocionMesh->SetStaticMesh(pocionPoderAsset.Object);
	}
}

void APosionBenignaPoder::BeginPlay()
{
	Super::BeginPlay();

	nombrePosion = "Posion benigna de poder";
	viscosidad = "Como agua";
	sangre = "Sangre de dragon";

	hierbas.Add("Raíz de manzanilla");
	hierbas.Add("Hojas de rosa");
}

void APosionBenignaPoder::preparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Preparar a temperatura media"));
}
