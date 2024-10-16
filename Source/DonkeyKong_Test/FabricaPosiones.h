// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Posion.h"
#include "FabricaPosiones.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AFabricaPosiones : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaPosiones();

	/*virtual APosion* prepararPosion(FString PosionSKU) = 0;*/
	virtual APosion* prepararPosion(FString PosionSKU) PURE_VIRTUAL(AFabricaPosion::prepararPosion, return nullptr;)

	
	//Order, concoct and returns a Potion of a specific Category
	APosion* ordenarPosion(FString categoria);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
