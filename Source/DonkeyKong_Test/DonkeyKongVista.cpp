// Fill out your copyright notice in the Description page of Project Settings.
#include "DonkeyKongVista.h"
#include "Components/TextRenderComponent.h"

ADonkeyKongVista::ADonkeyKongVista()
{
    PrimaryActorTick.bCanEverTick = true;

    ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText"));
    ScoreText->SetupAttachment(RootComponent);

    LivesText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LivesText"));
    LivesText->SetupAttachment(RootComponent);
}

void ADonkeyKongVista::BeginPlay()
{
    Super::BeginPlay();
    UpdateScore(0);
    UpdateLives(3);
}

// Called every frame
void ADonkeyKongVista::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ADonkeyKongVista::UpdateScore(int32 NewScore)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::AsNumber(NewScore));
    }
}

void ADonkeyKongVista::UpdateLives(int32 NewLives)
{
    if (LivesText)
    {
        LivesText->SetText(FText::AsNumber(NewLives));
    }
}
