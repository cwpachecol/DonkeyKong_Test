// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalElefante.h"

AEnemigoAnimalElefante::AEnemigoAnimalElefante()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Elephant/Meshes/SK_Elephant.SK_Elephant'"));
	if (MeshContainer.Succeeded())
	{
		//Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalElefante::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalElefante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
