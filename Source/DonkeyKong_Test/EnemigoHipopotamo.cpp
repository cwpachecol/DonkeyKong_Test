// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoHipopotamo.h"

AEnemigoHipopotamo::AEnemigoHipopotamo()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Hippopotamus/Meshes/SK_Hippopotamus.SK_Hippopotamus'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoHipopotamo::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemigoHipopotamo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
