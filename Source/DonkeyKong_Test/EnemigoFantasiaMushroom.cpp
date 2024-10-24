// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaMushroom.h"

void AEnemigoFantasiaMushroom::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaMushroom::AEnemigoFantasiaMushroom()
{
	//PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/Mushroom_Skeleton.Mushroom_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/MonsterForSurvivalGame/Mesh/PBR/Mushroom_SK.Mushroom_SK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoFantasiaMushroom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
