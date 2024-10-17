// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalLeon.h"

AEnemigoAnimalLeon::AEnemigoAnimalLeon()
{
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/LionAndLioness/Meshes/SK_Lion_LOD0.SK_Lion_LOD0'"));
	if (MeshContainer.Succeeded())
	{
		//Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalLeon::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAnimalLeon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
