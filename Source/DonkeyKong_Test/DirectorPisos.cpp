// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPisos.h"

// Sets default values
ADirectorPisos::ADirectorPisos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPisos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorPisos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorPisos::ConstruirPiso()
{
	//Log si el BuilderPisos es NULL

	if (!BuilderPisos) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirPiso(): BuilderPisos es NULL, asegurece que este sea inicializado.")); 
		return; 
	}
	
	//Crea el piso
	BuilderPisos->BuildComponentesPiso();
	//BuilderPisos->BuildComponentePiso();
	/*BuilderPisos->BuildComponenteFijoPiso();
	BuilderPisos->BuildComponenteMovilPiso();
	BuilderPisos->BuildObstaculo();
	BuilderPisos->BuildEscalera();*/
}

void ADirectorPisos::SetBuilderPisos(AActor* _BuilderPisos)
{
	//Castear el actor que se pasa como parametro y se establece como el BuilderPisos
	BuilderPisos = Cast<IBuilderPisos>(_BuilderPisos);
	
	if (!BuilderPisos) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Casting invalido! Revise el Log generado para mas detalles"));
		UE_LOG(LogTemp, Error, TEXT("SetBuilderPisos(): El Actor no es un BuilderPisos! esta seguro que el Actor implementa esa interface ? "));
	}
}

APiso* ADirectorPisos::GetPiso()
{
	if (BuilderPisos)
	{
		//Returns the Lodging of the Builder
		return BuilderPisos->GetPiso();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetPiso(): Return nullptr"));
	return nullptr;
}

