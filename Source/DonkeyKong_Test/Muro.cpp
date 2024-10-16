// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Components/StaticMeshComponent.h"
#include "MuroElectrico.h"
#include "MuroLadrillo.h"
#include "MuroEnvenenado.h"


// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	muroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
	RootComponent = muroMesh;

	SetActorScale3D(FVector(1.0f, 0.2f, 1.0f));
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMuro* AMuro::getMuro(FString _tipoMuro)
{
	if (_tipoMuro == "Electrico")
		return NewObject<AMuroElectrico>();
	else if (_tipoMuro == "Envenenado")
		return NewObject<AMuroEnvenenado>();
	else if (_tipoMuro == "Ladrillo")
		return NewObject<AMuroLadrillo>();
	return nullptr;
}

