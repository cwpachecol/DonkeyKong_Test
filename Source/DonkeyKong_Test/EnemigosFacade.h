// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "EnemigosFacade.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AEnemigosFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigosFacade();

private:
	TArray<AEnemigo*> Enemigos;

	TArray<FString> TareasEnemigos;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void EjecutarTareasEnemigos(TArray<AEnemigo*> _Enemigos, TArray<FString> _TareasEnemigos);

public:
	void Aparecer();
	void Mover();
	void Atacar();
	void Desaparecer();
};
