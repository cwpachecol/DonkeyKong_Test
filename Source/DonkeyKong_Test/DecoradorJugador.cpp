// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorJugador.h"
#include "JugadorMario.h"

// Sets default values
ADecoradorJugador::ADecoradorJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorJugador::SetJugadorMario(AActor* _jugadorMario)
{
	jugadorMario = Cast<IJugadorMario>(_jugadorMario);
}

void ADecoradorJugador::UsarArmadura()
{
	jugadorMario->UsarArmadura();
}

void ADecoradorJugador::UsarPoder()
{
	jugadorMario->UsarPoder();
}

void ADecoradorJugador::UsarHabilidad()
{
	jugadorMario->UsarHabilidad();
}

