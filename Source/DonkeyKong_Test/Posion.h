// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Posion.generated.h"

UCLASS()
class DONKEYKONG_TEST_API APosion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APosion();

protected:
	FString nombrePosion;
	FString viscosidad;
	FString sangre;
	TArray<FString> hierbas;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* pocionMesh;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void hervir();
	virtual void burbujear();
	virtual void preparar();
	virtual void embotellar();

	FString getNombrePosion();

};
