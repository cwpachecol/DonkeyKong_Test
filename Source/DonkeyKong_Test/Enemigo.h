// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

class IEstrategiaMovimiento;

UCLASS()
class DONKEYKONG_TEST_API AEnemigo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo();

public:
	IEstrategiaMovimiento* oEstrategiaMovimiento;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString Nombre;
	/*UPROPERTY(EditAnywhere, Category = "Mesh")
	USkeletalMesh* SkeletalMeshActual;

	bool bIsRunning;*/
	bool bEnMovimiento;
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
	void SetEstrategiaMovimiento(AActor* _EstrategiaMovimiento);

	void Mover();

private:
	void Task(const FString& Task);

public:
	//Execute the passed Tasks
	void Task(const TArray<FString>& Tasks);
	//Execute the member duty. It's pure virtual, so it doesn't need an implementation in this class
	//virtual void Duty() PURE_VIRTUAL(AEnemigo::Duty, ;);
	//Return the member Title. It's pure virtual, so it doesn't need an implementation in this class

	FString	GetNombre() { return Nombre; }
	void SetEnMovimiento(bool _bEnMovimiento) { bEnMovimiento = _bEnMovimiento; }

	//void Mostrar();
	//void Ocultar();
	//void Atacar();
	//void Mover();
	//void Saltar();
	//void Morir();
	//void Resucitar();
	//void RecibirDanyo();
	//void Curar();
	//void Huir();
	//void Volar();
	//void Nadar();
	//void Trepar();
	//void Agarrar();
	//void Lanzar();
	//void Empujar();
	//void Arrastrar();
	//void Escalar();
	//void Esconderse();
	//void Disparar();
	//void Recargar();
	//void Recoger();
};
