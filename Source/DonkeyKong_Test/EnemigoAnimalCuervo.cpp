// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalCuervo.h"

void AEnemigoAnimalCuervo::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoAnimalCuervo::AEnemigoAnimalCuervo()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AnimalVarietyPack/Crow/Meshes/SK_Crow.SK_Crow'"));
	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Crocodile/Meshes/SK_Crocodile.SK_Crocodile'"));
	if (MeshContainer.Succeeded())
	{
		Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		//GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalCuervo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
