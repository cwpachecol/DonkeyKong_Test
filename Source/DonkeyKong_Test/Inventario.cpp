// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventario.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AInventario::AInventario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //Search for existing Instances of this class
    TArray<AActor*> Instances;


    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AInventario::StaticClass(), Instances);
    if (Instances.Num() > 4)
    {
        //If exist at least one of them, set the instance with the first found one
        instanciaInventario = Cast<AInventario>(Instances[0]);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s already exists"), *instanciaInventario->GetName()));
        //Then Destroy this Actor
        Destroy();
    }

}

// Called when the game starts or when spawned
void AInventario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInventario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

