// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComponentePiso.h"
#include "Obstaculo.h"
#include "Escalera.h"
#include "Piso.h"
#include "MurallaPiedra.h"
#include "UObject/Interface.h"
#include "BuilderPisos.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderPisos : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_TEST_API IBuilderPisos
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
protected:
	APiso* Piso;

	FVector PosicionSpawnComponentePiso;
	FRotator RotacionSpawnComponentePiso;
	FVector DistanciaEntreComponentesPiso;
	FVector DimensionesComponentePiso;
	FVector DireccionUbicacionComponentePiso;
	int16 NumeroComponentesPiso;
	int16 NumeroComponentesPisoGenerados;

public:
	
	virtual AComponentePiso* BuildComponentePiso() = 0;
	virtual AMurallaPiedra* BuildMurallaPiedra() = 0;

	virtual void BuildComponentesPiso() = 0;
	virtual void BuildObstaculos() = 0;
	virtual void BuildEscaleras() = 0;
	virtual void BuildAdornos() = 0;
	
	virtual class APiso* GetPiso() = 0;

	void SetPosicionSpawnComponentePiso(FVector _PosicionSpawnComponentePiso) { PosicionSpawnComponentePiso = _PosicionSpawnComponentePiso; }
	void SetRotacionSpawnComponentePiso(FRotator _RotacionSpawnComponentePiso) { RotacionSpawnComponentePiso = _RotacionSpawnComponentePiso; }
	void SetDistanciaEntreComponentesPiso(FVector _DistanciaEntreComponentesPiso) { DistanciaEntreComponentesPiso = _DistanciaEntreComponentesPiso; }
	void SetDimensionesComponentePiso(FVector _DimensionesComponentePiso) { DimensionesComponentePiso = _DimensionesComponentePiso; }
	void SetDireccionUbicacionComponentePiso(FVector _DireccionUbicacionComponentePiso) { DireccionUbicacionComponentePiso = _DireccionUbicacionComponentePiso; }
	void SetNumeroComponentesPiso(int16 _NumeroComponentesPiso) { NumeroComponentesPiso = _NumeroComponentesPiso; }

};
