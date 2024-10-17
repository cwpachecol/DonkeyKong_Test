// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosFantasia.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AFabricaEnemigosFantasia : public AFabricaEnemigos
{
	GENERATED_BODY()
public:
	AFabricaEnemigosFantasia();
	AEnemigo* FabricarEnemigoTerrestre() override;
	AEnemigo* FabricarEnemigoAereo() override;
	AEnemigo* FabricarEnemigoAcuatico() override;
};
