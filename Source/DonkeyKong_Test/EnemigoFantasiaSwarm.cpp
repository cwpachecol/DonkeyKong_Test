// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaSwarm.h"

void AEnemigoFantasiaSwarm::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaSwarm::AEnemigoFantasiaSwarm()
{
	//PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/Swarm08_SK_Skeleton.Swarm08_SK_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/MonsterForSurvivalGame/Mesh/PBR/Swarm08_SK.Swarm08_SK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoFantasiaSwarm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
