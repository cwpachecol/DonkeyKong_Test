// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

UCLASS()
class DONKEYKONG_TEST_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int16 numeroPisos;
	int16 numeroEscaleras;
	int16 numeroObstaculos;
	int16 numeroComponentesPisoPorPiso;
	FVector posicionInicialPiso;
	FVector tamanoComponentePiso;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
