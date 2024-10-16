// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaPosiones.h"
#include "FabricaPosionesBenignas.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AFabricaPosionesBenignas : public AFabricaPosiones
{
	GENERATED_BODY()

public:
	virtual APosion* prepararPosion(FString PosionSKU) override;
	
};
