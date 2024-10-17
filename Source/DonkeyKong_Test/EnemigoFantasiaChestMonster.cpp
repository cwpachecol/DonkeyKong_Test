// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaChestMonster.h"

void AEnemigoFantasiaChestMonster::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaChestMonster::AEnemigoFantasiaChestMonster()
{
	//PrimaryActorTick.bCanEverTick = true;

	////static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/ChestMonster_Skeleton.ChestMonster_Skeleton'"));
	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Crocodile/Meshes/SK_Crocodile.SK_Crocodile'"));
	//if (MeshContainer.Succeeded())
	//{
	//	GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	//}
}

void AEnemigoFantasiaChestMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
