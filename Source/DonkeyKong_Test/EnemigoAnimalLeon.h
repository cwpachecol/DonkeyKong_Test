// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAnimalLeon.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AEnemigoAnimalLeon : public AEnemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigoAnimalLeon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
