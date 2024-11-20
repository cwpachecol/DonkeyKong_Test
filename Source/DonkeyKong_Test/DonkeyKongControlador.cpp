// Fill out your copyright notice in the Description page of Project Settings.


#include "DonkeyKongControlador.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "DonkeyKongVista.h"
#include "EngineUtils.h"


ADonkeyKongControlador::ADonkeyKongControlador()
{
    PrimaryActorTick.bCanEverTick = true;

    DonkeyKongModelo = CreateDefaultSubobject<UDonkeyKongModelo>(TEXT("GameModel"));
}

void ADonkeyKongControlador::BeginPlay()
{
    Super::BeginPlay();

    for (TActorIterator<ADonkeyKongVista> It(GetWorld()); It; ++It)
    {
        DonkeyKongVista = *It;
        break;
    }

    if (DonkeyKongVista)
    {
        OnScoreChanged(DonkeyKongModelo->Score);
        OnLivesChanged(DonkeyKongModelo->Lives);
    }
}

void ADonkeyKongControlador::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADonkeyKongControlador::OnScoreChanged(int32 NewScore)
{
    if (DonkeyKongVista)
    {
        DonkeyKongVista->UpdateScore(NewScore);
    }
}

void ADonkeyKongControlador::OnLivesChanged(int32 NewLives)
{
    if (DonkeyKongVista)
    {
        DonkeyKongVista->UpdateLives(NewLives);
    }
}

void ADonkeyKongControlador::CollectItem(int32 ScoreValue)
{
    DonkeyKongModelo->IncreaseScore(ScoreValue);
    OnScoreChanged(DonkeyKongModelo->Score);
}

void ADonkeyKongControlador::TakeDamage(int32 DamageValue)
{
	DonkeyKongModelo->DecreaseLives(DamageValue);
   OnLivesChanged(DonkeyKongModelo->Lives);
}
