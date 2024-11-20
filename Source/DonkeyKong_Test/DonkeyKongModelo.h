// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DonkeyKongModelo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API UDonkeyKongModelo : public UObject
{
	GENERATED_BODY()


public:
    UDonkeyKongModelo();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game State")
    int32 Score;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game State")
    int32 Lives;

    void IncreaseScore(int32 Amount);
    void DecreaseLives(int32 Amount);

private:
    void InitializeGame();

};
