// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "JugadorMario.h"
#include "DecoradorJugadorCharacter.generated.h"

UCLASS()
class DONKEYKONG_TEST_API ADecoradorJugadorCharacter : public ACharacter, public IJugadorMario
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADecoradorJugadorCharacter();

	IJugadorMario* jugadorMario;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void SetJugadorMario(ACharacter* _jugadorMario);

	void UsarArmadura() override;
	void UsarPoder() override;
	void UsarHabilidad() override;

};
