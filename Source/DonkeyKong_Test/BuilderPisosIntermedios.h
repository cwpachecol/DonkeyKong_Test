// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPisos.h"
#include "BuilderPisosIntermedios.generated.h"

class APiso;
class AComponentePiso;
class AObstaculo;
class AEscalera;

UCLASS()
class DONKEYKONG_TEST_API ABuilderPisosIntermedios : public AActor, public IBuilderPisos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderPisosIntermedios();

private:
	UPROPERTY(VisibleAnywhere, Category = "Piso")
	APiso* Piso;

	FVector PosicionSpawnComponentePiso;
	FRotator RotacionSpawnComponentePiso;
	FVector DistanciaEntreComponentesPiso;
	FVector DimensionesComponentePiso;
	FVector DireccionUbicacionComponentePiso;
	FVector DireccionRotacionComponentePiso;
	FVector DireccionMovimientoComponentePiso;
	int16 NumeroComponentesPiso;
	int16 NumeroComponentesPisoGenerados;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AComponentePiso* BuildComponentePiso();
	AComponentePiso* BuildComponenteFijoPiso();
	AComponentePiso* BuildComponenteMovilPiso();
	virtual void BuildComponentesPiso() override;
	virtual void BuildObstaculos() override;
	virtual void BuildEscaleras() override;

	//void SetDireccionMovimientoComponentePiso(FVector _DireccionMovimientoComponentePiso);
	virtual class APiso* GetPiso() override;


};
