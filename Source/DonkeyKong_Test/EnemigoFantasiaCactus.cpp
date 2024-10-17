// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaCactus.h"

void AEnemigoFantasiaCactus::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaCactus::AEnemigoFantasiaCactus()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/Cactus_Skeleton.Cactus_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/MonsterForSurvivalGame/Mesh/PBR/Cactus_SK.Cactus_SK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoFantasiaCactus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
