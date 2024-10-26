// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPisos.h"
#include "BuilderPisosBasicos.generated.h"

class APiso;
class AComponentePiso;
class AObstaculo;
class AEscalera;
class AMurallaPiedra;


UCLASS()
class DONKEYKONG_TEST_API ABuilderPisosBasicos : public AActor, public IBuilderPisos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderPisosBasicos();
private:
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AComponentePiso* BuildComponentePiso() override;
	virtual AMurallaPiedra* BuildMurallaPiedra() override;

	virtual void BuildComponentesPiso() override;
	virtual void BuildObstaculos() override;
	virtual void BuildEscaleras() override;
	virtual void BuildAdornos() override;

	virtual APiso* GetPiso() override;
	
};
