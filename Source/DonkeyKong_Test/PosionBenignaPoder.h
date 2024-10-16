// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Posion.h"
#include "PosionBenignaPoder.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API APosionBenignaPoder : public APosion
{
	GENERATED_BODY()
public:

	APosionBenignaPoder();

	void BeginPlay() override;
	void preparar();
};
