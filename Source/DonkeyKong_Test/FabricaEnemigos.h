// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaEnemigos.generated.h"

class AEnemigo;

UCLASS()
class DONKEYKONG_TEST_API AFabricaEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AEnemigo* FabricarEnemigoTerrestre() PURE_VIRTUAL(AFabricaEnemigos::FabricarEnemigoTerrestre, return nullptr;);
	virtual AEnemigo* FabricarEnemigoAereo() PURE_VIRTUAL(AFabricaEnemigos::FabricarEnemigoVolador, return nullptr;);
	virtual AEnemigo* FabricarEnemigoAcuatico() PURE_VIRTUAL(AFabricaEnemigos::FabricarEnemigoAcuatico, return nullptr;);
};
