// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasiaTurtleShell.h"

void AEnemigoFantasiaTurtleShell::BeginPlay()
{
	Super::BeginPlay();
}

AEnemigoFantasiaTurtleShell::AEnemigoFantasiaTurtleShell()
{
	//PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("Skeleton'/Game/MonsterForSurvivalGame/Mesh/PBR/TurtleShell_Skeleton.TurtleShell_Skeleton'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/MonsterForSurvivalGame/Mesh/PBR/TurtleShell_SK.TurtleShell_SK'"));
	if (MeshContainer.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}

void AEnemigoFantasiaTurtleShell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
