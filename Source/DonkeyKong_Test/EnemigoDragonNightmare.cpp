// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonNightmare.h"

void AEnemigoDragonNightmare::BeginPlay()
{
	Super::BeginPlay();
}


AEnemigoDragonNightmare::AEnemigoDragonNightmare()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/FourEvilDragonsHP/Meshes/DragonTheNightmare/DragonTheNightmare_Skeleton.DragonTheNightmare_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/FourEvilDragonsPBR/Meshes/DragonTheNightmare/DragonTheNightmareSK.DragonTheNightmareSK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoDragonNightmare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
