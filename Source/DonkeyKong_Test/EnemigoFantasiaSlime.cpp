// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaSlime.h"

void AEnemigoFantasiaSlime::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaSlime::AEnemigoFantasiaSlime()
{
	//PrimaryActorTick.bCanEverTick = true;

	////static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/Slime_Skeleton.Slime_Skeleton'"));
	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Crocodile/Meshes/SK_Crocodile.SK_Crocodile'"));
	//if (MeshContainer.Succeeded())
	//{
	//	GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	//}
}

void AEnemigoFantasiaSlime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
