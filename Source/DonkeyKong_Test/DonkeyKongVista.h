// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DonkeyKongVista.generated.h"

class UTextRenderComponent;

UCLASS()
class DONKEYKONG_TEST_API ADonkeyKongVista : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADonkeyKongVista();

    UFUNCTION()
    void UpdateScore(int32 NewScore);

    UFUNCTION()
    void UpdateLives(int32 NewLives);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, Category = "UI")
    UTextRenderComponent* ScoreText;

    UPROPERTY(EditAnywhere, Category = "UI")
    UTextRenderComponent* LivesText;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

