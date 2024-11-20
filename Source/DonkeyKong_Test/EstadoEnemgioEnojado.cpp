// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoEnemgioEnojado.h"

// Sets default values
AEstadoEnemgioEnojado::AEstadoEnemgioEnojado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoEnemgioEnojado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoEnemgioEnojado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoEnemgioEnojado::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estoy enojado, me muevo mas rapido"));
}

void AEstadoEnemgioEnojado::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estoy enojado, ataco con mas fuerza"));
}


