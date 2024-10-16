// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoRinoceronte.h"

AEnemigoRinoceronte::AEnemigoRinoceronte()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Rhinoceros/Meshes/SK_Rhinoceros.SK_Rhinoceros'"));
	if (MeshContainer.Succeeded())
	{
		//Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoRinoceronte::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoRinoceronte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
