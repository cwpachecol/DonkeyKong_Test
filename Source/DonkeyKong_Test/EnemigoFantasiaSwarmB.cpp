// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaSwarmB.h"

void AEnemigoFantasiaSwarmB::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaSwarmB::AEnemigoFantasiaSwarmB()
{
	//PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/Swarm09_SK_Skeleton.Swarm09_SK_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/MonsterForSurvivalGame/Mesh/PBR/Swarm09_SK.Swarm09_SK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoFantasiaSwarmB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
