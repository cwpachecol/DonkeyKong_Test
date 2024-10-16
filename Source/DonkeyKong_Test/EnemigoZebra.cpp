// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoZebra.h"

AEnemigoZebra::AEnemigoZebra()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Zebra/Meshes/SK_Zebra.SK_Zebra'"));
	if (MeshContainer.Succeeded())
	{
		//Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoZebra::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoZebra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
