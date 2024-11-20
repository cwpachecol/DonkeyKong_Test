// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorJugadorCharacter.h"

// Sets default values
ADecoradorJugadorCharacter::ADecoradorJugadorCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorJugadorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorJugadorCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADecoradorJugadorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADecoradorJugadorCharacter::SetJugadorMario(ACharacter* _jugadorMario)
{
	jugadorMario = Cast<IJugadorMario>(_jugadorMario);
}

void ADecoradorJugadorCharacter::UsarArmadura()
{
	jugadorMario->UsarArmadura();
}

void ADecoradorJugadorCharacter::UsarPoder()
{
	jugadorMario->UsarPoder();
}

void ADecoradorJugadorCharacter::UsarHabilidad()
{
	jugadorMario->UsarHabilidad();
}

