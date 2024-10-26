// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "MurallaPiedra.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AMurallaPiedra : public AObstaculo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMurallaPiedra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
