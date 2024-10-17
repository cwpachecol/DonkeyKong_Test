// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosAnimales.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AFabricaEnemigosAnimales : public AFabricaEnemigos
{
	GENERATED_BODY()
public:
	AFabricaEnemigosAnimales();

	virtual AEnemigo* FabricarEnemigoTerrestre() override;
	virtual AEnemigo* FabricarEnemigoAereo() override;
	virtual AEnemigo* FabricarEnemigoAcuatico() override;

};
