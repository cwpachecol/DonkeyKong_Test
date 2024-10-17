// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaBeholder.h"

void AEnemigoFantasiaBeholder::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaBeholder::AEnemigoFantasiaBeholder()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/Beholder_Skeleton.Beholder_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/MonsterForSurvivalGame/Mesh/PBR/Beholder_SK.Beholder_SK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoFantasiaBeholder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
