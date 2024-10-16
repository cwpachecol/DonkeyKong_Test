// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_TestGameMode.generated.h"

class AObstaculoMuro;
class AcomponentePlataforma;
class ADonkeyKong_TestCharacter;
class ABarril;
class AEsfera;
class AMuro;
class AInventario;

UCLASS(minimalapi)
class ADonkeyKong_TestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_TestGameMode();

	AObstaculoMuro* obstaculo01;
	ADonkeyKong_TestCharacter* player01;

	TArray<AcomponentePlataforma*> componentesPlataforma;
	TArray<ABarril*> barriles;
	TMap<int32, AEsfera*> esferasMap;

protected:
	virtual void BeginPlay() override;

	TArray<int32> aComponentesPlataformaMoviles;
	TArray<AMuro*> aMuros;

private:
	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();

	FTimerHandle SpawnMuroTimerHandle;
	void SpawnMuro();

	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 3;

	UPROPERTY()
	AInventario* inventario;
};



