// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalLobo.h"

void AEnemigoAnimalLobo::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoAnimalLobo::AEnemigoAnimalLobo()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf_Skeleton.SK_Wolf_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf.SK_Wolf'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalLobo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
