// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalZorro.h"

void AEnemigoAnimalZorro::BeginPlay()
{
	Super::BeginPlay();

}

AEnemigoAnimalZorro::AEnemigoAnimalZorro()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/AnimalVarietyPack/Fox/Meshes/SK_Fox_Skeleton.SK_Fox_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AnimalVarietyPack/Fox/Meshes/SK_Fox.SK_Fox'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalZorro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
