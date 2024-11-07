// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaMovimiento.h"
#include "EstrategiaMovimientoHorizontal.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AEstrategiaMovimientoHorizontal : public AActor, public IEstrategiaMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaMovimientoHorizontal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Moverse() override;
};
