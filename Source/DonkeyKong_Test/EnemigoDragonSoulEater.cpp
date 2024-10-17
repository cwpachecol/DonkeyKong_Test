// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonSoulEater.h"

void AEnemigoDragonSoulEater::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoDragonSoulEater::AEnemigoDragonSoulEater()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/FourEvilDragonsHP/Meshes/DrangonTheSoulEater/DragonTheSoulEater_Skeleton.DragonTheSoulEater_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/FourEvilDragonsPBR/Meshes/DrangonTheSoulEater/DragonTheSoulEaterSK.DragonTheSoulEaterSK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoDragonSoulEater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
