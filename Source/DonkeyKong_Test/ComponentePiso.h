// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementoPlataforma.h"
#include "ComponentePiso.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AComponentePiso : public AElementoPlataforma
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponentePiso();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*UStaticMeshComponent* meshPlataforma;

	FVector Dimensiones;

	FVector DireccionMovimiento;
	FVector VelocidadMovimiento;
	FVector DesplazamientoMovimiento;

	FVector PosicionInicial;
	FVector PosicionActual;
	FVector PosicionFinal;

	bool bMovil;*/

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*FORCEINLINE void SetDimensiones(FVector _Dimensiones) { Dimensiones = _Dimensiones; }

	FORCEINLINE void SetDireccionMovimiento(FVector _DireccionMovimiento) { DireccionMovimiento = _DireccionMovimiento; }
	FORCEINLINE void SetVelocidadMovimiento(FVector _VelocidadMovimiento) { VelocidadMovimiento = _VelocidadMovimiento; }
	FORCEINLINE void SetDesplazamientoMovimiento(FVector _DesplazamientoMovimiento) { DesplazamientoMovimiento = _DesplazamientoMovimiento; }

	FORCEINLINE void SetPosicionInicial(FVector _PosicionInicial) { PosicionInicial = _PosicionInicial; }
	FORCEINLINE void SetPosicionActual(FVector _PosicionActual) { PosicionActual = _PosicionActual; }
	FORCEINLINE void SetPosicionFinal(FVector _PosicionFinal) { PosicionFinal = _PosicionFinal; }

	FORCEINLINE void SetMovil(bool _bMovil) { bMovil = _bMovil; }*/
};
