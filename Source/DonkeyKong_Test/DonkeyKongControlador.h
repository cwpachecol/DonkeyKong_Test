// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DonkeyKongModelo.h"
#include "DonkeyKongVista.h"
#include "DonkeyKongControlador.generated.h"

UCLASS()
class DONKEYKONG_TEST_API ADonkeyKongControlador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADonkeyKongControlador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY()
    UDonkeyKongModelo* DonkeyKongModelo;

    UPROPERTY()
    ADonkeyKongVista* DonkeyKongVista;

    void OnScoreChanged(int32 NewScore);
    void OnLivesChanged(int32 NewLives);

    void CollectItem(int32 ScoreValue);
    void TakeDamage(int32 DamageValue);

};
