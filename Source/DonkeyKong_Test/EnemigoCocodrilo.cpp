// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoCocodrilo.h"

AEnemigoCocodrilo::AEnemigoCocodrilo()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Crocodile/Meshes/SK_Crocodile.SK_Crocodile'"));
	if (MeshContainer.Succeeded())
	{
		Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		//GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoCocodrilo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoCocodrilo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//void AEnemigoCocodrilo::Atacar()
//{
//}
