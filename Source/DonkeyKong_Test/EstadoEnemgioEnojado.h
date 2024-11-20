// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StadoEnemigo.h"
#include "EstadoEnemgioEnojado.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AEstadoEnemgioEnojado : public AActor, public IStadoEnemigo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoEnemgioEnojado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Moverse() override;
	virtual void Atacar() override;

};
