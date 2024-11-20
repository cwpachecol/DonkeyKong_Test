// Fill out your copyright notice in the Description page of Project Settings.


#include "Descansando.h"

// Sets default values
ADescansando::ADescansando()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADescansando::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADescansando::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADescansando::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No tenemos ganas de atacar"));
}
void ADescansando::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No tenemos ganas de movernos"));
}
