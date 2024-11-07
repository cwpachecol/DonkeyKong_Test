// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementoPlataforma.h"
#include "ComponentePiso.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AComponentePiso : public AElementoPlataforma
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponentePiso();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
