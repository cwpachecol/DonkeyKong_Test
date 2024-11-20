// Fill out your copyright notice in the Description page of Project Settings.


#include "DonkeyKongModelo.h"

UDonkeyKongModelo::UDonkeyKongModelo()
{
    InitializeGame();
}

void UDonkeyKongModelo::InitializeGame()
{
    Score = 0;
    Lives = 3;
}

void UDonkeyKongModelo::IncreaseScore(int32 Amount)
{
    Score += Amount;
}

void UDonkeyKongModelo::DecreaseLives(int32 Amount)
{
    Lives -= Amount;
}
