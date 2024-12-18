// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKongControlador.h"
#include "DonkeyKong_TestGameMode.generated.h"

class AObstaculoMuro;
class ADonkeyKong_TestCharacter;
class ABarril;
class AEsfera;
class AMuro;
class AInventario;
class ABuilderPisosBasicos;
class ABuilderPisosIntermedios;
class ADirectorPisos;
class AArmaduraJugador;

UCLASS(minimalapi)
class ADonkeyKong_TestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_TestGameMode();

	AObstaculoMuro* obstaculo01;
	ADonkeyKong_TestCharacter* player01;

	TArray<ABarril*> barriles;
	TMap<int32, AEsfera*> esferasMap;

protected:
	virtual void BeginPlay() override;

	TArray<int32> aComponentesPlataformaMoviles;
	TArray<AMuro*> aMuros;

private:
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Pisos")
	ABuilderPisosBasicos* PisosBasicosBuilder;

	UPROPERTY(VisibleAnywhere, Category = "Pisos")
	ABuilderPisosIntermedios* PisosIntermediosBuilder;

	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Pisos")
	ADirectorPisos* DirectorPisos;

public:
	FTimerHandle UtilizarArmaduraTimerHandle;
	void UtilizarArmadura();

	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();

	FTimerHandle SpawnMuroTimerHandle;
	void SpawnMuro();

	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 3;

	UPROPERTY()
	AInventario* inventario;

	AArmaduraJugador* ArmaduraJugador;

private: 
	UPROPERTY() 
	ADonkeyKongControlador* DonkeyKongControlador;
};



