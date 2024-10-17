// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosMisticos.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AFabricaEnemigosMisticos : public AFabricaEnemigos
{
	GENERATED_BODY()
public:
	AFabricaEnemigosMisticos();
	AEnemigo* FabricarEnemigoTerrestre() override;
	AEnemigo* FabricarEnemigoAereo() override;
	AEnemigo* FabricarEnemigoAcuatico() override;
};
