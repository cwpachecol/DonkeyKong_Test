// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAnimalZorro.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AEnemigoAnimalZorro : public AEnemigo
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	AEnemigoAnimalZorro();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
//	virtual void Atacar() override;

};
