// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "PisoPlano.h"
#include "Piso.generated.h"

class AComponentePiso;
class AObstaculo;
class AEscalera;

UCLASS()
//class DONKEYKONG_TEST_API APiso : public AActor, public IPisoPlano
class DONKEYKONG_TEST_API APiso : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiso();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	TArray<AComponentePiso*> aComponentesPiso;
	TArray<AObstaculo*> aObstaculosPiso;
	TArray<AEscalera*> aEscalerasPiso;
	//TArray<AAdornos*> aAdornosPiso;

	/*int16 NumeroComponentesPiso;
	FVector PosicionInicialPiso;
	FVector DimensionesComponentePiso;
	FRotator RotacionComponentePiso;
	int16 NumeroComponentesPisoMoviles;
	int16 NumeroComponentesPisoFijos;
	float distanciaEntreComponentesPiso;

	int16 NumeroObstaculos;

	int16 NumeroEscaleras;*/


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void SetNumeroComponentesPiso(int16 _NumeroComponentesPiso) override { NumeroComponentesPiso = _NumeroComponentesPiso; };
	//void SetNumeroComponentesFijosPiso(int16 _NumeroComponentesFijosPiso) override { NumeroComponentesPisoFijos = _NumeroComponentesFijosPiso; };
	//void SetNumeroComponentesMovilesPiso(int16 _NumeroComponentesMovilesPiso) override { NumeroComponentesPisoMoviles = _NumeroComponentesMovilesPiso; };
	//void SetNumeriObstaculosPiso(int16 _NumeroObstaculosPiso) override { NumeroObstaculos = _NumeroObstaculosPiso; };
	//void SetNumeroEscalerasPiso(int16 _NumeroEscalerasPiso) override { NumeroEscaleras = _NumeroEscalerasPiso; }

};
