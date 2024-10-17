// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonUsurper.h"

void AEnemigoDragonUsurper::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoDragonUsurper::AEnemigoDragonUsurper()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/FourEvilDragonsHP/Meshes/DragonTheUsurper/DragonTheUsurper_Skeleton.DragonTheUsurper_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/FourEvilDragonsPBR/Meshes/DragonTheUsurper/DragonTheUsurperSK.DragonTheUsurperSK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoDragonUsurper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
