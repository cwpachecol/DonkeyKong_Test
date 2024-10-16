// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Posion.h"
#include "PosionBenignaHabilidad.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API APosionBenignaHabilidad : public APosion
{
	GENERATED_BODY()

public:
	APosionBenignaHabilidad();

	void BeginPlay() override;
	void preparar() override;

	
};
