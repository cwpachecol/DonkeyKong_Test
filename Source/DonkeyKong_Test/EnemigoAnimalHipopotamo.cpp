// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalHipopotamo.h"

AEnemigoAnimalHipopotamo::AEnemigoAnimalHipopotamo()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Hippopotamus/Meshes/SK_Hippopotamus.SK_Hippopotamus'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoAnimalHipopotamo::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemigoAnimalHipopotamo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
