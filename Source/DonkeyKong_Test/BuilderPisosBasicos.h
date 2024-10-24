// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPisos.h"
#include "BuilderPisosBasicos.generated.h"

class APiso;
class AComponentePiso;
class AObstaculo;
class AEscalera;


UCLASS()
class DONKEYKONG_TEST_API ABuilderPisosBasicos : public AActor, public IBuilderPisos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderPisosBasicos();
private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Piso")
	APiso* Piso;

	FVector PosicionSpawnComponentePiso;
	FRotator RotacionSpawnComponentePiso;
	FVector DistanciaEntreComponentesPiso;
	FVector DimensionesComponentePiso;
	FVector DireccionUbicacionComponentePiso;
	FVector DireccionRotacionComponentePiso;
	int16 NumeroComponentesPiso;
	int16 NumeroComponentesPisoGenerados;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AComponentePiso* BuildComponentePiso() override;
	virtual AComponentePiso* BuildComponenteFijoPiso() override;
	virtual AComponentePiso* BuildComponenteMovilPiso() override;
	virtual void BuildComponentesPiso() override;
	virtual AObstaculo* BuildObstaculo() override;
	virtual AEscalera* BuildEscalera() override;

	virtual APiso* GetPiso() override;

};
