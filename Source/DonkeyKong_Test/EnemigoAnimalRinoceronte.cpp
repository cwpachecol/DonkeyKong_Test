// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalRinoceronte.h"

AEnemigoAnimalRinoceronte::AEnemigoAnimalRinoceronte()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Rhinoceros/Meshes/SK_Rhinoceros.SK_Rhinoceros'"));
	if (MeshContainer.Succeeded())
	{
		//Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalRinoceronte::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalRinoceronte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
