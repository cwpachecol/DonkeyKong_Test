// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Posion.h"
#include "PosionBenignaSalud.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API APosionBenignaSalud : public APosion
{
	GENERATED_BODY()

public:

	APosionBenignaSalud();

protected:
	virtual void BeginPlay() override;

public:
	virtual void preparar() override;
};
