// Fill out your copyright notice in the Description page of Project Settings.


#include "Posion.h"

// Sets default values
APosion::APosion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pocionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PocionMesh"));
	RootComponent = pocionMesh;

	hierbas = TArray<FString>();
}

// Called when the game starts or when spawned
void APosion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APosion::hervir()
{
	//Log the Boil procedure
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Hervir %s"), *getNombrePosion()));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Añadir sangre..."));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Añadir hierbas..."));	
}

void APosion::burbujear()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Hacer burbujear durante 3 lunas y un atardecer"));
}

void APosion::preparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Preparar a baja temperatura"));
}

void APosion::embotellar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Embotellar la mezcla en un frazco"));

}

FString APosion::getNombrePosion()
{
	return nombrePosion;
}

