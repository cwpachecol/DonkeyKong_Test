// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AEnemigo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*UPROPERTY(EditAnywhere, Category = "Mesh")
	USkeletalMesh* SkeletalMeshActual;

	bool bIsRunning;*/
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	//UAnimSequence* RunAnimation;

	//void PlayRunAnimation();
	//void CargarSkeletalMesh(FString Path);

	//virtual void Atacar();
};
