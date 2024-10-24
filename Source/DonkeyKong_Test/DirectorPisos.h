// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPisos.h"
#include "DirectorPisos.generated.h"

UCLASS()
class DONKEYKONG_TEST_API ADirectorPisos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorPisos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Crea el piso
	void ConstruirPiso();
	//Establecer el actor BuilderPisos a utilizar
	void SetBuilderPisos(AActor* _BuilderPisos);
	//Get the Lodging of the Builder
	class APiso* GetPiso();


private:
	//The Builder Actor, that must be a LodgingBuilder
	IBuilderPisos* BuilderPisos;

};
