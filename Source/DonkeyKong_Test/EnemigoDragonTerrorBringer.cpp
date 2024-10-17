// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragonTerrorBringer.h"

void AEnemigoDragonTerrorBringer::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoDragonTerrorBringer::AEnemigoDragonTerrorBringer()
{
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/FourEvilDragonsHP/Meshes/DragonTheTerrorBringer/DragonTheTerrorBringer_Skeleton.DragonTheTerrorBringer_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/FourEvilDragonsPBR/Meshes/DragonTheTerrorBringer/DragonTheTerrorBringerSK.DragonTheTerrorBringerSK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoDragonTerrorBringer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
