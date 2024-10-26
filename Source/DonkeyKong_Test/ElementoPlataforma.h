// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementoPlataforma.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_TEST_API AElementoPlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElementoPlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UStaticMeshComponent* MeshElementoPlataforma;

	FVector Dimensiones;
	FRotator Rotaciones;
	FVector Escala;

	FVector DireccionMovimiento;
	FVector VelocidadMovimiento;
	FVector DesplazamientoMovimiento;

	FVector PosicionInicial;
	FVector PosicionActual;
	FVector PosicionFinal;

	bool bMovil;
public:

	FORCEINLINE UStaticMeshComponent* GetMeshElementoPlataforma() const { return MeshElementoPlataforma; }
	FORCEINLINE void SetDimensiones(FVector _Dimensiones) { Dimensiones = _Dimensiones; }
	FORCEINLINE void SetRotaciones(FRotator _Rotaciones) {
		Rotaciones = _Rotaciones;
		SetActorRotation(Rotaciones);
	}
	FORCEINLINE void SetEscala(FVector _Escala) { 
		Escala = _Escala;
		SetActorScale3D(Escala);
	}

	FORCEINLINE void SetDireccionMovimiento(FVector _DireccionMovimiento) { DireccionMovimiento = _DireccionMovimiento; }
	FORCEINLINE void SetVelocidadMovimiento(FVector _VelocidadMovimiento) { VelocidadMovimiento = _VelocidadMovimiento; }
	FORCEINLINE void SetDesplazamientoMovimiento(FVector _DesplazamientoMovimiento) { DesplazamientoMovimiento = _DesplazamientoMovimiento; }

	FORCEINLINE void SetPosicionInicial(FVector _PosicionInicial) { PosicionInicial = _PosicionInicial; }
	FORCEINLINE void SetPosicionActual(FVector _PosicionActual) { PosicionActual = _PosicionActual; }
	FORCEINLINE void SetPosicionFinal(FVector _PosicionFinal) { PosicionFinal = _PosicionFinal; }

	FORCEINLINE void SetMovil(bool _bMovil) { bMovil = _bMovil; }

};
